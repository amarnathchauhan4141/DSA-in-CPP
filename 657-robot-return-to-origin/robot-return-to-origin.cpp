class Solution {
public:
    bool judgeCircle(string moves) {
       int count = 0;
        int count2 = 0;
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'L'){
                count--;
            }
            else if(moves[i] == 'R'){
                count++;
            }
            else if(moves[i] == 'U'){
                count2++;
            }
            else{
                count2--;
            }
        }
        return count == 0 && count2 == 0;
    }
};
