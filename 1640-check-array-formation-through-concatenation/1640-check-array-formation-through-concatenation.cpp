class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        unordered_map<int, vector<int>> mp;
        
        for(auto &p : pieces){
            mp[p[0]] = p;
        }

        for(int i = 0; i < arr.size(); i++){
            
            if(mp.find(arr[i]) == mp.end())
                return false;

            vector<int> piece = mp[arr[i]];

            for(int j = 0; j < piece.size(); j++){
                if(arr[i + j] != piece[j])
                    return false;
            }

            i += piece.size() - 1;
        }

        return true;
    }
};