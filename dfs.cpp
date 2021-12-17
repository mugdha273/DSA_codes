// // A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;

// // A utility function to add an edge in an
// // undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
			 << v << "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}
void dfs(int node, vector<int>&vis, vector<int>adj[], vector<int> &storeDFS)
    {
        storeDFS.push_back(node);
        vis[node]= 1;
        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(it,vis, adj,storeDFS);
            }

        }
        
    }

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> storeDFS;
        vector<int> vis(V+1, 0);
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                dfs(i, vis, adj, storeDFS);
            }
        }
        return storeDFS;
    }

// // Driver code
int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	// printGraph(adj, V);
	dfsOfGraph(V, adj);

	return 0;
}
