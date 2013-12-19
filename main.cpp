#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

typedef unsigned long long ms;

ms GetTime()
{
	return chrono::system_clock::now().time_since_epoch() /
	       chrono::milliseconds(1);
}

int main()
{
	unsigned long long i, j;
	unsigned long long s;
	char * matrix;

	s = 5000;

	matrix = (char *)malloc(s * s);


	printf("Parsing rows:\n");
	printf(">> %lld\n", GetTime());
	for (i = 0; i != s; i++) {
		for (j = 0; j != s; j++) {
			matrix[ j + (i * s) ] = 1;
		}
	}
	printf(">> %lld\n", GetTime());



	printf("Parsing columns:\n");
	printf(">> %lld\n", GetTime());
	for (i = 0; i != s; i++) {
		for (j = 0; j != s; j++) {
			matrix[ i + (j * s) ] = 2;
		}
	}
	printf(">> %lld\n", GetTime());


	return 0;
}
