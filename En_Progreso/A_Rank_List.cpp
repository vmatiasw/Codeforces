#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int u_int;

int main() {
  u_int n_equipos,k_lugar, resultado = 0;
  pair<u_int,u_int> par;
  cin >> n_equipos;
  cin >> k_lugar;
  vector<pair<u_int,u_int>> primerosK(k_lugar);

  for (u_int i = 0; i < k_lugar; i++) {
    cin >> par.first >> par.second;
    primerosK[i] = par;
  }
  pair<u_int,u_int> k_equipo = primerosK[k_lugar-1];
  for (u_int i = k_lugar; i < n_equipos; i++) {
    cin >> par.first >> par.second;
    if (par == k_equipo) 
      resultado++;
  }
  for (u_int i = 0; i < k_lugar - 1; i++) {
    if (primerosK[i] == k_equipo) 
          resultado++;
  }
  cout << resultado;
}