#ifndef _MINHALIB_H_
#define _MINHALIB_H_

namesoace exemplo{
	
	extern "C" void imprime(std::string frase);
	extern "C" void soma(int valorA, int valorB);


	template <typename T>
	T max(T a, T b){
		return (a>b) ? a:b;
	}
}

#endif