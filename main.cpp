#include <iostream>
#include "Heapsort.h"
#include <fstream>
using namespace std;
using namespace ordenamiento;

void ingresarDatos(int B[], int tam);
void imprimir(int B[], int tam);
int main()
{
  int A[100],n;
  ofstream archivo;
  archivo.open("Heapsort.txt",ios::out);
  cout<<"Ingresa la cantidad de elementos del arreglo: ";
  cin>>n;
  ingresarDatos(A, n);
  cout<<"Vector Original:";
  imprimir(A, n);

  cout<<"Vector Ordenado:";
  HeapSort(A,n);
  imprimir(A, n);
  archivo.close();
  return 0;
}

void ingresarDatos(int B[], int tam){
  for(int i=1;i<=tam;i++){
    cout<<"Ingrese elemento "<<i<<": ";
    cin >> B[i];
  }
}

void imprimir(int B[], int tam){
  ofstream archivo;
  archivo.open("Heapsort.txt",ios::app);
  archivo<<endl<<"Arreglo:"<<endl;
  for(int i=1;i<=tam;i++){
    cout<<"|"<<B[i]<<"|";
    archivo<<"|"<<B[i]<<"|";
  }
  cout<<endl;
  archivo<<endl;
  archivo.close();
}