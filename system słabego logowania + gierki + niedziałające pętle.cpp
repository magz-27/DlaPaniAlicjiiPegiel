#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()


{
	// mimo tego że rand() ma losować, to zawsze odpowiedzią do wylosuj liczbe jest 6 **1
	int wylosowana = (rand() % 10) + 1;
	cout << wylosowana;
	int x = wylosowana;
	int zgadywanaliczba;
	int liczbauzytkownika;
	//int wylogujsie;
	int id_amanda = 15091994;
	int id_anna = 24031977;
	int login;
	int zabawa;
	string captcha = "C4pt3ha";
	string captchacheck;
	//nie wiem jak zapętlić program, tak aby nie kończył sie po np. odgadnięciu liczby lub podaniu swojej ulubionej liczby.
	//Chciałbym aby po skończonej grze, pojawiał sie komunikat "czy chcesz sie wylogować? wpisz 0 poniżej aby sie wylogować, wpisz 1 poniżej aby sie nie wylogowywać. **2
	/*if (1 == 1) {
		if (wylogujsie == 0) {
			exit(0);
		}
		else {
			cout << "co chcesz dzisiaj robic? " << "1 - zgadywanie liczby, 2 - ulubiona liczba, 3 - wyloguj sie " << endl;
			cin >> zabawa;
		}


	}*/
	cout << "Poczekaj chwile zanim cie przekierujemy. Musimy sprawdzic czy nie jestes robotem." << endl;
	cout << "przepisz captcha ponizej: " << captcha << endl;
	cin >> captchacheck;
	if (captcha == captchacheck) {
		cout << "Nie jestes robotem, mozesz kontynuowac logowanie." << endl;
	}
	else {
		cout << "whoopsie, jestes robotem. Mam cie. ";
		exit(0);
	}
	cout << "login dla uzytkownika Amanda Joneczko to 15091994. Login dla uzytkownika Anna Kosno to 24031977" << endl;
	cout << "podaj swoj login: ";
	cin >>  login;
	if (login == id_amanda or id_anna) {
		cout << "Dane logowania sa poprawne." << endl;
	}
	else {
		cout << "logowanie nieudane. Wygaszam sesje." << endl;
		exit(0);
	}

	if (login == id_amanda) {
		cout << "Witaj w systemie Amanda." << endl;
	}
	if (login == id_anna) {
		cout << "Witaj w systemie Anna." << endl;
	}
	
	cout << "co chcesz dzisiaj robic? " << "1 - zgadywanie liczby, 2 - ulubiona liczba, 3 - wyloguj sie" << endl;

	cin >> zabawa;

	if (1 == 1) {
		if (zabawa == 1) {
			cout << "zgadywanie liczby: " << endl;
			cout << "zgadnij liczbe od 1-10: " << endl;
			cin >> zgadywanaliczba; //**1

			if (zgadywanaliczba == x) {
				cout << "brawo, odgadnelas sekretna liczbe" << endl;
				exit(0);
			}
			else {
				cout << "nie udalo ci sie. Sproboj ponownie." << endl;
			}
		}
	}
		if (zabawa == 2) {
			cout << "ulubiona liczba: " << endl;

			cout << "podaj swoja ulubiona liczbe: " << endl;

			cin >> liczbauzytkownika;

			cout << "wow, to tez moja lubiona liczba!" << endl;

			cout << "naprawde " << liczbauzytkownika << " to moja ulubiona liczba!" << endl;

			cout << "kwadrat liczby " << liczbauzytkownika << " to " << liczbauzytkownika * liczbauzytkownika << endl;

			cout << "suma liczby " << liczbauzytkownika << " i 6 to: " << liczbauzytkownika + 6 << " ";

			//cout << " czy chcesz sie wylogowac? wpisz 0 aby sie wylogowac, 1 aby sie nie wylogowac " << endl; **2

			//cin >> wylogujsie;


		} if (zabawa == 3) {
			exit(0);
		}
	
	return 0;


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//zgadywanie liczby
	/*int x = 6;
	int zgadywanaliczba;
	cout << "zgadnij liczbe od 1-10: " << endl;
	cin >> zgadywanaliczba;

	if (zgadywanaliczba == x) {
		cout << "brawo, odgadnelas sekretna liczbe" << endl;
	}
	else {
		cout << "nie udalo ci sie. Sproboj ponownie." << endl;
	}
	return 0;*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//mówi "to też moja ulubiona liczba" i ją pokazuje, oblicza kwadrat liczby, oblicza sume liczby z 6.
/*int liczbauzytkownika;

	cout << "podaj swoja ulubiona liczba: " << endl;

	cin >> liczbauzytkownika;

	cout << "wow, to tez moja lubiona liczba!" << endl;

	cout << "naprawde " << liczbauzytkownika << " to moja ulubiona liczba!" << endl;

	cout << "kwadrat liczby " << liczbauzytkownika << " to " << liczbauzytkownika * liczbauzytkownika << endl;

	cout << "suma liczby " << liczbauzytkownika << " i 6 to: " << liczbauzytkownika + 6;

	return 0;*/
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}