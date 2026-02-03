class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        int n1=p.size();
        int n2=s.size();

        if(n1 > n2)
            return {};

        int k = p.size(); 


        for(int i=0;i<n1;i++){
            freq1[p[i]-'a']++;
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            freq2[s[i]-'a']++;
        }
        if(freq1==freq2){
            ans.push_back(0);
        }

        for(int i=k;i<n2;i++){
            freq2[s[i-k]-'a']--;

            freq2[s[i]-'a']++;
            if(freq1==freq2){
                ans.push_back(i-k+1);
            }

        }
        return ans;
        
    }
};