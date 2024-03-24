#include <iostream>
using namespace std;
 
main () {

    int fil =0, col,**pm_notas;
    cout<<"ingrese la cantidad de estudiantes:";
    cin>>fil;
    cout<<"ingrese la cantidad de notas por estudiante:";
    cin>>col;
    
    pm_notas =new int* [fil];
    for(int i=0;i<fil;i++)
        pm_notas[i]=new int[col];
        
    for (int i=0;i<fil;i++){
    	cout<<"__Estudiante__"<<i <<endl;
    	for (int ii=0;ii<col;ii++){
    		
    		cout<<"nota:" <<ii<<" :";
			cin>>(( pm_notas+i)+ii);
			
			}
		cout<<"______"<<endl;		

	}    
	cout <<"__Mostrar notas_"<<endl;
	for (int i=0;i<fil;i++){
    	 
    	for (int ii=0;ii<col;ii++){
    		
		    cout<<(( pm_notas+i)+ii)<<endl;
			
			}
		cout<<"________"<<endl;
	}	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete[]pm_notas;
    system("pause");
    
    

}
