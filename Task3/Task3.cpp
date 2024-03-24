#include <iostream>

struct addres
{
    std::string City;
    std::string Street;
    int House_number;
    int Appartment_number;
    int Index;
};

void Print_addres(addres& a)
{
    std::cout << "City:" << a.City << "\n";
    std::cout << "Street:" << a.Street << "\n";
    std::cout << "House_number:" << a.House_number << "\n";
    std::cout << "Appartment_number:" << a.Appartment_number << "\n";
    std::cout << "Index:" << a.Index << "\n\n";
}
// Не понял задания поэтому сделал две реализации

/*int main(int argc, char** argv)
{
    addres a;
    std::cout << "City: \n";
    std::cin >> a.City;
    std::cout << "Street: \n";
    std::cin >> a.Street;
    std::cout << "House_number: \n";
    std::cin >> a.House_number;
    std::cout << "Appartment_number: \n";
    std::cin >> a.Appartment_number;
    std::cout << "Index: \n\n";
    std::cin >> a.Index;
    Print_addres(a);
    return 0;
}*/



int main(int argc, char** argv)
{
    addres a;
    a.City = "Moscow";
    a.Street = "Arbat";
    a.House_number = 12;
    a.Appartment_number = 8;
    a.Index = 123456;
    Print_addres(a);
    a.City = "Izhevsk";
    a.Street = "Pushkina";
    a.House_number = 59;
    a.Appartment_number = 143;
    a.Index = 953769;
    Print_addres(a);
    return 0;
}