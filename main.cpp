#include<iostream>
#include"Product.h"
#include"ProductManager.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	cout<<"\n--Manage Products--\n";
	do
	{
		
		ProductManager *p=new ProductManager[1];
		
		int ch;
		cout<<"Enter choice:\n1.insert product details\n2.update details\n3.delete details\n4.display details";
		cin>>ch;
		switch(ch)
		{
			case 1:
		
			for(int i=0;i<1;i++)
			{
				p->insertrec();
			}
			break;
			
			case 2:
		
				p->setUpdate();
		
			break;
			
			case 3:
		
				p->deleterec();
				
			break;
			
			case 4:
		
			for(int i=0;i<1;i++)
			{
				p->display();
			}
			break;
			default:
				cout<<"\n record is corrupted\n";
			break;
			
		}
	}
	while(ch!=5);
	return 0;
}
