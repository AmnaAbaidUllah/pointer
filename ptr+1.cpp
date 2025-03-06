#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int arr[5]={56,89,3,44,98};
	int *ptr=arr;	//addition
	cout<<"\n";
	ptr=ptr+3; //it should give 89 but it is giving 56
	cout<<*ptr;	
	cout<<"\n";
	ptr=ptr-1;
	cout<<*ptr;
	}
	// why it is giving zero
	
