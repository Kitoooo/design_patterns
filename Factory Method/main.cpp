#include <iostream>
#include <memory>
#include <map>
#include <string>
#include <vector>

class Animal
{
public:
  virtual void says() = 0;
};

class Dog : public Animal
{
public:
  Dog()
  {
    Dog::count++;
  }
  ~Dog()
  {
    Dog::count--;
  }
  void says() override
  {
    std::cout << "Woof" << std::endl;
  }
  static int getCount()
  {
    return Dog::count;
  }

protected:
  inline static int count = 0;
};

class Cat : public Animal
{
public:
  Cat()
  {
    Cat::count++;
  }
  ~Cat()
  {
    Cat::count--;
  }
  void says() override
  {
    std::cout << "Meow" << std::endl;
  }
  static int getCount()
  {
    return Cat::count;
  }

protected:
  inline static int count = 0;
};

class AnimalFactory
{
public:
  virtual std::unique_ptr<Animal> createAnimal() = 0;
};

class BalancedFactory : public AnimalFactory
{
public:
  BalancedFactory(std::vector<std::string> availableAnimals)
  {
    for (const std::string &animal : availableAnimals)
    {
      animalCounts[animal] = 0;
    }
  }
  std::unique_ptr<Animal> createAnimal() override
  {
    std::string animal = animalCounts.begin()->first;
    for (const auto &pair : animalCounts)
    {
      if (pair.second < animalCounts[animal])
      {
        animal = pair.first;
      }
    }
    animalCounts[animal]++;
    if (animal == "Dog")
    {
      return std::make_unique<Dog>();
    }
    else if (animal == "Cat")
    {
      return std::make_unique<Cat>();
    }
    return nullptr;
  }

protected:
  std::map<std::string, int> animalCounts;
};

class RandomFactory : public AnimalFactory
{
public:
  std::unique_ptr<Animal> createAnimal() override
  {
    int index = rand() % 2;
    if (index == 0)
    {
      return std::make_unique<Dog>();
    }
    else if (index == 1)
    {
      return std::make_unique<Cat>();
    }
    return nullptr;
  }
};

int main()
{
  std::vector<std::string> AvailableAnimals = {"Dog", "Cat"};

  std::unique_ptr<AnimalFactory> factory = std::make_unique<BalancedFactory>(AvailableAnimals);
  for (int i = 0; i < 10; i++)
  {
    std::unique_ptr<Animal> animal = factory->createAnimal();
  }
  std::cout << "Dogs: " << Dog::getCount() << std::endl; // 5
  std::cout << "Cats: " << Cat::getCount() << std::endl; // 5

  factory = std::make_unique<RandomFactory>();
  for (int i = 0; i < 10; i++)
  {
    std::unique_ptr<Animal> animal = factory->createAnimal();
  }

  std::cout << "Dogs: " << Dog::getCount() << std::endl; // random amount based on the random factory logic
  std::cout << "Cats: " << Cat::getCount() << std::endl; // random amount based on the random factory logic
}