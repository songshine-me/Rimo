#include<iostream>
using namespace std;

int main ()
{
	int a,b,c,d;

	for (a=1;a<5;a++)
		for(b=1;b<5;b++)
			for(c=1;c<5;c++)
				for(d=1;d<5;d++)
					if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
						cout<<a<<b<<c<<d<<endl;
	return 0;					 
 } 
