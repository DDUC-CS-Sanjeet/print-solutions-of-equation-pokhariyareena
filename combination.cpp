#include<iostream>
using namespace std;

void pattern(int n,int c)
{
	int ar[n],sum=0,j=1;
	for(int i=0;i<n;i++)
	ar[i]=0;
	while(j>0)
	{
		bool check=true;
		sum=0;
		for(int i=0;i<n;i++)
		{
			if(ar[i]==c+1)
			{
				ar[i]=0;
				if(i==n-1)
				{
					check=false;
					break;		
				}	
				ar[i+1]++;
			}
			sum=sum+ar[i];	
		}	
		if(check==false)
		break;
		
		if(sum==c)
		{
			for(int i=n-1;i>=0;i--)
			cout<<ar[i]<<" ";
			cout<<endl;
		}	
	    ar[0]++;
	}	
}

int main()
{
	int C,n;
	cout<<"Enter the number of digits for combination"<<endl;
	cin>>n;
	cout<<"Enter the sum of all number"<<endl;
	cin>>C;
	pattern(n,C);
	return 0;
}
