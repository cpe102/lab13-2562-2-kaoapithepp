#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double A [][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cin >> A[i][j];
    }
  }
}

void findLocalMax(const double B [][N],bool C [][N]){
    for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      C[i][j] = 0;
    }
  }
    for(int i=0;i<N-1;i++){
    for(int j=0;j<N-1;j++){
      if( B[i][j] > B[i][j+1] && B[i][j] > B[i][j-1] && B[i][j] > B[i+1][j] && B[i][j] > B[i-1][j]){
        C[i][j] = 1;
      }
    }
  }
}

void showMatrix(const bool D [][N]){
    for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << D[i][j] << " " ;
    }
    cout << "\n";
  }
}
