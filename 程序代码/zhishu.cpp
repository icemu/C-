#include <iostream>
using namespace std;
void main()
{
	int a[100],i,j,k;
	for(i=2;i<100;i++)
		a[i]=i;
	for(j=2;j<100;j++)
	{
		k=a[j];
		if(k!=0)
			for(i=k+1;i<100;i++)
				if(a[i]%k==0)
					a[i]=0;
	}
	cout<<"1-100间的质数有："<<'\n';
	for(i=2;i<100;i++)
	{
		if (a[i]!=0)
			cout<<a[i]<<',';
	}
	cout<<'\n';

}
