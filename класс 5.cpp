//вариант 18
#include <iostream>
#include <string>
 
using namespace std; 
int main()
{
	setlocale(LC_ALL, "Russian");
    string str;
    cout << "Введите строку:" << endl;
    getline(cin, str);
    if (!(str.size() % 2)) str.erase(0, str.find(' '));
    cout << "Искомая строка:" << endl << str << endl;
    cin.get();
    return 0;
}
