class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;
        for(char c:stones){
            for(int i=0;i<(int)jewels.size();i++){
                if(c==jewels[i]){
                    count++;
                }
            }
        }
        return count;
    }
};