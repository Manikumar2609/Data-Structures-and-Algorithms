/* Rotate an array by K Postions [Reversal Method]
*/
#include <iostream>
#include <iomanip>

using namespace std;

//functions prototypes
void rightRotate(int arr[], int n, int k);
void reverseArray(int arr[], int low, int high);
void printArray(int arr[], int n);

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr)/ sizeof(arr[0]);
  int k = 2; //K positions to rotate
  rightRotate(arr, n, k);
  printArray(arr, n);

  return 0;
}
void rightRotate(int arr[], int n, int k)
{
  //reverse array 0  to n-k-1
   reverseArray(arr, 0, n-k-1); // n = 5; k = 2 ; then low = 0, high = 5 - 2 - 1 = 2;  => reverseArray 0  to 2
 //reverse remaining array
   reverseArray(arr, n-k, n-1); // n - k = 5 - 2 = 3 and n - 1 = 5 - 1 = 4; then reverseArray 3 to 4(n-1)
 //reverse whole array
   reverseArray(arr, 0, n-1); //finally reverse the whole array
}
void reverseArray(int arr[], int low, int high)
{
    int i, j;
    for(i = low,j = high; i < j; i++, j--)
    {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
}
void printArray(int arr[], int n)
{
  for(int i = 0; i < n; i++)
      cout << arr[i] << " ";

  cout << endl;
}
