#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	while(1)
	{
		int i,j,matrix[i][j];
	
		srand(time(0));

		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				matrix[i][j]=rand()%9;
			}
		}
	
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				cout<<"  "<<matrix[i][j]<<"  ";
			}
			cout<<endl<<endl;
		}
		
		system("pause");
		system("cls");
		
	}
}
