/* Merge two sorted array 

Approach: Using Gap method algorithm

Time Complexity: O(log2n) + O(n)
                 O(log2n) => for gap finding
			   	O(n) => linear traversal 
Space Complexity: O(1)

*/

// Merging two sorted arrays with O(1)
// extra space
#include <iostream>
#include <algorithm>
using namespace std;

// Function to find next gap.
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
 
void merge(int* arr1, int* arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}
 
// Driver code
int main()
{
	int arr1[] = {1, 4, 7, 8, 10};
	int arr2[] = {2, 3, 9};
	
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);    
 
    // Function Call
    merge(arr1, arr2, n, m);
 
    printf("First Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
 
    printf("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    
    return 0;
}
