#include<stdio.h>
void main(){
	int my_array[]={65,55,45,35,25};
	int index;
	int total=0;
	float avg=0;
	
	for(index=0;index<5;index++){
		total=total+my_array[index];
	}
	avg=total/5;
	printf("total is:%d\n",total);
	printf("Avg is:%f\n",avg);
		
}