#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  unsigned int t_testCases,s_MelodiLength;
  char duo[2];
  // Obtenemos la cantidad de casos
  cin >> t_testCases;
  // Corremos los casos
  for (int i = 0; i < t_testCases; i++) {
    // Obtenemos la longitud de la melodia 
    cin >> s_MelodiLength;
    set<pair<char, char>> melodias;
    // Agregamos cada par al conjunto
    cin >> duo[0];
    for (int j = 1; j < s_MelodiLength; j++) {
      cin >> duo[j % 2];
      melodias.insert(duo);
    }
    // Devolvemos la cantidad melodias encontradas:
    cout << melodias.size() << endl;
  }
}