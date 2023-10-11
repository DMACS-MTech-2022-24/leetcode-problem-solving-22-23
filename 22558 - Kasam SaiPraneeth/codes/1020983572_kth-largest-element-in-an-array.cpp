class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // using default priority queue(max heap)
        // or else use (min heap) while declaring the priopority queue
        // as priority_queue< int, vecotr<int>, greater<int> > pq
        // max heap
        // priority_queue<int> pq;
        // for(int iter:nums) pq.push(iter);
        // k -=1;
        // while(k--)pq.pop();
        // return pq.top();

        //min heap
        priority_queue< int, vector<int>, greater<int> > pq;
        for(int itr:nums){
            pq.push(itr);
            if(pq.size()>k)
                pq.pop();
        }
        return pq.top();
    }
};