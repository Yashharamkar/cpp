//pointer- pointer point to the memory location
//pointer dereferencing- taking  value from the memory
#include <cstdio>
using namespace std;

int main() {
	int mycard=4;
	
	int *my;
	my=&mycard;
	printf("%d\n",mycard);
	printf("%p\n",my);
	//pointer dereferencing
	mycard=*my;
	printf("%d\n",mycard);
	
	return 0;
}

// op-: 4
//      0x7ffc2c09bcb4
//      4
