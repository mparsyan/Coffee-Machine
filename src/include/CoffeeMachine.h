#ifndef __CoffeeMachine_H__
#define __CoffeeMachine_H__

#include <string>

struct exchange
{
    std::string coffee_name;
    unsigned int price;
};

class CoffeeMachine
{
    private:
        int balance;
        const std::string names[10];
        const int prices[10];
    public:
        CoffeeMachine();
        void printPriceList();
        exchange name_balance(exchange&);
};

#endif //__CoffeeMachine_H__