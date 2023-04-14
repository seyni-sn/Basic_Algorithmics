#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#define nbreLine 2//here we define the number of lines that the file will countain

//This is an basic program for introduction to files with cpp

using namespace std;

int main()
{
    string const nomFich("./monFichier.text");
    int i(0);
    vector<string>line( nbreLine);
    ofstream myFile(nomFich.c_str());
    cin.ignore();
    if(myFile)
    {
        cout<<" Donner votre message!\n";//give a line of word press enter and give the next one
        for(i = 0; i < line.size(); i++)
        {
            getline(cin, line[i]);
            myFile<<line[i] <<endl;

        }
        line.push_back("merci!");
        myFile<<line[i] <<endl;
        cout<<"Fin de saisi\n";
    }
    else
    {
        cout <<"Erreur! Impossible d'ecrire sur ce fichier\n";
    }
    return 0;
}
