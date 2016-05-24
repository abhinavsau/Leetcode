class Solution {
public:
    double pow(double x, int n) {
        
        if(n == 0)
        return 1;

    double p = pow(x,n/2);
    p=p*p;
    if(n%2 == 0)
        return p;
    else
        return p*(n < 0 ? 1/x: x);
        
    }
};