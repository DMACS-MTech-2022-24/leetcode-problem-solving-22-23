class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // using default priority queue(max heap)
        // or else use (min heap) while declaring the priopority queue
        // as priority_queue< int, vecotr<int>, greater<int> > pq
        // max heap
        // defining priority queue
        priority_queue<int> pq;
        // iterate through the vecotr and push itr to the pq0
        for(int iter:nums) pq.push(iter);
        k -=1; // decrement k by 1
        while(k--)pq.pop(); // pop the elements untill loop is ture
        return pq.top(); // return the top element which is the kth largest element
    }
};