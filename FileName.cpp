//3.1

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>

/// <summary>
/// Вычисляет сумму двух целых чисел.
/// </summary>
/// <param name="a">Первое слагаемое.</param>
/// <param name="b">Второе слагаемое.</param>
/// <returns>Сумма чисел a и b.</returns>
int AddNumbers(int a, int b) {
    return a + b;
}

/// <summary>
/// Формирует приветственное сообщение для указанного имени.
/// </summary>
/// <param name="name">Имя пользователя.</param>
/// <returns>Строка приветствия.</returns>
/// <example>
/// <code>
/// std::string msg = GreetUser("Анна");
/// std::cout << msg << std::endl; // Выведет: Привет, Анна!
/// </code>
/// </example>
std::string GreetUser(const std::string& name) {
    return "Привет, " + name + "!";
}

/// <summary>
/// Проверяет, является ли число положительным.
/// </summary>
/// <param name="number">Проверяемое число.</param>
/// <returns>True, если число больше нуля, иначе False.</returns>
/// <remarks>
/// Ноль не считается положительным числом.
/// </remarks>
bool IsPositive(int number) {
    return number > 0;
}

/// <summary>
/// Находит максимальный элемент в векторе целых чисел.
/// </summary>
/// <param name="numbers">Вектор целых чисел.</param>
/// <returns>Максимальное значение в векторе.</returns>
/// <exception cref="std::invalid_argument">Выбрасывается, если вектор пуст.</exception>
int FindMax(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::invalid_argument("Вектор не может быть пустым.");
    }
    int maxVal = numbers[0];
    for (int num : numbers) {
        if (num > maxVal) maxVal = num;
    }
    return maxVal;
}

/// <summary>
/// Преобразует строку в верхний регистр.
/// </summary>
/// <param name="input">Исходная строка.</param>
/// <returns>Строка в верхнем регистре.</returns>
/// <seealso cref="AddNumbers"/>
std::string ToUpperCase(std::string input) {
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    return input;
}

int main() {
    A
    std::cout << "Сумма: " << AddNumbers(5, 10) << std::endl;
    std::cout << "Приветствие: " << GreetUser("Иван") << std::endl;
    std::cout << "Число положительное: " << (IsPositive(-5) ? "Да" : "Нет") << std::endl;

    std::vector<int> arr = { 1, 5, 3, 9, 2 };
    std::cout << "Максимум в массиве: " << FindMax(arr) << std::endl;
    std::cout << "Верхний регистр: " << ToUpperCase("hello") << std::endl;

    return 0;
}


//3.2
//отредактированный код
#include <iostream>

namespace Lab3
{
    /// <summary>
    /// Класс для демонстрации соглашений о кодировании.
    /// </summary>
    class MyClass
    {
    private:
        // Приватное поле с префиксом _ и в camelCase
        int _value;

    public:
        /// <summary>
        /// Устанавливает значение, если оно положительное.
        /// </summary>
        /// <param name="inputValue">Входное значение.</param>
        void SetValue(int inputValue)
        {
            // Отступы в 4 пробела, фигурные скобки на новой строке (стиль Allman)
            if (inputValue > 0)
            {
                _value = inputValue;
                std::cout << "Значение установлено: " << _value << std::endl;
            }
        }
    };
}