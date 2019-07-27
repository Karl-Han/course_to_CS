#include <stdio.h>
#include <stdlib.h>
/* main: generate some simple output */

int fac(int i){
	if(i == 1 || i == 0){
		return 1;
	}
	return fac(i -1) * i;
}

// fac(3) = fac(2) * 3 = (fac(1) * 2) *3 = ((1) * 2) *3

int main(void)
{
	int i[10];
	//for(int k = 0; k < 5; k++){
	//	scanf("%d", &i[k]);
	//}
	//for(int k = 0; k < 5; k++){
	//	printf("%d\n", i[k]);
	//}
	//| 0 | 1 |
	//for(int j = 0; j < 10; j++){
	//	i[j] = j * 10;
	//}
	//int k = 0; 
	//while(k < 10){
	//	i[k] = k * 10;
	//	k++;
	//}
	//// dowhile
	int num;
	scanf("%d", &num);
	// bool 
	// true, false
	// true
	//if(num < 0){
	//	//...
	//	printf("Neg");
	//}
	//else{
	//	// the other case
	//	printf("Pos");
	//}
	
	int sum = 1;
	for(int i = 1; i <= num; i++){
		sum = sum * i;
	}
	printf("%d\n", sum);

	int sum1 = 1;
	printf("%d\n", fac(num));
	return 0;
}
