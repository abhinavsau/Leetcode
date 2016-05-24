class Solution {
public:
    int atoi(const char *str) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
    int i,sign=1,ans=0,count=0,ccount=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == '-' && count==0 && ccount == 0)
            {ccount++;sign = -1;}
        else if(str[i] == '+' && count==0 && ccount == 0)
            {ccount ++;continue;}
        else if(str[i] == ' ' && count != 0)
            break;    
        else if(str[i] == ' ' && ccount == 0)
            continue;
        else if(str[i] < 48 || str[i] > 57)
            break;
        if(str[i] >= 48 && str[i] <= 57)
        {
            if (sign == 1 && ans>INT_MAX/10){return INT_MAX;}
            if (sign == 1 && ans==INT_MAX/10 && int(str[i]-'0')>=7){return INT_MAX;}
            if (sign == -1 && -ans<INT_MIN/10){return INT_MIN;}
            if (sign == -1 && -ans==INT_MIN/10 && int(str[i]-'0')>=8){return INT_MIN;}
            ans= ans*10 + str[i]-48;count++;
        }
    }
    return sign*ans;
        
    }
};