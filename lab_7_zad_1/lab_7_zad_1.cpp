#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
    char c;
    cout << "Введите C:";
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        cout << "lat" << " ";
    else if (c >= '1' && c <= '9')
        cout << "digit";
    else
        cout << "unknown";
    return 0;
}
