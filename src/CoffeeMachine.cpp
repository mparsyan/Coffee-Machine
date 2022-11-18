#include "include/CoffeeMachine.h"
#include <iostream>
#include <string>

CoffeeMachine::CoffeeMachine()
    : names{"Սև սուրճ", "Ամերիկանո", "Կապուչինո", "Մոկաչինո", "Լատե", "Նեսկաֆե", "Տաք Շոկոլադ", "Կաթ", "Թեյ", "Դատարկ Բաժակ"}
    , prices{100, 100, 200, 250, 250, 100, 200, 100, 100, 50}
    , balance{0}
{}
void CoffeeMachine::printPriceList()
{
    std::cout << "=========================================\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << names[i] << " - " << prices[i] << "֏\n";
    }
    std::cout << "=========================================\n";
}

exchange CoffeeMachine::name_balance(exchange& order)
{
    for (int i = 0; i < 10; i++)
    {
        if (names[i] == order.coffee_name)
        {
            if (order.price >= prices[i])
            {
               order.price -= prices[i];
               std::cout << "Ձեր պատվերը պատրաստ է:)\nՁեր մանրն է " << order.price << "֏\n=========================================\n"; 
            }
            else
            {
                std::cout << "Դուք չունեք բավարար գումար\n=========================================\n";
            }
            return order;
        }
    }
    std::cout << "Խնդրում եմ մուտքագրեք ճիշտ անվանում\n=========================================\n";
    return order;
}