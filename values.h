#include <iostream>
#include <string>

class Value{
    float Size;                 //Size of value, Modulus
    long int Receiver_Id;       //Account_Id from the receiver
    long int Payer_Id;          //Account_Id from the payer
    std::string Pay_Method;     //PIX, TED, Boleto, ...
public:
    Value(
        float modulus,
        unsigned long int IdRec, 
        unsigned long int IdPay,
        std::string Method);
    ~Value() = default;

//setters:
    void set_size(float modulus){};
    void set_Reciever_Id(unsigned long int Id){};
    void set_Payer_Id(unsigned long int Id){};
    void set_Pay_Method(std::string Method){};

//getters:
    double get_size(){};
    unsigned long int get_Reciever_Id(){};
    unsigned long int get_Payer_Id(){};
    std::string get_Pay_Method(){};
    
};

class Spent : public Value{
    std::string Spent_Nature;

};

class Earning : public Value{
    std::string Earning_Nature;

};

