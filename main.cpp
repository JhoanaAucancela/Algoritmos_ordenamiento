#include <iostream>
#include <fstream>
#include "Quicksort.h"
using namespace std;
using namespace ordenamiento;


void ingresarDatos(int arr[], int t);

int main()
{
int a;
int A[50];
  ofstream archivo;
  archivo.open("quicksort.txt",ios::out);

  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>a;
  ingresarDatos(A,a);

  archivo<<"ALGORITMOS DE ORDENAMIENTO QUICKSORT"<<endl;
  cout<<"\nALGORITMOS DE ORDENAMIENTO QUICKSORT"<<endl;
  archivo<<endl<<"Arreglo original"<<endl;
  cout<<endl<<"Arreglo original"<<endl;
  for(int i=0;i<a;i++){
    cout<<"|"<<A[i]<<"|";
    archivo<<"|"<<A[i]<<"|";
  }
  cout<<endl;
  archivo<<endl<<"Arreglo Ordenado"<<endl;
  cout<<endl<<"Arreglo Ordenado"<<endl;
  ordenar(A, 0, a-1);
  for(int i=0;i<a;i++){
    cout<<"|"<<A[i]<<"|";
    archivo<<"|"<<A[i]<<"|";
    }
  archivo<<endl;
  return 0;
}
void ingresarDatos(int arr[], int t){

  for(int i=0; i<t;i++){
    cout<<"Ingrese un numero: ";
    cin>>arr[i];
  }

}