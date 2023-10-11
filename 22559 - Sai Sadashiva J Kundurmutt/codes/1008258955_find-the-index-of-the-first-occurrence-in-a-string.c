int strStr(char * haystack, char * needle){
    int len_hs = strlen(haystack);
    int len_needle = strlen(needle);
    int ans = -1;
    for(int i = 0; i <= (len_hs - len_needle); i++){
        int flag = 1; 
        for(int j = 0; j < len_needle; j++){
            if(needle[j] != haystack[i + j]){
                flag = 0;
                break;
            }

        }
        if(flag == 1){
            ans = i;
            break;
        }
    }

    return ans;
}