#include <iostream>

struct data
{
    int number;
    std::string name;
    float money;
};

void change_money(data & d)
{
    std::cout << "Input new amount: \n";
    std::cin >> d.money;
}

int main(int argc, char ** argv)
{
    std::cout << "Input invoice number: \n";
    data d;
    std::cin >> d.number;
    std::cout << "Input name: \n";
    std::cin >> d.name;
    std::cout << "Input amount: \n";
    std::cin >> d.money;
    change_money(d);
    std::cout << "Your account: " << d.number << ", " << d.name << ", " << d.money << "\n";
    return 0;
}

