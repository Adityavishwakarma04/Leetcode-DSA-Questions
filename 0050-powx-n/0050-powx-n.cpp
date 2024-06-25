class Solution {
public:
    
    double answer(double x , long n){
        if(n==0) return 1;
        if(x==0) return 0;
        
        if(n<0) return answer(1/x, -n);
        if(n%2==0) return answer(x*x, n/2);
        return x*answer(x*x, (n-1)/2);
    }
    
    double myPow(double x, int n) {
        

              return (answer(x, (long)n));
        
    }
};