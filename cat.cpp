#include <iostream>

using namespace std;
const char * s = "\n";

int main() 
{
  // Write code here
  int age;
  int calcolo;
  string cat;

  cout << "questo programma ti mostrerà la corrispondenza dell'eta umana del tuo gatto." << endl;
  cout << "Funziona solo per i gatti che hanno almeno 2 anni." << endl;

  cout << s << "Come si chiama il tuo gatto?: ";
  cin >> cat;

  cout << s << "Inserisci l'eta del tuo gatto: ";
  cin >> age;

  calcolo = (age - 2) * 4 + 24 ;

  cout << s << cat << " is : " << calcolo << " Years old.";

  return 0;
}
