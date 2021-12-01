// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;

// A utility function to add an edge in an
// undirected graph.
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

void bfs(int V, vector<int> adj[])
{
	vector<int>bfs;
	vector<int> vis( V+1, 0 );
	// cout<<"hey"<<endl;
	for (int i = 1; i <= V; i++)
	{
		if (!vis[i])
		{
			queue<int>q;
			q.push(i);
			vis[i]= 1;

			while (!q.empty())
			{
				int node = q.front();
				q.pop();
				bfs.push_back(node);
				cout<<node<<endl;

				for(auto it: adj[node])
				{
					if (!vis[i])
					{
						q.push(it);
						vis[it]=1;
					}
					
				}
			}
			
		}
		
	}
	
}

// Driver code
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
	bfs(V, adj);

	return 0;
}
