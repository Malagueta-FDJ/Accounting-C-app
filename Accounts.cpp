#include <iostream>
#include <string>
#include "Accounts.h"

Account::Account(
    std::string Owner,
    std::string Entity, 
    long int Account_Id, 
    long int Branch_Number, 
    long int Bank_Id)
{};



void
Account::set_Owner(std::string Owner){
    this->Owner = Owner;
};

void
Account::set_Entity(std::string Entity){
    this->Entity = Entity;
};


void
Account::set_Account_Id(long int Id){
    Account_Id = Id;
};


void
Account::set_Branch(long int Branch){
    Branch_number = Branch;
};


void
Account::set_Bank_Id(long int Id){
    Bank_Id = Id;
};

