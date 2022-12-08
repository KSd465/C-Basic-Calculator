#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,add=0;
	char op;
	cout<<"\nEnter first number :\n";
		cin>>a;
		add=a;
	for(int i=1;i>=0;i++)
	{
		
		cout<<"\nEnter operator to perform operation(+ , - , * , / , % ) , ( # ) to exit and enter 'C'to start from 0 :\n";
		cin>>op;
		if(op=='+')
		{
			cout<<"\nEnter any number :\n";
			cin>>b;
			add=add+b;
			cout<<"\nAnswer ="<<add;
			cout<<"\n----------------------\n\n";
			
			
		}
		else if(op=='-')
		{
			cout<<"\nEnter any number :\n";
			cin>>b;
			add=add-b;
			cout<<"\nAnswer ="<<add;
			cout<<"\n----------------------\n\n";
		}
		else if(op=='*')
		{
			cout<<"\nEnter any number :\n";
			cin>>b;
			add=add*b;
			cout<<"\nAnswer ="<<add;
			cout<<"\n----------------------\n\n";
		}
		else if(op=='/')
		{
			cout<<"\nEnter any number :\n";
			cin>>b;
			
			if (b==0)
			{
			  cout<<"\nDivision not possible ";	
			  cout<<"\nEnter new number :\n";
			  cin>>b;
			}
			
			cout<<"\nAnswer ="<<(double)add/b;
			add=add/b;
			cout<<"\n----------------------\n\n";
		}
		else if(op=='%')
		{
			cout<<"\nEnter any number :\n";
			cin>>b;
			
			if (b==0)
			{
			  cout<<"\nRemainder not possible ";
			  
			  cout<<"\nEnter new number :\n";
			  cin>>b;	
			}
			add=add%b;
			cout<<"\nAnswer ="<<add;
			cout<<"\n----------------------\n\n";
		}
		else if(op=='c'||op=='C')
		{
			system("cls");
			cout<<"\nEnter first number :\n";
			cin>>a;
			add=a;
			continue;
			
		}
		else if(op=='#')
		{
			
			break;
		}
		else
		{
			cout<<"Invalid operator";
			continue;
		}
		
		
	}
	cout<<"\nAnswer ="<<add;
	cout<<"\n----------------------\n\n";
	cout<<"\nThanks for using my code  ";
	
		
	
}
