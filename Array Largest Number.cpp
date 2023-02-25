#include <iostream>
using namespace std;

int main()
{
	int count,j,k,marks[j],win;
	
	for (j=0;j<4;j++)
	{
		cout<<"Enter Marks of Course No:"<<j+1<<endl;
		cin>>marks[j];	
	}
	win = marks[0];
	
	for(k=0;k<3;k++)
	{
		if (win<marks[k+1])
			win = marks[k+1];	
		else
			win=win;	
	}
	cout<<endl<<"----------"<<endl<<"highest marks"<<endl<<endl;
	cout<<win<<endl;
}
