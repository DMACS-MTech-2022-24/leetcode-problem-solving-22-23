class KthLargest {
    vector<int> k_elems;
    int k;
public:
    KthLargest(int k, vector<int>& nums)  {
        sort(nums.begin(),nums.end(),greater<int>());
        this->k=k;
        if(nums.size()>k)
            k_elems={nums.begin(),nums.begin()+k};
        else
            k_elems={nums.begin(),nums.end()};
        make_heap(k_elems.begin(),k_elems.end(),greater<int>());
    }
    
    int add(int val) {
        k_elems.push_back(val);
        push_heap(k_elems.begin(),k_elems.end(),greater<int>());
        if(k_elems.size()>k)
        {
            pop_heap(k_elems.begin(),k_elems.end(),greater<int>());
            k_elems.pop_back();
        }
        return k_elems.front();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */