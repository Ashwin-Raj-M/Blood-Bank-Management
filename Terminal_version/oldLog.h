#include "donar.h"

int oldLog()
{

    int a;
t1:
    system("cls");
    printf("\n\n\t\t\tsssssssssssssssssssssssssssss\n\t\t\tss                         ss\n\t\t\tss   #What do want to do#  ss\n\t\t\tss                         ss\n\t\t\tsssssssssssssssssssssssssssss\n\t\t\tss                         ss\n\t\t\tss  [1]Edit profile        ss\n\t\t\tss  [2]Find donar          ss\n\t\t\tss                         ss\n\t\t\tsssssssssssssssssssssssssssss\n\n\t\t\tEnter your choice : ");
    scanf("%d", &a);
    if (a != 1 && a != 2)
    {
        system("cls");
        goto t1;
    }
    switch (a)
    {
    case 1:
       // printFile();
        break;
    case 2:
       // printFile();
        break;
    }
}