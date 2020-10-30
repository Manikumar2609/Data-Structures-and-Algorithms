//Maximum Subarray sum

/*Maximum Subarray sum 
 
Problem Statement: 
Given an integer array nums, find the contiguous array (containing at
least one number) which has the largest sum and return its sum.

Example:

 input  : [-2, 1, -3, 4, -1, 2, 1, -5, 4]
 output : 6
 
 Explanation : [4, -1, 2, 1] has the largest sum = 6
 
 Approach : Three Loops

 Time Complexity  : O(n^3)
 Space Complexity : O(1)
 
*/

#include <iostream>
using namespace std;

int main()
{
	int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(nums)/sizeof(nums[0]);
	int i, j, k;
	int maxiSum = INT_MIN;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			int sum = 0;
			for(k = i; k <= j; k++){
				sum += nums[k];
			}
		//	maxiSum = max(maxiSum, sum);
			if(sum > maxiSum)
				maxiSum = sum;
		}
	}
	cout <<"Maximum SubArray Sum : "<< maxiSum << endl;
	return 0;
}

