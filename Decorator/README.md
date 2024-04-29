# Decorator Pattern 

Decorator pattern example based on [video tutorial](https://www.youtube.com/watch?v=GCraGHx6gso) with an implementation of the example explained in the video.

## Description
Main purpose of this pattern is to attach new behaviors to the objects by placing these objects inside special wrapper objects that contain the behaviors.

Decorator object is of the same type and has an object of that type in itself. It contains the same set of methods. It lets us add an additional behavior before or after requested method.

In this example we have a coffee shop that sells coffee. The problem arises when client asks for bunch of different addons to the coffee. Having multiple classes with every combination of the addons with every "base beverage" provides us with class explosion.