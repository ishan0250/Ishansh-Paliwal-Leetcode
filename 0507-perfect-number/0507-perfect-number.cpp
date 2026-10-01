class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        vector<int> divisor;
        for(int i=1;i<num;i++){
            if(num%i==0){
                divisor.push_back(i);
            }
        }
        for(int i=0;i<divisor.size();i++){
            sum+=divisor[i];
        }
        if(sum==num) return true;
        else return false;

    }
};