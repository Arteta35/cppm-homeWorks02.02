
#include <iostream>

struct bank_account {

    int number_account = 0000000;
    std::string name = "Default";
    double balance = 0.0;
};

void new_balance(bank_account& ac, double new_bal) {

    ac.balance = new_bal;
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    bank_account ac;

    double new_bal = 0.0;

    std::cout << "Введите номер счета: ";

    std::cin >> ac.number_account;
    
    std::cout << std::endl << "Введите имя владельца: ";

    std::cin >> ac.name;

    std::cout << std::endl << "Введите баланс: ";

    std::cin >> ac.balance;

    std::cout << std::endl << "Введите новый баланс: ";

    std::cin >> new_bal;

    new_balance(ac, new_bal);

    std::cout << std::endl << "Ваш счет: " << ac.name << ", " << ac.number_account << ", " << ac.balance << std::endl;

    return 0;
        
}
