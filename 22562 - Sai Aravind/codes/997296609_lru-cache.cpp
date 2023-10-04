class LRUCache {
    const int capacity;
    list<int> lru;
    unordered_map<int,pair<int,list<int>::iterator>> cache;
public:
    LRUCache(int capacity) :capacity(capacity) {}
    
    int get(int key) {
        auto it=cache.find(key);
        if(it==cache.end())
            return -1;
        lru.splice(lru.begin(),lru,it->second.second);
        return it->second.first;
    }
    
    void put(int key, int value) {
        auto it=cache.find(key);
        if(it==cache.end())
        {
            if(lru.size()==capacity)
            {
                lru.splice(lru.begin(),lru,prev(lru.end()));
                cache.erase(lru.front());
                lru.front()=key;
            }
            else
                lru.push_front(key);
            cache.insert({key,{value,lru.begin()}});
            return;
        }
        lru.splice(lru.begin(),lru,it->second.second);
        it->second.first=value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */