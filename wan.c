#include<stdio.h>
void main(void)
{
    int a, b, c, d, e, f, g, h, i;
    int j1, j2, j3, j4, j5, j6;
    for(a=2; a<13; a++)
    for(b=2; b<13; b++)
    for(c=2; c<13; c++)
    for(d=2; d<13; d++)
    for(e=2; e<13; e++)
    for(f=2; f<13; f++)
    for(g=2; g<13; g++)
    for(h=2; h<13; h++)
    for(i=2; i<13; i++)
    {
        j1 = 8+a+b+c;
        j2 = 8+d+g+3;
        j3 = c+e+h+3;
        j4 = 1+a+d+f;
        j5 = f+g+h+i;
        j6 = 1+b+e+i;
        if((j1==j2)&&(j1==j3)&&(j1==j4)&&(j1==j5)&&(j1==j6))
        if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&a!=i&&a!=8&&a!=3)
        if(b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&b!=i&&b!=8&&b!=3)
        if(c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&c!=i&&c!=8&&c!=3)
        if(d!=e&&d!=f&&d!=g&&d!=h&&d!=i&&d!=8&&d!=3)
        if(e!=f&&e!=g&&e!=h&&e!=i&&e!=8&&e!=3)
        if(f!=g&&f!=h&&f!=i&&f!=8&&f!=3)
        if(g!=h&&g!=i&&g!=8&&g!=3)
        if(h!=i&&h!=8&&h!=3)
        if(i!=8&&i!=3)
            printf("%d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i);
    }
    return;
}
