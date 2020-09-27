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

//simple method:
        Algorithm:         Using Counting Sort

          1. keep three counter zero_count to count 0's and
              one_count to count 1's and two_count to count 2's
          2. Traverse through the array and increase the count of zero_count
               is the element is 0, increase the count of one_count is the
               element is 1 and increase the count of two_count is the
               element is 2
          3. Now again traverse the array and replace first zero_count elements
              with 0, next one_count elements with 1 and then two_count elements with 2.

Time Complexity: O(n)
Space Complexity: O(1) (no extra space is required)
            */
#include <iostream>

using namespace std;
//function prototypes
void sortArray(int arr[], int n);
void printArray(int arr[], int n);


int main()
{
  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 1};
  int n = sizeof(arr)/sizeof(arr[0]); // finding length of the array
  sortArray(arr, n); //calling function
  return 0;
}

void sortArray(int arr[], int n)
{
  int i;
  int zero_count = 0, one_count = 0, two_count = 0;
  for(i = 0; i < n; i++)
  {
    switch(arr[i])
    {
      case 0:
         zero_count++;
         break;
      case 1:
          one_count++;
          break;
      case 2:
          two_count++;
          break;
    }
  }
  //update the sortArray
  i = 0;
  //first store all the 0's in the begining
  while(zero_count > 0)
  {
    arr[i++] = 0;
    zero_count--;
  }
  //then store all the 1's
  while(one_count > 0)
  {
    arr[i++] = 1;
    one_count--;
  }
  //finally store all the 2's
  while(two_count > 0)
  {
    arr[i++] = 2;
    two_count--;
  }
  //calling printing function here,
  printArray(arr, n);

}
//printing the array
void printArray(int arr[], int n)
{
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;
}
