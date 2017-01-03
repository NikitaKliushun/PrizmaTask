#include <vcl.h>
#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#pragma hdrstop
#pragma argsused

class Prism {
      public:
      double v,h,size[1000],s;
      int n;
} a[1000];

int i = -1;

void main ()
{
        int cod,j,num,num1,k;
        double v,h;
        printf("~WELCOME TO PRISM EDITOR PRO (v 1.0)~\n\n");
        Main:
        printf("================Menu=================\n\n1 - Create new prism\n2 - View single prism\n3 - Edit prism\n4 - Delete prism\n5 - Get full list of prism's\n0 - Exit\n");
        cin>>cod;
        switch (cod) {
                case 0 : return; break;
                case 1 : i++;
                         printf("\nInput Volume: "); scanf("%lf",&a[i].v);
                         printf("\nInput Height: "); scanf("%lf",&a[i].h);
                         Check:
                         printf("\nInput Number of faces (number > 3): "); scanf("%d",&a[i].n);
                         if (a[i].n < 4) {printf("Incorrect value! Try again..."); goto Check;}
                         printf("\nInput Rib sizes: \n");
                         for (j = 0; j < (a[i].n - 2) * 3; j++) scanf("%lf",&a[i].size[j]);
                         printf("Input Square of base: "); scanf("%lf",&a[i].s); break;
                case 2: Check1:
                        printf("\nInput prizma's number (0 < number < %d) ): ",i+2); scanf("%d",&num); num--;
                        if (num > i) {printf("Incorrect value! Try again..."); goto Check1;}
                        printf("\nPrism's Volume is %5.3lf\nPrism's Height is %5.3lf\nPrism's Number of faces is %d\nPrism's Rib sizes are:\n",
                               a[num].v,a[num].h,a[num].n);
                        for (j = 0; j < (a[num].n - 2) * 3; j++) printf("%5.3lf\n",a[num].size[j]);
                        printf("Prism's Sqare of base is %5.3lf\n",a[num].s); break;
                case 3: Check2:
                        printf("Input edited prism (0 < number < %d): ",i+2); scanf("%d",&num); num--;
                        if (num > i) {printf("Incorrect value! Try again..."); goto Check2;}
                        printf("\nInput edited field:\n1 - Volume\n2 - Height\n3 - Number of faces\n4 - Rib sizes\n5 - Square of base\n");
                        scanf("%d",&num1);
                        switch (num1) {
                                case 1: printf("\nInput new Volume: \n");
                                        scanf("%lf",&a[num].v); break;
                                case 2: printf("\nInput new Height: \n");
                                        scanf("%lf",&a[num].h); break;
                                case 3: printf("\nInput new Number of faces: \n");
                                        scanf("%d",&a[num].n); break;
                                case 4: printf("\nInput new Rib sizes: \n");
                                        for (j = 0; j < (a[num].n - 2) * 3; j++)
                                        scanf("%lf",&a[num].size[j]); break;
                                case 5: printf("\nInput new Square of base: \n");
                                        scanf("%lf",&a[num].s); break; } break;
                case 4: Check3:
                        printf("\nInput prism's number (0 < number < %d): ",i+2); scanf("%d",&num); num--;
                        if (num > i) {printf("Incorrect value! Try again..."); goto Check3;}
                        for (j = num; j < i; j++)
                        a[j] = a[j+1];
                        i--; printf("\nComplete!\n"); break;
                case 5: printf("\nThe number of prism: %d\n",i+1);
                        for (j = 0; j < i + 1; j++){
                             printf("\n=== Prism number %d ===",j+1);
                             printf("\nPrism Volume is %5.3lf\nPrism Height is %5.3lf\nPrism Number of faces is %d\nPrizma Rib sizes are:\n",
                               a[j].v,a[j].h,a[j].n);
                              for (k = 0; k < (a[j].n - 2) * 3; k++) printf("%5.3lf\n",a[j].size[k]);
                              printf("Prizma Square of base is %5.3lf\n",a[j].s);
                        } break;

        }
        goto Main;
}

