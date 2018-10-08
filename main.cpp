#include <iostream> 
#include<string.h>
#include<stdlib.h>
#include "hash.h"

using namespace std;


int main(){
	hash haT;
	int index;
	
	index = haT.Hash("ssi");
	cout << "index = " << index << "\n";
	return 0;
}
