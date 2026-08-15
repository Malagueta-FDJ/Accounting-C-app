#include <iostream>
#include <string>
class Value{
    double Size;            //Size of value
    std::string Account;    //Account: bank_1, bank_2, ... 
    std::string Pay_Method; //PIX, TED, Boleto, ...
    std::string Receiver;   //money receiver
    std::string Payer;      //money payer
public:
    Value() = default;
    ~Value() = default;

    void set_size(){};
    void get_size(){};
    void set_Account(){};
    void get_Account(){};
};

class Spent : public Value{
    std::string Spent_Nature;

};

class Earning : public Value{
    std::string Earning_Nature;

};

