#include <iostream>
#include <string>
#include "Structs.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	std::string path = "file.txt";

	book* arr = new book[3];
	arr[0] = {
		"�����",
		"������ ��������",
		1986,
		390,
		256
	};
	arr[1] = {
		"������ ���� �����",
		"������� �����������",
		1986,
		210,
		345
	};
	arr[2] = {
		"�������� ��������",
		"������ ��������",
		1962,
		200,
		287
	};
	
	show_book(arr[1]);
	std::cout << '\n';
	std::cout << " ��� ������ --> " << author_name(arr[0]) << '\n';

	save_book(arr[0], "file.txt");

	







	return 0;
}