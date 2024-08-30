#include <stdio.h>
int main(void)
{
    int a,b,c,d,e,f,flag;
    c=0;
    flag=0;
	scanf("%d %d",&a,&b);
	while(c<=b){
		scanf("%d",&d);
		c++;
		if(d==a&&c==1){
			printf("Bingo!!!");
			flag=1;
			break;
		}else if(d==a&&c<=3){
			printf("Lucky You!");
			flag=1;
			break;
		}else if(d==a&&c>3){
			printf("Good Guess!");
			flag=1;
			break;
		}else if(d>a){
			printf("Too big\n");
			flag=0;
		}else{
			printf("Too small\n");
			flag=0;
		}
	}
	if(flag==0){
		printf("Game Over");
	}

        
	printf("%d",d-e+f-c);
	return 0;
	}
