char* reverseString(char* s) {
    
    int len=strlen(s);
    int start=0,end=len-1;char temp;
    while(start<end)
    {
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;end--;
    }
    
    return s;
}