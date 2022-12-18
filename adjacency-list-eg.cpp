#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Number of vertices in the graph
const int V = 4;

// Array of linked lists to represent the graph
vector<list<int>> adjacency_list(V);

int main()
{
  // Add an edge between vertex 0 and vertex 1
  adjacency_list[0].push_back(1);

  // Add an edge between vertex 1 and vertex 2
  adjacency_list[1].push_back(2);

  // Add an edge between vertex 2 and vertex 3
  adjacency_list[2].push_back(3);

  return 0;
}
