# Factory Method 

Strategy pattern example implementation based on [video tutorial](https://www.youtube.com/watch?v=v9ejT8FO-7I) with an implementation of the example explained in the video. 

## Description
Main purpose of this pattern is to make certain functionalities/algorithms independent of the client using it. 
In this example - we have bunch of different ducks. Ducks have some functionalities like quack(), fly(). Observing the fact that RubberDuck and WoodenDuck can't fly we would've had to implement fly() in the same way in both of these objects, effectively duplicating the code. This pattern lets you avoid that repetition. 

We do it by defining an interface IFlyStrategy which implements 
1. SimpleFly - for standard flying behaviour
2. NoFly - for ducks that don't fly 
