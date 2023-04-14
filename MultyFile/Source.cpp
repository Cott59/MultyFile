#include<iostream>
#include<string>
#include "functios.h"
#include "structures.h"
#include "Data.h"


int main() {
	setlocale(LC_ALL, "ru");

	//библиотека с функциями

	/*int n, m;
	std::cout << " Введите два числа : ";
	std::cin >> n >> m;
	std::cout << n << "+" << m << "=" << sum(n, m) << std::endl;

	hi();

	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);*/

	//Библ со структурой и функ-ми для работы с ней

	/*person p1{
		"Tom Smit",
		23,
		"programer",
		80000
	};
	
	print_person(p1);

	person p2 = input_person();
	print_person(p2);*/

	//

	_A = 15;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	std::cout << "E = " << _E << std::endl;
	print_arr(_ARR, _ARR_SIZE);
	show_pi();

	return 0;
}