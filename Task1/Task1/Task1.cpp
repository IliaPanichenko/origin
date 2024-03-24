#include <iostream>

enum months
{
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december,
};

int main(int argc, char** argv)
{
    int Value;
    do 
    {
        std::cout << "Input month number: ";
        std::cin >> Value;
        months month = static_cast<months>(Value);
        switch (month)
        {
        case 0: std::cout << "The end" << "\n"; break;
        case (january): std::cout << "january" << "\n"; break;
        case (february): std::cout << "february" << "\n"; break;
        case (march): std::cout << "march" << "\n"; break;
        case (april): std::cout << "april" << "\n"; break;
        case (may): std::cout << "may" << "\n"; break;
        case (june): std::cout << "june" << "\n"; break;
        case (july): std::cout << "july" << "\n"; break;
        case (august): std::cout << "august" << "\n"; break;
        case (september): std::cout << "september" << "\n"; break;
        case (october): std::cout << "october" << "\n"; break;
        case (november): std::cout << "november" << "\n"; break;
        case (december): std::cout << "december" << "\n"; break;
        default: std::cout << "Wrong value" << "\n"; break;
        }
    } while (Value != 0);
    return 0;
}

