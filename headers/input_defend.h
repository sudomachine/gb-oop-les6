#ifndef INPUT_DEFEND_H
#define INPUT_DEFEND_H

#include <limits>
#include <iostream>

bool isValidNumber(const std::string& number)
{
    int i = 0;

    if (number[0] == '-' || number[0] == '+')
        i = 1;

    for (; i < number.size(); ++i)
    {
        if (!std::isdigit(number[i]))
            return false;
    }

    return true;
}

void clearConsole()
{
    // игнорировать остальные значения, введенные после первого через пробел
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
}

int inputOneInt()
{
    std::string input;

    entering:
    std::cout << "Enter some integer number\n>>";
    std::cin >> input;

    if (std::cin.get() != 10)
    {
        // если введено больше одного значения - ошибка
        std::cout << "You need to enter only one integer value!" << std::endl;
        clearConsole();
        goto entering;
    }

    if (!isValidNumber(input))
    {
        // если введено значение с символами, отличающимися от цифр - ошибка
        std::cout << "You need to enter only digital (integer) value!" << std::endl;
        goto entering;
    }

    return std::stoi(input);
}

#endif // INPUT_DEFEND_H
