#include <iostream>
#include <string.h>
#include "../inc/dados.hpp"
#include "../inc/menu.hpp"
#include "../inc/main.hpp"




using namespace std;

int main() {
	int escolha;
	menu_inicial();

	menu_validacao();


	if (validar_login() == true){
		escolha = selecao_menu();
	}

	switch(escolha){
		case 1:
			cadastra_patrimonio();
			break;
		case 2:
			busca_arquivo();
			break;
		case 3:
			atualiza_arquivo();
			break;
		case 4:
			remove_patrimonio();
			break;
	}

	return 0;
}

