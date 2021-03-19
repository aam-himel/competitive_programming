/*
    Breadth First Search
    Graph traversal Algorithm Implementation
*/
#include<iostream>
#include<list>

class Graph{
    int V;
    list<int> *adj;

public:
    Graph(int v);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int v){
    this->V = v;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph::BFS(int s){
    bool *visited = bool[V];
    for(int i=0; i<V; i++){
        visited[i] = false;
    }

    list<int> q;
    q.push_back(s);

    list<int>::iterator it;

    while(!q.empty()){
        s = q.front();
        q.pop_front();

        for(it = adj[s].begin(); it != adj[s].end(); it++){
            if(!visited[*it]){
                visited[*it] = true;
                q.push_back(*it);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
    return 0;
}
