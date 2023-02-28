
//Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}

// Time Complexity: O(n), single-pass for reversing array.

// Space Complexity: O(n), for the extra array used.



//Function to reverse array 
// Space optimized iterative method
// Time Complexity: O(n), single-pass involved.
// Space Complexity: O(1) 


void reverseArray(vector<int> &arr, int n) {
   int s = n+1;
   int e = arr.size()-1;
   while(s<e){
	   swap(arr[s],arr[e]);
	   s++;
	   e--;
   }
}

// Solution 3: Recursive method

// Approach: The recursive method has an approach almost similar to the iterative one. The approach has been broken down into some steps for simplicity.

//     Create a function that takes an array ,start index and end index of the array as parameters.
//     Swap the elements present  at start and end index, 
//     The portion of array left to be reversed is arr[start+1,end-1]. Make a recursive call to reverse the rest of array. While calling recursion pass start +1  and end – 1 as parameters for the shrinked array. Repeat step 2.
//     Continue recursion as long as ‘start < end’ condition is satisfied. This is the base case for our recursion.

// Time Complexity: O(n)

// Space Complexity: O(1)


void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}


void reverseArray(int arr[], int n) {
   //Reversing elements from index 0 to n-1 
   reverse(arr, arr + n);
}