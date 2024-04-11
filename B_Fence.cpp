#include <iostream>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(false), cin.tie(nullptr);
  unsigned int n_vallas, k_piano, j_indice;
  int min_sum, act_sum;
  vector<int> vallas(n_vallas);

  // Obtenemos n y k
  cin >> n_vallas;
  cin >> k_piano;

  // inicializamos
  act_sum = 0;
  for (unsigned int i = 0; i < k_piano; i++)
  {
    cin >> vallas[i];
    act_sum = act_sum + vallas[i];
  }
  j_indice = 0;
  min_sum = act_sum;

  // buscamos j tq sum(vallas[j...j+k]) es minimo.
  for (unsigned int i = k_piano; i < n_vallas; i++)
  {
    cin >> vallas[i];
    act_sum = act_sum + vallas[i] - vallas[i - k_piano];
    if (act_sum < min_sum)
    {
      j_indice = i - k_piano + 2;
      min_sum = act_sum;
    }
  }
  cout << j_indice << endl;
}