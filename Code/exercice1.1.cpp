# include <limits>
# include <iostream>
using namespace std;


int main ()
{
	
	
	// 4)
	
	cout << "Hello world\n\n";
	
	
	// 5)
	
	int entier = 7;
	double reel = 3.14;
	string chaine = "yo";
	
	
	// 6)
	
	cout
		<< entier
		<< "\n"
		<< reel
		<< "\n"
		<< chaine
		<< "\n\n"
	;
	
	
	// 7)
	
	entier = numeric_limits <int>:: max ();
	reel = numeric_limits <double>:: max ();
	chaine = numeric_limits <string>:: max ();
	
	cout
		<< entier
		<< "\n"
		<< reel
		<< "\n"
		<< chaine
		<< "\n\n"
	;
	
	
	// 8)
	
	entier = numeric_limits <int>:: min ();
	reel = numeric_limits <double>:: min ();
	chaine = numeric_limits <string>:: min ();
	
	cout
		<< entier
		<< "\n"
		<< reel
		<< "\n"
		<< chaine
		<< "\n\n"
	;
	
	entier = numeric_limits <int>:: lowest ();
	reel = numeric_limits <double>:: lowest ();
	chaine = numeric_limits <string>:: lowest ();
	
	cout
		<< entier
		<< "\n"
		<< reel
		<< "\n"
		<< chaine
		<< "\n\n"
	;
	
	
}
