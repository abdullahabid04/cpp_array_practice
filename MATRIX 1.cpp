#include<iostream>
using namespace std;

int main()
{
	int matrix[4][4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"enter matrix elements  "<<endl;
			cin>>matrix[i][j];
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<matrix[i][j];
    	}
    	cout<<endl;
    }  
}
