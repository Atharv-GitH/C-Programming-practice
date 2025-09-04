// print nos. from 1 - 100 but stop at 50

#include<stdio.h>
#include<stdlib.h>

/*void main (){

	for(int i=1;i<=100;i++){
	
		if( i == 51 ){
		
			break;
		}
			printf("%d ",i);
	}
}*/

void main (){

	for (int i=1; i<=100;i++){
	
		if(i<=50){
		
			printf("%d ",i);

		}else{
			exit(1);
		
	
		}
	}
}
