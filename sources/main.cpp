
#include "custom_manipulator.h"
#include "input_defend.h"

/*
 * 1. Создать программу, которая считывает целое число типа int.
 * И поставить «защиту от дурака»: если пользователь вводит что-то
 * кроме одного целочисленного значения, нужно вывести сообщение
 * об ошибке и предложить ввести число еще раз.
 *
 * Пример неправильных введенных строк:
 * rbtrb
 * nj34njkn
 * 1n
 * */

/*
 * 2. Создать собственный манипулятор endll для стандартного потока вывода,
 * который выводит два перевода строки и сбрасывает буфер.
 * */

int main()
{
    std::cout << "ONE NUMBER ENTERING \n(0 - exit)" << std::endl;

    int number = 0;
    while (true)
    {
        number = inputOneInt(); // USING INPUT DEFEND

        std::cout << "ONE INTEGER: " << number << endll; // USING CUSTOM MANIPULATOR endll

        switch (number) {
        case 0:
            std::cout << "Exit..." << std::endl;
            return 0;
        default:
            break;
        }
    }

    return 0;
}
