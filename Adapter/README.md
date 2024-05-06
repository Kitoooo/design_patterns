# Adapter Pattern 

Command pattern example based on [video](https://www.youtube.com/watch?v=9qA5kw8dcSU).

## Description

The adapter pattern converts the interface of a class into another interface the client expect. Adapter lets classes work together that could not otherwise because of incompatible interfaces

In this example we have a adaptee class that takes a message in the constructor and returns the message with getMessage() function. Lets assume that the client needs that data but reversed. Adapter class converts that to reversed order.