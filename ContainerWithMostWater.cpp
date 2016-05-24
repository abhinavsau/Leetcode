class Solution {
public:
    int maxArea(vector<int> &height) {
        
        int maxa = 0;
        if(height.size() < 2)
            return maxa;
        
        int s = 0;
        int e = height.size() - 1;
        
        while(s < e)
        {
            int a = min(height[s],height[e]) * abs(e-s);
            if(a > maxa)
                maxa = a;
            if(height[s] <= height[e])
                s++;
            else
                e--;
        }
        
        return maxa;
    }
};