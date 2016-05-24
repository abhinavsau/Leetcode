int power(int x,int y)
{
    if(y==0)
        return 1;
    
    int res=power(x,y/2);
    res=res*res;
    if(y%2)
        res=res*x;
    
    return res;
}

int integerBreak(int n) {
 
    if(n==2)
        return 1;
    if(n==3)
        return 2;
    
    if(n%3==0)
        return power(3,n/3);
    else if(n%3==1)
        return 4*power(3,(n-4)/3);
    else //if(n%3==2)
        return 2*(power(3,(n-2)/3));
}