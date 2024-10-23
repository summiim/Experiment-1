#include<stdio.h>
int main()
{    //Name:Mirza Sumaiya Shakil Ahmed
    //UIN:241A014
    //Branch:AIDS
    //Roll no:14
    int P,C,M,Avg;
    printf("Enter Physics Marks\t:");
    scanf("%d",&P);
    printf("Enter Chemistry Marks\t:");
    scanf("%d",&C);
    printf("Enter Maths Marks\t:");
    scanf("%d",&M);
    Avg=(P+C+M)/3;

    printf("PCM Avg=%d\n",Avg);
    Avg>=50? printf("you are eligible"):printf("you are not eligible");
    return 0;
}
