#include <iostream>
using namespace std;

//void swapRows(int matrix[][], int numCols);//(r1,r2)={1-numRows}
//void scalarRow(int matrix[][], int numCols);
//void addRows(int matrix[][], int numCols);
void printMatrix(int matrix[][], int numRows, int numCols);
//int[][] enterMatrix();
//int menu();

main(){
	int r,c;
	cout<<"Enter matrix dimensions (Rows x Columns):"<<endl;
	cin>>r>>c;
	int matrix[r][c] = new int[r][c];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<"Enter number for element "<<i+1<<", "<<j+1<<endl;
			cin>>matrix[i][j];
		}
	}
	printMatrix(matrix, r, c);
	int columns=sizeof(matrix[0])/sizeof(int);//=c
	int rows=sizeof(matrix)/sizeof(matrix[0]);//=r
	cout<<"Rows: "<<rows<<endl<<"Columns: "<<columns<<endl;
//	scalarRows(matrix, c);
//	printMatrix(matrix, r, c);
}

void printMatrix(int matrix[][], int numRows, int numCols){

	cout<<"MATRIX:"<<endl;
	for(int i=0; i<numRows; i++){
		cout<<i+1<<"|";
		for(int j=0; j<numCols; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
/*
void swapRows(int matrix[][], int numCols){
	cout<<"Inside swapRows"<<sizeof(matrix)<<endl;
	int r1, r2, temp[numCols];
	cout<<"Enter rows to be swapped(int int):"<<endl;
	cin>>r1>>r2;
	r1--;
	r2--;
	for(int i=0; i<numCols; i++){
		temp[i]=matrix[r1][i];
	}
	for(int i=0; i<numCols; i++){
		matrix[r1][i]=matrix[r2][i];
		matrix[r2][i]=temp[i];
	}
}

void scalarRow(int matrix[][], int numCols){
	int r, s;
	cout<<"Enter row number:"<<endl;
	cin>>r;
	cout<<"Enter scalar:"<<endl;
	cin>>s;
	for(int i=0; i<numCols; i++){
		matrix[r-1][i]*=s;
	}
}

void addRows(int matrix[][], int numCols){
	int r1, r2, rfinal, temp[numCols];
	cout<<"Enter two rows to be added:"<<endl;
	cin>>r1>>r2;
	cout<<"Enter row to be replaced:"<<endl;
	cin>>rfinal;
	for(int i=0; i<numCols; i++){
		temp[i]=matrix[r1][i]+matrix[r2][i];
	}
	for(int i=0; i<numCols; i++){
		matrix[rfinal][i]=temp[i];
	}
}

int[][] enterMatrix(){
	int r,c;
	cout<<"Enter matrix dimensions (Rows x Columns):"<<endl;
	cin>>r>>c;
	int matrix[r][c] = new int[r][c];
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<"Enter number for element "<<i+1<<", "<<j+1<<endl;
			cin>>matrix[i][j];
		}
	}
	return matrix;
}*/
