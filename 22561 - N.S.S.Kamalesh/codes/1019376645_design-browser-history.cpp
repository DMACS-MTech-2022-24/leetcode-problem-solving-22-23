class BrowserHistory {
    vector<string>v;
    int p;
public:
    BrowserHistory(string homepage) {
        v.push_back(homepage);
        p=0;
    }
    
    void visit(string url) {
        v.erase(v.begin()+p+1,v.end());
        v.push_back(url);
        p=v.size()-1;
    }
    
    string back(int steps) {
        p-=steps;
        if(p<0) p=0;
        return v[p];
    }
    
    string forward(int steps) {
        p+=steps;
        if(p>=v.size()) p=v.size()-1;
        return v[p];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */