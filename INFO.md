# Informacion de Codeforce

compilar codigo C++: g++ tu_programa.cpp -o ejecutable

Enviar compilado con GNU G++20 13.2 (64 bit, winlibs)
Tiene soporte a int128 (que a veces es util en competencias)

# Tips al programar en C++

## Para que el stdin vaya mas rapido:

agregar en el main la linea

```cpp
ios::sync_with_stdio(false), cin.tie(nullptr);
```

## Sort O(n log(n))

```cpp
#include <algorithm>
int main() {
    // Crear un vector de enteros desordenado
    std::vector<int> numeros = {5, 2, 8, 1, 6};

    // Ordenar el vector utilizando std::sort
    std::sort(numeros.begin(), numeros.end());
    ...
}
```

## Strings

Al ordenar con sort o comparar con < y >, etc. Se utiliza el orden lexicográfico por defecto en c++.

### <String>.length O(1)

La complejidad de s.length() es O(1), es decir, constante.
En C++, los objetos de tipo std::string almacenan su longitud como un atributo interno.
