#include "structures.h"
#include<iostream>

void print_person(const person& p)
{
	std::cout << " ���       :" << p.name << std::endl;
	std::cout << " �������   :" << p.age << std::endl;
	std::cout << " ��������� :" << p.job << std::endl;
	std::cout << " ��������  :" << p.salary << std::endl;
}
person input_person()
{
	person tmp;
	std::cout << " ������� ��� -> ";
	std::getline(std::cin, tmp.name);
	std::cout << " ������� ������� -> ";
	std::cin >> tmp.age;
	std::cin.ignore();
	std::cout << " ������� ��������� -> ";
	std::getline(std::cin, tmp.job);
	std::cout << " ������� �������� -> ";
	std::cin >> tmp.salary;
	std::cin.ignore();
	return tmp;

}

