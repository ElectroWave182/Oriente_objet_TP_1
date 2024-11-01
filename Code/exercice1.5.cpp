# include <string.h>
# include <iostream>
using namespace std;



int main ()
{
	
	
	// 1)
	
	string insee;
	cout << "Saisissez votre numéro Insee : ";
	cin >> insee;
	
	if (insee[0] == '1')
	{
		cout
			<< "Vous êtes un homme né en 19"
			<< insee.substr (2, 2)
			<< "\n"
		;
	}
	else
	{
		cout
			<< "Vous êtes une femme née en 19"
			<< insee.substr (2, 2)
			<< "\n"
		;
	}
	
	
	// 2)
	
	string nom;
	cout << "Entrez votre nom : ";
	cin >> nom;
	
	for (auto & lettre: nom)
	{
		cout
			<< lettre
			<< "  "
		;
	}
	
	cout << "\n";
	
	
	// 3)
	
	string base = "";
	for (auto & lettre: nom)
	{
		cout
			<< base
			<< lettre
		;
		
		base += " ";
	}
	
	cout << "\n";
	
	
	// 4)
	
	base = "";
	for (auto & lettre: nom)
	{
		cout
			<< base
			<< lettre
			<< "\n"
		;
		
		base += " ";
	}


}
