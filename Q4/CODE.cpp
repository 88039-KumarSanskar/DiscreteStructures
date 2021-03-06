#include <iostream>
#define MAX_NODES 100
using namespace std;
int countPaths(
 int graph[][MAX_NODES], int n,
 int src, int dest, int len)
{
 int count[n][n][len + 1];
 for (int e = 0; e <= len; e++)
 {
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < n; j++)
 {
 count[i][j][e] = 0;
 if (e == 0 && i == j)
 count[i][j][e] = 1;
 if (e == 1 && graph[i][j])
 count[i][j][e] = 1;
 if (e > 1)
 for (int a = 0; a < n; a++)
 if (graph[i][a])
 count[i][j][e] += count[a][j][e - 1];
 }
 }
 }
 return count[src][dest][len];
}
int main()
{
 int v;
 cout << "Enter the number of vertices: ";
 cin >> v;
 int matrix[MAX_NODES][MAX_NODES];
 cout << "Enter the Adjacency Matrix: " << endl;
 for (int i = 0; i < v; i++)
 {
 for (int j = 0; j < v; j++)
 cin >> matrix[i][j];
 }
 int src, dest;
 cout << "Enter Source Node: ";
 cin >> src;
 cout << "Enter Destination Node: ";
 cin >> dest;

 int len;
 cout << "Enter Path Length: ";
 cin >> len;
 cout << "Total Paths from Node "
 << src << " to Node " << dest
 << " having " << len << " edges: "
 << countPaths(
 matrix, v,
 src - 1, dest - 1,
 len);
 return 0;
}
