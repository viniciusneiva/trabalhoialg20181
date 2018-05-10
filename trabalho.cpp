#include <iostream>
#include <iomanip>

using namespace std;


/* ENTRADAS

Personagem de desenho animado
● Nome
● Criador
● Título do desenho
● Principais relações */


int main(){
    cout << setw(53) << "PERSONAGENS DE DESENHO ANIMADO" << "\n\n";
    cout << setw(45) << "###############" << endl << setw(45) <<"##           ##" << endl << setw(45) << "##   MENU    ##" << endl << setw(45) << "##           ##" << endl << setw(45) << "###############" << "\n\n";
    cout << "Digite o numero da opcao que deseja executar: " << "\n\n" << "1. Incluir" << setw(15) << "2. Excluir" << setw(15) << "3. Listar" << setw(15) << "4. Alterar" << setw(15) << "5. Sair" << "\n\n";
    int menu;
    cin >> menu;
    switch (menu)
    {
    case 1:
        cout << "Incluir: ";
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
        cout << "Invalido!";
        break;
    }

    return 0;
}
