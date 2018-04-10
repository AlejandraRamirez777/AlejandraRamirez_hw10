#include <iostream>
using namespace std;

double **matrix_product(int Ma, int Na, double **mata, int Mb, int Nb, double **matb);
double **get_Matrix(int M, int N);

int main () {

    /*
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
    */

    double Ma;
    double Mb;
    double Na;
    double Nb;
    cout << "Ingresar M de matriz a " << endl;
    cin >> Ma;
    cout << "Ingresar N de matriz a " << endl;
    cin >> Na;
    cout << "Ingresar M de matriz b " << endl;
    cin >> Mb;
    cout << "Ingresar N de matriz b " << endl;
    cin >> Nb;
    if(Mb != Na){
    cout << " Dimensiones de matrices no permiten producto matricial " << endl;
    return 0;
    }
    cout << " Ingresar matriz a " << endl;
    double **A = get_Matrix(Ma, Na);
    cout << " Ingresar matriz b " << endl;
    double **B = get_Matrix(Mb, Nb);
   
    double **sol = matrix_product(Ma,Na, A, Mb,Nb,B);
    cout << " Producto Matricial " << endl;
    int i;
    int j;
     for(i=0;i<Ma;i++){
           for(j=0;j<Nb;j++){
           cout << sol[i][j] << " ";
            }
    cout << endl;
    }

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
          cout << "Ingresar elemento de matriz en fila " << i << "columna " << j << endl;
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
     


