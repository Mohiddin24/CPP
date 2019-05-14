#include<iostream>
#include<string.h>
#include<cstdlib>
#include<time.h>
class account
{
    char name[50];
    int age;
    int deposit;
    int pin;
    char type[50];
    char userid[50];
    char password[50];
    int acc_no;
    public:
    void Create_account();
    void Display_account() const;
    void Deposit_amount(int);
    void Withdraw_amount(int);
    void Balance_enquiry() const;
    void modify_account();
    void delete_account();
};
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
    std::cin>>deposit;
    std::cout<<"Congrats!! Your Account is successfully created"<<std::endl;


}

void account::Display_account() const
{
    account ac;
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
        std::cout<<"Balance:"<<deposit<<std::endl;

    }
    else
    {
        std::cout<<"Wrong Password Try again!!"<<std::endl;
        ac.Display_account();
        

    }

}

int main()
{
    account ac;
    int ch;
    do{
    std::cout<<"Welcome to Net Banking"<<std::endl;
    std::cout<<"Choose the option"<<std::endl;
    std::cout<<"1.New Account"<<std::endl;
    std::cout<<"2.Display Account"<<std::endl;
    std::cin>>ch;
    switch(ch)
    {
        case 1: ac.Create_account();
                break;
        case 2: ac.Display_account();
                break;
        case 3: std::cout<<"Thank You"<<std::endl;
                break;
        default: std::cout<<"Wrong choice"<<std::endl;
                 break;
    }
    }while(ch!=3);
    
  
    
}