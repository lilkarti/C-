using namespace std; 
main()
{
	int x,y,z;
	cout<<"Enter 1st num ";
	cin>>x;
	cout<<"Enter 2nd num ";
	cin>>y;
	cout<<"Enter 3rd num ";
	cin>>z;
	
	if(x>y)
	{
		if(x>z)
		{
			cout<<x<<" is biggest number ";
		}else
		{
			cout<<z<<" is biggest number ";
		}
	}else if(y>z)
	{
		cout<<y<<" is biggest number ";
	}else
	{
		cout<<z<<" is biggest number";
	}
}