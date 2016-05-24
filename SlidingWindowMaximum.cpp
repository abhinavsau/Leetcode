class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> mydequeue(k);
        vector<int> vs;
        int len = nums.size();
        if(len==0)
            return vs;
        for(int i=0;i<k;i++)
        {
            while(!mydequeue.empty() && nums[i]>=nums[mydequeue.back()])
                mydequeue.pop_back();
            mydequeue.push_back(i);
        }
        
        for(int i=k;i<len;i++)
        {
            //cout << nums[mydequeue.front()] << " ";
            vs.push_back(nums[mydequeue.front()]);
            while(!mydequeue.empty() && mydequeue.front()<=i-k)
                mydequeue.pop_front();
            while(!mydequeue.empty() && nums[i]>=nums[mydequeue.back()])
                mydequeue.pop_back();
            
            mydequeue.push_back(i);
        }
        
        //cout << nums[mydequeue.front()];
        vs.push_back(nums[mydequeue.front()]);
        
        return vs;
    }
};