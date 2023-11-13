
#include <iostream>
using namespace std;

void showMenu() {

    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "************************" << endl;

}

int main() {

    // Check Balance, Deposit, Withdraw, Show Menu

    int option;

    showMenu();
    cout << "Option: ";
    cin >> option;

    system("pause>0");
}
