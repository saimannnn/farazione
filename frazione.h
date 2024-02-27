#include <iostream>
#include <cstdio>
#include <time.h>
#include<windows.h>           // for windows
#include<unistd.h>               // for linux 
using namespace std;

class frazione {
		int numeratore, denominatore;
	public:
		frazione() {
			this->set();
		}
		frazione(int n, int d) {
			this->set(n, d);
		}
		~frazione() {
			cout << "frazione eliminata";
		}
		void set(int n = 0, int d = 1) {
			this->numeratore = n;
			if (d == 0) {
				d = 1;
			}
			this->denominatore = d;
		}
		void print() {
			cout << numeratore << "/" << denominatore;
		}
		void get() {
			
//			cout << endl << "inserisci il numeratore-> ";
//			cin >> numeratore;
//			cout << endl << "inserisci il denominatore-> ";
//			cin >> denominatore;
//			set(numeratore, denominatore);
		scanf("%d%*c%d", &numeratore,&denominatore);
		
		}

		void setNumeratore(int n) {
			numeratore = n;
		}
		void setDenominatore(int d) {
			if (d != 0) denominatore = d;
		}
		int getNumeratore() {
			return numeratore;
		}
		int getDenominatore() {
			return denominatore;
		}
		
		void moltINT(int i){
			setNumeratore(numeratore* i);
		}
		void semplifica(){
			int max;
			if(denominatore >= numeratore)max= denominatore;
			else max= numeratore;
			for(int i=1; i<max; i++) {
				if(numeratore% i ==0 && denominatore% i ==0){
					numeratore/=i,denominatore/=i;
				}
			}
		}
		double decimale(){
			return numeratore/(double)denominatore;
		}
};
