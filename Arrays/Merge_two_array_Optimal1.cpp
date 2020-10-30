/* Merge two sorted array 

Approach: Using Sorting  algorithm 1

Time Complexity:  O(n logn) + O(n)
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
			//make arr2 as sorted 
			sort(arr2, arr2+n2); //O(n logn)
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
