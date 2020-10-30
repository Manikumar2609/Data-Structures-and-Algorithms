//Maximum Subarray sum

/*Maximum Subarray sum 
 
Problem Statement: 
Given an integer array nums, find the contiguous array (containing at
least one number) which has the largest sum and return its sum.

Example:

 input  : [-2, 1, -3, 4, -1, 2, 1, -5, 4]
 output : 6
 
 Explanation : [4, -1, 2, 1] has the largest sum = 6
 
 Approach : Using Kadane's Algorithm

 Time Complexity  : O(n)
 Space Complexity : O(1)
 
*/

#include <iostream>
using namespace std;

int main()
{
	int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(nums)/sizeof(nums[0]);
	int i, j;
	int sum = 0;
	int maxiSum = INT_MIN;
	for(i = 0; i < n; i++){
		sum += nums[i];
		//maxiSum = max(maxiSum, sum);
		if(sum > maxiSum) maxiSum = sum;
		if(sum < 0)	sum = 0;
	}
	cout <<"Maximum SubArray Sum : "<< maxiSum << endl;
	return 0;
}

