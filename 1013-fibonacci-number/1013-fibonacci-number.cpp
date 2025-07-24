class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int a = 0, b = 1, c = 0, i=1;
         
         while(i<n){
            c=a+b;
            a = b;
            b = c;
            i++;
         }
         return b;
        
    }
};