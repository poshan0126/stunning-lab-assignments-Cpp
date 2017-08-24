#include<iostream>
  //#include<conio.h>
  //#include<stdio.h>
#include<string.h>
using namespace std;
class Account{
		char name[100];
      	int acc_no;
 	   	double balance;
	public:
   	Account();                  //Default constructor
      	void createAccount(int);     //Function Prototype
      	double deposit();            //Function Prototype
      	double withdraw();           //Function Prototype
      	void display();              //Function Prototype
};

Account :: Account(){              //Constructor Definition
	balance = 0;
}

//Function that creates account
void Account :: createAccount(int a){
	acc_no = a;
	cout << "Account Holder's name : ";
    cin >> name;
   cout << "---Account Created--- " << endl;
   cout << " Account name : " << name << endl;
   cout << "Account number : " << acc_no << endl;
}

//Function definition to deposit money
double Account :: deposit(){
double money;
cout << endl << " Amount to be deposited : ";
  cin >> money;
	balance = balance + money;
   cout << endl << " ---Cash deposited successfully---" << endl;
   return balance;
}

//Function that withdraws money
double Account :: withdraw(){
double money;
	cout << " Amount to be withdrawn :: ";
   cin >> money;
   if(money > balance)
   	cout << " NOT ENOUGH BALANCE " << endl;
   else{
   	cout << endl << "---Cash withdrawn successfully---"<< endl;
		balance = balance - money;
      }

   return balance;
}

void Account :: display(){  //Method to display account detail
	 cout << " NAME: " << name << endl;
   cout << " ACCOUNT NUMBER: " << acc_no << endl;
   cout << " CURENT BALANCE: " << balance << endl;
}

int main(){
   Account A[10];           //Creating Object
   int option,count = 0;
   do{
   	cout << endl << "------Choose Option-----" << endl << "1. Create Account" << endl;
   	cout << "2. Deposit Money" << endl << "3. Withdraw Money"
      	  << endl << "4. Show detail" << endl;
      cout << endl;
   	cin >> option;

   	switch(option){
        case 1:
      		{
            	count++;
			A[count].createAccount(count);          //Calling createAccount function
            		break;
         	}
      	case 2:
      		{
            	int d;
            	cout << "Enter Account Number: ";
               cin >> d;
               if( d < count)
            		A[d].deposit();   //Calling deposit function
               else
               	cout << "Account number NOT FOUND!!" ;
            	break;
         	}
      	case 3:
      		{
            	int w;
            	cout << "Enter Account Number: ";
               cin >> w;
               if( w < count)
            		A[w].withdraw();  //Calling withdraw function
               else
               	cout << "Account number NOT FOUND!!" ;

            	break;
         	}
         case 4:
         	{
            	cout << " Account Number: ";
               cin >> count;
               A[count].display();  //Calling display function
            }
      	default:
      		cout << "Choose Valid option. " <<endl;
         }
      count++;
   }
   while(option<5);

  // getch();
   return 0;
}
