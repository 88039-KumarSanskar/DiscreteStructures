#include<iostream>
using namespace std;

int calNode(int m, int i)
{
	int leaf = 0;
	leaf = i * (m-1) + 1;
	return leaf;
}
int main()
{
	int m,i;
	cout<<"Enter the value of m in an m-ary Tree , m = ";
	cin>>m;
	cout<<"Enter the number of Internal Vertices : ";
	cin>>i;
	cout<<"Total number of Leaf Nodes are : "<<calNode(m,i);
}
