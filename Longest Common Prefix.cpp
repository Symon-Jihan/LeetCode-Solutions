class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<char> v;
        int longest = INT_MAX;
        for(int i=0;i<strs.size();i++){
            longest = min(longest, (int)(strs[i].size()));
        }
        int count = 0, k = 0;
        string res = "";
        for(int p=0;p<longest;p++){
            int x = 0;
            string s = strs[0];
            char c = s[k];
            for(int i=0;i<strs.size();i++){
                string s1 = strs[i];
                if(s1[k] == c){
                    x++;
                }else{
                    break;
                }
            }
            if(x != strs.size()){
                break;
            }
            k++;
            count++;
            res += c;
        }
        return res;
    }
};
