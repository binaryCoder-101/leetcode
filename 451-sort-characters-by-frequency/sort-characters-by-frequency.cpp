class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char,int> mpp;
        for(auto it:s){
            mpp[it]++;
        }
        vector<pair<char,int>> v(mpp.begin(),mpp.end());

        sort(v.begin(),v.end(),[](auto a,auto b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second>b.second;
        });

        string ans = "";
        for(auto it:v){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};