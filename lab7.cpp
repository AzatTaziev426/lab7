#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

double x1(double x) {   													

		return (x*exp(-2*x))/6;								
}

//вторая производная
double x2(double x) {
		
		return ( -8*1 -2*x*exp(-2*x)+exp(-2*x))/6;
}

//третья производная
double x3(double x) {

		return ( -8*x2(x) + 4*x*exp(-2*x)-4*exp(-2*x))/6;																																							
}

//четвертая производная
double x4(double x) {

		return (-8*x3(x) - 8*x2(x) - 8*x*exp(-2*x) + 12*exp(-2*x))/6;																																						
}

double xx1(double x) {

		return -(exp(-2*x)*(x - 1)*x)/3;
}

double xx2(double x) {

		return  exp(-2*x)*x*(2*x*x - 4*x - 8*exp(-2*x) + 1);
}

double xx3(double x) {

		return 2*(exp(-2*x)*x*x*(-5*x*x+14*x+12*exp(-2*x)-6))/27;
}

double xx4(double x) {

		return 4*(exp(-2*x)*x*x*x*(4*x*x-15*x-2*exp(-2*x)+10))/81;
}





int main(){
	int n = 200;
	double x = 0;
	double y[n] = {0};
	double y1[n] = {0};
	double h = 0.01;
		
	
	
	
	// ряд тейлора y(x)
	for(int i = 0; i < 200; i++) {

		y[i] = 1 +x1(x)*x + (x2(x)*pow(x,2))/2 + (x3(x)*pow(x,3))/6 + (x4(x)*pow(x,4))/24;
		x += h;
	}

	x = 0;
	for(int i = 0; i < 200; i++) {

		y1[i] =  xx1(x) + xx2(x) + xx3(x) + xx4(x);
		x += h;
	}


	x = 0;
	for(int i = 0; i < n; i++) {

		cout<< x<< "   " << y[i] << endl;
		x += h;
	}

	cout << "--------------------------------------------------" << endl;
	



	x = 0;
	for(int i = 0; i < n; i++) {

		cout<< x<< "   " << y1[i] << endl;
		x += h;
	}

	cout << "--------------------------------------------------" << endl;
	

	
	//вывод точек в файла для y(x)
	x = 0;
	ofstream fout("load.txt");   
    for(int i = 0; i < n; i++) {
                    	
    	fout<< x <<"\t "<<y[i]<<endl;
    	x += h;       	
    
    }
    fout.close();


    //вывод точек в файла для y'(x)
	x = 0;
	ofstream fout1("load1.txt");   
    for(int i = 0; i < n; i++) {
                    	
    	fout1<< x <<"\t "<<y1[i]<<endl;
    	x += h;       	
    
    }
    fout1.close();

    
	ofstream fout2("load2.txt");   
    for(int i = 0; i < n; i++) {
                    	
    	fout2<< y[i] <<"\t "<<y1[i]<<endl;
    	       	
   	}
    fout2.close();

   

	return 0;
} 
