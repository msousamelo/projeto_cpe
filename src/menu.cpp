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
bool validar_login()
{
	int usuario;
	int senha;
	cout << "Insira usuario:" << endl;
	cin >> usuario;
	cout << "Insira senha:" << endl;
	cin >> senha;

	while (usuario != 160032890 && senha != 10221300)
	{
		cout << "Matrícula ou senha incorretos!" << endl;
		cout << "Insira usuario:" << endl;
		cin >> usuario;
		cout << "Insira senha:" << endl;
		cin >> senha;
	};
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
