# include <time.h>
# include <stdlib.h>
# include <set>
# include <iostream>
using namespace std;


int main ()
{
	
	
	// 1)
	
	srand (time (NULL));
	int randomNb = rand () % 100 + 1;
	
	cout
		<< "Devine le nombre auquel je pense !"
		<< "\n"
		<< "Indice : il est entre 1 et 100."
		<< "\n"
	;
	
	
	// 7)
	
	cout
		<< "Choisis ta diffuclté entre "
		<< '"'
		<< "normale"
		<< '"'
		<< " ou "
		<< '"'
		<< "difficile"
		<< '"'
		<< "."
		<< "\n"
		<< "En mode difficile, tu dois manquer ta cible 1 fois sur 3 pour survivre..."
		<< "\n"
	;
	
	string difficulte;
	cin >> difficulte;
	
	
	// 3)
	
	cout << "C'est parti !\n";
	
	int proposition;
	set <int> nbProposes;
	
	
	// 5)
	
	int essais;
	for (essais = 1; essais <= 10; essais ++)
	{
		cin >> proposition;


		// 6)

		while (nbProposes.count (proposition))
		{
			cout << "Tu as déjà proposé ce nombre.\n";
			cin >> proposition;
		}
		nbProposes.insert (proposition);
		
		
		// 2)
		
		if (proposition < randomNb)
		{
			cout << "Trop petit...\n";
		}
		else if (proposition > randomNb)
		{
			cout << "Trop grand...\n";
		}
		else
		{
			cout << "Touché !\n";
			
			
			// 8)
			
			if (
				difficulte == "difficile"
				&& essais % 3 == 0
			) {
				essais += 10;
			}
			
			break;
		}
	}
	
	
	// 4)
	
	if (1 <= essais && essais <= 3)
	{
		cout << "Tu es chanceux! >:(\n";
	}
	else if (4 <= essais && essais <= 10)
	{
		cout << "Tu as une bonne stratégie. ;)\n";
	}
	else
	{
		cout << "Perdu... >~<\n";
	}
	
	
}
