class Solution {
public:
    string getHint(string secret, string guess) {
        int c=0,b=0;
        unordered_map<char,int>m1,m2;
        for(char i:secret){
            ++m1[i];
        }
        for(char i:guess){
            ++m2[i];
        }
        for(int i=0;i<guess.length();i++)
            if(guess[i]==secret[i]){
                ++b;
                --m1[guess[i]];
                --m2[guess[i]];
            }
        for(auto i:m2)
            if((i.second>0)&&(m1.find(i.first)!=m1.end())&&(m1[i.first]>0)){
                c+=min(m2[i.first],m1[i.first]);
                m2[i.first]-=c;
                m1[i.first]-=c;
            }
        return to_string(b)+"A"+to_string(c)+"B";
    }
};