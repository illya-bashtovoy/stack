/*
1. Доопрацюйте клас Stack. Зборіть так, щоб клас Stack був шаблонним.
*/

#include <iostream>
#include "Stack.h"
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Stack <int> A(3);

	cout << "Iндекс < макс =" << A.push(45) << endl; 

	cout << "Iндекс < макс =" << A.push(67) << endl;

	cout << "Iндекс < макс =" << A.push(125) << endl;

	cout << "Стек заповнений =" << A.isFull() << endl;

	for (int i = 0; i < 3; i++) {
		std::cout << A.pop() << "\t";
	}

	cout << endl << "Стек порожній =" << A.isEmpty() << endl;	 
}