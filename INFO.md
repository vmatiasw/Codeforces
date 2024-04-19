# Experiencia Codeforce

Utilizando C++, el mas rapido?
compilar codigo C++: g++ tu_programa.cpp -o ejecutable

Enviar compilado con GNU G++20 13.2 (64 bit, winlibs)
Tiene soporte a int128 (que a veces es util en competencias)

## Tips al programar en C++

### Para que el stdin vaya mas rapido

agregar en el main la linea

```cpp
ios::sync_with_stdio(false), cin.tie(nullptr);
```

### O(1)

#### Strings

Al ordenar con sort o comparar con < y >, etc. Se utiliza el orden lexicográfico por defecto en c++.

##### \<String>.length

La complejidad de s.length() es O(1), es decir, constante.
En C++, los objetos de tipo std::string almacenan su longitud como un atributo interno.

#### Pair

```cpp
#include <utility,iostream,vector o set>

std::pair<int, double> miPar(10, 3.14);

int primerElemento = miPar.first;
double segundoElemento = miPar.second;


```

#### Tuplas

```cpp
#include <tuple,iostream,vector o set>

std::tuple<int, double, char> miTupla(10, 3.14, 'a');

int primerElemento = std::get<0>(miTupla);
double segundoElemento = std::get<1>(miTupla);
char tercerElemento = std::get<2>(miTupla);
```

### O(log n)

#### map

map es una estructura de datos asociativa que permite almacenar elementos en pares clave-valor, donde cada clave es única dentro del mapa y está asociada a un único valor.

```cpp
#include <map>

std::map<clave_tipo, valor_tipo> nombre_mapa;

// Anadir o modificar elementos
edad["Juan"] = 40;

// Eliminar elementos
edad.erase("Pedro");

// Comprobar si una clave está presente
if (edad.find("María") != edad.end()) {
    std::cout << "María está presente en el mapa." << std::endl;
}
```

##### Iterador

Un iterador es un objeto que permite recorrer secuencialmente los elementos de una estructura de datos, como un map. Puedes utilizar un iterador para acceder a ubicaciones específicas dentro del mapa y manipular los elementos correspondientes.

```cpp
#include <map>

std::map<std::string, int> edad;

// Acceder a una ubicación específica con un iterador
std::map<std::string, int>::iterator it = edad.find("María");
if (it != edad.end()) {
    std::cout << "La edad de María es: " << it->second << std::endl;
} else {
    std::cout << "María no encontrada." << std::endl;
}


```

#### Conjuntos set

Para almacenar elementos únicos y mantenerlos ordenados automáticamente.
El orden por defecto es el mismo que en c++, para cambiarselo debemos pasarselo en una estructura que sobrecargue el operador de llamada a funcion (i.e que pueda funcionar como una funcion).

```cpp
#include <set>

std::set<int> mySet; // Un conjunto de enteros
std::set<std::string> wordSet; // Un conjunto de cadenas

struct Compare {
    bool operator() (int a, int b) const {
        return a > b;
    }
};

std::set<int, Compare> mySet;
// Un conjunto de enteros ordenados segun la estructura (o clase) Compare
```

En C++, Compare es simplemente un nombre que se utiliza para definir una estructura que sobrecarga el operador de llamada de función (operator()). Esta estructura se utiliza comúnmente como un comparador personalizado para especificar un orden diferente al estándar en contenedores como std::set.

##### Metodos

Agregar elemento: insert()
Verificar si un elemento está presente: find()
Eliminar elementos: erase()

### O(n log(n))

#### Sort

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
