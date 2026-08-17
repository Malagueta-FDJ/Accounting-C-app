#include <iostream>
#include <string>

class Account{
    long int CL_number;             //Account identification number in the archive
    std::string Owner;              //Name of the account owner
    std::string Entity;             //Name of the banking Entity
    unsigned long int Account_Id;   //Account Identification number
    long int Branch_number;         //Bank branch_number
    long int Bank_Id;               //Bank Identification number

public:
    Account(
        std::string Owner,
        std::string Entity, 
        unsigned long int Account_Id, 
        long int Branch_Number, 
        long int Bank_Id);
    ~Account() = default;

//setters:
    void set_Owner(std::string Owner);
    void set_Entity(std::string Entity);
    void set_Account_Id(unsigned long int Id);
    void set_Branch(long int Branch);
    void set_Bank_Id(long int Id);

//getters
    std::string get_Owner();
    std::string get_Entity();
    unsigned long int get_Account_Id();
    long int get_Branch();
    long int get_Bank_Id();

};
