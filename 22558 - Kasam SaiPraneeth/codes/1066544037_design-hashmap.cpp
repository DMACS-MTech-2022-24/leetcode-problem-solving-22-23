class MyHashMap {
public:
// creating a vector with pair of {key, value} pair
vector<pair<int, int>> hmap;

    MyHashMap() {
        // creating the hmap of 10^6 size with all the values as -1
        hmap.resize(1000001,{-1,-1});
    }
    
    void put(int key, int value) {
        // checking if key is present
        if(hmap[key].first == key){
            // if key is prsent the value is updated
             hmap[key].second=value;
        }
        else{
            // new key value pair is inserted
            hmap[key] = {key, value};
        }


    }
    
    int get(int key) {
        // if key is present value associated with is returned else -1 is returned
        if(hmap[key].first == key)
            return hmap[key].second;
        else
            return -1;
    }
    
    void remove(int key) {
        // if key is present then puting -1 in both key and value pair in hmap
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