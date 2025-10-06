// Problem 200 on LeetCode

// class Solution {
// private:
//     void dfs(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& visited){
//         if(i<0 || j<0 || i >= n || j >= m || visited[i][j] || grid[i][j] == '0') return;

//         visited[i][j] = true;
//         dfs(i-1,j,n,m,grid,visited);
//         dfs(i,j+1,n,m,grid,visited);
//         dfs(i+1,j,n,m,grid,visited);
//         dfs(i,j-1,n,m,grid,visited);

//     }
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int islands = 0;
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<bool>> visited(n,vector<bool>(m,false));

//         for(int i = 0;i<n; i++){
//             for(int j = 0; j<m; j++){
//                 if(!visited[i][j] && grid[i][j] == '1'){
//                     dfs(i,j,n,m,grid,visited);
//                     islands++;
//                 }
//             }
//         }
//         return islands;
//     }
// };