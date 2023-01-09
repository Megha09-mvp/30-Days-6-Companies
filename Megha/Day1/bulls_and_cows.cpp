class Solution {
public:
    string getHint(string secret, string guess) {
        int t=secret.size();
        int b=0;
        int c=0;
        for(int i=0;i<t;i++)
        {
            if(secret[i]==guess[i])
            b++;
        }
        map<char,int> mp;
        for(auto it: secret)
        {
            mp[it]++;
        }
        for(int j=0;j<t;j++)
        {
            if(mp[guess[j]]>0)
            {
                c++;
                mp[guess[j]]--;
            }
        }
        string ans= to_string(b)+"A"+ to_string(c-b)+"B";
        return ans;
    }
};