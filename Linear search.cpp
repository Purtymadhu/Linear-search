#include<iostream>
using namespace std;
int main()
{
	int n,i,ele,found=0;
	cout<<"Enter how many elements you want in an array:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number you want to search in an array:";
	cin>>ele;
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			cout<<"element is present at location:"<<i<<"= "<<ele;
			found=1;
			break;
		}
	}
	if(!found)
	{
		cout<<"element is not present in an array:";
	}
}
