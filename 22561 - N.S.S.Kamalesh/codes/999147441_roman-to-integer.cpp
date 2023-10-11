class Solution {
public:
    int romanToInt(string s) {
        int sum;
        switch(s[0]){
            case 'I':sum=1;break;
            case 'V':sum=5;break;
            case 'X':sum=10;break;
            case 'L':sum=50;break;
            case 'C':sum=100;break;
            case 'D':sum=500;break;
            case 'M':sum=1000;
        }
        for(int i=1;i<s.size();i++){
            switch(s[i]){
                case 'I':++sum;break;
                case 'V':if(s[i-1]=='I') sum+=3;
                         else sum+=5;break;
                case 'X':if(s[i-1]=='I') sum+=8;
                         else sum+=10;break;
                case 'L':if(s[i-1]=='X') sum+=30;
                         else sum+=50;break;
                case 'C':if(s[i-1]=='X') sum+=80;
                         else sum+=100;break;
                case 'D':if(s[i-1]=='C') sum+=300;
                         else sum+=500;break;
                case 'M':if(s[i-1]=='C') sum+=800;
                         else sum+=1000;break;
            }
        }
        return sum;
    }
};