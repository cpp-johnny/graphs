/* Here is an example of a graph with 5 vertices and 6 edges, represented using an adjacency matrix:

  0 1 2 3 4
0 0 1 0 1 0
1 1 0 1 0 0
2 0 1 0 1 1
3 1 0 1 0 1
4 0 0 1 1 0

*/



// implement it using c++
#include <iostream>

using namespace std;

// Number of vertices in the graph
const int V = 5;

// Adjacency matrix representation of the graph
int adjacency_matrix[V][V] =
{
  {0, 1, 0, 1, 0},
  {1, 0, 1, 0, 0},
  {0, 1, 0, 1, 1},
  {1, 0, 1, 0, 1},
  {0, 0, 1, 1, 0}
};

int main()
{
  // Print the adjacency matrix
  for (int i = 0; i < V; i++)
  {
    for (int j = 0; j < V; j++)
    {
      cout << adjacency_matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}


/* output:
0 1 0 1 0 
1 0 1 0 0 
0 1 0 1 1 
1 0 1 0 1 
0 0 1 1 0 
*/
