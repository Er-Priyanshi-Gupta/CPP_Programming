#include<iostream>
#include<queue>
#include<list>
#include<vector>

using namespace std;

class Graph{
    int V;
    list<int> *l;

    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool isCycleBFSHelper(int src, vector<bool> &visited){

        queue<pair<int,int>> q;
        q.push({src,-1});
        visited[src] = true;

        while(q.size()>0){
            int u = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(int v:l[u]){
                if(!visited[v]){
                    visited[v] = true;
                    q.push({v,u});
                }else if(v!=parent){
                    return true;
                }
            }
        }   
        return false;
     }

    bool isCycle(){
        vector<bool> visited(V, false);
        for(int i = 0;i<V; i++){
            if(!visited[i]){
                if(isCycleBFSHelper(i,visited)){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    cout<<g.isCycle();

    return 0;
}