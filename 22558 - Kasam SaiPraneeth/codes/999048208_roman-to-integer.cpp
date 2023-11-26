class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i<s.size() ;i++){
            int tmp =0;
            if(s[i]== 'I'){
                sum+=1;
            }
            else if(s[i]== 'V')
                sum+=5;
            else if(s[i]== 'X')
                sum+=10;
            else if(s[i]== 'L')
                sum+=50;
            else if(s[i]== 'C')
                sum+=100;
            else if(s[i]== 'D')
                sum+=500;
            else if(s[i]== 'M')
                sum+=1000;
            
            if(s[i]== 'I' && s[i+1] == 'V'){
                sum+=3;
                i++;
            }
            else if(s[i]== 'I' && s[i+1] == 'X'){
                sum+=8;
                i++;
            }
            else if(s[i]== 'X' && s[i+1] == 'L'){
                sum+=30;
                i++;
            }
            else if(s[i]== 'X' && s[i+1] == 'C'){
                sum+=80;
                i++;
            }
            else if(s[i]== 'C' && s[i+1] == 'D'){
                sum+=300;
                i++;
            }
            else if(s[i]== 'C' && s[i+1] == 'M'){
                sum+=800;     
                i++;
            }
        }
        return sum;
    }
};