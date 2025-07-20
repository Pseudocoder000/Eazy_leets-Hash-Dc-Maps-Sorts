class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n==0 || n %2 ==1){
            return false;
        }
        long num = 1;
        for(int i=1; i <=n/2; i++){
            num =  num*2;
            if( num == n){
                return true;
            } 
            if (num > n){
                return false;
            } 
        }
        return false;
        
    }
};