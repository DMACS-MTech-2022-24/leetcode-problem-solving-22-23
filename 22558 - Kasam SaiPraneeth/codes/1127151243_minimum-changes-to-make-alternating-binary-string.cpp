class Solution {
public:

    int count(string st){
        int count = 0;
         for(int i = 1; i<st.size(); i++){
            if(st[i-1] == '1'){
                if(st[i] != '0'){
                    st[i] = '0';
                    count++;
                }
            }
            else{
                if(st[i] != '1'){
                    st[i] = '1';
                    count++;
                }
            }
        }
        return count;
}
    int minOperations(string s) {
        int c;
        c=count(s);
        s[0] =  s[0]=='0'? '1':'0';
        return min(c,count(s)+1);
    }   
};
