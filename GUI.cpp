#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

int main(void) {

	string name;
	string pwd;

	cout << "ÇëÊäÈëÕËºÅ: ";
	cin >> name;

	cout << "ÇëÊäÈëÃÜÂë: ";
	cin >> pwd;
	//È¨ÏÞÅÐ¶Ï
	if (name == "admin" && pwd == "888888") {
		cout << "1.ÍøÕ¾404¹¥»÷" << endl;
		cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
		cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
		cout << "4.DNS¹¥»÷" << endl;
		cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << endl;
	}
	else {
		cout << "ÓÃ»§Ãû»òÃÜÂë´íÎó!" << endl;
	}


	system("pause");
	return 0;
}