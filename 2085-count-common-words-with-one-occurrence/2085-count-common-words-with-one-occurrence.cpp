class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> freq1;
        unordered_map<string,int> freq2;
        
        int n1=words1.size();
        int n2=words2.size();

        for(int i=0;i<n1;i++){
            freq1[words1[i]]++;
        }
        for(int i=0;i<n2;i++){
            freq2[words2[i]]++;
        }
        int count=0;
        for(auto p :freq1){
            string word=p.first;
            if(freq1[word]==1 && freq2[word]==1){
                count++;
            }
        }

        return count;
        
    }
};