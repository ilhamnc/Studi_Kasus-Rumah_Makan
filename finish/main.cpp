#include <iostream>
#include <fstream>
#include "../library/input.h"
#include "../library/proses.h"
#include "../library/output.h"
using namespace std;

int main() {
	Input input;
	input.menu();
	
	Proses proses;
	proses.getData();
	proses.hasil();
	
	output out;
	out.cetak();
	return 0;
}
