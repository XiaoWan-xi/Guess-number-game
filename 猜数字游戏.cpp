#include<stdio.h>
#include<ctime> 
#include<stdlib.h>
int main(){
	srand((unsigned)time(NULL));
	int ans,num1,num2,max,min,score1=0,score2=0,gameTimes=100;
	double pro1,pro2;
	int i;
	for(i=0;i<gameTimes;i++){
		max=100;min=1;
		ans=rand()%max+1;
		while(num1!=ans&&num2!=ans){
			num1=rand()%(max-min+1)+min;
			if(num1<ans) min=num1;
			else if(num1>ans) max=num1;
			else {
				//printf("玩家1获得胜利");
				score1++;
				break;
			}
			num2=rand()%(max-min+1)+min;
			if(num2<ans) min=num2;
			else if(num2>ans) max=num2;
			else {
				//printf("玩家1获得胜利");
				score2++;
				break;
			}
		}
	}
	pro1=(double)score1/(double)gameTimes;
	pro2=(double)score2/(double)gameTimes;
	printf("玩家1胜率为%lf\n",pro1);
	printf("玩家2胜率为%lf\n",pro2);
	return 0;
}
