#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

int main(void) {

	string name;
	string pwd;

	cout << "�������˺�: ";
	cin >> name;

	cout << "����������: ";
	cin >> pwd;
	//Ȩ���ж�
	if (name == "admin" && pwd == "888888") {
		cout << "1.��վ404����" << endl;
		cout << "2.��վ�۸Ĺ���" << endl;
		cout << "3.��վ������¼" << endl;
		cout << "4.DNS����" << endl;
		cout << "5.��������������" << endl;
	}
	else {
		cout << "�û������������!" << endl;
	}


	system("pause");
	return 0;
}