#include <stdio.h>

void media_arit (float a, float b, float c, float *media)
{
    *media = (a+b+c)/3;
}

int main(void)
{

    float a = 5, b = 11, c = 5, media; 

    media_arit(a,b,c, &media);
    printf("%.2f", media);

    return 0;
}