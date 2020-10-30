/* Merge two sorted array 

Approach: Using Insertion Sort like algorithm 

Time Complexity: O(n * m)   
Space Complexity: O(1)

*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr1[] = {1, 4, 7, 8, 10};
	int arr2[] = {2, 3, 9};
	
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	
	int i;
	for(i=0; i < n1; i++){
		if(arr1[i] > arr2[0]){
			swap(arr1[i], arr2[0]);
			int first = arr2[0];
			//move arr2[0] to its correct position to maintain sorted
			//order of arr2[]. 
			//Note : arr2[1..n2-1] is already sorted
			int k;
			for(k = 1; k < n2 && arr2[k] < first; k++)
			{
				arr2[k-1] = arr2[k];
			}
			arr2[k-1] = first;
		}
	}
	
	cout <<"First Array :\n";
	for(i=0; i< n1; i++)
		cout << arr1[i] << " ";
	cout << "\n";
	
	cout <<"Second Array :\n";
	for(i=0; i<n2; i++)
		cout << arr2[i] << " ";
	cout << "\n";
	
	return 0;
}
