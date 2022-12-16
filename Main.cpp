#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//protos
int roll();
int asknumber();
void iswinner(int numero, int numero2);



//debut programme
int main() {

	int num_gagnant = roll();

	int num_user = asknumber();

	iswinner(num_gagnant, num_user);
	
	return 0;
}

//corps de fonctions

int roll() {

	srand(time(0));                      
	int random_number = rand() % 10 + 1; 

	return random_number;
}

int asknumber() {
	int number(1);
	
	do {
		cout << "Entrer un nombre entre 1 et 10" << endl;
		cin >> number;

	} while (number < 1 || number > 10);

	return number;
}

void iswinner(int numero, int numero2) {

	if (numero2 == numero) {

		cout << "Bravo vous avez gagne !!!" << endl;
	}
	else { cout << "Nullos ! vous avez perdu ! C'etait " << numero << endl; main(); } //appel étrange au main pour boucler ;/


}