# Assignment 7
Install Matlab, Robotics ToolBox from Peter Corke's website [RTB](http://www.petercorke.com/), as well as `Deep Learning Toolbox`.  

## Description
In this assigment it was required to obtain Inverse Kinematics without the robot model. By using provided MATLAB scripts it was required to tune Neural Network parameters to get better performance (in other words, decrease error). First, I'll briefly explain about the activation layers that I used and about epochs and batch size.

### Activation layers
```javascript
leakyReluLayer - a leaky ReLU layer performs a threshold operation, where any input value less than zero is multiplied by a fixed scalar.
```

```javascript
reluLayer - a ReLU layer performs a threshold operation to each element of the input, where any value less than zero is set to zero.
```

### Number of epochs
Number of epochs is the number of times the whole training data is shown to the network while training. We need to increase the number of epochs until the validation accuracy starts decreasing even when training accuracy is increasing(overfitting). In my case I used `200`

### Batch size
Mini batch size is the number of sub samples given to the network after which parameter update happens. In my case I used `32`.

## First observations
With the initial code, the error was large enough and was equal to `0.4561` or `45.61 %`.
![1](https://user-images.githubusercontent.com/67557966/99149893-a8070a80-26b2-11eb-9180-ee6fade73d53.jpg)

## Final results
In order to minimize the error, I used the activation layers described above, also increased the `data size`, `maxEpochs` and lowered the `miniBatchSize`. By using such values, I was able to reduce the error to `17.19 %`. I tried to make the error even smaller, but unfortunately, I could not achieve results below it.
![2](https://user-images.githubusercontent.com/67557966/99149993-45fad500-26b3-11eb-8fc9-c1894d4933f3.png)

## Good Luck!

