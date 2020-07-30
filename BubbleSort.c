//Author: Vitor tolomelli
//BubbleSort

#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int numbers[], int size2){
	int change, i, j;
	 for(j=size2-1; j>=0; j--)   
    	for(i=size2-1; i>0; i--) 
        if(numbers[i]<numbers[i-1]){
            change = numbers[i];
            numbers[i] = numbers[i-1];
            numbers[i-1] = change;
            
}

}

main(){

	int size;
	int z, a;
	
	printf("\n----->Type the vector size:");
  	scanf("%d",&size);
	
	int vector[size];
	int value;
  	
  	for(z=1; z<size+1; z++){
	  	printf("\n----->Type a value:");
  		scanf("%d",&value);
  		vector[z-1] = value;
  		
  		printf("\n#####Vector Image#####\n");
  		for(a=0; a<z; a++){
            printf("\n [%d]  %d\n", a, vector[a] );
        }
        
    }
  	
  	
  	printf("\n\n----->Time to sort...\n");

		
		bubbleSort(vector, size);
	  

            printf("\n#####Vector Image#####\n");
				for(a=0; a<z-1; a++){
				    printf("\n [%d]  %d\n", a, vector[a] );
				}
            

            system("pause");
}
