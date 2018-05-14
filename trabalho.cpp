#include <iostream>
#include <iomanip>
#include <string>
#define TAMAX 50 //TAMANHO MAXIMO = 50
using namespace std;


/* ENTRADAS
Personagem de desenho animado
● Nome
● Criador
● Título do desenho
● Principais relações */

struct Desenho
{
    string Nome; //Primeiro campo do registro. Utilizado para busca de um certo dado no caso o registro de um personagem de um desenho. Para efeitos de busca deve-se utilizar o Nome do personagem
    string Criador;
    string Titulo;
    string Relacoes;


};
Desenho personagem[TAMAX];	// como eu acho que cada personagem terá apenas um nome,criador,etc eu tirei os vetores das strings e coloquei na struct dos personagens

int main(){
    cout << setw(53) << "PERSONAGENS DE DESENHO ANIMADO" << "\n\n";
    cout << setw(45) << "###############" << endl << setw(45) <<"##           ##" << endl << setw(45) << "##   MENU    ##" << endl << setw(45) << "##           ##" << endl << setw(45) << "###############" << "\n\n";
    cout << "Digite o numero da opcao que deseja executar: " << "\n\n" << "1. Incluir" << setw(15) << "2. Excluir" << setw(14) << "3. Listar" << setw(15) << "4. Alterar" << setw(12) << "5. Sair" << "\n\n";
    char menu;
    cin >> menu;
    bool existe[TAMAX];
    string Busca;
    int contador=0; //contador para o caso de tentar excluir algo ao abrir o programa


    for(int i=0;i<TAMAX;i++){
    	existe[i]=false;  //vetor booleano como pedido no trabalho para verificar se pode apagar
	}

	int tam = 0; 	// variável do indice personagem a ser preenchido
	while (menu != '5'){		//Enquanto o usuário não comanda pra sair vai realizando as tarefas pedidas e no final é pedido outro menu.Removi o case 5 do switch pois se tornou desnecessário.

	    switch (menu)
	    {
	    case '1':  //mudei o menu para char porque quando digitava uma letra no menu "Comando Inv�lido" entrava em Loop Infinito
	    	{

	    	if(tam == TAMAX){
	    		cout<<"cheio" <<endl;

	    	}else{
		        cout << "Incluir: " << endl;
		        cout << "\n Qual e' o nome do personagem do desenho animado? ";
		        cin >> personagem[tam].Nome;

		        cout << "\n Qual e' o nome do criador desse desenho? ";
		        cin >> personagem[tam].Criador;

		        cout << "\n Qual e' o titulo do desenho? ";
		        cin >> personagem[tam].Titulo;

		        cout << "\n Quais sao as principais relacoes desse desenho? ";
		        cin >> personagem[tam].Relacoes;

				existe[tam]=true; //Setei o vetor booleano em true para que na hora de listar s� imprima os verdadeiros a fim de satisfazer as condi��es do caso 2 (EXCLUIR)
		        tam++;
		        contador++;
	   		}
	   		}
	        break;
	    case '2':
	    	{

	        cout << "Excluir: " << endl;
	        cout << "Qual o nome do personagem que deseja apagar da lista?" << endl;
	        if(contador!=0){
			contador--;
			cin>>Busca;										// Criei uma string Busca que juntamente com o vetor booleano, percorria
	        for(int i=0;i<TAMAX;i++){						// todos os espa�os dos vetores (tam) verificando se existia algo alocado no
	        	if(existe[i]==true){						// espa�o, se existisse, setava como FALSE  e criei a condi��o no caso 3 (LISTAR)
	        		if(Busca==personagem[i].Nome){			// de que s� iria imprimir se o existe[i] estivesse em TRUE.
	        			existe[i]=false;
	        			cout<< "excluido com sucesso" << endl;
					}else{
						cout<< "nao existe";
					}
				}
			}
			}
			}
	        break;
	    case '3':
	       	{
		    cout << "Listar: "<< endl;

	        	for(int i=0;i<tam;i++){
		        	if(existe[i]==true){

					cout << "Nome do personagem: " << personagem[i].Nome << endl;
					cout << "Seu criador: " << personagem[i].Criador << endl;
					cout << "O titulo do desenho: " << personagem[i].Titulo << endl;
					cout << "Suas relacoes: " << personagem[i].Relacoes << endl;

					}

				}
			}

	        break;
	    case '4':
	    	{

	        cout << "Alterar: " << endl;
	        cout<< "Entre o nome do personagem" << endl;
	        cin>>Busca;
	         for(int i=0;i<TAMAX;i++){
	        	if(existe[i]==true){
	        		if(Busca==personagem[i].Nome){
	        			cin >> personagem[i].Nome;
	        			cin >> personagem[i].Criador;
	        			cin >> personagem[i].Titulo;
	        			cin >> personagem[i].Relacoes;
					}else{
						cout<< "nao existe";
					}
				}
			}
			}
	        break;
	    default:
	    	{

	        cout << "Comando invalido!";

	        break;
	    	}
	    }
    cin >> menu;
  }
    return 0;
}
