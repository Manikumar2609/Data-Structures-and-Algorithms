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

Algorithm 1:
          // Use two loop (Algorithm 1)
     > In inner loop calculate the count og every element
     > In outer loop check, if count is greter than n/2,
     return the element.

     If out of the loops, return null.

  Time Complexity: O(n^2)

*/
#include <iostream>
using namespace std;
//function prototypes
void findMajorityElement(int arr[], int n);

int main()
{
  int arr[] = {2, 6, 2, 2, 6, 2, 2, 8, 2, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  findMajorityElement(arr, n);
  return 0;
}
void findMajorityElement(int arr[], int n)
{
  int i,j;
  int maxCount = 0, count = 0;
  int index = -1; //sentinels
  for(i = 0; i < n; i++)
  {
    int count = 0;
    for(j = 0; j < n; j++)
    {
      if(arr[i] == arr[j])
        count++;
    }
 //update maximum count if
 //count is greater than  a maxCount
    if(count > maxCount)
    {
      maxCount = count;
      index = i;
    }
  }
  if(maxCount > n/2)
    cout << "Majority element is " << arr[index] << endl;
  else
    cout << "No majority element " << endl;
}
