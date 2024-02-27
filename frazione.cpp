#include<iostream>
#include "frazione.h"
#include <iomanip>
using namespace std;

int	main(){
	int d,n;//denominatore nuovo, intero da moltiplicare
	double fdec;//frazione in decimale
	frazione prova;
	
	cout << "inserisci una frazione in formato nn/dd-> ";
	prova.get();
	prova.print();
	
	cout <<endl<< "inserisci il nuovo numeratore-> ";
	cin>> d;
	prova.setNumeratore(d);
	prova.print();
	
	cout <<endl<< "inserisci l'intero da moltiplicare alla frazione-> ";
	cin >> n;
	prova.moltINT(n);
	prova.print();
	
	cout <<endl<<"semplificazione frazione -> ";
	prova.semplifica();
	prova.print();
	
	cout <<endl<< "frazione in decimale-> ";
	fdec=prova.decimale();
	cout<<setprecision(3)<<fdec;
		
	cout<<endl;
return 0;
}
