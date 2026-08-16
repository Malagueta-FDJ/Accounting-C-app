#include <iostream>
#include <string>
#include "Accounts.h"

//Ctor uses setters to initialize members
Account::Account(
    std::string Owner,
    std::string Entity, 
    unsigned long int Account_Id, 
    long int Branch_Number, 
    long int Bank_Id){
    set_Owner(Owner);
    set_Entity(Entity);
    set_Account_Id(Account_Id);
    set_Branch(Branch_Number);
    set_Bank_Id(Bank_Id);
};

//setters
void
Account::set_Owner(std::string Owner){
    this->Owner = Owner;
};

void
Account::set_Entity(std::string Entity){
    this->Entity = Entity;
};

void
Account::set_Account_Id(unsigned long int Id){
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



//getters:
std::string 
Account::get_Owner(){
    return Owner;
};

std::string 
Account::get_Entity(){
    return Entity;
};

unsigned long int 
Account::get_Account_Id(){
    return Account_Id;
};

long int 
Account::get_Branch(){
    return Branch_number;
};

long int 
Account::get_Bank_Id(){
    return Bank_Id;
};