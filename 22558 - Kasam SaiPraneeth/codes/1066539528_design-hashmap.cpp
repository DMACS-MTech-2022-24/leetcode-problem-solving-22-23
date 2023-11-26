class MyHashMap {
public:
vector<pair<int, int>> hmap;
    MyHashMap() {
        hmap.resize(10000000,{-1,-1});
    }
    
    void put(int key, int value) {
        if(hmap[key].first == key)
             hmap[key].second=value;
        else{
            hmap[key] = {key, value};
        }


    }
    
    int get(int key) {
        if(hmap[key].first == key)
            return hmap[key].second;
        else
            return -1;
    }
    
    void remove(int key) {
        if(hmap[key].first == key)
        hmap[key] ={-1,-1};

    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */