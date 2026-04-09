class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        intervals.emplace_back(newInterval);
        return merge(intervals);
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.emplace_back(intervals[0]);
        for(int i=0;i<intervals.size();i++){
            if(res.back()[1] < intervals[i][0]){
                res.emplace_back(intervals[i]);
            }else{
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
        }
        return res;
    }
};
