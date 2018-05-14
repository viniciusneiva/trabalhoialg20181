#include <iostream>
#include <string>
 
using namespace std;
int main(){
	int TAMAX;
	cin>> TAMAX;
	
    string Nome[TAMAX]; 
	string Criador[TAMAX];
    string Titulo[TAMAX];
    string Relacoes[TAMAX];	
    
    char menu;
    cin >> menu;
    bool existe[TAMAX];
    string Busca;
    int contador=0;
    
    
    for(int i=0;i<TAMAX;i++){
    	existe[i]=false;
	}
    
	int tam = 0; 	
	while (menu != '5'){	
	    switch (menu)
	    {
	    case '1':
	    	{
	    	
			
	    	if(tam >= TAMAX){
	    		cout<<"cheio" <<endl;
	    		
	    	}else{
		     	cin.ignore();
		     	
		        getline(cin,Nome[tam]);
		        
    			getline(cin,Criador[tam]);		       
		  
		        getline(cin,Titulo[tam]);
		        
		        getline(cin,Relacoes[tam]);
		        
				existe[tam]=true;
		        tam++;
		        contador++;
	   		}
	   		}
	        break;
	    case '2':
	    	{
	    	cin.ignore();
	    	bool achou=false;
			if(contador!=0){
			contador--;
	        getline(cin,Busca);
	        for(int i=0;i<TAMAX;i++){
	        	if(existe[i]==true && Busca==Nome[i] && achou==false){
	        			existe[i]=false;		
						achou=true;
				}
			}
			}
			if(achou==false){
				cout<< "nao existe"<<endl;
			}
			}
	        
	        break;
	    case '3':
	       	{ 
	        
	        	for(int i=0;i<tam;i++){
		        	if(existe[i]==true){
					
					cout  << Nome[i] << endl;
					cout << Criador[i] << endl;
					cout<< Titulo[i] << endl;
					cout << Relacoes[i] << endl;
					
					}
					
				}	
			}
			
	        break;
	    case '4':
	    	{
			cin.ignore();
	        getline(cin,Busca);
	        bool achou=false;
	        for(int i=0;i<TAMAX ;i++){
	        	if(existe[i]==true && Busca==Nome[i] && achou==false){
	        		
	        		achou=true;
			        
	    			getline(cin,Criador[i]);		       
			  
			        getline(cin,Titulo[i]);
			        
			        getline(cin,Relacoes[i]);
			        
						
				}
			}
			if(achou==false){
				cout<<"nao existe"<< endl;
			}
			}
	        break;
	    case '5':
	    	{
	        break;
	    	}
	    }
    cin >> menu;
  }
    return 0;
}
