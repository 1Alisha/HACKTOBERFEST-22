int dfs(int node , int cnt , vector<vector<int>> &adj , vector<int> &vis)
{
    // return 1 if cycle , 0 otherwise
    // cnt represents level of node
    vis[node] = cnt;
    for (int i=0 ; i<adj[node].size() ; i++)
    {
        int val = adj[node][i];
        if (vis[val] == 0) {
            // run dfs
            if (dfs(val , cnt+1 , adj , vis) == 1) return 1;
        }
        else {
            if (abs(vis[val]-cnt) >= 2) return 1;
        }
    }
    return 0;
}
int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector<vector<int>> adj(A+1 , vector<int>(0,0));
    vector<int> vis(A+1 , 0);
    
    for (int i=0 ; i<B.size() ; i++)
    {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    
    for (int i=1 ; i<A+1 ; i++)
    {
        if (vis[i] == 0 && dfs(i , 1 , adj , vis) == 1) return 1;
    }
    return 0;
}
