class KthLargest {
    vector<int> k_elems;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        std::sort(nums.begin(),nums.end(),greater<int>());
        this->k=k;
        if(nums.size()>k)
            k_elems.insert(k_elems.begin(),nums.begin(),nums.begin()+k);
        else
            k_elems=nums;
    }
    
    int add(int val) {
        k_elems.insert(std::lower_bound(k_elems.begin(),k_elems.end(),val,greater<int>()),val);
        if(k_elems.size()>k)
            k_elems.pop_back();
        return k_elems.back();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */