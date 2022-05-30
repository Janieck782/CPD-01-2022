# CPD-01-2022

Forma de ejecutar la version Sequencial:

1- Agregar a la carpeta Sequencial el archivo "pruebas.csv" 

2- Abrir terminal en la ubicacion de la carpeta Sequencial

3- Ingresar las siguientes lineas de comando:

    Para compilar:
    g++ -o ejecutable main.cpp
    
    Para ejecutar:
    ./ejecutable

Forma de ejecutar la version OpenMP

1- Agregar a la carpeta OpenMP el archivo "pruebas.csv" 

2- Abrir terminal en la ubicacion de la carpeta OpenMP

3- Ingresar las siguientes lineas de comando:

    Para compilar:
    c++ -fopenmp OpenMP.cpp
    C++ -Wall fopenmp OpenMP.cpp
    
    Para ejecutar:
    time ./a.out (Calcula tiempo de ejecucion)
    
    Para analizar el comportamiento de los hilos:
    Usar la siguiente linea de comando en una ventana nueva 
    del terminal mientras corre el codigo: htop
