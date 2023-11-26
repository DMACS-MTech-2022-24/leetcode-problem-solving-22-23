class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> starts , ends;
        //creating two different vectors sarts ans ends for flowers 
        for(auto k : flowers){
            starts.push_back(k[0]);
            ends.push_back(k[1]);
        }
        // now sorting this two list separately
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        vector<int> answer;
        for(auto i :people){
            // upper_bound()|lower_bound() function is used for finding the first element in the range [start, end)
            //  whose value is greater than the val and returns an iterator pointing to that value.
            int started = upper_bound(starts.begin(), starts.end(), i) - starts.begin();
            int ended = lower_bound(ends.begin(), ends.end(), i) - ends.begin();
            answer.push_back(started-ended); 
        }

        return answer;
    }
};