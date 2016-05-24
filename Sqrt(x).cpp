class Solution {
public:
    int sqrt(int x) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(x==0 || x==1)
            return x;
        double l=0.0, h=x;
        double sqrt = (l+h)/2;
        for(int i=0;i<100;i++)
        {
            if(sqrt*sqrt > x)
                h=sqrt;
            else
                l=sqrt;
            sqrt = (l+h)/2;    
        }
        return (int)sqrt;
    }
};