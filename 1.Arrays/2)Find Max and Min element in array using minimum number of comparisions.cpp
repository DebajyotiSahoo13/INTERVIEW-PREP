// SOL1: USING MIN AND MAX FUNCTION
  
class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int Min = INT_MAX;
    	int Max = INT_MIN;
    	
    	for(int i = 0;i<N;i++){
    	    Min = min(A[i],Min);
    	    Max = max(A[i],Max);
    	}
    	return Min+Max;
    }

};

// SOL2 : USING SORTING 
// time complexity: O(nlogn)

// SOL3 : by comparing in pairs

// If n is odd then initialize min and max as the first element. 
// If n is even then initialize min and max as minimum and maximum of the first two elements respectively. 
// For the rest of the elements, pick them in pairs and compare their 
// maximum and minimum with max and min respectively. 


class Solution
{
   public:
    int findSum(int A[], int N)
    {   int i =0;
    	int Min,Max;
    	if(N%2==0){
    	   if(A[0]>A[1]){
    	       Min = A[1];
    	       Max = A[0];
    	   }
    	   else{
    	       Min = A[0];
    	       Max = A[1];
    	   }
    	    i =2;
    	}
    	else{
    	    Min = A[0];
    	    Max = A[0];
    	    
    	     i =1;
    	}
    	
    	while(i < N-1){
    	    if(A[i] > A[i+1]){
    	        if(A[i] > Max){
    	            Max = A[i];
    	        }
    	        if(A[i+1] < Min){
    	            Min = A[i+1];
    	        }
    	    }
    	    
    	    else{
                if (A[i+1] > Max){
                    Max = A[i+1];
                }
                
                if(A[i] < Min){
                    Min = A[i];
                }
    	    }
    	    
    	   i+=2; 
    	    
    	}
    	return Min+Max;
    	
    }

};

// Time Complexity: O(n)
// Auxiliary Space: O(1) as no extra space was needed.

// The total number of comparisons: Different for even and odd n, see below: 

//        If n is odd:    3*(n-1)/2  
//        If n is even:   1 Initial comparison for initializing min and max, 
//                            and 3(n-2)/2 comparisons for rest of the elements  
//                       =  1 + 3*(n-2)/2 = 3n/2 -2