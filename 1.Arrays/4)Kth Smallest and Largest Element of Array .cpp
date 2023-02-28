#include <algorithm>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<int> result = {arr[k-1],arr[n-k]};

    return result;
	
}