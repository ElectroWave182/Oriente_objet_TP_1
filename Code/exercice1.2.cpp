# include <iostream>
using namespace std;


int main ()
{
	
	
	// 1)
	
	cout << "Namae wa? ";
	
	string nom;
	cin >> nom;
	
	
	// 2)
	
	cout
		<< "Konishiwa "
		<< nom
		<< "!"
		<< "\n"
		<< "Daijobu? "
	;
	
	string etat;
	cin >> etat;
	
	if (etat == "good")
	{
		cout << "Iguzo!";
	}
	else if (etat == "bad")
	{
		cout << "Gambate!";
	}
	else
	{
		cout << "°~'";
	}
	
	cout
		<< "\n"
		<< "Domo arigato, je suis japonais, je suis fils du Soleil levant."
	;
	
	
}
