#include<iostream.h>
void main()
{
	int x,y,z;   
	cout<<"x,y,z分别表示公鸡、母鸡、小鸡数.\n";
	for(x=1;x<=20;x++)
	{for(y=1;y<=40;y++)
	{z=100-x-y;
	if(5*x+3*y+1*z/3.0==100)
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	}
}