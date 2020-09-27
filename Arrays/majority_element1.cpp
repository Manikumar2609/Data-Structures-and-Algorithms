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

Algorithm 2:
    // using Sorting (Algorithm 2)

   1. Sort the array
   2. Again iterate over the array once and
   count occurence of each element
   3. If an element if found with count > n/2, return the element
   4. If no such element found, return null.

   Time complexity:
   1. If O(nlogn) sorting algorithm is used,
   sorting step takes O(nlogn) time
   2. Counting step takes O(n) time

  Hence time complexity is O(nlogn)

*/
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;
int findMajorityElement(int arr[], int n)
{
    //sort the array O(nlogn)
    sort(arr, arr+n);
    int count = 1, temp = arr[0];
    int max_element = -1; //sentinels
    int element, flag = 0;
    int i;
    for(i = 1; i < n; i++)
    {
      //increase the count if the same element occurs
      //otherwise starts counting the element
      if(temp == arr[i])
      {
        count++;
      }
      else
      {
        count = 1;
        temp = arr[i];
      }
  //sets max_element
  //and stores maximum occured element so far
  //if max_element count becomes greater than n/2
  //it breaks out setting the flag
      if(max_element < count)
      {
        max_element = count;
        element = arr[i];

        if(max_element > (n/2)){
          flag = 1;
          break;
        }
      }

    }
    //return maximum occured element
    //otherwise return -1
    return (flag == 1)? element : -1;
}
int main()
{
  int arr[] = {1, 2, 2, 2, 6, 2, 2, 8, 2, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  if(findMajorityElement(arr, n) > 0)
  cout << "Majority element is " << findMajorityElement(arr, n) << endl;
  else
  cout << "No majority element " << endl;

  return 0;
}
