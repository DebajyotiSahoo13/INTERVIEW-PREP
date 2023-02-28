Method 1 (Count 0s or 1s) 
void segregate0and1(int arr[], int n){
    int count = 0; // Counts the no of zeros in arr
  
    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            count++;
  
    // Loop fills the arr with 0 until count
    for (int i = 0; i < count; i++)
        arr[i] = 0;
  
    // Loop fills remaining arr space with 1
    for (int i = count; i < n; i++)
        arr[i] = 1;
}

void sortZeroesAndOne(int *input, int size){
    //Write your code here

    int pnt1= 0;
    int pnt2 = size-1;
    while(pnt1<=pnt2){
        if(input[pnt1] == 1){
            if(input[pnt2] != 1 )
                swap(input[pnt1],input[pnt2]);
            pnt2--;
        }
        else{
            pnt1++;
        }
    }
}

Time complexity: O(n)
Auxiliary Space: O(1)