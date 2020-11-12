# Assignment 6
Install Matlab, Robotics ToolBox from Peter Corke's website [RTB](http://www.petercorke.com/), as well as `Deep Learning Toolbox`.  

## Description
In this assigment it was required to obtain Forward Kinematics without the robot model. By using provided MATLAB scripts it was required to tune Neural Network parameters to get better performance (in other words, decrease error). First, I'll briefly explain about the activation layers that I used and about epochs and batch size.

### Activation layers
```javascript
leakyReluLayer - a leaky ReLU layer performs a threshold operation, where any input value less than zero is multiplied by a fixed scalar.
```

```javascript
eluLayer - an ELU activation layer performs the identity operation on positive inputs and an exponential nonlinearity on negative inputs.
```

```javascript
reluLayer - a ReLU layer performs a threshold operation to each element of the input, where any value less than zero is set to zero.
```
## Video demonstration

Below you can watch a demonstration of simulink models for different approaches:

[![Watch the video](http://i3.ytimg.com/vi/c6LJVWnKfDc/maxresdefault.jpg)](https://www.youtube.com/watch?v=c6LJVWnKfDc)


## Good Luck!

