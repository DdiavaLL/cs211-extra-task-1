#include <iostream>
#include "hw.h"
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	//�������1 
	int a;
	int b;
	cout << "������� 1!" << endl;
	cout << "������� ����� A � B:";
	cin >> a >> b;
	cout << "������������ ���� ����� �����, ������� ���, �� A �� B ������������ = " << FindComposition(a,b) << endl;
	cout << endl;

	//�������2
	cout << "������� 2!" << endl;
	cout << "������� ���� 1�� ������: ";
	double c;
	cin >> c;
	cout << "���� 1.2; 1.4; ... 2 �� ������: ";
	PriceCandys(c);
	cout << endl << endl;

	//�������3
	cout << "������� 3!" << endl;
	cout << "������� ������������ ����� � �������:";
	cin >> c >> a;
	cout << "�������� �����: " << SummPos(c, a) << endl << endl;

	//�������4
	cout << "������� 4!" << endl;
	cout << "������� ������������ ����� � ��� �������:";
	cin >> c >> a;
	cout << "�������� ���������:" << FindRes(c, a) << endl ;
	cout << "�������� ������ � ����� X: " << sin(c) << endl << endl;

	//�������5
	cout << "������� 5!" << endl;
	cout << "������� ����� ����� �������: ";
	cin >> c;
	cout << "����� ������� = " << FindKotlan(c) << endl << endl;

	//�������6
	cout << "������� 6!" << endl;
	cout << "������� �����,������� ���������� �������������: ";
	cin >> a;
	cout << "����� �������� ���������: " << NewNmb(a) << endl << endl;;

	//�������7
	cout << "������� 7!" << endl;
	cout << "������� ��� �����: ";
	cin >> a >> b;
	cout << "���������� ���� ���� ����� �� ������ 10: " << AmountbyM(a,b) << endl << endl;

	//�������8
	cout << "������� 8!" << endl;
	cout << "������� ����� � �������� eps: ";
	double eps;
	cin >> c >> eps;
	cout << "�������� ��������� � ��������� eps: " << FindWEps(c, eps) << endl;
	cout << "�������� arctg � ����� X: " << atan(c) << endl << endl;

	//�������9
	cout << "������� 9!" << endl;
	cout << "������� ���-�� ����� � �����������������: ";
	cin >> a;
	double z1 = 0.0;
	double z2 = 0.0;
	SummOfNumbers(a,z1,z2);
	cout << "����� ������� ������ �����: " << z1 << endl;
	cout << "����� ����� ������ �����: " << z2 << endl;
	cout << endl;

	//�������10
	cout << "������� 10!" << endl;
	cout << "������� �����, � ������� ����� ������������ ��� ����� � ����-��: ";
	cin >> a;
	int i = 0, i1 = 0;
	FindSummAndN(a,i,i1);
	cout << "���-�� ����� < K: " << i << endl;
	cout << "���-�� ����� ��������� ������ �� �: " << i1 << endl;
	system("pause");
}

/* ������ ����� ������!
������� 1!
������� ����� A � B:2 7
������������ ���� ����� �����, ������� ���, �� A �� B ������������ = 18

������� 2!
������� ���� 1�� ������: 2.1
���� 1.2; 1.4; ... 2 �� ������: 2.52; 2.94; 3.36; 3.78; 4.2;

������� 3!
������� ������������ ����� � �������:2.1 4
�������� �����: 36.2191

������� 4!
������� ������������ ����� � ��� �������:3.2 5
�������� ���������:-0.0589388
�������� ������ � ����� X: -0.0583741

������� 5!
������� ����� ����� �������: 4
����� ������� = 14

������� 6!
������� �����,������� ���������� �������������: 12345
����� �������� ���������: 10305

������� 7!
������� ��� �����: 845 453
���������� ���� ���� ����� �� ������ 10: 298

������� 8!
������� ����� � �������� eps: 0.2 0.001
�������� ��������� � ��������� eps: 0.2
�������� arctg � ����� X: 0.197396

������� 9!
������� ���-�� ����� � �����������������: 3
������� ��������� ����� ����-��: 4.23
������� ��������� ����� ����-��: 8.1
������� ��������� ����� ����-��: 2.5
����� ������� ������ �����: 0.83
����� ����� ������ �����: 14

������� 10!
������� �����, � ������� ����� ������������ ��� ����� � ����-��: 4
������� ��������� ����� ����-��: 2
������� ��������� ����� ����-��: 3
������� ��������� ����� ����-��: 7
������� ��������� ����� ����-��: 9
������� ��������� ����� ����-��: 8
������� ��������� ����� ����-��: 1
������� ��������� ����� ����-��: 2
������� ��������� ����� ����-��: 0
���-�� ����� < K: 4
���-�� ����� ��������� ������ �� �: 3
*/

/*������ ����� ������!
������� 1!
������� ����� A � B:3 9
������������ ���� ����� �����, ������� ���, �� A �� B ������������ = 162

������� 2!
������� ���� 1�� ������: 3.4
���� 1.2; 1.4; ... 2 �� ������: 4.08; 4.76; 5.44; 6.12; 6.8;

������� 3!
������� ������������ ����� � �������:5.1 3
�������� �����: 164.761

������� 4!
������� ������������ ����� � ��� �������:4.7 7
�������� ���������:-0.999923
�������� ������ � ����� X: -0.999923

������� 5!
������� ����� ����� �������: 7
����� ������� = 429

������� 6!
������� �����,������� ���������� �������������: -1234
����� �������� ���������: -1030

������� 7!
������� ��� �����: -234 768
���������� ���� ���� ����� �� ������ 10: 992

������� 8!
������� ����� � �������� eps: 0.8 0.002
�������� ��������� � ��������� eps: 0.8
�������� arctg � ����� X: 0.674741

������� 9!
������� ���-�� ����� � �����������������: 5
������� ��������� ����� ����-��: 7.1
������� ��������� ����� ����-��: 2.9
������� ��������� ����� ����-��: 0.11
������� ��������� ����� ����-��: 3.5
������� ��������� ����� ����-��: 8.0
����� ������� ������ �����: 1.61
����� ����� ������ �����: 20

������� 10!
������� �����, � ������� ����� ������������ ��� ����� � ����-��: 99
������� ��������� ����� ����-��: 34
������� ��������� ����� ����-��: 56
������� ��������� ����� ����-��: 767
������� ��������� ����� ����-��: 21
������� ��������� ����� ����-��: 234
������� ��������� ����� ����-��: 198
������� ��������� ����� ����-��: 0
���-�� ����� < K: 3
���-�� ����� ��������� ������ �� �: 0
*/