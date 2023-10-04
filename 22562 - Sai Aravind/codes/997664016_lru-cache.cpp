
struct lru_node{
    unordered_map<int,lru_node*>::iterator ent;
    lru_node *n,*p;
    int val;
    lru_node()
    {
        n=p=NULL;
    }
    lru_node(unordered_map<int,lru_node*>::iterator &ent) :ent(ent)
    {
        n=p=NULL;
    }
};

class lru_list{
    public:
    lru_node *first,*last;
    uint size=0;
    lru_list() : first(new lru_node()),last(new lru_node){
        first->n=last;
        last->p=first;
    }
    lru_node* to_front(lru_node *x)
    {
        x->p->n=x->n;
        x->n->p=x->p;
        x->p=first;
        first->n->p=x;
        x->n=first->n;
        first->n=x;
        return x;
    }
    void push()
    {
        auto tmp=new lru_node();
        first->n->p=tmp;
        tmp->p=first;
        tmp->n=first->n;
        first->n=tmp;
        ++size;
    }
    ~lru_list()
    {
        while(first!=NULL)
        {
            last=first->n;
            delete first;
            first=last;
        }
    }
};


class LRUCache {
    const int capacity;
    lru_list lru;
    unordered_map<int,lru_node*> cache;
public:
    LRUCache(int capacity) :capacity(capacity) {}
    
    int get(int key) {
        auto it=cache.find(key);
        if(it==cache.end())
            return -1;
        return lru.to_front(it->second)->val;
    }
    
    void put(int key, int value) {
        auto it=cache.find(key);
        if(it==cache.end())
        {
            if(lru.size==capacity)
            {
                lru.to_front(lru.last->p);
                cache.erase(lru.first->n->ent);
            }
            else
                lru.push();
            lru.first->n->ent=cache.insert({key,lru.first->n}).first;
            lru.first->n->val=value;
            return;
        }
        lru.to_front(it->second)->val=value;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */