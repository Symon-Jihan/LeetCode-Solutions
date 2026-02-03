class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n); 
        for(int i=0;i<n;i++) v[i] = nums[i];
        int i = 0;
        while(i < n - 1 && v[i] < v[i + 1]){
            i++;
        }
        if(i == 0) return false;
        int p = i;
        while(i < n - 1 && v[i] > v[i + 1]){
            i++;
        }
        if(i == p) return false;
        int q = i;
        while(i < n - 1 && v[i] < v[i + 1]){
            i++;
        }
        if(i == q) return false;
        return i == (n - 1);
    }
};
