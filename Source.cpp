//Двоеложков 4 вариант
#include <iostream>
using namespace std;

struct EL {
	EL *pred;
	char q;
	EL *next;
};

int main()
{
	setlocale(0, "");
	EL *art = 0, *brod = 0, *rad = 0;
	int grad = 0, d = 1;
	for (; d==1;) {
		cout << "\ninput?";
		cin >> d;
		if (d == 1) {
			art = new EL;
			if (!(art)) {
				cout << "error no memory";
				return 0;
			}
			cout << "\nelement = ";
			cin >> art->q;
			while (art->q > '9' || art->q < '0') {
				cout << "\nОшибка ввода\nПовторите ввод: ";
				cin >> art->q;
			}
			if (grad == 0) {
				rad = art;
				art->pred = art;
			    art->next = art;
				grad = 1;
				brod = art;
			}
			else {
				art->pred = brod;
				art->next =rad;
			    brod->next = art;
				brod = art;
			}
		}
	}
	if (!grad) {
		return 0;
	}
	rad->pred = art;
	art = rad;
	cout << "\nадрес нач элем:" << rad << endl;
	cout << "adpred   char   adnext";
	do {
		cout << endl << art->pred << "   " << art->q << "   " << art->next;
		art = art->next;
	} while (art != rad);
	char temp;
	cout << "\nВведите цифру: ";
	cin >> temp;
	while (temp > '9' || temp < '0') {
		cout << "Ошибка ввода\nПовторите ввод: ";
		cin >> temp;
	}
	art = rad->next;
	while (art != rad) {
		if (temp == art->q) {
			art->pred->next = art->next;
			art->next->pred = art->pred;
			brod = art;
		    art = art->next;
			delete brod;
		} else
			art = art->next;
	} 
	if (rad->q == temp) {
		if (rad != rad->next) {
			rad->next->pred = rad->pred;
			rad->pred->next = rad->next;
			brod = rad;
			rad = rad->next;
			delete brod;
		}
		else {
			delete rad;
			cout << "стект пуст";
			return 0;
		}
	}
	cout << "\nадрес нач элем:" << rad << endl;
	cout << "adpred   char   adnext";
	art = rad;
	do {
		cout << endl << art->pred << "   " << art->q << "   " << art->next;
		art = art->next;
	} while (art != rad);
	return 0;
}
