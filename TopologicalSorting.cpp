#include <iostream>
#include <vector>
#include <list>
#include <stack> // Missing include for stack
using namespace std;

class Graph {
    int V;
    list<int> *l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u); // For undirected graph
    }

    void printAdjList() {
        for (int i = 0; i < V; i++) {
            cout << i << " : ";
            for (int neigh : l[i]) {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    void dfs(int curr, vector<bool> &vis, stack<int> &s) {
        vis[curr] = true;
        for (int v : l[curr]) {
            if (!vis[v]) {
                dfs(v, vis, s);
            }
        }
        s.push(curr);
    }

    void topoSort() {
        vector<bool> vis(V, false);
        stack<int> s;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, vis, s);
            }
        }

        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);

    g.printAdjList();
    g.topoSort(); // Fixed call

    return 0;
}
