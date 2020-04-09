#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int  loc ;
	for(int i=1;i<N;i++)
	{
		loc = i;
		for(int k=0; k<N; k++){
			if( k == loc ) cout << "[" << d[k] << "] ";
			else cout << d[k]<< " " ;
		}
		cout << "=>";

		for (int j=i;j>0;j--){
			if (d[j] > d[j-1]) 
			{
				swap(d,j,j-1);
				loc = j-1;
			}
		}

		for(int c=0; c<N; c++){
			if( c == loc)  cout << "["<< d[c] << "] " ;
			else cout << d[c] << " ";
		}
		cout << "\n";
		 for (int j=i;j>0;j--){
			if (d[j] > d[j-1]) 
			{
				swap(d,j,j-1);
			}
		}
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}