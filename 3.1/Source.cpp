// Lab_03_1.cpp
// < ���� ����� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 17

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������

    cout << "x = "; cin >> x;

    A = pow(x, 2) + 1;

    // ����� 1: ������������ � ��������� ����
    if (x < 4);
    B = (4 * pow(x, 7)) - pow(x, 5) + pow(x, 3) - 2;

    if (4 <= x && x < 7);
    B = atan((abs(x) + 1) / 2) + (8.30 * x);

    if (x >= 7);
    B = log(abs(2 * x + exp(4 * x + 1)));

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ����
    if (x < 4)
        B = (4 * pow(x, 7)) - pow(x, 5) + pow(x, 3) - 2;
    else if (4 <= x && x < 7 && x >= 7)
        B = atan((abs(x) + 1) / 2) + (8.30 * x);
    else
        B = log(abs(2 * x + exp(4 * x + 1)));
    y = A + B;
    cout << "2) y = " << y << endl;

    return 0;
}