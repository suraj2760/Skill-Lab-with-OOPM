//To Add Two Numbers, Print Number Entered by User, Swap Two Numbers, Check Whether Number is Even or Odd
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,temp;
	cout << "enter first number" << endl;
	cin >> n1;
	cout << "enter second number" <<endl;
	cin >> n2;
	cout <<"First Number="<<n1<<endl<<"Second Number="<<n2<<endl;
	cout << "Addition of " <<n1<<" and "<<n2<<" is "<<n1+n2;
	cout<<"\nSwapping \n";
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"Swapped numbers n1= "<<n1<<" and n2= "<<n2<<endl;
	cout<<"even or odd \n";
	if(n1%2==0)
		cout<<n1<<" is even \n";
	else
		cout<<n1<<" is odd \n";
	
	return 0;
}


