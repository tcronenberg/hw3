#include <iostream>
#include <cstdlib>

using namespace std;

void add_rand(double* x, const int N){
	for(int i = 0; i<N; i++)
		x[i] = rand()/(double)RAND_MAX; 
} 

void calc_mean(double* x, const int N, double& m, double& v){
	
	double sum=0, sumsqr=0;
	for(int i = 0; i<N; i++)
		sum += x[i];
	m = sum / N;
	
	for(int i = 0; i<N; i++)
		sumsqr += (x[i]-m)*(x[i]-m);
	v = sumsqr / N;
} 

int main(){
   srand(time(NULL));
	const int N = 100;
	double x[N];
	double v, m;
	
	add_rand(x, N);
	calc_mean(x, N, m, v);

	cout << "mean=" << m << "\tvar=" << v << endl;

	return 0;
}
