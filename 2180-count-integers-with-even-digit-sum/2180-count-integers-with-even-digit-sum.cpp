class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=2;i<=num;i++){
            int digit= i;
            int sum=0;
            while(digit != 0){
                int x= digit%10;
                sum+=x;
                digit=digit/10;
            }
            if(sum %2==0){
                count++;
            }

        }
        return count;
    }
};