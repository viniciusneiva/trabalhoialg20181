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
    string Nome[50]; //Primeiro campo do registro. Utilizado para busca de um certo dado no caso o registro de um personagem de um desenho. Para efeitos de busca deve-se utilizar o Nome do personagem
    string Criador[50];
    string Titulo[50];
    string Relacoes[50];
};
Desenho personagem;

int main(){
    cout << setw(53) << "PERSONAGENS DE DESENHO ANIMADO" << "\n\n";
    cout << setw(45) << "###############" << endl << setw(45) <<"##           ##" << endl << setw(45) << "##   MENU    ##" << endl << setw(45) << "##           ##" << endl << setw(45) << "###############" << "\n\n";
    cout << "Digite o numero da opcao que deseja executar: " << "\n\n" << "1. Incluir" << setw(15) << "2. Excluir" << setw(14) << "3. Listar" << setw(15) << "4. Alterar" << setw(12) << "5. Sair" << "\n\n";
    int menu;
    cin >> menu;
    //bool excluir = false;
    const int tam = 50;
    switch (menu)
    {
    case 1:
        cout << "Incluir: ";
        cout << "\n Qual e' o nome do personagem do desenho animado? ";
        cin >> personagem.Nome[tam];
        cout << "\n Qual e' o nome do criador desse desenho? ";
        cin >> personagem.Criador[tam];
        cout << "\n Qual é o titulo do desenho? ";
        cin >> personagem.Titulo[tam];
        cout << "\n Quais sao as principais relacoes desse desenho? ";
        cin >> personagem.Relacoes[tam];
        break;
    case 2:
        cout << "Excluir: ";
        break;
    case 3:
        cout << "Listar: ";
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

    return 0;
}
