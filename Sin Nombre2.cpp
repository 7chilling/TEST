#include <iostream>
#include <string>

using namespace std;

int main() {
    string mail, pass;

    cout << "Ingrese sus datos de inicio de sesión: " << endl;
    cout << "Mail: ";
    cin >> mail;

    cout << "Pass: ";
    cin >> pass;

    cout << "\nDatos de inicio de sesion \nMail: " << mail << endl;
    cout << "Pass: " << pass << endl;

    return 0;
}

