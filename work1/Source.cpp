#include <iostream>
#include<cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*double a, P;
	cout << "������� �������� �������� a: " << endl;
	cin >> a;
	P = a * 4;
	cout << "�������� �������� = " <<P<< endl;
	*/
	//begin2
	/*double S, a;
	cout << "������� �������� �������� a: " << endl;
	cin >> a;
	S = pow(a, 2);
	cout << "������� �������� = " << S << endl;*/
	//begin3
	/*double a, b, S, P;
	cout << "������� �������� �������������� a: " << endl;
	cin >> a;
	cout << "������� �������� �������������� b: " << endl;
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "������� �������������� = " << S << endl;
	cout << "�������� �������������� = " << P << endl;
*/
//begin4
/*double d, pi, L;
cout << "������� ������� ���������� d: " << endl;
cin >> d;
pi = 3.14;
L = pi * d;
cout << "����� ���������� = " << L << endl;*/
//begin5
/*double a, V, S;
cout << "������� ����� ����� ���� a: " << endl;
cin >> a;
V = pow(a, 3);
S = 6 * pow(a, 2);
cout << "����� ���� = " << V << endl;
cout << "������� ����������� ���� = " << S << endl;*/
//begin6
/*double a, b, c, V, S,k,l,m,r;
cout << "������� ����� ����� �������������� ��������������� a: " << endl;
cin >> a;
cout << "������� ����� ����� �������������� ��������������� b: " << endl;
cin >> b;
cout << "������� ����� ����� �������������� ��������������� c: " << endl;
cin >> c;
V = a * b * c;
k = a * b;
l = b * c;
m = a * c;
r = k + l + m;
S = 2 * r;
cout << "����� �������������� ��������������� = " << V << endl;
cout << "������� ����������� �������������� ��������������� = " << S << endl;*/
//begin7
/*double L, S, R,pi;
cout << "������� ������ ����� R = " << endl;
cin >> R;
pi = 3.14;
L = 2 * pi * R;
S = pi * pow(R, 2);
cout << "����� ���������� = " << L << endl;
cout << "������� ����� = " << S << endl;*/
//begin8
/*double a, b, sr;
cout << "������� a: " << endl;
cin >> a;
cout << "������� b: " << endl;
cin >> b;
sr = (a + b) / 2;
cout << "������� �������������� = " << sr << endl;*/
//begin9
/*double a, b, k,r;
cout << "������� a: a>=0" << endl;
cin >> a;
cout << "������� b: "b>=0 << endl;
cin >> b;
k = a * b;
r = sqrt(k);
cout << "������� �������������� = " << r << endl;*/
//begin10
/*double a, b, s, r, p, ch;
cout << "������� a: a>0 or a<0" << endl;
cin >> a;
cout << "������� b: b>0 or b<0" << endl;
cin >> b;
s = pow(a, 2) + pow(b, 2);
r = pow(a, 2) - pow(b, 2);
p = pow(a, 2) * pow(b, 2);
ch = pow(a, 2) / pow(b, 2);
cout << "����� ��������� = " << s << endl;
cout << "�������� ��������� = " << r << endl;
cout << "������������ ��������� = " << p << endl;
cout << "������� ��������� = " << ch << endl;*/
//begin11
/*double a, b, s, r, p, ch;
cout << "������� a: a>0 or a<0" << endl;
cin >> a;
cout << "������� b: b>0 or b<0" << endl;
cin >> b;
s = abs(a) + abs(b);
r = abs(a) - abs(b);
p = abs(a) * abs(b);
ch = abs(a) / abs(b);
cout << "����� ������� = " << s << endl;
cout << "�������� ������� = " << r << endl;
cout << "������������ ������� = " << p << endl;
cout << "������� ������� = " << ch << endl;*/
//begin12
//double a, b, c, P, k;
//cout << "������� a: " << endl;
//cin >> a;
//cout << "������� b: " << endl;
//cin >> b;
//k = pow(a, 2) + pow(b, 2);
//c = sqrt(k);
//P = a + b + c;
//cout << "���������� �������������� ������������ = " << c << endl;
//cout << "�������� �������������� ������������ = " << P << endl;
//begin13
//double R1, R2, S1, S2, S3,pi;
//pi = 3.14;
//cout << "������� ������ ������� ����� R1 = (R1>R2) " << endl;
//cin >> R1;
//cout << "������� ������ ������� ����� R2 = " << endl;
//cin >> R2;
//S1 = pi * pow(R1, 2);
//S2 = pi * pow(R2, 2);
//S3 = S1 - S2;
//cout << "������� ������� ����� = " << S1 << endl;
//cout << "������� ������� ����� = " << S2 << endl;
//cout << "������� ������ = " << S3 << endl;
//begin14
/*double L, pi, R, S;
pi = 3.14;
cout << "������� ����� ���������� L: " << endl;
cin >> L;
R = L / (2 * pi);
S = pi * pow(R, 2);
cout << "������ ���������� = " << R << endl;
cout << "������� ����� = " << S << endl;*/
//begin19
//double x1, y1, x2, y2, a, b, P, S,k,l,m,z;
//cout << "������� x1:" << endl;
//cin >> x1;
//cout << "������� y1:" << endl;
//cin >> y1;
//cout << "������� x2:" << endl;
//cin >> x2;
//cout << "������� y2:" << endl;
//cin >> y2;
//k = y1 - y2;
//l = pow(k, 2);
//a = sqrt(l);
//m = x2 - x1;
//z = pow(m, 2);
//b = sqrt(z);
//P = 2 * (a + b);
//S = a * b;
//cout << "�������� �������������� = " << P << endl;
//cout << "������� �������������� = " << S << endl;
//begin15
//double S, D, L, pi,k,d2;
//pi = 3.14;
//cout << "������� ������� ����� S:" << endl;
//cin >> S;
//k = 4 * S;
//d2 = k / pi;
//D = sqrt(d2);
//L = pi * D;
//cout << "������� ����� = " << D << endl;
//cout << "����� ���������� = " << L << endl;
//begin16
//double x1, x2, r;
//cout << "������� x1: " << endl;
//cin >> x1;
//cout << "������� x2: " << endl;
//cin >> x2;
//r = abs(x2 - x1);
//cout << "���������� ����� ������� = " << r << endl;
	system("pause");
	return 0;
}