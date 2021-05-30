#include<iostream>
using namespace std;
int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;

void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}

void add_edge(int u, int v) { //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}

main(int argc, char* argv[]) {

int v,flag=0,flag2=0; 
int rolt=0,rol=0,col=0;
int no=0;
cout<<"Enter the no. of vertices of the Graph : ";
cin>>v;
cout<<"Enter 1 if there is edge between given vertexses else enter 0."<<endl;
while(flag<v*v)
{
	if(rol!=col)
	{
	cout<<"( "<<rol<<","<<col<<" ) : ";
	cin>>flag2;}
	if(flag2==1)
	{
		add_edge(rol,col);
		no++;
	}
	flag++;
	flag2=0;
	col++;
	rolt++;
	if(rolt==v)
	{   rol++;
		rolt=0;
	}
	if(col==v)
	{col=0;}
}
cout<<endl<<"Entered Graph looks like :"<<endl;
displayMatrix(v);
cout<<endl;
if(no=((v*(v-1))/2))
{
	cout<<"Entered graph is a complete Graph";
}
else{
	cout<<"Entered graph is not a complete Graph";
}
}
