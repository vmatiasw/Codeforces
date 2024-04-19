#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int u_int;

int main()
{
  u_int n_equipos, k_lugar, resultado = 1;
  pair<u_int, u_int> par;
  cin >> n_equipos;
  cin >> k_lugar;
  vector<pair<u_int, u_int>> primerosK(k_lugar);

  // Llenamos el vector con los primeros k equipos
  for (u_int i = 0; i < k_lugar; i++)
  {
    cin >> par.first >> par.second;
    primerosK[i] = par;
  }
  pair<u_int, u_int> k_equipo = primerosK[k_lugar - 1];

  // Recorremos los equipos restantes y
  // contamos cuantas veces aparece el equipo k
  for (u_int i = k_lugar; i < n_equipos; i++)
  {
    cin >> par.first >> par.second;
    if (par == k_equipo)
      resultado++;
  }

  // Contamos cuantas veces aparece el equipo k en los primeros k lugares
  for (u_int i = 0; i < k_lugar - 1; i++)
  {
    if (primerosK[i] == k_equipo)
      resultado++;
  }

  // Imprimimos el resultado
  cout << resultado << endl;
}