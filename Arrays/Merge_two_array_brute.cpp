/* Merge two sorted array 

Approach: Using Sorting  

Time Complexity: O(nlogn) + O(n) + O(n)
Space Complexity: O(n)

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
	
	int arr3[n1 + n2];
	int i;
	int n3 = n1 + n2;
	
	int j = 0;
	for(i = 0; i < n1; i++){
		arr3[j++] = arr1[i];
	}   
	for(i=0; i < n2; i++)
	{
		arr3[j++] = arr2[i]; 
	}
	
	sort(arr3, arr3+n3);
/*	for(i=0; i <n3;i++){
		cout << arr3[i] <<" ";
	} */
	
	j = 0;
	cout << "Merge Sorted array array1\n";
	for(i=0; i< n1; i++){
		arr1[i] = arr3[j++];
		cout << arr1[i] << " ";
	}
	cout <<"\n";
	
	cout << "Merge Sorted array array2\n";
	for(i=0; i < n2; i++){
		arr2[i] = arr3[j++];
		cout << arr2[i] << " ";
	}
	cout << "\n";
	
	return 0;	
}
