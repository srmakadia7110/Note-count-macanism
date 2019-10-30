
#include<iostream>
using namespace std;
 
int main()
{
	int amount,i;
	int notes[10]={2000,500,200,100,50,20,10,5,2,1};
	int nrs[10]={};
	
	cout<<"enter your amount=";
	cin>>amount;
	
	for(i=0;i<10;i++)
	{
		if(amount>=notes[i])
		{
			nrs[i]=amount/notes[i];
			amount=amount-notes[i]*nrs[i];
			cout<<notes[i]<<"::"<<nrs[i]<<endl;
		}
	}
return 0;
}


