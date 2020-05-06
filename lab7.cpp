#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

//вторая производная
double x2(double x) {
		
		return -8/6 + x*exp(-2*x)/6;
}

//третья производная
double x3(double x) {

		return (-8*(x2(x))-2*x*exp(-2*x))/6;					//(-8*(-8/6 + x*exp(-2*x)/6)-2*x*exp(-2*x))/6
}

//четвертая производная
double x4(double x) {

		return (-8*(x3(x))-8*(x2(x))-(4*x*exp(-2*x)-4*exp(-2*x)))/6;				//(((-8*((-8*(-8/6 + x*exp(-2*x)/6)-2*x*exp(-2*x))/6)-8*(-8/6 + x*exp(-2*x)/6)-(4*x*exp(-2*x)-4*exp(-2*x)))/6)*x^4)/24
}


double xx2(double x) {

		return (exp(-2*x)*(1-2*x))/6;							//(x*x*(-(x*exp(-2*x))/3 + (exp(-2*x))/6))/2 + x*((x*exp(-2*x))/6 - 4/3);  
}


double xx3(double x) {

		return 5*(exp(-2*x)*(2*x-1))/9;							//(x*x*x*((10*x*exp(-2*x))/9-(5*exp(-2*x))/9))/6 +(x*x*((-5*x*exp(-2*x))/9)+ 16/9)/2; 
}


double xx4(double x) {

		return(exp(-2*x)*x*x*x*(x*x-7*x-8*exp(-2*x)+9))/81;
}



int main(){

	double x = 0;
	double yx[200] = {0};
	double yyx[200] = {0};
	double h = 0.01;

	// ряд тейлора y(x)
	for(int i = 0; i < 200; i++) {
	
		yx[i] = 1 + (x2(x)*x*x)/1*2 + (x3(x)*x*x*x)/1*2*3 + (x4(x)*x*x*x*x)/1*2*3*4;
		x += h;
	}

	for(int i = 0; i < 200; i++) {

		cout << yx[i] << endl;

	}

	cout << "--------------------------------------------------" << endl;
	

	// ряд тейлора y'(x)
	x = 0;
	for(int i = 0; i < 200; i++) {
	
		yyx[i] = xx2(x) + xx3(x) + xx4(x);
		x += h;
	}

	for(int i = 0; i < 200; i++) {

		cout << yyx[i] << endl;

	}



	//вывод точек в файла для y(x)
	x = 0;
	ofstream fout("load.txt");   
    for(int i = 0; i < 200; i++) {
                    	
    	fout<< x <<"\t "<<yx[i]<<endl;
    	x += h;       	
    
    }
    fout.close();

    
    //вывод точек в файла для y'(x)
    x = 0;
	ofstream fout1("load1.txt");   
    for(int i = 0; i < 200; i++) {
                    	
    	fout1<< x <<"\t "<<yyx[i]<<endl;
    	x += h;       	
    
    }
    fout1.close();

	return 0;
} 
