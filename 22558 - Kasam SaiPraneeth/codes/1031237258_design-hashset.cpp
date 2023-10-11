class MyHashSet {
public:
vector<bool> s;//create a vector s of type boolean
// hera the resize function is called on the vector s to change its size to 1000001 elements. false, is default value assigned to each boolean element during resizing 
//so the vector s will be initialized with 1000001 boolean elements & all set to false
    MyHashSet() {
        s.resize(1000001,false);
    }
    
    void add(int key) { //add the value to the vector and making it true
        s[key] = true;
    }
    
    void remove(int key) { // checking the vector wheather it is there or no,
        if(s[key] == true)//if present 
            s[key] =false; //make the vectorkey as false
    }
    
    bool contains(int key) { //checking wheather the key is there or no
        return s[key]; //returns true if present else false
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */