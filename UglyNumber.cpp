class Solution {
public:
    bool isUgly(int num) {
        
        if(num==0)
            return false;
        
        if(num==1)
            return true;
        
        int two=0,three=0,five=0;
        
        if(num%2==0)
            two=1;
        
        while(num%2==0)
            num=num/2;
        
        if(num%3==0)
            three=1;
        
        while(num%3==0)
            num=num/3;
        
        if(num%5==0)
            five=1;
        
        while(num%5==0)
            num=num/5;
        
        if((two || three || five) && num==1)
            return true;
        else
            return false;
        
    }
};