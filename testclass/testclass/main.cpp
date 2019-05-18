#include<iostream>
#include "testclass.h"
using namespace std;
testclass cl = testclass();


int main(void) {
	cl.input(800);
	cout << cl.output() << endl;

	return 0;
}