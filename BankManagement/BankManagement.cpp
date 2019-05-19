#include<iostream>
#include<string.h>
#include<cstdlib>
#include<time.h>
class account
{
    char name[50];
    int age;
    unsigned int deposit;
    int pin;
    char type[50];
    char userid[50];
    char password[50];
    int acc_no;
    unsigned int balance;
    unsigned int amt;
    unsigned int withdraw;
    public:
    void Create_account();
    void Display_account() const;
    void Deposit_amount();
    int Withdraw_amount();
    void Balance_enquiry() const;
    void Modify_account();
    void Edit_profile();
    //void Delete_account();
    void Change_pwd();
}ac;
void account::Create_account()
{
    std::cout<<"Enter your name:"<<std::endl;
    std::cin>>name;
    std::cout<<"Enter your age:"<<std::endl;
    std::cin>>age;
    std::cout<<"Enter the type of account:"<<std::endl;
    std::cin>>type;
    std::cout<<"Create a User name:"<<std::endl;
    std::cin>>userid;
    std::cout<<"Create a password:"<<std::endl;
    std::cin>>password;
    std::cout<<"Your account number is:"<<std::endl;
    srand( time(NULL) );
    acc_no = 1000000+(rand()%3000000);
    std::cout<<acc_no<<std::endl;
    std::cout<<"Enter the initial amount:"<<std::endl;
    std::cin>>amt;
    std::cout<<"Congrats!! Your Account is successfully created"<<std::endl;


}

void account::Display_account() const
{
    //account ac;
    char pwd[50],loginId[50];
    std::cout<<"Enter your username:"<<std::endl;
    std::cin>>loginId;
    std::cout<<"Enter your password:"<<std::endl;
    std::cin>>pwd;
    if((strcmp(pwd,password)==0))
    {
        std::cout<<"*****Account Details*****"<<std::endl;
        std::cout<<"Name:"<<name<<std::endl;
        std::cout<<"Account No:"<<acc_no<<std::endl;
        std::cout<<"Account Type:"<<type<<std::endl;
        if(deposit==0)
          std::cout<<"Balance:"<<amt<<std::endl;
        else
          std::cout<<"Balance:"<<deposit<<std::endl;


    }
    else
    {
        std::cout<<"Wrong Password Try again!!"<<std::endl;
        ac.Display_account();
        
    }

}

void account::Deposit_amount()
{
    std::cout<<"Enter the amount to Deposit:"<<std::endl;
    std::cin>>deposit;
    deposit=amt+deposit;
    std::cout<<"Deposit Transaction done successfully"<<std::endl;

}

int account::Withdraw_amount()
{
    std::cout<<"Enter the amount to withdraw:"<<std::endl;
    std::cin>>withdraw;
    std::cout<<"Cash Dispensing..."<<std::endl;
    balance = deposit-withdraw;
    return balance;

}

void account::Balance_enquiry() const
{
    //account act;
    std::cout<<"Your account Balance is:"<<std::endl;
    if(withdraw==0)
    std::cout<<deposit;
    else
    std::cout<<balance;    
}

void account::Change_pwd()
{
    //account ac;
    char key[50],pkd[50];
    std::cout<<"Enter your original password:"<<std::endl;
    std::cin>>key;
    if((strcmp(key,password)==0))
    {
        std::cout<<"Enter New Password:"<<std::endl;
        std::cin>>password;
        std::cout<<"confirm Password:"<<std::endl;
        std::cin>>pkd;
        if((strcmp(pkd,password)==0))
        {
        std::cout<<"Your Password is successfully changed"<<std::endl;
        }
    }

    else
    {
        std::cout<<"Wrong Password!!Try Again"<<std::endl;
        ac.Change_pwd();

    }
}

void account::Edit_profile()
{
    //account et;
    char skey[50];
    std::cout<<"Enter your Password:"<<std::endl;
    std::cin>>skey;
    if((strcmp(skey,password)==0))
    {
        std::cout<<"Enter your name:"<<std::endl;
        std::cin>>name;
        std::cout<<"Enter your Age:"<<std::endl;
        std::cin>>age;

    }
    else
    {
        std::cout<<"Wrong Password!!Try Again"<<std::endl;
        ac.Edit_profile();

    }
}

void account::Modify_account()
{
    //account ac;
    int ma;
    std::cout<<"**Edit your Account**"<<std::endl;
    std::cout<<"1.Change the password"<<std::endl;
    std::cout<<"2.Edit your profile"<<std::endl;
    std::cin>>ma;
    switch(ma)
    {
        case 1: ac.Change_pwd();
                break;
        case 2: ac.Edit_profile();
                break;
        default:std::cout<<"Wrong option"<<std::endl; 
                ac.Modify_account();
                break;
    }
}

int main()
{
    //account ac;
    int ch;
    do{
    std::cout<<"Welcome to Net Banking"<<std::endl;
    std::cout<<"Choose the option"<<std::endl;
    std::cout<<"1.New Account"<<std::endl;
    std::cout<<"2.Display Account"<<std::endl;
    std::cout<<"3.Deposit amount"<<std::endl;
    std::cout<<"4.Withdraw amount"<<std::endl;
    std::cout<<"5.Balance enquiry"<<std::endl;
    std::cout<<"6.Modify account"<<std::endl;
    std::cout<<"Enter your choice:"<<std::endl;
    std::cin>>ch;
    switch(ch)
    {
        case 1: ac.Create_account();
                break;
        case 2: ac.Display_account();
                break;
        case 3: ac.Deposit_amount();
                break;
        case 4: ac.Withdraw_amount();
                break;
        case 5: ac.Balance_enquiry();
                break;
        case 6: ac.Modify_account();
                break;
        case 7: std::cout<<"Thank You"<<std::endl;
                break;
        default: std::cout<<"Wrong choice"<<std::endl;
                 break;
    }
    }while(ch!=7);
    
  return 0;
    
}