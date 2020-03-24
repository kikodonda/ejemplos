// Lectura de un archivo de texto plano y ponerlo en un array secuencialmente

#include <iostream>
#include <fstream>
#include <vector>

void data()
{
    if (std::ofstream o{"test.txt"})
    {
        o << 7441781 << ' ' << 7860172 << ' ' << -7325677 << '\n';
        o << -3991040 << ' ' << 2767400 << ' ' << -5089157 << '\n';
        o << 9266561 << ' ' << 9256845 << ' ' << -8274370 << '\n';
    }
}

int main()
{
    data();

    std::vector<int> numeros1, numeros2, numeros3;

    for (std::ifstream o{"test.txt"}; o;)
    {
        int numero;

        if (o >> numero)
            numeros1.push_back(numero);
        if (o >> numero)
            numeros2.push_back(numero);
        if (o >> numero)
            numeros3.push_back(numero);
    }

    std::cout << "\nnumeros1: ";
    for (const auto &n : numeros1)
        std::cout << n << ' ';

    std::cout << "\nnumeros2: ";
    for (const auto &n : numeros2)
        std::cout << n << ' ';

    std::cout << "\nnumeros3: ";
    for (const auto &n : numeros3)
        std::cout << n << ' ';

    return 0;
}