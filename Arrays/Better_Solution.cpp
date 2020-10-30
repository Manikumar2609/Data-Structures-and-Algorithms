/*
  Problem Statement:
  Given an array withn objects coloured red, white or blue, 
  sort them in-place so that objects of the same color are adjacent,
  with the colors in the order red, white and blue,
  Here, we will use the integers 0, 1, 2 to represent the color red,
  white and blue respectively 
  
  Note: You are not suppose to use the library's sort function for this problem
  
  Brute Force Approach - Using Sorting algorithm T.C - O(n logn), S.C - O(1)
  Better Approach - using Counting Sort 
       T.C - O(n) + O(n)
       		 - 2O(n) {Two O(n)}
       		 - O(n)
	   S.C - O(1)
     
*/

#include <iostream>

using namespace std;

int main()
{
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 1};
	int i;
	int n = sizeof(arr)/sizeof(arr[0]);
	//using counting sort
	int count0  = 0, count1 = 0, count2 = 0;
	
	for(i = 0; i < n; i++){
		if(arr[i] == 0)
			++count0;
		if(arr[i] == 1)
			++count1;
		if(arr[i] == 2)
			++count2;
	}
	
	//putting the 0's into the starting
	for(i = 0; i < count0; i++)
		arr[i] = 0;
	//putting the 1's after the 0's	
	for(i = count0; i < (count0 + count1); i++)
		arr[i] = 1;
	//putting the 2's after the 1's
	for(i = (count0 + count1); i < n; i++)
		arr[i] = 2;
	
	cout << "After sorting the array\n";
	for(i=0; i < n; i++){
		cout << arr[i] <<" ";
	}
	return 0;
}
