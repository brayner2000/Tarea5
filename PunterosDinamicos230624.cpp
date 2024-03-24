#include <iostream>
using namespace std;
// punteros con asinacion de memoria dinamico;
// new = reservar un espacio en memoria
// delete [] = liberar la memoria

main() {
	int fil = 0, col=0, **pm_notas;
	cout<<"Ingrese las filas;"
	cin>>fil;
	cout<<"Ingrese las columnas;"
	cin>>fil;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		for (int ii=0;ii<col;ii++){
			cout<<"Estudiante"<<i<<", Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+1)+ii);
		}
		cout<<"_____________________"<<endl};
	}
	)system("pause");
}	
		
}
