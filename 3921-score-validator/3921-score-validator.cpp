class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int counter=0;
        for(const string& e:events){
            if(counter==10) break;
            switch(e[0]){
                case '0': score += 0; break;
                case '1': score += 1; break;
                case '2': score += 2; break;
                case '3': score += 3; break;
                case '4': score += 4; break;
                case '6': score += 6; break;
                case 'W':
                    if (e == "W") {
                        counter++;
                    } else if (e == "WD") {
                        score += 1;
                    }
                    break;
                case 'N':
                    if (e == "NB") {
                        score += 1;
                    }
                    break;
            }
        }
        return {score, counter};
    }    
};