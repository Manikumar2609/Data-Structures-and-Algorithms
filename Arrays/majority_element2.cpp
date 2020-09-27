/* Majority element in an array

Problem statement:
    * Given an array of size n, find the element which
  occurs more than n/2 times. This element id called Majority element.

    * At the most, there will be only one majority element

Example 1:
  Array 2 6 2 2 6 2 2 8 2 1
  length of array, n = 10
  Majority Element = Element which occurs more than n/2 = 5 times

Example 2:
  Array 1 7 8 2 6 8 1 3 2 8

In this array no majority element  found!

Algorithm 3:
   // Use Boyer-Moore Vote Algorithm (Algorithm 3)
   Step 1: Find a candidate for majority Element
     1. Initialize count of current candidate as 0 -> count =0
     2. Iterate over the array and do following steps:
        a) If count == 0, set candidate = array[i], count = 1;
        b) Else
            if candidate == array[i]
              set count = count + 1
            else
              set count = count - 1
   Step 2: Check if this candidate is a majority element.
     1. If count == 0, there is no majority element.
     2. Else, iterate over array to get count of candidate
        1. if count > n/2, return candidate
        2. else return null;

   Time Complexity: O(n)
*/
#include <iostream>
using namespace std;
int findMajorityElement(int arr[], int n)
{
  int candidate = 0, count = 1;
  for(int i = 0; i < n; i++)
  {
    if(count == 0)
    {
      candidate = arr[i];
      count = 1;
      continue;
    }
    else
    {
       if(candidate == arr[i])
         count++;
       else
         count--;
    }
  }
/*
  //step 2 - check if this candidate is a majority element
  if(count == 0)
    return 0;
  for(int i = 0; i < n; i++)
  {
     if(candidate == arr[i])
      count++;
  } */
  return candidate;
}
int main()
{
  int arr[] = {2,1,2,4,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  if(findMajorityElement(arr, n) > 0)
  cout << "majority element " << findMajorityElement(arr, n) <<endl;
  else
  cout << "no majority element " << endl;
  return 0;
}
