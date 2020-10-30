/* 
You are given an nxn 2D matrix representing an image.
Rotate the image by 90 degrees (Clockwise).

Note:
You have to rotate the image in-place, which means you have to modify the input
2D Matrix directly.

Optimized Approach: 
1. Transpose of matrix
2. Reverse every row of matrix

Time complexity : O(n^2) + O(n^2)
Space complexity : O(1)
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int row = 3, col = 3;
	int matrix[][3] = 
    {
	   {1,2,3},
	   {4,5,6},
	   {7,8,9}
    };
			    
    int i,j;
    for(i = 0; i < row; i++){
    	for(j = 0; j < col; j++){
    		swap(matrix[i][j], matrix[j][i]);
		}
	}
	
	for(i  = 0; i < row; i++){
		for(j = 0; j < col; j++){
			reverse_everyRow(matrix, matrix[i][j]);
		}
	}
	
	cout << "Rotated Matrix(90 degrees)\n";
	for(i  = 0; i < row; i++){
		for(j = 0; j < col; j++){
			cout << matrix[i][j] << " ";
		}
	cout << endl;
   }
 	return 0;	
}
void reverse_everyRow(int matrix[][3],)
