class Solution {
public:
    string simplifyPath(string path) {
        // vector<string> tokens;
        std::istringstream iss(path);
        std::string s;
        stack<string> stk;

        while (std::getline(iss, s, '/')) {
            // cout << s <<s.length()<<endl;

            if(s=="" || s==".") continue;
            if(s == "..")
                {if(!stk.empty()) stk.pop();}
            else{
                stk.push(s);
                // cout<<stk.top()<<endl;
            } 
        }
        s = "";
        while(!stk.empty())
        {
            string tmp = stk.top();
            // cout<<tmp<<endl;
            stk.pop();
            s = "/"+tmp+s;
        }
        if(s=="") return "/";
        return s;
    }
};