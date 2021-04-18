#include <iostream>
#include <string.h>
#include "../inc/dados.hpp"
#include "../inc/menu.hpp"
#include "../inc/main.hpp"




using namespace std;

int main() {
	int escolha;
	// chamada da funcao para layout inicial do sistema
	menu_inicial();
	// chamada da funcao de instrução de login
	menu_validacao();

	// chamada da funcao de validação de login
	if (validar_login() == true){
		escolha = selecao_menu();
		/* variavel "escolha" armazena o inteiro retornado pela
		funcao selecao_menu() */
	}

	/* cada valor retornado pela funcao selecao menu chama uma 
	funcao distinta, que executará cadastro, busca, atualizacao e remocao */
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

