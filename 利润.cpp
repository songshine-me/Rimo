//题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高 
//于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提 
//成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于 
//40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于 
//100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
#include<iostream>
using namespace std;
int main()
{
	float i,jj=0;
	cin>>i;
	if(i<10)
		jj=i*0.1;
	else if(i<20)
		jj=1+(i-10)*0.075;
	else if(i<40)
		jj=1+0.75+(i-20)*0.05;
	else if(i<60)
		jj=1+0.75+1+(i-40)*0.03;
	else if(i<100)
		jj=1+0.75+1+0.6+(i-60)*0.015;
	else
		jj=1+0.75+1+0.6+0.6+(i-100)*0.01;
	cout<<jj;
	return 0;
}
