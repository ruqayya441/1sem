#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{	int n = 4;
	for(int i=1;i<=n;i++) 
	{	int sum = 0;
		for(int j=1;j<=i;j++) 
		{	sum+= j;
			cout<<j;
			if(i!=j) 
			{
				cout<<" + ";
			}
		}
		cout<<" = "<<sum<<endl;
	}	
}
