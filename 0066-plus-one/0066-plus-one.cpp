class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i>=0; i--){
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            } else {
                digits[i]=0;
            }

        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};


    //     long long num = 0;
    //     for(int i=0; i<digits.size(); i++ ){
    //         num = num*10 + digits[i];
    //     } 
    //     num +=1;
    //     vector<int> result;
    //     while (num != 0){
    //         result.insert(result.begin(),num%10);
    //         num = num/10;
    //     }
    //     return result;
    // }
    