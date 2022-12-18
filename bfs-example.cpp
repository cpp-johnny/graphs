// Here is an example of how you can implement BFS in C++ using a queue:


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Number of vertices in the graph
const int V = 4;

// Adjacency list representation of the graph
vector<int> adjacency_list[V];

// Array to keep track of visited vertices
vector<bool> visited(V);

void BFS(int v)
{
  // Create a queue for BFS
  queue<int> q;

  // Mark the current vertex as visited and enqueue it
  visited[v] = true;
  q.push(v);

  while (!q.empty())
  {
    // Dequeue a vertex from the queue and print it
    int u = q.front();
    q.pop();
    cout << u << " ";

    // Explore the neighbors of the vertex
    for (int w : adjacency_list[u])
    {
      if (!visited[w])
      {
        visited[w] = true;
        q.push(w);
      }
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

  // Start the BFS from vertex 2
  BFS(2);

