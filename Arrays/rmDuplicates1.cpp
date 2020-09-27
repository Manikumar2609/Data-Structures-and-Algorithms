/* Remove Duplicates from the Sorted Array*/

//C++ program to remove duplicates in-place
#include <iostream>
#include <iomanip>

using namespace std;
//function prototypes
int rmDuplicates(int arr[], int n);

int main()
{
  int arr[] = {1,1,1,2,2,3,3,5,5};
  int n = sizeof(arr) / sizeof(arr[0]);
 //rmDuplicates( ) returns new size of array
  n = rmDuplicates(arr, n);
  //print updated array
  for(int i = 0; i < n; i++)
      cout << arr[i] << " ";

  cout << endl;

  return 0;
}
//function to remove duplicate elements
//This function returns new size of modified array

int rmDuplicates(int arr[], int n) //using constant extra space
{
  if(n == 0 || n == 1)
    return n;

  int temp[n]; //using extra space
  int len=0,i ;
  for(i = 0; i < n - 1; i++)
  {
    if(arr[i] != arr[i+1])
      temp[len++] = arr[i];
  }
  temp[len++] = arr[n - 1];

  //modify original Array
  for(i = 0; i < len; i++) // len = new size of an array
    arr[i] = temp[i];

  return len;
}
/* Time Complexity = O(n)
   Auxiliary Space = O(n) */
