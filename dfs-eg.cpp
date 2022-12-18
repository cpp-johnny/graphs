#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Number of vertices in the graph
const int V = 4;

// Adjacency list representation of the graph
vector<int> adjacency_list[V];

// Array to keep track of visited vertices
vector<bool> visited(V);

void DFS(int v)
{
  // Mark the current vertex as visited
  visited[v] = true;

  // Print the vertex
  cout << v << " ";

  // Explore the neighbors of the vertex
  for (int u : adjacency_list[v])
  {
    if (!visited[u])
    {
      DFS(u);
    }
  }
}

int main()
{
  // Add an edge between vertex 0 and vertex 1
  adjacency_list[0].push_back(1);

  // Add an edge between vertex 0 and vertex 2
  adjacency_list[0].push_back(2);

  // Add an edge between vertex 1 and vertex 2
  adjacency_list[1].push_back(2);

  // Add an edge between vertex 2 and vertex 0
  adjacency_list[2].push_back(0);

  // Add an edge between vertex 2 and vertex 3
  adjacency_list[2].push_back(3);

  // Add an edge between vertex 3 and vertex 3
  adjacency_list[3].push_back(3);

  // Start the DFS from vertex 2
  DFS(2);

  return 0;
}

/* This code will print the vertices of the graph in the order they 
are visited by the DFS algorithm, starting from vertex 2. 
The output will be: 2 0 1 3.
*/


