#include <iostream>
#include <string>

class Account{
    std::string Owner;          //Name of the account owner
    std::string Entity;    //Name of the banking Entity
    long int Account_Id;        //Account Identification number
    long int Branch_number;     //Bank branch_number
    long int Bank_Id;           //Bank Identification number

public:
    Account(
        std::string Owner,
        std::string Entity, 
        long int Account_Id, 
        long int Branch_Number, 
        long int Bank_Id);
    ~Account();

//setters:
    void set_Owner(std::string Owner);
    void set_Entity(std::string Entity);
    void set_Account_Id(long int Id);
    void set_Branch(long int Branch);
    void set_Bank_Id(long int Id);

//getters
    std::string get_Owner(){};
    std::string get_Entity(){};
    long int get_Account_Id(){};
    long int get_Branch(){};
    long int get_Bank_Id(){};

};
