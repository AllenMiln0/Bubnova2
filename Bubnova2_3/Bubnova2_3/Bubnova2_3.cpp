// Bubnova2_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <locale.h>

#define SIZE 20

using namespace std;

class Deque {
private:
	int ul, ur, mas[SIZE], size;
	
public:
	/* Конструктор и деструктор */
	Deque() {
		ul = ur = -1;
		size = SIZE;
	}

	~Deque() {

	}

	/* Добавление справа */
	int push_right(int x) {
		if (ul != ur && ul != -1) {
			if (((ul == 0) && (ur == size - 1)) || ((ul - ur) % size == 1)) {
				ur = (ur + 1) % size;
				mas[ur] = x;
			}
			else {
				cout << " Дек переполнен!\n";
				return 3;
			}
		}
		else {
			ul = ur = 0;
			mas[ur] = x;
		}
	}

	/* Добавление слева */
	int push_left(int x) {
		if (ul != ur && ul != -1){
			if (((ul == 0) && (ur == size - 1)) || ((ul - ur) % size == 1)) {
				ul = (ul - 1) % size;
				mas[ul] = x;
			}
			else {
				cout << " Дек переполнен!\n";
				return 3;
			}
		}
		else {
			ul = ur = 0;
			mas[ul] = x;
		}
	}


	/* Чтение элемента с удалением справа */
	int pop_right() {
		if (ul != ur && ul != -1) {
			if (((ul == 0) && (ur == size - 1)) || ((ul - ur) % size == 1)) {
				
			}
			else {
				int x = mas[ur];
				ur = (ur - 1) % size;
				return x;
			}
		}
		else {
			cout << " Дек пуст!\n";
			return 3;
		}
	}

	/* Чтение элемента с удалением слева */
	int pop_left() {
		if (ul != ur && ul != -1) {
		
				int x = mas[ul];
				ul = (ul + 1) % size;
				return x;
			
		}
		else {
			cout << " Дек пуст!\n";
			return 3;
		}
	}

	/* Печать очереди без удаления */

	int print() {
		if (ul == ur && ul == -1) {
			cout << " Дек пуст!\n";
			return 3;
		}
		else {
			//int mas_help[SIZE];
			if (ur - ul > 0)
				for (int i = ul; i <= ur; i++)
					cout << mas[i] << " ";
			else {
				for (int i = ul; i < size; i++)
					cout << mas[i] << " ";
				for (int i = 0; i <= ur; i++)
					cout << mas[i] << " ";
			}
		}
	}
	
};

class Shop {
private:
	int us, mas[SIZE];

public:
	/* Конструктор и деструктор */
	Shop() {
		us = -1;
	}

	~Shop() {

	}

	/* Чтение с удалением эл-та из магазина */
	int pop() {
		if (us < 0)
		{
			cout << "ERROR" << endl;
			return 0;
		}
		return mas[us--];
	}

	/* Печать магазина */


};

int main()
{
    /*2022*/
}

