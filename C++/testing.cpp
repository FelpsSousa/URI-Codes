#include <iostream>
#include <iomanip>

int main() {
    double valor;
    std::cin >> valor;

    int notas100 = valor / 100;
    valor -= notas100 * 100;

    int notas50 = valor / 50;
    valor -= notas50 * 50;

    int notas20 = valor / 20;
    valor -= notas20 * 20;

    int notas10 = valor / 10;
    valor -= notas10 * 10;

    int notas5 = valor / 5;
    valor -= notas5 * 5;

    int notas2 = valor / 2;
    valor -= notas2 * 2;

    int moedas1 = valor / 1;
    valor -= moedas1 * 1;

    int moedas50 = valor / 0.5;
    valor -= moedas50 * 0.5;

    int moedas25 = valor / 0.25;
    valor -= moedas25 * 0.25;

    int moedas10 = valor / 0.10;
    valor -= moedas10 * 0.10;

    int moedas5 = valor / 0.05;
    valor -= moedas5 * 0.05;

    int moedas1cent = valor / 0.01;

    std::cout << "NOTAS:" << std::endl;
    std::cout << notas100 << " nota(s) de R$ 100.00" << std::endl;
    std::cout << notas50 << " nota(s) de R$ 50.00" << std::endl;
    std::cout << notas20 << " nota(s) de R$ 20.00" << std::endl;
    std::cout << notas10 << " nota(s) de R$ 10.00" << std::endl;
    std::cout << notas5 << " nota(s) de R$ 5.00" << std::endl;
    std::cout << notas2 << " nota(s) de R$ 2.00" << std::endl;

    std::cout << "MOEDAS:" << std::endl;
    std::cout << moedas1 << " moeda(s) de R$ 1.00" << std::endl;
    std::cout << moedas50 << " moeda(s) de R$ 0.50" << std::endl;
    std::cout << moedas25 << " moeda(s) de R$ 0.25" << std::endl;
    std::cout << moedas10 << " moeda(s) de R$ 0.10" << std::endl;
    std::cout << moedas5 << " moeda(s) de R$ 0.05" << std::endl;
    std::cout << moedas1cent << " moeda(s) de R$ 0.01" << std::endl;

    return 0;
}
