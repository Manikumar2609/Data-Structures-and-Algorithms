/* How to find a peak element in an array

Problem statement :
  Given an array of size n, find a peak element in an array.

Algorithms:
      1. Linear search O(n)
      2. Binary Search O(log n)

Linear Search Algorithm:
    Iterate over the array and find an element that is
greater than or equal to all its neighbors and return it.

    To find out one peak element, do we need to look at
  every array element?  NO
   Is there a better solution? YES,... Binary search Algorithm

Binary Search Algorithm:
  1.Initialize start = 0, end = array.length - 1
  2.Repeat following steps till peak element is found:
        a. Find mid = (start + end) / 2
        b. If mid is peak element, return array[mid]
        c. If array[mid-1] > array[mid], find peak in
           left half of array
               set end = mid-1
        d. Else find peak in right half of array
               set start = mid+1
*/

#include <iostream>
using namespace std;

//function prototypes
int findPeak_element(int arr[], int low, int high, int n);
int findPeak(int arr[], int n);

int main()
{

  int arr[] = {5, 10, 15, 25, 30, 45, 65, 50, 35, 1};
//  int arr[] = {1, 3, 20, 4, 1, 0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int peak = findPeak(arr, n);
  cout << "Peak element in an array: "<< peak << endl;
  return 0;

}
int findPeak(int arr[], int n)
{
 return findPeak_element(arr, 0, n-1, n);
}
//recursive approach
//Binary Search - Divide and conquer approach
int findPeak_element(int arr[], int low, int high, int n)
{
//find index of middle element
 int mid = (low + high)/ 2;
//compare middle element with
//its neighbors (if neighbors exist)
 if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid] ))
    return arr[mid];
//If middle element is not a Peak And
//its left neighbor is greater than it,
//then left half must have a peak element
 else if(mid > 0 && arr[mid-1] > arr[mid])
     return findPeak_element(arr, low, (mid-1), n);
//If middle element is not a peak And
//its right neighbor is greater than it,
//then right half must have a peak element
 else
   return findPeak_element(arr,(mid+1), high, n);

}
