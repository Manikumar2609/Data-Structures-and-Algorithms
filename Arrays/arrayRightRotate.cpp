/* Rotate an Array by K Postions[Normal Method] */

#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes
void rightRotate(int arr[], int n, int k);
void rightRotatebyOne(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 2;
  rightRotate(arr, n, k);
  printArray(arr, n);
  return 0;
}
void rightRotate(int arr[], int n, int k)
{
    int i;
    for(i = 0; i < k; i++)   
      rightRotatebyOne(arr, n);
}
void rightRotatebyOne(int arr[], int n)
{
  int temp = arr[n - 1];
  for(int i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];

  arr[0] = temp;
}
void printArray(int arr[], int n)
{
for(int i = 0; i < n; i++)
  cout << arr[i] << " ";

cout << endl;
}
// Another approach for right rotate of an array
/*
void rightRotate(int arr[], int n, int k)
{
    int i;
    while(k >= 0)
    {
        int temp = arr[n - 1];
        for(i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
      arr[i] = temp;
      k--;

  }
}
 */
