#include <stdio.h>
int main ()
{
    int u;
    float b;

    printf("enter electricity unit charge : ");
    scanf("%d", &u);
    
    // conditon : a >= 0 ??

    switch(u)
    {
        case 0 ... 50 :
            b = 0.5*u;
            break;

        case 51 ... 150 :
            b = 0.5*50;
            b += 0.75*(u-50);
            break;

        case 151 ... 250 :
            b = 0.5*50;
            b += 0.75*100;
            b += 1.2*(u-150);
            break;

        default :
            b = 0.5*50;
            b += 0.75*100;
            b += 1.2*100;
            b += 1.5*(u-250);
    }


    printf("total bill : %.2f", b+b*0.2);
    return 0;
}

/*
    switch(u<=50 && u>=0)
    {
        case 1 :
            b = 0.5*u;
            break;

        case 0 :
            switch(u<=150)
        {
            case 1 :
                b = 0.5*50;
                b += 0.75*(u-50);
                break;

            case 0 :
                switch (u<=250)
                {
                    case 1 :
                        b = 0.5*50;
                        b += 0.75*100;
                        b += 1.2*(u-150);
                        break;

                    case 0 :
                        b = 0.5*50;
                        b += 0.75*100;
                        b += 1.2*100;
                        b += 1.5*(u-250);
                        break;
                }
                
        }
            
    }
*/