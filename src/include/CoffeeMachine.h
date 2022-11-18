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
        int index;
        bool flag;
        const std::string names[10];
        const int prices[10];
        std::string input_name;
        std::string input_price;
    public:
        CoffeeMachine();
        void printPriceList();
        void check_product(std::string);
        void check_price(int);
        void add_to_balance(int);
        exchange name_balance(exchange&);
};




#endif //__CoffeeMachine_H__