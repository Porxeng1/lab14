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
void showMatrix(const bool show[][N]){
	for(int i=0 ; i<N; i++){
      for(int j=0; j< N; j++){
       cout << show[i][j];
	   cout << " ";
	 }
	 cout << "\n";
	}   
}
void inputMatrix(double input[][N]){
	for(int i=0; i <N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j=0; j<N;j++){
			cin >> input[i][j];
		}
	}
}
void findLocalMax(const double localmax[][N], bool find[][N]){
	for(int i=0; i<N; i++){
		find[i][0] =0;
		find[0][i] =0;
		find[i][N-1] =0;
		find[N-1][i] =0;
	}
	for(int i =1;i<N-1;i++){
      for(int j=1;j<N-1;j++){
		if(localmax[i][j] >= localmax[i+1][j] && localmax[i][j] >= localmax[i][j+1] && localmax[i][j] >= localmax[i][j-1] && localmax[i][j] >= localmax[i-1][j]){
	    find[i][j] = true;}
      
	    else {
		find[i][j] = false;
	  }

	  }
	}
	 
}