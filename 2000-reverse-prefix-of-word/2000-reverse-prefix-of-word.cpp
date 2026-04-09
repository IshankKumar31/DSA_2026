class Solution {
public:
    string reversePrefix(string word, char ch) {
        int num=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                num=i;
                break;
            }
        }
        int i=0;
        int j=num;
        while(i<j){
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};