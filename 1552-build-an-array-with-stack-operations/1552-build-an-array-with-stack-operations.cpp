class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int curr = 1;

        for(int i = 0; i<target.size(); i++){
            while(curr<target[i]){
                result.push_back("Push");
                result.push_back("Pop");
                curr++;
            }
            result.push_back("Push");
            curr++;
        }
        return result;
    }
};