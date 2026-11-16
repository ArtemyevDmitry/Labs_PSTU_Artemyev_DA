#include <iostream>
  //библиотеки 
using namespace std;

// Функция Gets(s) для поиска самого длинного и короткого слов
void Gets(char s[])
{
    int maxLen = 0, minLen = 256;
    int maxStart = 0, minStart = 0;//начальные значения
    int i = 0;

    while (s[i] != '\0' && s[i] != '.')// работает до тех пор пока не встретит конец текста
    {
        if (s[i] == ' ')//если пробел, то идем дальше до начала слова
        {
            i++;
        }
        else// иначе считаем количество букв в слове
        {
            int start = i;
            int len = 0;
    
            while (s[i] != ' ' && s[i] != '.' && s[i] != '\0')
            {
                len++;
                i++;
            }
    
            if (len > maxLen)
            {
                maxLen = len;
                maxStart = start;
            }
    
            if (len < minLen)
            {
                minLen = len;
                minStart = start;
            }
        }
    }

    cout << "Max word: ";
    for (int j = maxStart; j < maxStart + maxLen; j++)
        cout << s[j];

    cout << endl;

    cout << "Min word: ";// вывод
    for (int j = minStart; j < minStart + minLen; j++)
        cout << s[j];

}

int main()
{
    char s[256];

    cin.getline(s, 256);

    Gets(s);

    return 0;
}