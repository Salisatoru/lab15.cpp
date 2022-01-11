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


void inputMatrix(double input[][N])
{
	for(int i=0 ; i<N ;i++)
	{
		cout<<"Row "<<i+1<<": ";
		for(int j=0; j<N ; j++)
		{
			cin>>input[i][j];
		}
	}
}

void showMatrix(const bool Show[][N])
{
	for(int i=0 ; i<N ;i++)
	{
		for(int j=0; j<N ; j++)
		{
			cout<<Show[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void findLocalMax(const double IP[][N], bool OP[][N])
{

	for(int i=0 ; i<N ;i++)
	{
		for(int j=0; j<N ; j++) OP[i][j]=false;
	}

	for(int i=1 ; i<N-1 ;i++)
	{
		for(int j=1; j<N-1 ; j++)
		{
			if( IP[i][j] >= IP[i-1][j] && IP[i][j] >= IP[i+1][j] && IP[i][j] >= IP[i][j-1] && IP[i][j] >= IP[i][j+1] )
				 OP[i][j]=true;
		}
	}
}
