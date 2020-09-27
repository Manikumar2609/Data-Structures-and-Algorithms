/* Block swap algorithm for array rotation */

/*
The block swap algorithm for array rotation is an efficient algorithm that is used for array rotation. It can do your work in O(n) time complexity.

So, in array rotation, we are given an array arr[] of size n and a number k that define the no. of the element to be rotated.

Let’s see an example on array rotations −

Input  − arr[] = {4, 6, 1, 8, 9, 2}, k = 2 (number of rotations.)
Output − {1, 8, 9, 2, 4, 6}

Explanation − On rotation, we will shift the one element to the last position and shift the next elements to one position.

Element at index 0 will be shifted to index n-1. And the rest of the elements are shifted to the previous index.

Block Swap Algorithm
The block swap algorithm is used to perform array rotations perfectly.

Algorithm
Step 1 − Divide the array two sub-arrays with k as division point. Let them be X = arr[0...k-1] and Y = arr[k...n-1].

Step 2 − Follow the below steps until the size of X and Y are the same.

Step 2.1 − If the size of X > Y, divide X into two portions X1 and X2 such that size of X1 is equal to the size of Y.
          Then swap the sub-array X1 and Y. This will change the original array formation from X1X2Y to YX2X1.

Step 2.2 − If the size of Y > X, divide Y into two portions Y1 and Y2 such that the size of Y2 is equal to the size of X.
           Then swap the subarray X and Y2. This will change the original array formation from XY1Y2 to Y2Y1X.

Step 3 − When the size of X and Y are the same, swap them.

This algorithm needs a repetitive call to the same chunk of code. This repetitive call can be achieved using two approaches.
They are the recursive approach and iterative approach. we will discuss the approach using programs.

*/
