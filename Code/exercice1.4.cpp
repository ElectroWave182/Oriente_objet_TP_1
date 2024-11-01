# include <stack>
# include <vector>
# include <cstring>
# include <iostream>
using namespace std;



int incrementer
(
	int limite,
	int indexPremier,
	int nb,
	stack <int> (& precedents),
	int (& exposants)[],
	vector <int> (& premiers)
) {
	
	int facteurPremier, nouveauNb;
	
	for (int index = 0; index <= indexPremier; index ++)
	{
		facteurPremier = premiers.at (index);
		nouveauNb = nb * facteurPremier;
		
		if (exposants[index] == 0)
		{
			precedents.push (nb);
		}
		
		if (nouveauNb >= limite)
		{
			// Remise à zéro
			
			nb = precedents.top ();
			precedents.pop ();
			exposants[index] = 0;
		}
		else
		{
			exposants[index] ++;
			return nouveauNb;
		}
	}
	
	return 0;
	
}



int main ()
{
	
	cout << "Entrez une valeur limite... ";

	int limite;
	cin >> limite;
	limite ++;
	
	bool portee[limite];
	memset (portee, false, sizeof (portee));
	portee[0] = true;
	portee[1] = true;
	
	int curseur = 2;
	
	int produit;
	stack <int> precedents;
	int exposants[limite];
	vector <int> premiers;

	for (int indexPremier = 0; curseur < limite; indexPremier ++)
	{
		produit = curseur;
		precedents.push (produit);
		exposants[produit] = 1;
		premiers.push_back (produit);
		
		while (produit != 0)
		{
			portee[produit] = true;
			produit = incrementer (limite, indexPremier, produit, precedents, exposants, premiers);
		}
		
		while (portee[curseur])
		{
			curseur ++;
		}
		
		memset (exposants, 0, curseur);
	}
	
	for (auto const & element: premiers)
	{
        cout << element << " ";
    }
	
}
