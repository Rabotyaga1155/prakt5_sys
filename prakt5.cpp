#include <iostream>
#include "utils.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    Date date = { 2024, 12, 31 };
    cout << "День в году: " << daysBeg(date) << endl;
    cout << "День в году (перегрузка 1) " << daysBeg(2024, 12, 31) << endl;
    cout << "День в году (перегрузка 2) " << daysBeg(12, 31) << endl;

    return 0;
}
