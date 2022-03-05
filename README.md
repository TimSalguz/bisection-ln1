# bisection-ln1
// list.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <tuple>

#pragma pack(1)
struct list
{
	
};
#pragma pack()

int main()
{
	/*std::cout << sizeof(list) << std::endl;

	list* head = new list;

	list* e_1 = new list;

	head->next = e_1;
	e_1->next = nullptr;

	std::cout << "head " << head << std::endl;
	std::cout << "head next " << head->next << std::endl;
	std::cout << "e_1 " << e_1 << std::endl;
	std::cout << "e_1 next " << e_1->next << std::endl;*/

	int* node[2];
	node[0] = new int;
	node[1] = nullptr;

	std::cerr << "node " << node << std::endl;
	std::cerr << "node[0] " << node[0] << std::endl;
	std::cerr << "node[1] " << node[1] << std::endl;

	node[0][0] = 10;

	int* node2[2];
	node2[0] = new int;
	node2[0][0] = 15;
	node2[1] = nullptr;
	std::cerr << "node2 " << node2 << std::endl;
	std::cerr << "node2[0]" << node2[0] << std::endl;
	std::cerr << "node2[1]" << node2[1] << std::endl;

	std::cout << std::endl;
	node[1] = *node2;
	std::cout << "Node[0]: " << node[0] << " value: " << node[0][0] << std::endl;
	std::cout << "Node[1]: " << node[1] << std::endl;

	
	std::cout << "Node2[0]: "<< node2[0] << " value: " << node2[0][0] << std::endl;
	std::cout << "Node2[1]: "  << node2[1] << std::endl;



	//std::tuple<double, int> test;

	//std::get<0>(test);





	//int** node;
	//node = new  int*;

	//int** node2;
	//node2 = new int*;
	//node2 = nullptr;

	//std::cout << &(node2[0]) << std::endl;

	//node[1] = node2[0];

    //std::cout << "Hello World!\n"; 
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
