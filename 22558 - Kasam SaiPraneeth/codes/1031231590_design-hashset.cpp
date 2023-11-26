class MyHashSet {
public:
vector<bool> s;
    MyHashSet() {
        s.resize(1000001,false);
    }
    
    void add(int key) {
        s[key] = true;
    }
    
    void remove(int key) {
        if(s[key] == true)
            s[key] =false;
    }
    
    bool contains(int key) {
        return s[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */