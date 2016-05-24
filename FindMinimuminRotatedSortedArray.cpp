int findMin_Util(int* nums,int s,int e)
{
    if(e < s)
        return nums[0];
    
    if(s==e)
        return nums[s];
        
    int mid=(s+e)/2;
    
    if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1])
        return nums[mid];
    else if(nums[mid]<nums[e])
        return findMin_Util(nums,0,mid-1);
    else
        return findMin_Util(nums,mid+1,e);
}
int findMin(int* nums, int numsSize) {
 
    if(numsSize==0)
        return 0;
    
    return findMin_Util(nums,0,numsSize-1);
    
}