#include "testclass.h"

testclass::testclass() {

}

void testclass::input(int  data) {
	m_data = data;
}

int testclass::output() {
	return m_data;
}