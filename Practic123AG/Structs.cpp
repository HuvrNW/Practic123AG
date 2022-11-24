#include "Structs.h"
#include <fstream>

void show_book(book& B) {
	std::cout << " �������� ����� --> " << B.name_of_book << '\n';
	std::cout << " ����� ����� --> " << B.author << '\n';
	std::cout << " ��� ������ --> " << B.year << '\n';
	std::cout << " ���-�� ������� --> " << B.number_of_pages << '\n';
	std::cout << " ���� �� ����� --> " << B.price << '\n';
}

std::string author_name(book& B) {
	for (int i = 0; i < B.author.length(); i++)
		return B.author.substr(0, B.author.find(" "));
}

void save_book(book& B, std::string path) {
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		std::string x, y, z;
		out << B.name_of_book + '\n';
		out << B.author + '\n';
		x = std::to_string(B.year);
		out << x + '\n';
		y = std::to_string(B.number_of_pages);
		out << y + '\n';
		z = std::to_string(B.price);
		out << z + '\n';

	}
	else
		std::cout << " ������ �������� �����.\n";
	out.close();
}

void add_book(book*& arr, const int length) {

}