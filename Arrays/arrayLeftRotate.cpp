/* Rotate one by one  Method

leftRotate(arr[], d, n)
start
 For i = 0 to i < d
   Left rotate all elements of arr[] by one
end

To rotate by one, store arr[0] in a temporary variable temp, move arr[1] to arr[0], arr[2] to arr[1] …and finally temp to arr[n-1]

Let us take the same example arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2
Rotate arr[] by one 2 times
We get [2, 3, 4, 5, 6, 7, 1] after first rotation and [ 3, 4, 5, 6, 7, 1, 2] after second rotation.

*/
#include <iostream>
#include <iomanip>

using namespace std;
//function prototypes
void leftRotate(int arr[], int d, int n);
void leftRotatebyOne(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}
void leftRotate(int arr[], int d, int n)
{
  for(int i = 0; i < d; i++)
      leftRotatebyOne(arr, n);
}
void leftRotatebyOne(int arr[], int n)
{
  int temp = arr[0], i;
  for(i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];

  arr[i] = temp;
}
void printArray(int arr[], int n)
{
  int i;
  for(i=0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;
}
