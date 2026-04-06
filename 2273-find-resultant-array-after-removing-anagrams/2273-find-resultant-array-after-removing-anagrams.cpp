class Solution {
public:
    bool isAnagram(string word1, string word2){
        int n1= word1.size();
        int n2= word2.size();

        if(n1 != n2)return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(int i=0;i<n1;i++){
            freq1[word1[i]-'a']++;
        }
        for(int i=0;i<n2;i++){
            freq2[word2[i]-'a']++;
        }

        if(freq1!= freq2){
            return false;
        }

        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string> ans;
        ans.push_back(words[0]);
        string word1=words[0];

        for(int i=1;i<words.size();i++){
            string word2=words[i];
            if(!isAnagram(word1,word2)){
                ans.push_back(word2);
                word1=word2;
            }
        }
        return ans;
    }
};