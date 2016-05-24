class Solution {
public:
int getKey(string s)
{
    int result=0;
    for(int i=s.length()-1; i>=0; i--)
    {
        int b=0;
        switch(s.at(i))
        {
        case 'A':
            b|=0;
            break;
        case 'T':
            b|=1;
            break;
        case 'G':
            b|=2;
            break;
        case 'C':
            b|=3;
            break;
        }
        result=b|result;
        result=result<<2;
    }
    return result;
}
    vector<string> findRepeatedDnaSequences(string txt) {
        vector<string> vs;
    map<int,int> mymap;
    int tlen = txt.length();
    for(int i=0;i<tlen-9;i++)
    {
        string pat = txt.substr(i,10);
        int key = getKey(pat);

        map<int, int>::iterator it=mymap.find(key);
        if(it != mymap.end())
        {
            (it->second)++;
            if(it->second == 2)
                vs.push_back(pat);
        }
        else
            mymap.insert(std::pair<int,int>(key, 1));
    }

    return vs;
    }
};