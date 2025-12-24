class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end());
        reverse(capacity.begin(), capacity.end());
        int i = 0;
        for(;i<capacity.size();i++){
            sum -= capacity[i];
            if(sum <= 0){
                break;
            }
        }
        return (i + 1);
    }
};
