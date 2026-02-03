// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n= nums.size();
//         int left=0;
//         int maxlen=0;
//         int count=0;

//         for(int right=0;right<n;right++){
//             if(nums[right]==0){
//                 count++;
//             }
//             while(count>k){
//                 if(nums[left] ==0){
//                     count--;
//                 }
//                 left++;
//             }
//             int len=right-left+1;
//             maxlen=max(maxlen,len);
//         }

//         return maxlen;
//     }
// };

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        
        for (right = 0; right < nums.size(); right++) {
       
            if (nums[right] == 0) {
                k--;
            }
            
          
            if (k < 0) {
                if (nums[left] == 0) {
                    k++;
                }
                left++;
            }
        }
        return right - left;
    }
};
              
        
       