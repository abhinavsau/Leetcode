class Solution {
public:
char itor(int n)
{
    switch(n)
    {
        case 1: return 'I';
        case 5: return 'V';
        case 10: return 'X';
        case 50: return 'L';
        case 100: return 'C';
        case 500: return 'D';
        case 1000: return 'M';
    }
}
    string intToRoman(int num) {
        string str("");
    for(int i=1000;i>=1;i=i/10)
    {
        int t = (num - num%i)/i;
        if(t == 4)
        {
            str += itor(i);
            str += itor(i*5);
        }
        else if(t == 9)
        {
            str += itor(i);
            str += itor(i*10);
        }
        else if(t > 4 && t < 9)
        {
            str += itor(i*5);
            for(int j=0;j<t-5;j++)
                str+= itor(i);
        }
        else
        {
            for(int j=0;j<t;j++)
                str+= itor(i);
        }
       num = num - t*i; 
    }
    
    return str;
    }
};