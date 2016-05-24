class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.size();
    int n2 = word2.size();
    int edit;
    int table[n1+1][n2+1];

    for(int i=0;i<=n1;i++)
        table[i][0] = i;
    for(int j=0;j<=n2;j++)
        table[0][j] = j;

    for (int i=1; i<=n1; i++)
    {
        for (int j=1; j<=n2; j++)
        {
            edit = 1;
            if(word1[i-1] == word2[j-1])
                edit = 0;
            table[i][j] = min(min(table[i-1][j]+1,table[i][j-1]+1),table[i-1][j-1]+edit);
        }
    }

    return table[n1][n2];
    }
};