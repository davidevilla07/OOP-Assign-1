#include <iostream>
#include <cstdlib>



// Group Members:
// Darwin Dallas 2101012479
// David Samuels 2101012913


using namespace std;

float account_no= rand();
char ans;
double dep_amount;
double with_amount;
class Account {
private:
double init_balance;

public:
    Account() : init_balance (1000) {}
    Account(double init_bal) : init_balance (init_bal) {} //paramatorized constructor
    void setBalance(double init_bal) {init_balance = init_bal;}
    double getBalance () {return init_balance;}
    void Deposit(){


    cout<<"\n\n\t\t\t\tEnter the amount you wish to deposit: $ ";
    cin>>dep_amount;
    init_balance+=dep_amount;

    cout<<"\n\n\t\t\t\tDeposit Successful, your total balance is: $ "<<init_balance << endl;
    }
    void Withdraw(){


    cout<<"\n\n\t\t\t\tEnter the amount you wish to withdraw: $ ";
    cin>>with_amount;


    if (with_amount>init_balance){
        cout<<"\n\n\t\t\t\tDebit amount exceeded account balance!!! \n \n";
    } else{
        init_balance-=with_amount;

    }
    cout<<"\n\n\t\t\t\tTotal Balance is: $ "<<init_balance<<endl;
    }
};
// *************************int main**********************************************
int main()
{

double init_bal;
    Account acc;

    acc.setBalance(1000);

    int pin;
    int password = 1234;
    int count = 0;
    bool isTrue = true; // boolean expression testing if the scenario is true
int entry = 1;

    cout<< "\n\n\t\t\t\t*---------------------------------------------*"<<endl;
    cout<< "\t\t\t\t*          Welcome to XYZ Bank ATM            *"<<endl;
    cout<< "\t\t\t\t*   Please insert your card and press enter   *"<<endl;
    cout<< "\t\t\t\t*---------------------------------------------*"<<endl;

    getc(stdin);
   // system("pause");

    system ("cls");

    cout<< "\n\n\n\t\t\t\tPlease wait, your card is initializing";

        for (int i=0; i<3;i++)
        {
            for (int i=0; i<2;i++)
            {

            _sleep(800);
            cout<<".";
            }
        }
        system("cls");

    cout<< "\n\n\t\t\t\t*-------------------------------------------*"<<endl;
    cout<< "\t\t\t\t*    Please enter your pin and press enter  *"<< endl;
    cout<< "\t\t\t\t*-------------------------------------------*\t\t"<<endl;


    cin >> pin; // pin that has been intialized already (1234)

    system ("cls");

     cout<< "\n\n\n\t\t\t\tPlease wait, your pin is being verified";  //pin verification

        for (int i=0; i<4;i++)
        {
            for (int i=0; i<3;i++)
            {

            _sleep(300);
            cout<<".";
            }
        }
        system("cls");

        if(pin!=1234)
        {
                cout<<"\n\n\t\t\t\t\tInvalid Pin!";  //invalid pin message

                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;
                cout<< "\t\t\t\t*    Thank for using XYZ banking       *"<< endl;
                cout<< "\t\t\t\t*                                      *"<< endl;
                cout<< "\t\t\t\t*    Please take your card             *"<< endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;

                return 0;

        }
        else{


    while (entry!=0){ // loop starting with the display screen and options


    cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;   //main menu
    cout<< "\t\t\t\t*   1.Deposit                          *"<<endl;
    cout<< "\t\t\t\t*   2.Withdraw                         *"<<endl;
    cout<< "\t\t\t\t*   3.Account Enquiry                  *"<<endl;
    cout<< "\t\t\t\t*   4.Exit                             *"<<endl;
    cout<< "\t\t\t\t*--------------------------------------*"<<endl;

    cout<< "\t\t\t\t*--------------------------------------*"<<endl;
    cout<< "\t\t\t\t*   Please select one of the options   *"<<endl;
    cout<< "\t\t\t\t*--------------------------------------*"<<endl;
            cin >> entry;
            system("cls");

        switch(entry) //function that allows the user to select cases or other layers of code
        {
            case 1://deposit to account
                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;
                cout<< "\t\t\t\t*    Deposit to account was selected   *"<< endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;


                acc.Deposit();

                cout<< "\n\n\t\t\t\tWould you like a receipt? 'y' for yes 'n' for no"<<endl;
                cin>>ans;

                if (ans=='y')
                {
                    system ("cls");
                      cout<< "\n\n\n\t\t\t\tPrinting Receipt"; //printing of receipt message

                        for (int i=0; i<4;i++)
                            {
                            for (int i=0; i<3;i++)
                                {

                                _sleep(400);
                                cout<<".";
                                }
                            }



        system("cls");
                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;  //printed receipt
                cout<< "\t\t\t\t*           RECEIPT                    *"<< endl;
                cout<< "\t\t\t\t*    XYZ BANK ATM                      *"<< endl;
                cout<< "\t\t\t\t*    12 BRONZ ROAD, KGN 12             *"<< endl;
                cout<< "\t\t\t\t     Account No.: "<< account_no<<endl;
                cout<< "\t\t\t\t     Trans. No.: "<< rand()<<endl;
                cout<< "\t\t\t\t                                     "<< endl;
                cout<< "\t\t\t\t                                      "<< endl;
                cout<< "\t\t\t\t     Deposited: $"<<dep_amount<<endl;
                cout<< "\t\t\t\t     Available Balance: $"<<acc.getBalance ()<<endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;
                system ("pause");
                system("cls");

                }
                else{
                    system ("cls");
                }
            break;
            case 2:
                cout<< "\n\n\t\t\t\t*-----------------------------------------*"<<endl;
                cout<< "\t\t\t\t*    Withdraw from account was selected   *"<< endl;
                cout<< "\t\t\t\t*-----------------------------------------*"<<endl;


                acc.Withdraw();
                  cout<< "\n\n\t\t\t\tWould you like a receipt? 'y' for yes 'n' for no"<<endl;
                cin>>ans;

                if (ans=='y')
                {
                    system ("cls");
                      cout<< "\n\n\n\t\t\t\tPrinting Receipt"; //printing of receipt message

                        for (int i=0; i<4;i++)
                            {
                            for (int i=0; i<3;i++)
                                {

                                _sleep(400);
                                cout<<".";
                                }
                            }


        system("cls");
                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;  //printed receipt
                cout<< "\t\t\t\t*           RECEIPT                    *"<< endl;
                cout<< "\t\t\t\t*    XYZ BANK ATM                      *"<< endl;
                cout<< "\t\t\t\t*    12 BRONZ ROAD, KGN 12             *"<< endl;
                cout<< "\t\t\t\t     Account No.: "<<   account_no<<endl;
                cout<< "\t\t\t\t     Trans. No.: "<<   rand()<<endl;
                cout<< "\t\t\t\t                                     "<< endl;
                cout<< "\t\t\t\t                                    "<< endl;
                cout<< "\t\t\t\t     Withdrawn: $"<<with_amount<<endl;
                cout<< "\t\t\t\t     Available Balance: $"<<acc.getBalance ()<<endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;

                system ("pause");
                system("cls");
                }
                 else{
                    system ("cls");
                }
            break;
            case 3:
                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;
                cout<< "\t\t\t\t*    Account Enquiry was selected      *"<< endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;

                cout <<"\n\t\t\t\tYour Current Balance is: "<<acc.getBalance ()<<endl;

                cout<< "\n\n\t\t\t\tWould you like a receipt? 'y' for yes 'n' for no"<<endl;
                cin>>ans;

                if (ans=='y')
                {
                    system ("cls");
                      cout<< "\n\n\n\t\t\t\tPrinting Receipt";

                        for (int i=0; i<4;i++)
                            {
                            for (int i=0; i<3;i++)
                                {

                                _sleep(400);
                                cout<<".";
                                }
                                }
        system("cls");
                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;
                cout<< "\t\t\t\t*           RECEIPT                    *"<< endl;
                cout<< "\t\t\t\t*    XYZ BANK ATM                      *"<< endl;
                cout<< "\t\t\t\t*    12 BRONZ ROAD, KGN 12             *"<< endl;
                cout<< "\t\t\t\t     Account No.: "<< account_no<<endl;
                cout<< "\t\t\t\t     Trans. No.: "<< rand()<<endl;
                cout<< "\t\t\t\t                                     "<< endl;
                cout<< "\t\t\t\t                                      "<< endl;
                cout<< "\t\t\t\t     Available Balance: $"<<acc.getBalance ()<<endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;

                system ("pause");
                system("cls");
                }


                 else{
                    system ("cls");
                }
            break;
            case 4:
                cout<< "\n\n\t\t\t\t*--------------------------------------*"<<endl;
                cout<< "\t\t\t\t*    Thank for using XYZ banking       *"<< endl;
                cout<< "\t\t\t\t*                                      *"<< endl;
                cout<< "\t\t\t\t*    Please take your card             *"<< endl;
                cout<< "\t\t\t\t*--------------------------------------*"<<endl;

                return 0;
            break;
      }
    }
        }


return 0;
}


