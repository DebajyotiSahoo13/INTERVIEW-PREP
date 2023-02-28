Method 1 :
    // Use Merge or Heap Sort

    // Time Complexity: O(n*log(n)), Where n is the length of the given array.
    // Auxiliary Space: O(n)

    Method 2 : (Using space)

               // void segregateElements(int arr[],int n){

               //       // Create an empty array to store result
               //       int temp[n];

               //       // Traversal array and store +ve element in
               //       // temp array
               //       int j = 0; // index of temp
               //       for (int i = 0; i < n ; i++)
               //           if (arr[i] >= 0 )
               //               temp[j++] = arr[i];

               //       // If array contains all positive or all negative.
               //       if (j == n || j == 0)
               //           return;

               //       // Store -ve element in temp array
               //       for (int i = 0 ; i < n ; i++)
               //           if (arr[i] < 0)
               //               temp[j++] = arr[i];

               //       // Copy contents of temp[] to arr[]
               //       memcpy(arr, temp, sizeof(temp));

               //   }

               Method 3
    : The idea is to simply apply the partition process of quicksort.

      // Quicksort is a divide-and-conquer algorithm. It works by selecting a
      // 'pivot' element from the array and partitioning the other elements into
      // two sub-arrays, according to whether they are less than or greater than
      // the pivot.

      // int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
      // 4 5 6 2 8 9 -1 -3 -7

      void rearrange(int arr[], int n) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      if (i != j)
        swap(arr[i], arr[j]);
      j++;
    }
  }
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
For // -1 -3 -7 4 5 6 2 8 9
    just change if (arr[i] < 0)

        int i = -1;
int pivot = 0;
for (int j = 0; i < n; j++) {
  if (a[j] < pivot) {
    i++;
    swap(a[i], a[j]);
  }
}

Method 4 : Two pointer

// Time Complexity: O(N)
// Auxiliary Space: O(1)

#This is For negative number first

           void
           rearrange(int arr[], int n) {
  int low = 0, high = n - 1;
  while (low <= high) {
    if (arr[low] < 0 && arr[high] < 0) {
      left++;
    } else if (arr[low] > 0 && arr[high] < 0) {
      swap(arr[low++], arr[high--]);
    } else if (arr[low] > 0 && arr[high] > 0) {
      high++;
    } else {
      low++;
      high--;
    }
  }
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
}

// - Check If the left and right pointer elements are negative then simply
// increment the left pointer.
// - Otherwise, if the left element is positive and the right element is
// negative then simply swap the elements, and simultaneously increment and
// decrement the left and right pointers.
// - Else if the left element is positive and the right element is also positive
// then simply decrement the right pointer.
// - Repeat the above 3 steps until the left pointer ≤ right pointer.