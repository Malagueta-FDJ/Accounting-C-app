#include <iostream>
#include <string>
#include "values.h"

Value::Value(
        float modulus,
        unsigned long int IdRec, 
        unsigned long int IdPay,
        std::string Method){
            set_size(modulus);
            set_Reciever_Id(IdRec);
            set_Payer_Id(IdPay);
            set_Pay_Method(Method);
        };

//setters:
void
Value::set_size(float modulus){
    Size = modulus;
};

void
Value::set_Reciever_Id(unsigned long int IdRec){
    Receiver_Id = IdRec;
};

void
Value::set_Payer_Id(unsigned long int idPay){
    Payer_Id = idPay;
};

void
Value::set_Pay_Method(std::string method){
    Pay_Method = method;
};



//getters
double
Value::get_size(){
    return Size;
};

unsigned long int 
Value::get_Reciever_Id(){
    return Receiver_Id;
};

unsigned long int 
Value::get_Payer_Id(){
    return Payer_Id;
};

std::string 
Value::get_Pay_Method(){
    return Pay_Method;
};