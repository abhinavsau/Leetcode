class Solution {
public:
int findPeakUtil(const vector<int> &arr, int low, int high, int n)
{
    int mid = (low+high)/2;

    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid] >= arr[mid+1]))
        return mid;

    else if(mid > 0 && arr[mid] < arr[mid-1])
        findPeakUtil(arr,low,mid-1,n);
    else
        findPeakUtil(arr,mid+1,high,n);
}
    int findPeakElement(const vector<int> &num) {
        int n = num.size();
        if(n == 1)
            return 0;
        return findPeakUtil(num, 0, n-1, n);       
    }
};