class Solution {
public:

    double calculate_time_required(vector<int>& dist, int speed)
    {
        double time_taken = 0;
        int n = dist.size();
        int i;
        for(i = 0; i < (n - 1); i++){
            time_taken += ceil(dist[i]/(double)speed);
        }

        time_taken += (dist[i]/(double)speed);
        return time_taken;
    }

    int minSpeedRequired(int l, int r, vector<int>& dist, double time_allotted)
    {
                // cout << l << " " << r << endl;
        if(l <= r){
            
            int m = l + (r - l)/2;

            if(calculate_time_required(dist, m) <= time_allotted){
                return minSpeedRequired(l, m - 1, dist, time_allotted);
            }else{
                return minSpeedRequired(m + 1, r, dist, time_allotted);
            }
        }else{
            
            return (r + 1);
        }

    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int ans = minSpeedRequired(1, 1000000000, dist, hour);
        return calculate_time_required(dist, ans) <= hour ? ans: -1;
    }
};