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

// In this code, we use an :map called countToElements to map the frequency (count) of elements to a vector of elements with that count. We then iterate through the map in reverse order to obtain elements in descending order of count. We add elements to the result vector until we reach k elements, and then we return the result.

};