class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        int n= arr.size();
        

        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int count=0;
        string ans="";
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==1){
                count++;
                if(count==k){
                    ans=arr[i];
                }

            }
        }
        return ans;


    }
};
            