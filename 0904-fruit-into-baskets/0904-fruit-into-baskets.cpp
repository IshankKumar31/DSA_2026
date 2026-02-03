class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> count;
        int n=fruits.size();
        int left=0;
        int maxlen=0;

        for(int right=0;right<n;right++){
            count[fruits[right]]++;

            while(count.size() > 2){
                count[fruits[left]]--;
                if(count[fruits[left]]==0){
                    count.erase(fruits[left]);
                }
                left++;
            }
            int len=right-left+1;
            maxlen= max(len,maxlen);
        }
        return maxlen;
    }
};

         
    