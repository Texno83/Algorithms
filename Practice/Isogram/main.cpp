#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    bool seen[26] = {false}; // Массив флагов для 26 букв алфавита
    bool is_isogram = true;
    for (unsigned char c : input) {
        if (isalpha(c)) {
            int idx = tolower(c) - 'a'; // Находим номер буквы от 0 до 25
            if (seen[idx]) { // Если буква уже встречалась
                is_isogram = false;
                break;
            }
            seen[idx] = true; // Отмечаем, что буква встретилась
        }
    }
    if (is_isogram) cout << "Isogram" << endl;
    else cout << "Not isogram" << endl;
    return 0;
}

/* Ответы на вопросы
 *
 * Какой фрагмент кода мог бы заменить функцию std::isalpha?
 * Условие проверки диапазона кодов символов: (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z').
 *
 * Как можно реализовать функцию std::tolower?
 * Если символ находится в диапазоне заглавных букв от A до Z, прибавить к нему разницу кодов: c = c + ('a' - 'A').
*/
