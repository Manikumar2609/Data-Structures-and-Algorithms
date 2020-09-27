/* Sort an array of  0's 1's 2's without using extra space or sorting algorithm

Problem Statement:
Given an array with n objects colored red, white or blue, sort them
in-place so tha objects of the same color are adjacent, with the colors in
the colors in the order red, white and blue.
Here, we will use the integers 0, 1, 2 to represent the color red, white and
blue respectively.

Note: You are not suppose to use the library's  sort function for this problem

Example:
Input  => [2, 0, 2, 1, 1, 0]
Output => [0, 0, 1, 1, 2, 2]

Algorithm:

   Dutch National Flag algorithm (or) 3-Way Partitioning

  * At first, the full array is unknown. There are three indices – low, mid and high.
Initially, the value of low = mid = 1 and high = N.
  * If the ith element is 0 then swap the element to the low range,
thus shrinking the unknown range.
  * Similarly, if the element is 1 then keep it as it is but shrink the unknown range.
  * If the element is 2 then swap it with an element in high range.

Algorithm: (step by step)

 1.Keep three indices low = 1, mid = 1 and high = N and there are four ranges,
 1 to low (the range containing 0), low to mid (the range containing 1),
 mid to high (the range containing unknown elements) and high to N (the range containing 2).
 2.Traverse the array from start to end and mid is less than high. (Loop counter is i)
 3.If the element is 0 then swap the element with the element at index low and
  update low = low + 1 and mid = mid + 1
 4.If the element is 1 then update mid = mid + 1
 5.If the element is 2 then swap the element with the element at index high and
  update high = high – 1 and update i = i – 1. As the swapped element is not processed
 6.Print the output array.

Time Complexity: O(n)
Space Complexity: O(1) (no extra space is required)

*/

#include <iostream>
#include <algorithm>

using namespace std;
//function prototypes
void sortArray(int arr[], int n);
void printArray(int arr[], int n);


int main()
{
  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 1};
  int n = sizeof(arr)/sizeof(arr[0]); // finding length of the array
  sortArray(arr, n); //calling function
  cout << "Printing the sort of 0's, 1's 2's: ";
  printArray(arr, n);
  return 0;
}
void sortArray(int arr[], int n)
{
  int low = 0, mid = 0, high = n-1, i;

  while(mid <= high)
  {
    switch(arr[mid])
    {
      //if the element is 0
      case 0:
          swap(arr[low++], arr[mid++]);
          break;
      //if the element is 1
      case 1:
          mid++;
          break;
      //if the element is 2
      case 2:
          swap(arr[mid], arr[high--]);
          break;
      }
   }
}
void printArray(int arr[], int n)
{
  int i;
  for(i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;
}
