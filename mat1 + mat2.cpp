#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mat1 [ 2 ] [ 2 ] ;
	int mat2 [ 2 ] [ 2 ] ;
	
	float cont = 1.1 ;
	for ( int x = 0 ; x < 2 ; x ++ )
	{
		for ( int y = 0 ; y < 2 ; y ++ )
		{
			cout << "Numero " << cont << " = " ;
			cin >> mat1 [ x ] [ y ] ;
			cont = cont + 0.1 ;
		}
	}
	
	float cont2 = 2.1 ;
	for ( int x = 0 ; x < 2 ; x ++ )
	{
		for ( int y = 0 ; y < 2 ; y ++ )
		{
			cout << "Numero " << cont2 << " = " ;
			cin >> mat2 [ x ] [ y ] ;
			cont2 = cont2 + 0.1 ;
		}
	}
	
	int cont3 = 1 ;
	cout << "I risultati\n" ;
	for ( int x = 0 ; x < 2 ; x ++ )
	{
		for ( int y = 0 ; y < 2 ; y ++ )
		{
		    cout << "Numero " << cont3 << " = " << mat2 [ x ] [ y ] + mat1 [ x ] [ y ] << endl ;
		    cont3 = cont3 + 1 ;
		}
	}
	
	
	return 0;
}
