#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include <cmath>


using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ifstream;
using std::ostringstream;
using std::istringstream;

using namespace std;

int main()
{
    ifstream archivo("pruebas.csv");
    if (!archivo)
    {
        std::cout << "El archivo sugerido no existe!" << std::endl;
        return 1;




    string linea;
    char delimitador = ';';


    getline(archivo, linea);


    while (getline(archivo, linea))
    {

    }

    archivo.close();
    }
    return 2;
}
