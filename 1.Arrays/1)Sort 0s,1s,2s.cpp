// #######SOL1 : USING COUNT METHOD 

// Time Complexity: O(n), Only nonnested traversals of the array are needed.

// Space Complexity: O(1)

void sortColors(vector<int>& nums) {
        int n = nums.size();

        int i,cnt0=0,cnt1=0,cnt2=0;

        for(i = 0;i<n;i++){
            switch(nums[i]) {
                case 0 :
                    cnt0++;
                    break;
                
                case 1 :
                    cnt1++;
                    break;
                
                case 2 :
                    cnt2++;
                    break;
            }
        }
        i=0;

        while(cnt0>0){
            nums[i++] = 0;
            cnt0--;
        }

        while(cnt1>0){
            nums[i++] = 1;
            cnt1--;
        }
        while(cnt2>0){
            nums[i++] = 2;
            cnt2--;
        }

        for(int j=0;j<n;j++){
            cout<<nums[j]<<" ";
        }
    }

// #######SOL2 : DNF METHOD 

// Time Complexity: O(n), Only one traversal of the array is needed.
  
// Space Complexity: O(1), No extra space is required.



void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int hi = n-1;
        int mid = 0;

        while(mid<=hi){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                
                case 1:
                    mid++;
                    break;

                case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
            }
        }
      
    }