/*Sort the array of 0's 1's and 2's 
  
  Problem Statement:
  Given an array withn objects coloured red, white or blue, 
  sort them in-place so that objects of the same color are adjacent,
  with the colors in the order red, white and blue,
  Here, we will use the integers 0, 1, 2 to represent the color red,
  white and blue respectively  
  
  Optimal Approach : Using Dutch National Flag Algorithm
  
  Time Complexity  : O(n)
  Space Complexity : O(1)
  
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 1};
	int i;
	int n = sizeof(arr)/sizeof(arr[0]);

    cout <<"printing the Given array\n";
	for(i = 0; i < n; i++){
		cout << arr[i] <<" ";
	}
	cout << endl;	
	int low = 0;
	int mid = 0;
	int high = n-1;
	
	while(mid <= high){
		switch(arr[mid]){
			case 0:
				swap(arr[low++], arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid],arr[high--]);
				break;
	    }
    }
	cout <<"After sorting the array\n";
	for(i = 0; i < n; i++){
		cout << arr[i] <<" ";
	}
	cout << endl;
	
	return 0;
}
