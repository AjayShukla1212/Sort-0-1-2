#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t[n],j=0,k=n-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			t[j]=0;
			j++;
		}
		if(a[i]==2)
		{
			t[k]=2;
			k--;
		}
	}
	for(int l=j;l<=k;l++)
	{
		t[l]=1;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=t[i];
	}
	for(int i=0;i<n;i++)
	{
		cout <<a[i] <<" ";
        }
	cout <<endl;
}
