class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         
            map<int, int> freq;
            set<int> checkset;
            
            for(int i = 0; i < arr.size(); i++) {
                    freq[arr[i]]++;
            }
            
            for(auto it = freq.begin(); it != freq.end(); it++) {
                if(checkset.find(it->second) == checkset.end()) {
                        checkset.insert(it->second);
                } else {
                        return false;
                }
            }
            
            return true;
    }
};