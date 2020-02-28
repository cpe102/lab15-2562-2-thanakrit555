#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}
void randData(double *dPtr,int N,int M){
	for(int i = 0 ; i < N ; i ++){
		for(int j = 0 ; j < M ; j++){
			double s = rand()%101 ;
			*(dPtr+(M*i)+j) = s / 100 ;
			
		}
	}
	
}
void findRowSum(const double *dPtr,double *result,int N,int M){
for(int i = 0 ; i < N ; i ++){
		for(int j = 0 ; j < M ; j++){
			*(result+i) += *(dPtr+(M*i)+j) ;
		}
	}
}
void showData(double *dPtr,int N,int M){
	for(int i = 0 ; i < N ; i ++){
		cout << "\n" ;
		for(int j = 0 ; j < M ; j++){
			
			cout << *(dPtr+(M*i)+j)<< " "  ;
			
		}
	}
	cout << endl ;
}

	

//Write definition of randData(), showData() and findRowSum()
// srand()%0.00/1.00


	


