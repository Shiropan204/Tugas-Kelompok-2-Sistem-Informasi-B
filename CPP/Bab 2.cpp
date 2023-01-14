//Nama     : Jimmy Fernando
//Nim      : 2022240031
//Kelas    : SI-B
//Kelompok : 2

#include <iostream>
using namespace std;

int main() {
	int x[2][3] = {{2, 4, 6}, {8, 10, 12,}}; 
	int i, j;
	
	for (i=0; i<2; i++) { 
		for (j=0; j<3; j++) { 
		printf("%d ", x[i][j]); 
			}
		printf("\n"); 
			}
			return 0;
}
