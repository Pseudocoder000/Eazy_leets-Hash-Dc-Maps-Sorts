class Solution {
public:
    class DSU {
        vector<int> parent;
    public:
        DSU(int n) {
            parent.resize(n);
            iota(parent.begin(), parent.end(), 0);
        }

        int find(int x) {
            if (parent[x] != x)
                parent[x] = find(parent[x]);
            return parent[x];
        }

        void unite(int x, int y) {
            int xr = find(x);
            int yr = find(y);
            if (xr != yr)
                parent[yr] = xr;
        }

        int countComponents(int n) {
            unordered_set<int> roots;
            for (int i = 0; i < n; ++i)
                roots.insert(find(i));
            return roots.size();
        }
    };

    int minCost(int n, vector<vector<int>>& edges, int k) {
        int low = 0, high = 0;
        for (auto& edge : edges)
            high = max(high, edge[2]);

        int result = high;
        while (low <= high) {
            int mid = (low + high) / 2;
            DSU dsu(n);

            for (auto& edge : edges) {
                int u = edge[0], v = edge[1], w = edge[2];
                if (w <= mid) {
                    dsu.unite(u, v);
                }
            }

            int components = dsu.countComponents(n);
            if (components <= k) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};
