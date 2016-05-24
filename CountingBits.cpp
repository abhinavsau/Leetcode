/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize) {
 
    int* rs = (int*)malloc(sizeof(int)*(num+1));
    
    int len=2,s=2;
    rs[0]=0;
    rs[1]=1;
    
    while(len<=num)
    {
        for(int i=0;i<s&&len<=num;i++,len++)
            rs[i+s]=rs[i]+1;
        s=s*2;
    }
    
    //for(int i=0;i<=num;i++)
        //printf("%d ",returnSize[i]);
    *returnSize=num+1;
    return rs;
}