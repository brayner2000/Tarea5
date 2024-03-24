#include <iostream>
using namespace std;

// new = reservar un espacio en memoria
// delete [] Liberar la memoria

main() {
	int fil = 0, col=0, **pm_notas;
	cout<<"Ingrese la cantidad Estudiantes:";
	cin>>fil;
	cout<<"Ingrese la cantidad Notas por estudiante:";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas [i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		for (int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*)pm_notas+i)+ii);
		}
		cout<<"_____________________"<<endl;
	}
	system("pausa");
}
