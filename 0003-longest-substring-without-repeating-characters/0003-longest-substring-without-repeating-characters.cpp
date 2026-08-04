class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> lastIndex(256, -1);   // Store last seen index of characters
        int left = 0;
        int maxLength = 0;
        
        for (int right = 0; right < s.length(); right++) {
            
            // If character was seen and is inside current window
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            
            lastIndex[s[right]] = right;
            
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};