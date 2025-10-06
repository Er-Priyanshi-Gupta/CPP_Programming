#include<iostream>
#include<queue>
#include<vector>
#include<list>

using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    // Directed Graph
    void addEdge(int u, int v){
        l[u].push_back(v);
    }

    bool isCycleDirectedDFSHelper(int u, vector<bool> &visited, vector<bool> &recPath){
        visited[u] = true;
        recPath[u] = true;

        for(int v:l[u]){
            if(!visited[v]){
                if(isCycleDirectedDFSHelper(v, visited, recPath)){
                    return true;
;                }
            }else if(recPath[v]){
                    return true;
                }
        }

        recPath[u] = false;
        return false;
    }
};

int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,1);

    vector<bool> visited(4,false);
    vector<bool> recPath(4,false);

    cout<<g.isCycleDirectedDFSHelper(0, visited, recPath);

    return 0;
}
