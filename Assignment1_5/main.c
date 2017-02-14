int main(){
	int i = 0;
	int c = 0;
	int c2 = 0;
	int isNegative = 0;
	int output = 0;
	int invoer = 0;
 
 	printf("Voer een getal in: ");
	while(c == 0){
		i = getchar();
		if(i >= '0' && i <= '9'){
			invoer = i - '0';
			output = (output * 10) + invoer;
		}
		if(i == '-' && c2 == 0){
			isNegative = 1;
			c2++;
		}
		if(i == '\n' && isNegative == 0){
			printf("Ingevoerd getal: %d", output);
			c++;
		}
		if(i == '\n' && isNegative == 1){
			printf("Ingevoerd getal: %d", (output * -1));
			c++;
		}
	}
}	