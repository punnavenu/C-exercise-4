
#include<stdio.h>
#include<assert.h>

int graceScore(int);

int main()
{
	int marks;
	printf("Enter the marks of the student: ");
	scanf("%d",&marks);

	graceScore(marks);
	printf("After adding the grace marks is : %d",  graceScore(marks));
	assert(graceScore(45) == 47);
	assert(graceScore(44) == 47);
	assert(graceScore(33) == 38);
	assert(graceScore(15) == 25);
	assert(graceScore(51) == 50);
	assert(graceScore(00) == 25);

	assert(graceScore(11) == 15);
	return 0;
}

int graceScore(int m)
{
	
	if(m>=49)
		return 50;
	if(m>=45 && m<49)		
		return m+2;
	else if(m>=40 && m<=44)
		return m+3;
	else if(m>=35 && m<=39)
		return m+4;
	else if(m>=30 && m<=34)
		return m+5;
	else if(m>=25 && m<=29)
		return m+6;
	else if(m<25)
		return 25;
}
