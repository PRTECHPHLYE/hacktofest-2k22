// Runtime: 27 ms, faster than 87.96% of C++ online submissions for Number of Provinces.
// Memory Usage: 14.6 MB, less than 35.34% of C++ online submissions for Number of Provinces.

class Solution {
public:
    
    void dfs(vector<int>graph[], int source, vector<bool>&visi) {
        visi[source] = true;
        for(auto &child: graph[source]) {
            if(visi[child])continue;
            dfs(graph, child, visi);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> graph[n+1];
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(isConnected[i][j]) {
                    graph[i+1].push_back(j+1);
                }
            }
        }
        vector<bool>visi(n+10, false);
        int ct = 0;
        for(int i=1;i<=n;i++) {
            if(visi[i]==true)continue;
            ct++;
            dfs(graph, i, visi);
        }
        return ct;
    }
};
