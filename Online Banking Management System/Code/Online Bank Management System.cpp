#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class bank{
	char name[50],add[100], y;
	int balance;
	
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
		//void exit();
};

void bank :: open_account(){
	cout<<"Enter Your Fullname :" ;
	cin.ignore();
	cin.getline(name,50);
	
	cout<<"Enter Your Address :" ;
	cin.ignore();
	cin.getline(add,100);
	
	cout<<"Select the Account type \n  (s) : Saving \t (c) : current : \n" ;
	cin>>y;
	
	cout<<"Enter Amount to Deposite :" ;
	cin>>balance;
	
	cout<<"Congrats!! Your Account Has Successfully Created \n Best Wishes \n" ;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-**-* \n";
	
}

void bank :: deposit_money(){
	int dcash;
	cout<<"Enter Ammount to Deposite : ";
	cin>>dcash;
	balance+=dcash;
	
	cout<<"Successful Deposition Done in Your Account of Rs. "<<dcash;
	cout<<"\nTotal Balance : "<< balance;
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-**-* \n";

	
}

void bank :: display_account(){
	cout<<"Account Holder's Name : "<<name;
	cout<<"\tYour Address : "<<add;
	cout<<"\tAccount Type : "<<y;
	cout<<"\tAmount Deposited : "<<balance;
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-**-* \n";

	
}

void bank :: withdraw_money(){
	float amt;
	cout<<"\n Withdraw : \n";
	cout<<"Enter Amount to Withdraw : " ;
	cin>>amt;
	balance-=amt;
	
	cout<<"Successful Withdrawl Done of Rs. "<<amt;
	cout<<"\nTotal balance : "<<balance;
		cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-**-* \n";

}




int main(){
	int i;
	char g, N,Y,n,y;
	bank obj;
	cout<<"\t WELCOME TO ONLINE BANKING SYSTEM \n";
	cout<<"\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
	do{
			
	cout<<"Please Select The Operation You Want to Perform \n";
	cout<<"1) Open Account \n";
	cout<<"2) Deposite Money \n";
	cout<<"3) Withdraw Money \n";
	cout<<"4) Display Account \n";
	cout<<"5) Exit \n\n";
	cin>>i;
	switch(i){
		case 1:cout<<"Form For Account Opening \n";
			obj.open_account();
			break;
		case 2:cout<<"Form For Money Depostipon \n";
			obj.deposit_money();
			break;
		case 3:cout<<"Form For Money Withdrawal\n";
			obj.withdraw_money();
			break;
		case 4:cout<<"Window For Account Details Display \n";
			obj.display_account();
			break;
		case 5:
			exit(1);
			break;
	default:
	cout<<"The Key Doesn't Exist \n";
	}
	
	cout<<"\n\nDo You Want To Continue ?\n";
	cout<<"Y : Yes \t N : No \n";
	cin>>g;
	if(g=='n' || g=='N')
	exit(0);
	}while(g=='y' || g=='Y');
	//getch();
	//cin>>g;

	return 0;
}



