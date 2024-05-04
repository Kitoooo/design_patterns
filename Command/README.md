# Command Pattern 

Command pattern example based on [video](https://www.youtube.com/watch?v=9qA5kw8dcSU).

## Description
Command pattern encapsulates a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations. 

In this example i've implemented a remote (RemoteInvoker) which controls light (LightReceiver). 
This remote has 3 buttons:
1. On
2. Off
3. Undo 

To these buttons client can assign a Command that performs certain task. In this example as the name suggests "On" turn the light on and off turns the light off. Undo button cannot be assigned by the client. Undo operation works by saving the operation done on the stack and then when undo operation is invoked then its poped from the stack and undo() function from the Command object is invoked.


