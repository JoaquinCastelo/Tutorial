#include <iostream>
#include <cstdlib>
using namespace std;

const int TAMMAX=10;

void llenarM(int f, int c, int mat[TAMMAX][TAMMAX]){
 for(int i=0;i<f;i++){
  for(int j=0;j<c;j++){
   mat[i][j]=rand() % 2;
  }
 }
}

void imprimir(int f, int c, int mat[TAMMAX][TAMMAX]){
 for(int i=0;i<f;i++){
  for(int j=0;j<c;j++){
   cout<<mat[i][j];
  }
  cout<<endl;
 }
 cout<<"----------"<<endl;
}

void feliminar(int mat[TAMMAX][TAMMAX], int fpiv, int fmode, int coef, int f, int c){
 for(int i=0;i<c;i++){
    mat[fmode][i]=mat[fmode][i] - coef*mat[fpiv][i];
 }
}

int main(){
 int nf, nc;
 cout<<"FILAS:"<<endl;
 cin>>nf;
 cout<<"COLUMNAS:"<<endl;
 cin>>nc;
 int M[TAMMAX][TAMMAX];
 llenarM(nf,nc,M);
 imprimir(nf,nc,M);
 feliminar(M,0,3,2,nf,nc);
 imprimir(nf,nc,M);
 return 0;
}
