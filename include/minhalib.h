#ifndef _MINHALIB_H_
#define _MINHALIB_H_
using namespace std;
namespace exemplo{
	
	extern "C" void imprime(string frase);
	extern "C" int soma(int valorA, int valorB);


	template <typename T>
	T max(T a, T b){
		return (a>b) ? a:b;
	}
}

#endif