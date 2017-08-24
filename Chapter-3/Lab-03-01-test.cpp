#include<iostream>
//#include<conio.h>
using namespace std;

class Account{
		char name[100];
      	int accountNo;
 	   	double balance;
	public:
        Account();                  //Default constructor
      	void createAccount(int);     //Function Prototype
      	void deposit();
      	void withdraw();
      	void display();
};

Account :: Account(){ balance = 0.0;}


void Account :: createAccount(int num){
	accountNo = num;
	cout << "Account Holder's name : ";
    cin >> name;
    cout << "---Account Created--- " << endl;
    cout << "Account name : " << name << endl;
    cout << "Account number : " << accountNo << endl;
}

void Account :: deposit(){
double money;
  cout <<" Amount to be deposited : ";
  cin >> money;
	balance += money;
   cout"\t\t\t---Cash deposited successfully---\n" << endl;
   return balance;
}

void Account :: withdraw(){
    double money;
	cout << " Amount to be withdrawn :: ";
    cin >> money;
        cout << endl << "\t\t\t---Cash withdrawn successfully---"<< endl;
        balance -= money;
}

void Account :: display(){
	 cout << " NAME: " << name;
     cout << "\n ACCOUNT NUMBER: " << accountNo;
     cout << "\n Total Amount: " << balance;
}

int main(){
   Account A[10];
   int choice, count = 0;
   do{
   cout << "\t\t\t***Menu***\n";
   cout << "\t\t\t1. Create Account.\n";
   cout << "\t\t\t2. Deposit.\n";
   cout << "\t\t\t3. Withdraw.\n";
   cout << "\t\t\t4. Details.\n";
   cout << "\t\t\t5. Exit.\n";

   	switch(choice){
        case 1:
            {   A[count].createAccount(count);
                count++;
                break;
      	case 2: int acc;
            	cout << "Enter Account Number: ";
                cin >> acc;
               if( acc < count)
            		A[acc].deposit();
               else
                    cout << "Account number NOT FOUND!!" ;
            	break;
      	case 3: int acc;
            	cout << "Enter Account Number: ";
               cin >> ac;
               if( acc < count)
            		A[acc].withdraw()
               else
               	cout << "Account number NOT FOUND!!" ;
               	break;

         case 4:int acc;
                cout << " Account Number: ";
                cin >> acc;
                A[acc].display();
                break;
        case 5: break;
        default:
      		cout << "Choose Valid option. " <<endl;
         }
   }
   while(1);

  //getch();
   return 0;
}
