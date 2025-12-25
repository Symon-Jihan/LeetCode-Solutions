class Solution {
public:
    int reverse(int x) {
        string s = "";
        if(x < 0){
            s = to_string(x);
            std::reverse(s.begin() + 1, s.end());
            long long y = stoll(s);
            if(y < INT_MIN){
                return 0;
            }
            return (int)y;
        }else{
            s = to_string(abs(x));
            std::reverse(s.begin(), s.end());
            long long y = stoll(s);
            if(y > INT_MAX){
                return 0;
            }
            return (int)y;
        }
    }
};
