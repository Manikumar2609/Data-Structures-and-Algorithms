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

//Binary search - Normal Method
#include <iostream>
using namespace std;
//function prototypes
int findPeak(int arr[], int n);
int main()
{

  int arr[] = {5, 10, 15, 25, 30, 45, 65, 50, 35, 1};
//int arr[] = {1, 3, 20, 4, 1, 0};
  int n = sizeof(arr)/sizeof(arr[0]);
  int peak = findPeak(arr, n);
  cout << "Peak element in an array: "<< peak << endl;
  return 0;
}

int findPeak(int arr[], int n)
{
  int start = 0;
  int end = n - 1;
    while(start <= end)
    {
      int mid = (start + end)/2;

      if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
       return arr[mid];

      else if(mid > 0 && arr[mid-1] > arr[mid])
        end = mid - 1;
      else
        start = mid + 1;
  }
  return 0;
}
