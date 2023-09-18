#include<iostream>
#include <string.h>
using namespace std;

void display()
{
	cout << "\n\t************************************";
    cout << "\n\t*        Welcome to AS ATM         *";
    cout << "\n\t*     1. Withdraw                  *";   
    cout << "\n\t*     2. Deposit                   *";
    cout << "\n\t*     3. Balance Inquriy           *";
    cout << "\n\t*     4. Quit                      *";
    cout << "\n\t*                                  *";
    cout << "\n\t************************************";
    cout << "\n\n";
}
void new_user(string name,int pin)
{
	string first_name, last_name , user_name;
	int new_pin;
	cout<<"Enter your First Name:";
	cin>>first_name;
	cout<<"Enter your Last Name:";
	cin>>last_name;
	cout<<"Enter your username:";
	cin>>user_name;
	cout<<"Creat your pin:";
	cin>>new_pin;
	cout<<"\nYour Account is Created....!"<<endl;
	user_name=name;
	new_pin=pin;
	
}

int main()
{
	system("color 1");
	int withdraw , deposit , balance_inquiry ,balance = 50000 , pin,n,number ;
	
	string user,name ,uname,user_name;
	int keypin=1234,new_pin;
    uname="ahsan";
	
    cout<<"Type new for new account."<<endl;
	cout<<"Type old for old account."<<endl;

	cout<<"Enter the User:";
	getline(cin,user);
	if(user=="old")
	{
		

	cout<<"Enter the name:";  
	getline(cin,name);         
	cout<<"Enter your pin :";
	cin>>pin;
	
	
	
	if((name==uname && pin== keypin) ||(name==user_name && pin==new_pin) )
	{
		cout<<"\nWelcome : "<<name<<endl;
		cout << "\nPin Approved!\n";
    	
        amount1:
		display();  
           
        while(1)
        {
	    cout<<"\nEnter the Number:";
	    cin>>n;
	    
	   
	    switch(n){
	            
			     case 1:
	    		cout<<"\nEnter the amount you want to withdraw:";
	    		cin>>withdraw;
	    		
	    		
	    		
	    		if(withdraw>balance)
	    		{
	    			cout<<"\nYou don't have enough balance!"<<endl<<endl;
	    			
				}
				else
				{
					balance = (balance - withdraw);
					cout<<"You withdraw:"<<withdraw<<endl;
					
					cout<<"your remaining balance is :"<<balance<<endl;
				}
	    		break;
	    		
	    	    case 2:
	    		cout<<"Enter the amount you want to deposit:";
	    		cin>>deposit;
	    	    balance=deposit + balance;
	    		cout<<"You deposit:"<<deposit<<endl;
	    		cout<<"your remaining balance is :"<<balance<<endl;
	    		break;
	    		
	    		case 3 :
	    			cout<<"Welcome to AS ATM ...."<<endl;
	    			cout<<"Your balance is:"<<balance<<endl;
	    		
	    			break;
	    			
	    		case 4 :
	    			cout<<"Thanks for visiting AS ATM....!";
				return 0 ;
				
				default:
				cout<<"You have entered invalid number....!"<<endl;
                 cout<<"Please enter valid number......!"<<endl;	
			}
		}
	        	
		}
		else
		{
			cout<<"\nYour name or pin is invalid...!";
		}
 
}
else if(user=="new")
{
	new_user(name,pin);
	cout<<"Enter your name:";
	cin>>user_name;
	cout<<"\nEnter your pin :";
	cin>>pin;
	goto amount1;
	
}
else 
{
	cout<<"Invaild User.....!";
}	
return 0 ;
}
