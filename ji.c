#include<stdio.h>
int arr1[500][500];
void main()
{

int i=0,j=0;
while(j<500)
{
        while(i<500)
                {
                        arr1[i][j]=j+i;
                        i+=1;
                }
	i=0;
        j+=1;
}

i=0;j=0;

while(j<500)
{
        while(i<500)
                {
                        arr1[i][j];
                        i+=1;
                }
	i=0;
        j+=1;
}
}
