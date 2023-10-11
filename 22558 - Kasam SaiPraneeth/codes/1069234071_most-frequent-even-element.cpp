class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> umap;
        int mostFqEven = -1; // initialize the result to -1, if there is no even element
        int MaxFreq = 0; //initialize max frequency to 0
        for(auto a : nums){
            if(a % 2 == 0){
                umap[a]++;
        // checking the current frequency is grater than maxFreq or if it's equal to maxFreq
        // but a is smaller than mostFrequentEven.
        // If so, update maxFreq and mostFrequentEven
                if(umap[a] > MaxFreq || (umap[a] == MaxFreq && a < mostFqEven)){
                    MaxFreq = umap[a];
                    mostFqEven = a;
                    }
            }
        }
        return mostFqEven;
    }
};
