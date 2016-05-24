int minPatches(int* nums, int numsSize, int n) {
    
    long range=1,count=0;
    int i=0;
    while(range<=n)
    {
        if(i<numsSize && nums[i]<=range)
            range+=nums[i++];
        else
        {
            range<<=1;
            count++;
        }
    }
    
    return count;
}