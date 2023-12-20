#include <stdio.h> // bliblioteca de comunicação com o usuario
#include <stdlib.h> // biblioteca de alocação de espaço de memoria 
#include <locale.h> // bliblioteca de alocação de texto por região

int main()
{
	int opcao=0; // definindo as variaveis
	int laco=1;
	
	for (laco=1;laco=1;)
{

	   setlocale(LC_ALL, "Portuguese"); //defiindo a linguagem
	    
	   printf("### Cartório da EBAC ### \n\n");  //inicio do menu
	   printf("escolha a opção desejada do menu:\n\n");
	   printf("\t1 - Registra nomes\n");
	   printf("\t2 - Consultar nomes\n");
	   printf("\t3 - Deletar nomes\n\n");  
	   printf("\t4 - sair do sistema\n\n");
	   printf("opcao: "); //fim do menu
	   
	  scanf("%d", &opcao); //armazenando a escolha do usúsario
	 
	  system("cls");
	  
	  switch(opcao)
	  {
	  	case 1:
	  	printf("voce escolheu o registro de nomes!\n");
	  	system("pause");
	    break;
	  	  
	  	case 2:
	  	printf("voce escolheu consultar nomes!\n");
        system("pause");
        break;
        	
        case 3:
        printf("voce escolheu deletar  nomes!\n");
	  	system("pause");
	  	break;
	  	
	  	case 4:
	  	printf("obrigado por utilizar o sistema!\n");
	  	return 0;
        break;
		
			  	
	  	default:
	    printf("Essa opcao nao esta disponivel!\n");
	    system("pause");
	    break;
	  
        		
	  }
	  
	  
}
}
