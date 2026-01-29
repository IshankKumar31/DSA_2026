// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         int n1=s.size();
//         int n2=goal.size();
//         if(n1 != n2){
//             return false;
//         }

//         string temp= s+s;
//         int pos=temp.find(goal);
//         if(pos==-1){
//             return false;
//         }else{
//             return true;
//         }
//     }
// };
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.size();
        int n2=goal.size();
        if(n1 != n2){
            return false;
        }

        string temp= s+s;
        for(int i=0;i<temp.size()-n1;i++){
            if(goal== temp.substr(i,n1)){
                return true;
            }

           
        }
        return false;
       
    }
};