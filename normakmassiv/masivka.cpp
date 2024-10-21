#include <iostream>
#include <windows.h>


int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    int first;
    std::cout << "введите число:\n";
    std::cin >> size;
    std::cout << "ваше число через м€сорубку\n";
    std::cin >> first;
    int** arr = new int* [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = first;
            first *= 2;
            std::cout << arr[i][j];
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    const int a = 2;
    const int b = 4;
    int num[a][b] = {};
    std::cout << "¬ведите число: ";
    std::cin >> num[0][0];
    for (int t = 0; t < a; t++)
    {
        for (int i = 1; i < b; i++)
        {
            num[t][i] = (t * a) + (i + (num[0][0] - 1)) + 1;
        }
    }
    for (int t = 0; t < a; t++)
    {
        for (int i = 0; i < b; i++)
        {
            std::cout <<  num[t][i];
        }
    }
    return 0;
}