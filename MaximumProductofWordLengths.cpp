class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int ws = words.size();
        vector<int> vi;
        for(int i=0;i<ws;i++)
        {
            int len = words[i].length();
            int num=0;
            for(int j=0;j<len;j++)
                num = num | (1<<(words[i][j]-'a'));
            vi.push_back(num);
        }
        
        //for(int i=0;i<ws;i++)
            //cout << vi[i] << " ";
            
        int max = 0;
        for(int i=0;i<ws;i++)
        {
            for(int j=i+1;j<ws;j++)
            {
                //cout << endl << "---" << (vi[i]&vi[j]) << endl;
                if((vi[i]&vi[j])==0)
                {
                    int mul=words[i].length()*words[j].length();
                    max =  mul>max?mul:max;
                }
            }
        }
        
        return max;
    }
};