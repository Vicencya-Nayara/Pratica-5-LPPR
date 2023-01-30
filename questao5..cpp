 #include <stdio.h>  
 #include <locale.h>
 #include <stdlib.h>  
 #include <time.h>  
 int main()  {
 	setlocale(LC_CTYPE, "Portuguese_Brazil");
	int numero;  
    int vetor[10];  
    
    srand( time(NULL));
	 
	for(int i=0 ; i <= 9 ; i++){  
     vetor[i]=rand()%100+1;
   }  
   
   printf("Informe um número: ");  
   scanf("%d",&numero); 
    
  for(int i=0;i<=9;i++){  
     printf("numero sorteado [%d] ",vetor[i]);  
     if (numero==vetor[i]){  
     printf(" Numero %d SORTEADO na posicao do vetor[%d]\n",numero,i+1);  
     }else if (numero!=vetor[i]){  
          printf(" Seu numero nao e igual aos sorteio \n");  
          
     }  
}  
     
     return 0;  
    }  
