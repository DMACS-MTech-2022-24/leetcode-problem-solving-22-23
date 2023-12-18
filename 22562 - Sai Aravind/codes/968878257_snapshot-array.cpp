struct pair_hash
{
    template <class T1,class T2>
    std::size_t operator()(const pair<T1,T2>& p) const
    {
        std::hash<T1> h1;
        std::hash<T2> h2;
        auto seed = h1(p.first);
        return seed ^ (h2(p.second) + 0x9e3779b9 + (seed<<6) + (seed>>2));
    }
};
class SnapshotArray {
    const int length;
    unordered_map<pair<int,int>,int,pair_hash> ssa;
    unordered_map<int,set<int>> snapshots;
    uint logical_counter=0;
public:
    SnapshotArray(int length) :length(length) {}
    
    void set(int index, int val) {
        ssa[{index,logical_counter}]=val;
        snapshots[index].insert(logical_counter);
        cout<<index<<" "<<logical_counter<<" "<<ssa[{index,logical_counter}]<<"\n";
    }
    
    int snap() {
        return logical_counter++;
    }
    
    int get(int index, int snap_id) {
        auto mit=snapshots.find(index);
        if(mit==snapshots.end())
            return 0;
        auto it=mit->second.upper_bound(snap_id);
        if(it==snapshots.at(index).begin())
            return 0;
        
        return ssa.find({index,*prev(it)})->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */