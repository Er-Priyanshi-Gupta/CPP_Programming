#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<stack>

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
    }

    void topologicalSortDFSHelper(int u, vector<bool> &visited, stack<int> &s ){
            visited[u] = true;
            for(int v : l[u]){
                if(!visited[v]){
                    topologicalSortDFSHelper(v,visited,s);
                }
            }
            s.push(u);
        }


    void topologicalSortDFS(){

        vector<bool> visited(V,false);
        stack<int> s;

        for(int i = 0; i<V; i++){
            if(!visited[i]){
                topologicalSortDFSHelper(i, visited, s);
            }
        }

        while(s.size()>0){
            cout<<s.top()<<" ";
            s.pop();
        }

    }
};

int main(){

    Graph g(6);

    g.addEdge(5,2);
    g.addEdge(5,0);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(2,3);
    g.addEdge(3,1);

    g.topologicalSortDFS();
    
    return 0;
}