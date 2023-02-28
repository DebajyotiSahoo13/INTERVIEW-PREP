// Method1
// -Initialize a temporary array(temp[n]) of length same as the original array
// -Initialize an integer(k) to keep a track of the current index
// -Store the elements from the position d to n-1 in the temporary array
// -Now, store 0 to d-1 elements of the original array in the temporary array
// -Lastly, copy back the temporary array to the original array

// Time Complexity: O(N * d)
// Auxiliary Space: O(1)

void rotateArr(int arr[], int d, int n) {
  int temp[n];

  int k = 0;

  for (int i = d; i < n; i++) {
    temp[k] = arr[i];
    k++;
  }

  for (int i = 0; i < d; i++) {
    temp[k] = arr[i];
    k++;
  }

  for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
  }
}

public:
void reverse(vector<int> &nums, int start, int end) {
  while (start < end) {
    swap(nums[start++], nums[end--]);
  }
}

void rotate(vector<int> &nums, int k) {
  int n = nums.size();
  k = k % n;
  reverse(nums, 0, k - 1) reverse(nums, k, n - 1);
  reverse(nums, 0, n - 1);
}

// The idea is to reverse the array three times. For the first time we reverse
// only the last k elements. Second time we will reverse first n-k(n=size of
// array) elements. Finally we will get our rotated array by reversing the
// entire array.

// Rotate by right

class Solution {
public:
  void reverse(vector<int> &nums, int start, int end) {
    while (start < end) {
      swap(nums[start++], nums[end--]);
    }
  }

  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums, n - k, n - 1); // Reverse last k numbers
    reverse(nums, 0, n - k - 1); // Reverse the first n-k terms
    reverse(nums, 0, n - 1);     // Print the rotated array
  }
};