#include <iostream>
using namespace std;

double **matrix_product(int Ma, int Na, double **mata, int Mb, int Nb, double **matb);
double **get_Matrix(int M, int N);

int main () {
    //Esto es un vector de 10 comp
    double *a = new double[10];
    //matriz
    double **mat = new double*[10];
    int i;
    for(i=0;i<4;i++){
         mat[i] = new double[5];
     }
    int j;
    for(i=0;i<4;i++){
         mat[i] = new double[5];
         for(j=0;j<5;j++){
            mat[i][j] = i*j;
            cout << mat[i][j] << " ";
         }

     cout << endl;
     }
    get_Matrix(2, 1);

   return 0;
}

//Funcion de producto matricialç
//Param: dos matrices y sus respectivas dimensiones
//Return: producto de matrices ingresadas
double **matrix_product(int Ma, int Na, double **mata, int Mb, int Nb, double **matb){
    //matriz
    double **mat = new double*[Ma];
    int i;
    for(i=0;i<Ma;i++){
         mat[i] = new double[Nb];
    }
    //llenado
    int j;
    int k;
    for(i=0;i<Ma;i++){
         mat[i] = new double[Nb];
         for(j=0;j<Nb;j++){
               double s = 0;
               for(k = 0; k< Ma;k++){
                    s += mata[i][k]*matb[k][j];
               }
               mat[i][j] = s;
         }

     }
return mat;
}
double **get_Matrix(int M, int N){
      double el;
     //Elementos
     double **mat = new double*[M];
     int i;
     for(i=0;i<M;i++){
         mat[i] = new double[N];
     }
    //llenado
    int j;
    for(i=0;i<M;i++){
         mat[i] = new double[N];
         for(j=0;j<N;j++){
          cout << "Ingresar elemento de matriz en fila" << i << "columna" << j << endl;
          cin >> el;
          mat[i][j] = el;
         }
    }
  cout << "Matriz ingresada" << endl;  
  for(i=0;i<M;i++){
         for(j=0;j<N;j++){
          cout << mat[i][j] << " ";
         }
    cout << endl;
    }
return mat;
}
     


