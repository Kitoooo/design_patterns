# Observer Pattern 

Observer pattern example implementation based on [video tutorial](https://www.youtube.com/watch?v=_BpmfnqjgzQ) with an implementation of the example explained in the video. 

## Description
This patterns solves a problem where an object wants to know the state of a different object, and whether that state has changed. It's a solution to polling behavior. It adds a subscription mechanism that sends a notification to every observer that the state, in fact has changed.

In this example we have a weatherStation that reads a temperature and 2 displays (LCD, Phone). Displays are subscribed to the weatherStation so that with every "read" of the temperature - the displays are notified and they know that the temperature has changed. 