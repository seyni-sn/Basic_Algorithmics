#include <iostream>
#include "caculus.h"
using namespace std;

//This is a basic algorithm which perform some basic calculus
void cal()
{
    int choix(0), a(0), b(0), quotien(0), rest(0), result(0);
    do
    {
    	cout <<"Bienvenu dans votre calculatrice!!"<<endl;
    	cout <<" #1 pour l'addition!"<<endl;
    	cout <<" #2 pour la soustraction!"<<endl;
    	cout <<" #3 pour la multiplication!"<<endl;
    	cout <<" #4 pour la division!"<<endl;
    	cout <<"Donner votre choix:"<<endl;
    	cin >> choix;
    }while(choix < 1 || choix > 4);
    
    switch(choix)
    {
        case 1: {cout <<"Doner les nombre :"<<endl;
                 cin >>a >>b;
                 result = a + b;
                 cout <<"Le resultat est : " << result <<endl;
                }
                break;
        case 2: {cout <<"Doner les nombre :"<<endl;
                 cin >> a >>b;
                 result= a - b;
                 cout <<"Le resultat est : " << result <<endl;
                }
                break;
        case 3: {cout <<"Doner les nombre :"<<endl;
                 cin >> a >> b;
                 result = a*b;
                 cout <<"Le resultat est : " << result <<endl;
                }
                break;
        case 4: {cout <<"Doner les nombre :"<<endl;
                 cin >>a >>b;
                 quotien = a / b; rest = a % b;
                  cout <<"Le quotien est : " << quotien <<" le reste est : " << rest <<endl;
                }
                break;
       default : cout <<"Desole cette operation n'est pas diponible sur cet machine!!"<<endl;
       break;
    }
}
