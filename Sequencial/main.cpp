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

float truncar(float nro){
     long x = 100 * nro;
     float y = (float)x / (float)100;
     return y;
}

using namespace std;

int comprobar(int pregunta,string respuestas){

string respuesta = "";

respuesta=respuesta+respuestas[1];

 if(respuesta=="-"){
    return -1;
 }
switch(pregunta) //donde opción es la variable a comparar
{
    case 1: //Bloque de instrucciones 1;
        if ( respuesta == "A"){
            return 1;
        }else return 0;
    break;
    case 2: //Bloque de instrucciones 2;
        if (respuesta=="E"){
            return 1;
        }else return 0;
    break;
    case 3: //Bloque de instrucciones 3;
        if (respuesta=="C"){
            return 1;
        }else return 0;
    break;
    case 4: //Bloque de instrucciones 3;
        if (respuesta=="B"){
            return 1;
        }else return 0;
    break;
    case 5: //Bloque de instrucciones 3;
        if (respuesta=="B"){
            return 1;
        }else return 0;
    break;
    case 6: //Bloque de instrucciones 3;
        if (respuesta=="D"){
            return 1;
        }else return 0;
    break;
    case 7: //Bloque de instrucciones 3;
        if (respuesta=="A"){
            return 1;
        }else return 0;
    break;
    case 8: //Bloque de instrucciones 3;
        if (respuesta=="B"){
            return 1;
        }else return 0;
    break;
    case 9: //Bloque de instrucciones 3;
        if (respuesta=="E"){
            return 1;
        }else return 0;
    break;
    case 10: //Bloque de instrucciones 3;
        if (respuesta=="C"){
            return 1;
        }else return 0;
    break;
    case 11: //Bloque de instrucciones 3;
        if (respuesta=="B"){
            return 1;
        }else return 0;
    break;
    case 12: //Bloque de instrucciones 3;
        if (respuesta=="D"){
            return 1;
        }else return 0;
    break;
    //Nótese que valor 1 2 y 3 son los valores que puede tomar la opción
    //la instrucción break es necesaria, para no ejecutar todos los casos.
}


}

int main(){

      cout << "Integrantes:\nLUCIANO EDUARDO DONOSO MONTERO\nJEAN SEBASTIÁN SANDOVAL CASTRO\nMATIAS IGNACIO SILVA FARIAS\n";

    ifstream archivo("pruebas.csv");
    if (!archivo)// revisa si el archivo se abrio de manera correcta
    {
        std::cout << "El archivo sugerido no existe!" << std::endl;
        return 1;}

        fstream fout;
        fout.open("reporte.csv", ios::out | ios::app);





    string linea;
    char delimitador = ';';


    getline(archivo, linea);

    ofstream salida("reporte.csv");
    salida<<'\u0022'<< "Token De Estudiante"<<'\u0022';
    salida<<","<<'\u0022'<< "Correctas"<<'\u0022';
    salida<<","<<'\u0022'<<"Incorrectas"<<'\u0022';
    salida<<","<<'\u0022'<< "Omitidas"<<'\u0022';
    salida<<","<<'\u0022'<< "Puntaje"<<'\u0022';
    salida<<","<<'\u0022'<< "Nota"<<'\u0022';
    salida<<endl;
    while (getline(archivo, linea))
    {
        stringstream stream(linea); // Convertir la cadena a un stream
        string TokenDeEstudiante, Pregunta01, Pregunta02, Pregunta03, Pregunta04, Pregunta05, Pregunta06, Pregunta07, Pregunta08, Pregunta09,
        Pregunta10, Pregunta11, Pregunta12;
        //Extraer todos los valores de esa fila
        getline(stream, TokenDeEstudiante , delimitador);
        getline(stream, Pregunta01, delimitador);
        getline(stream, Pregunta02, delimitador);
        getline(stream, Pregunta03, delimitador);
        getline(stream, Pregunta04, delimitador);
        getline(stream, Pregunta05, delimitador);
        getline(stream, Pregunta06, delimitador);
        getline(stream, Pregunta07, delimitador);
        getline(stream, Pregunta08, delimitador);
        getline(stream, Pregunta09, delimitador);
        getline(stream, Pregunta10, delimitador);
        getline(stream, Pregunta11, delimitador);
        getline(stream, Pregunta12, delimitador);

        int correctas=0;
        int incorrectas=0;
        int omitidas=0;

        int res[15];

        res[1] = comprobar(1,Pregunta01);
        res[2] = comprobar(2,Pregunta02);
        res[3] = comprobar(3,Pregunta03);
        res[4] = comprobar(4,Pregunta04);
        res[5] = comprobar(5,Pregunta05);
        res[6] = comprobar(6,Pregunta06);
        res[7] = comprobar(7,Pregunta07);
        res[8] = comprobar(8,Pregunta08);
        res[9] = comprobar(9,Pregunta09);
        res[10] = comprobar(10,Pregunta10);
        res[11] = comprobar(11,Pregunta11);
        res[12] = comprobar(12,Pregunta12);

        for(int i = 1; i<13;i++ ){
            if(res[i]==-1){
                omitidas++;
            }
            if(res[i]==0){
                incorrectas++;
            }
            if(res[i]==1){
                correctas++;
            }
        }

    float puntaje = (correctas*0.5)-(incorrectas*0.12);
    float nota = puntaje + 1 ;

    nota = truncar(nota);
    if(nota<1){
        nota=1;
    }



    salida<< TokenDeEstudiante;
    salida<<","<<'\u0022'<< correctas<<'\u0022';
    salida<<","<<'\u0022'<<incorrectas<<'\u0022';
    salida<<","<<'\u0022'<< omitidas<<'\u0022';
    salida<<","<<'\u0022'<< puntaje<<'\u0022';
    salida<<","<<'\u0022'<< nota<<'\u0022';
    salida<<endl;

    }

    archivo.close();

    return 2;
}
