#include <stdio.h>
struct time
{
    int hour, min, sec;
};

struct time input()
{
    struct time t;

    printf("enter hours : ");
    scanf("%d", &t.hour);

    printf("enter minutes : ");
    scanf("%d", &t.min);

    printf("enter seconds : ");
    scanf("%d", &t.sec);

    return t;
}

void display(struct time t)
{
    printf("hours : %d , min : %d , sec : %d", t.hour, t.min, t.sec);
}


struct time timeDiff(struct time t1, struct time t2)
{
    struct time t;

    while(t1.sec > t2.sec)
    {
        t2.min--;
        t2.sec += 60;
    }
    t.sec = t2.sec - t1.sec;

    while(t1.min > t2.min)
    {
        t2.hour--;
        t2.min += 60;
    }
    t.min = t2.min - t1.min;

    t.hour = t2.hour-t1.hour;
        
    return t;
}


int main ()
{
    struct time t1, t2, t;

    printf("enter starting time : \n");
    t1 = input();

    printf("enter ending time : \n");
    t2 = input();

    display(timeDiff(t1, t2));      // can make always +ve as well.

    return 0;
}