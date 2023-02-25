#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int coloumn(int colarr[5][4])
{
	int col[5]={0};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			col[i]+=colarr[i][j];
		}
		cout<<col[i]<<endl;
	}
	
}
int main()
{
	int arr[5][4];
	for(int x=0;x<5;x++)
	{
		for(int y=0;y<4;y++)
		{
			arr[x][y]=(rand() % 9)+1;
			cout<<arr[x][y]<<"  ";
		}
		cout<<endl;
	}
	coloumn(arr);
	getch();
}

