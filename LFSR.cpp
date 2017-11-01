#include<stdio.h>
#include<conio.h>
int main(void)
{
unsigned int bit,count=0;
unsigned int initial=1;
unsigned int lfsr = initial;
do
{
	count++;
	printf("count:%u",count);
	printf("\tMy number is:%u\n",lfsr);
    bit = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
    lfsr = (lfsr >> 1) | (bit << 15);
}
while (lfsr!=1);
printf("Got 65535 numbers before cycling!\nCongratulations!\n It works!");
getch();
}
