class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        vector<int>ranges(n);
        for (int i=0;i<n;i++){
            int temp=abs(nums[i]);
            vector<int>digits;
            if(temp==0) digits.push_back(0);
            else{
                while(temp!=0){
                    int d=temp%10;
                    digits.push_back(d);
                    temp /=10;
                }
            }
            int minDigit=*min_element(digits.begin(),digits.end());
            int maxDigit=*max_element(digits.begin(),digits.end());
            ranges[i]=maxDigit-minDigit;
        }
        int maxRange=*max_element(ranges.begin(),ranges.end());
        int sum=0;
        for(int i=0;i<n;i++){
            if(ranges[i]==maxRange){
                sum+=nums[i];
            }
        }
        return sum;
    }
};