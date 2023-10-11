#define ll long long int


class MyCalendar {
public:
    vector<ll> start_times;
    vector<ll> end_times;
    MyCalendar() {
        
    }
    
    bool book(ll start, ll end) {
        int n = start_times.size();
        for(int i = 0; i < n; i++){
            if(start >= start_times[i] && end <= end_times[i]){
                return false;
            }
            if(start <= start_times[i] && end > start_times[i]){
                return false;
            }
            if(start < end_times[i] && end >= end_times[i]){
                return false;
            }
        }
        start_times.push_back(start);
        end_times.push_back(end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */