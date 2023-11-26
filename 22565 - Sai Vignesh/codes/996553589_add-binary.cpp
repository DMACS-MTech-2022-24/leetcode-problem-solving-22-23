class Solution {
public:
    string addBinary(string a, string b) {
    int carry=0,num=0;
    string final;
    if(a.length()<b.length())
    {
        string tmp = a;
        a = b;
        b = tmp;
    }
    int i=a.length()-1,j=b.length()-1;
    for(;j!=-1;--j,--i)
    {
        // cout<<j<<" "<<i<<" "<<int(a[i]-'0') + int(b[j]-'0') + carry<<endl;
        switch(int(a[i]-'0') + int(b[j]-'0') + carry)
        {
            case 0:
                final.insert(0,"0");
                carry=0;
                break;
            case 1:
                final.insert(0,"1");
                carry=0;
                break;
            case 2:
                final.insert(0,"0");
                carry=1;
                break;
            case 3:
                final.insert(0,"1");
                carry=1;
        }
        // cout<<final<<endl;
    }
    // cout<<j<<" "<<i<<" "<<int(a[i]-'0') + int(b[j]-'0') + carry<<endl;
    for(;i!=-1;--i)
    {
        switch(int(a[i]) -'0' +carry)
        {
            case 0:
                final.insert(0,"0");
                carry=0;
                break;
            case 1:
                final.insert(0,"1");
                carry=0;
                break;
            case 2:
                final.insert(0,"0");
                carry=1;
                break;
        }
    }
    if(carry)   final.insert(0,"1");
    // cout<<final;
    return final;
    }
};