class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }

    map<int, vector<int>> countToElements;

    for (const auto& entry : freqMap) {
        countToElements[entry.second].push_back(entry.first);
    }

    vector<int> result;
    for (auto it = countToElements.rbegin(); it != countToElements.rend(); ++it) {
        for (int element : it->second) {
            result.push_back(element);
            if (result.size() == k) {
                return result;
            }
        }
    }

    return result;
}

};