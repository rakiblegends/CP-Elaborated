// C++ Program to implement
// Minimum Operation required to make all element 0 by selecting two index l and r and then decrease l to r by 1.
#include <bits/stdc++.h>
using namespace std;

// Function to count the minimum
// number of subarrays that are
// required to be decremented by 1

//-------Approach--------
// 1. Add the first element arr[0] to answer as we need at least arr[0] to make the given array    0.
// 2. Traverse over indices [1, N-1] and for every element, check if it is greater than the previous element. If found to be true, add their difference to the answer.

int min_operations(vector<int>& A)
{
	// Base Case
	if (A.size() == 0)
		return 0;

	// Initialize ans to first element
	int ans = A[0];

	for (int i = 1; i < A.size(); i++) {

		// For A[i] > A[i-1], operation
		// (A[i] - A[i - 1]) is required
		ans += max(A[i] - A[i - 1], 0);
	}

	// Return the answer
	return ans;
}

// Driver Code
int main()
{
	vector<int> A{ 1, 2, 3, 2, 1 };

	cout << min_operations(A) << "\n";

	return 0;
}
