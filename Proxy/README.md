# Proxy Pattern 

Proxy pattern example based on [video](https://www.youtube.com/watch?v=NwaabHqPHeM).

## Description
Proxy pattern provides a substitute or placeholder for another object to control access to it.

In this example we have a string that contains an entire book. We also have a class called BookParser that parses the book in the constructor. This class also have methods to get the information about the book e.g. getNumLetters(). The parsing operation in the constructor is expensive. 

Let's assume that in our application we need to pass the BookParsers in our code often. But we do not always use the functionalities provided. Instantiating this objects would deem unecessary. By creating a proxy we are implementing a lazy loading functionality that would instantiate the BookParser object only if we acctualy need an information provided by it. 

