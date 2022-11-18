#include "include/CoffeeMachine.h"
#include <iostream>

int main()
{
    CoffeeMachine obj;
    obj.printPriceList();

    exchange coffee;

    coffee.coffee_name = "Ամերիկանո";
    coffee.price = 1000;
    obj.name_balance(coffee);

    coffee.coffee_name = "Լատե";
    coffee.price = 100;
    obj.name_balance(coffee);

    coffee.coffee_name = "Կապուչի";
    coffee.price = 500;
    obj.name_balance(coffee);

    coffee.coffee_name = "Կաթ";
    coffee.price = 170;
    obj.name_balance(coffee);

    coffee.coffee_name = "";
    coffee.price = 200;
    obj.name_balance(coffee);

    coffee.coffee_name = "Տաք Շոկոլադ";
    coffee.price = 150;
    obj.name_balance(coffee);

    return 0;
}