class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<pair<int, int>> snapshot;
        for (int i = 1; i < arr.size(); i++) {
            snapshot.push_back({arr[i], i});
        }
        sort(snapshot.begin(), snapshot.end(), greater<>());

        int j = 0;
        for (int k = 0; k < arr.size() - 1; k++) {
            while (k >= snapshot[j].second)
                j++;
            arr[k] = snapshot[j].first;
        }
        arr[arr.size() - 1] = -1;
        return arr;    
    }
};