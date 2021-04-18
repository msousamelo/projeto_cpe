#include "../inc/menu.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

// implementação das funções
void menu_inicial()
{
	cout << "***********************************************************************" << endl;
	cout << "*       SISTEMA DE GESTAO E CONTROLE DE INVENTARIO PATRIMONIAL        *" << endl;
	cout << "***********************************************************************" << endl;
	cout << endl;
}
void menu_validacao()
{
	cout << "Para acesso so Sistema de Gestao e Controle de Inventario e necessario a autenticacao utilizando usuario e senha." << endl;
	cout << endl;
	cout << "Nota: Para o campo usuario utilize o numero da sua matricula." << endl;
	cout << endl;
};

class loginManager{
    public:
        string userNameAttempt;
        string passWordAttempt;

        bool login(){
            cout << "Para acessar o sistema, utilize seu login e senha" << endl;
            cout << "Login: " << endl;
            cin >> userNameAttempt;
			cout << "Senha: " << endl;
			cin >> passWordAttempt;

			while ((userNameAttempt != userName) 
			|| (passWordAttempt != passWord)){
				cout << "Login ou senha incorretos!" << endl;
				cout << "Login: " << endl;
				cin >> userNameAttempt;
				cout << "Senha: " << endl;
				cin >> passWordAttempt;
			}

            if (userNameAttempt == userName){
                if (passWordAttempt == passWord){
                    cout << "Login realizado!" << endl;
					return true;
                }
            } else {
				return false;
			}
        }

    private:
        string passWord = "10221300";
        string userName = "160032890";
};

bool validar_login(){
    loginManager app;
    if (app.login()){
		return true;
	} else {
		cout << "Login invalido!" << endl;
		return false;
	}
}


int selecao_menu()
{
	int selecao;
	cout << "Escolha a operacao a ser realizada" << endl;
	cout << "1. Cadastrar" << endl;
	cout << "2. Buscar" << endl;
	cout << "3. Atualizar" << endl;
	cout << "4. Remover" << endl;
	cout << "5. Sair" << endl;
	cin >> selecao;

	switch (selecao)
	{
	case 1:
		return 1;
		break;
	case 2:
		return 2;
		break;
	case 3:
		return 3;
		break;
	case 4:
		return 4;
		break;
	case 5:
		return 5;
		break;
	}
}
