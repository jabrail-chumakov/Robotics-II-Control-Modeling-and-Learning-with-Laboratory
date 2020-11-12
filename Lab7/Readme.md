# Assignment 7
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

### Number of epochs
Number of epochs is the number of times the whole training data is shown to the network while training. We need to increase the number of epochs until the validation accuracy starts decreasing even when training accuracy is increasing(overfitting). In my case I used `200`

### Batch size
Mini batch size is the number of sub samples given to the network after which parameter update happens. In my case I used `32`.

## First observations
With the initial code, the error was large enough and was equal to `0.2887` or `28.87 %`.
![1st results](https://user-images.githubusercontent.com/67557966/98992309-dcfa4c80-254e-11eb-915e-856c669ea91b.jpg)

## Final results
In order to minimize the error, I used the activation layers described above, also increased the `maxEpochs` and lowered the `miniBatchSize`. By using such values, I was able to reduce the error to `3.2 %`. I tried to make the error even smaller, but unfortunately, I could not achieve results below it.
![final results](https://user-images.githubusercontent.com/67557966/98996810-4ed59480-2555-11eb-9145-996634e1c769.jpg)

## Good Luck!

