#include <iostream>
#include <vector>
#include <fstream>

#include "Vedgnut.h"
#include "Captain.h"
#include "Utils.h"

void showMenu() { // Lấy menu chức năng
	cout << "-----------------------Menu----------------------" << '\n';
	cout << "1. Add Member" << '\n';
	cout << "2. Edit Member" << '\n';
	cout << "3. Remove Member" << '\n';
	cout << "4. Sort Member by name" << '\n';
	cout << "5. Show all Member" << '\n';
	cout << "0. Exit" << '\n';
	cout << "--------------------------------------------------" << '\n';
	cout << "Please choose: ";
}

void showAddMenu() { // Menu add trạng thái thành viên
	cout << "-----------------------Menu----------------------" << '\n';
	cout << "1. Captain" << '\n';
	cout << "2. Member" << '\n';
	cout << "--------------------------------------------------" << '\n';
	cout << "Please choose: ";
}



void showAll(vector<Vedgnut*> list) { // Lấy tất cả thành viên
	for (auto e : list) {
		e->show();
	}
}

Vedgnut* findByName(vector<Vedgnut*>& list, string name) { // Tìm kiếm thành viên theo name
	for (auto e : list) {
		if (e->getName().compare(name) == 0) {
			return e;
		}

		return nullptr;
	}
}

void editVedgnut(vector<Vedgnut*>& list, string name) { // Chỉnh sửa thành viên
	auto e = findByName(list, name);

	e->inputProfile();
}

void removeVedgnut(vector<Vedgnut*>& list, string name) { // Xóa thành viên
	auto e = findByName(list, name);

	auto index = std::find(list.begin(), list.end(), e);

	list.erase(index);
}

int main()
{
	system("title EBF-Members-LanhThanhTung"); // Set title name

	cout << "-----------------------Information----------------------" << '\n';
	cout << "Lanh Thanh Tung" << '\n';
	cout << "Ma SV: BKC13458" << '\n';
	cout << '\n';
	cout << "-----------------------EAGLE BROTHERS FOREVER----------------------" << '\n';

	vector<Vedgnut*> list{}; // Khởi tạo list thành viên

	ifstream fileIn{ "inputProfile.txt" };

	// doc du lieu tu file
	string line;
	while (getline(fileIn, line)) {

		auto vec = Utils::split(line, ",");

		if (vec.at(0) == "1") {
			list.push_back(new Captain{ stoi(vec.at(1)), vec.at(2) });
		}
	}

	int choose;
	bool exit{ false };

	string name;

	showMenu();
	while (true) { // chọn type xử dụng

		cin >> choose;
		cin.ignore(100, '\n');

		switch (choose)
		{
		case 1:
		{
			cout << "Add Member" << '\n';

			int chooseType;
			showAddMenu();
			cin >> chooseType;
			cin.ignore(100, '\n');

			switch (chooseType) {
			case 1:
			{
				Vedgnut* e{ new Captain{} };
				e->inputProfile();
				list.push_back(e);
			}
			break;
			}

		}
		break;
		case 2:
		{
			cout << "Edit member" << '\n';
			cout << "Enter name: ";
			getline(cin, name);
			//editVedgnut(list, name);
			for (auto e : list) {
				if (e->getName().compare(name) == 0) {
					e->inputProfile();
					break;
				}
			}
		}
		break;
		case 3:
		{
			cout << "Remove member" << '\n';
			cout << "Enter name: ";
			getline(cin, name);
			//removeVedgnut(list, name);

			for (auto e : list) {
				if (e->getName().compare(name) == 0) {
					auto index = std::find(list.begin(), list.end(), e);
					list.erase(index);
					break;
				}
			}
		}
		break;
		case 4:
			cout << "Sort by name" << '\n';
			break;
		case 5:
			cout << "Show all members" << '\n';
			showAll(list);
			break;
		case 0:
			cout << "Exit" << '\n';
			exit = true;
			break;
		}
		if (exit) {
			break;
		}
		showMenu();
	}
}