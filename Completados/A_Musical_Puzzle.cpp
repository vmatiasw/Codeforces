#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  unsigned int t_testCases,s_MelodiLength;
  pair<char, char> duo;
  // Obtenemos la cantidad de casos
  cin >> t_testCases;
  // Corremos los casos
  for (int i = 0; i < t_testCases; i++) {
    // Obtenemos la longitud de la melodia 
    cin >> s_MelodiLength;
    set<pair<char, char>> melodias;
    // Agregamos cada par al conjunto
    cin >> duo.first;
    for (int j = 1; j < s_MelodiLength; j++) {
      cin >> duo.second;
      melodias.insert(duo);
      duo.first = duo.second;
    }
    // Devolvemos la cantidad melodias encontradas:
    cout << melodias.size() << endl;
  }
}