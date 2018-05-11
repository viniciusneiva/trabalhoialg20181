#include <iostream>
#include <iomanip>

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
Desenho personagem[50];	// como eu acho que cada personagem terá apenas um nome,criador,etc eu tirei os vetores das strings e coloquei na struct dos personagens

int main(){
    cout << setw(53) << "PERSONAGENS DE DESENHO ANIMADO" << "\n\n";
    cout << setw(45) << "###############" << endl << setw(45) <<"##           ##" << endl << setw(45) << "##   MENU    ##" << endl << setw(45) << "##           ##" << endl << setw(45) << "###############" << "\n\n";
    cout << "Digite o numero da opcao que deseja executar: " << "\n\n" << "1. Incluir" << setw(15) << "2. Excluir" << setw(14) << "3. Listar" << setw(15) << "4. Alterar" << setw(12) << "5. Sair" << "\n\n";
    int menu;
    cin >> menu;
    //bool excluir = false;

	int tam = 0; 	// variável do indice personagem a ser preenchido
	while (menu != 5){		//Enquanto o usuário não comanda pra sair vai realizando as tarefas pedidas e no final é pedido outro menu.

    switch (menu)
    {
    case 1:
        cout << "Incluir: ";
        cout << "\n Qual e' o nome do personagem do desenho animado? ";
        cin >> personagem[tam].Nome;
        cout << "\n Qual e' o nome do criador desse desenho? ";
        cin >> personagem[tam].Criador;
        cout << "\n Qual é o titulo do desenho? ";
        cin >> personagem[tam].Titulo;
        cout << "\n Quais sao as principais relacoes desse desenho? ";
        cin >> personagem[tam].Relacoes;
        tam++;
        break;
    case 2:
        cout << "Excluir: ";
        break;
    case 3:
       { cout << "Listar: ";
        int indice = 0;
        while (indice < tam){
			cout << "Nome do personagem: " << personagem[indice].Nome << endl << "Seu criador: " << personagem[indice].Criador << endl
			<< "O titulo do desenho: " << personagem[indice].Titulo << endl << "Suas relacoes: " << personagem[indice].Relacoes << endl;
			indice++;
		}	}
        break;
    case 4:
        cout << "Alterar: ";
        break;
    case 5:
        cout << "Sair: ";
        break;
    default:
        cout << "Comando invalido!";
        break;
    }
    cin >> menu;
  }
    return 0;
}
