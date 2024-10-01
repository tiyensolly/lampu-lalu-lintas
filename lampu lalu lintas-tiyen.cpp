#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int lampu = rand() % 3 + 1;
    switch (lampu) {
        case 1:
            cout << "Lampu lalu lintas berwarna merah" << endl;
            cout << "Berhenti!" << endl;
            break;
        case 2:
            cout << "Lampu lalu lintas berwarna kuning" << endl;
            cout << "Hati-hati!" << endl;
            break;
        case 3:
            cout << "Lampu lalu lintas berwarna hijau" << endl;
            cout << "Silahkan jalan!" << endl;
            break;
        default:
            cout << "Lampu lalu lintas tidak berfungsi" << endl;
            break;
    }
    return 0;
}

