#include "correct.h"

int donar()
{

    int n, s, b, d;
    char n1;
    printf("\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\t\tss                                                               ss\n\t\tss         #Important things to be noted before donation#        ss\n\t\tss                                                               ss\n\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\t\tss                                                               ss\n\t\tss   #Get plenty of sleep the night before you plan to donate.   ss\n\t\tss   #Eat a healthy meal before your donation.                   ss\n\t\tss   #Drink plenty of water before the donation.                 ss\n\t\tss   #Check to see if any medications you are taking or recently ss\n\t\tss    took would prevent you from donating.                      ss\n\t\tss   #Wear a shirt with sleeves that can be rolled up.           ss\n\t\tss   #Intake of alcohol is restricted before donation.           ss\n\t\tss                                                               ss\n\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\n");
    printf("\n\t\tPress Enter to continue......\n\n");
    printf("%c", getch());
    system("cls");
    printf("\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\tss                                                                   ss\n\tss                      #Quick profile creation#                     ss\n\tss                                                                   ss\n\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n");
    printf("\n\t  Enter your name : ");
    scanf("\n%[^\n]c", det.name);
    printf("\n\t  Enter your age : ");
    scanf("%d", &det.age);
    if (det.age < 18)
    {
        system("cls");
        if (det.age > 60 || det.age < 18)
        {
            printf("\n\n\n\t\t      #Well done with reverent sir#\n");
            printf("\t\t#Your not eligible for donating blood. We respect your service#\n");
        }
        else
        {
            printf("\n\n\n\n\t\t      #Oops!!!, your not eligible for blood donation#\n");
            printf("\t\t#You have %d more years to get your self ready for donation#\n", 18 - det.age);
        }
        printf("\n\t\tPress Enter to continue......");
        printf("%c", getch());
        return 1;
    }
se:
    printf("\n\tssssssssssssssssssssssssssssss\n\tss                          ss\n\tss     #Enter your sex#     ss\n\tss                          ss\n\tssssssssssssssssssssssssssssss\n\tss                          ss\n\tss   [1]Male                ss\n\tss   [2]Female              ss\n\tss   [3]Trans               ss\n\tss   [4]Costum              ss\n\tss                          ss\n\tssssssssssssssssssssssssssssss\n\n");
    printf("\t  Enter your choice : ");
    scanf("%d", &s);
    if (s != 1 && s != 2 && s != 3 && s != 4)
    {
        system("cls");
        goto se;
    }
    switch (s)
    {
    case 1:
        strcpy(det.sex, "Male");
        break;

    case 2:
        strcpy(det.sex, "Female");
        break;

    case 3:
        strcpy(det.sex, "Trans");
        break;

    case 4:
        strcpy(det.sex, "Costum");
        break;
    }
    system("cls");
bl:
    printf("\n\tssssssssssssssssssssssssssssssssssss\n\tss                                ss\n\tss    #Enter your blood group#    ss\n\tss                                ss\n\tssssssssssssssssssssssssssssssssssss\n\tss                                ss\n\tss     [1]A+ group                ss\n\tss     [2]B+ group                ss\n\tss     [3]AB+ group               ss\n\tss     [4]O+ group                ss\n\tss     [5]A- group                ss\n\tss     [6]B- group                ss\n\tss     [7]AB- group               ss\n\tss     [8]O- group                ss\n\tss                                ss\n\tssssssssssssssssssssssssssssssssssss\n\n");
    printf("\t  Enter your choice : ");
    scanf("%d", &b);
    if (b != 1 && b != 2 && b != 3 && b != 4 && b != 5 && b != 6 && b != 7 && b != 8)
    {
        system("cls");
        goto bl;
    }
    switch (b)
    {
    case 1:
        strcpy(det.bloodGroup, "A+");
        break;

    case 2:
        strcpy(det.bloodGroup, "B+");
        break;

    case 3:
        strcpy(det.bloodGroup, "AB+");
        break;

    case 4:
        strcpy(det.bloodGroup, "O+");
        break;

    case 5:
        strcpy(det.bloodGroup, "A-");
        break;

    case 6:
        strcpy(det.bloodGroup, "B-");
        break;

    case 7:
        strcpy(det.bloodGroup, "AB-");
        break;

    case 8:
        strcpy(det.bloodGroup, "O-");
        break;
    }
ph:
    printf("\n\t  Enter your phone number : ");
    scanf("%s", det.phNo);
    if (strlen(det.phNo) != 10)
    {
        printf("\n\n\t  !!Enter a valid number!!\n\n");
        goto ph;
    }
    system("cls");
    printf("#Enter your Adress#\n");
    printf("Door number : ");
    scanf("%s", det.door);
    printf("Street : ");
    scanf("\n%[^\n]c", det.street);
    printf("Area : ");
    scanf("\n%[^\n]c", det.area);
    printf("District : ");
    scanf("\n%[^\n]c", det.district);
pi:
    printf("Pincode : ");
    scanf("%s", det.pin);
    if (strlen(det.pin) != 6)
    {
        printf("\n\n\t  !!Enter a valid number!!\n\n");
        goto pi;
    }
    system("cls");
don:
    printf("\n\n\t\t\tssssssssssssssssssssssssssssssss\n\t\t\tss                            ss\n\t\t\tss   #Donated blood before#   ss\n\t\t\tss                            ss\n\t\t\tssssssssssssssssssssssssssssssss\n\t\t\tss                            ss\n\t\t\tss       [1]Yes               ss\n\t\t\tss       [0]No                ss\n\t\t\tss                            ss\n\t\t\tssssssssssssssssssssssssssssssss\n\n\t\t\tEnter your choice : ");
    scanf("%d", &d);
    if (d != 1 && d != 0)
    {
        system("cls");
        goto don;
    }
    if (d == 1)
    {
    ld:
        printf("\n\t\t\tEnter when was your last donation (In months) : ");
        scanf("\n%d", &det.lastDonation);
        if (det.lastDonation > det.age - 18)
        {
            printf("\n\t\t\t!!Enter a valid entry!!\n");
            goto ld;
        }
        goto corr;
    }
    else
    {
        goto corr;
    }
corr:
    system("cls");
    printf("\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\t\tss                                                       ss\n\t\tss                #Check for corrections#                ss\n\t\tss                                                       ss\n\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\n");
    printf("\t\t  Name          : %s\n", det.name);
    printf("\t\t  Age           : %d\n", det.age);
    printf("\t\t  Sex           : %s\n", det.sex);
    printf("\t\t  Blood group   : %s\n", det.bloodGroup);
    printf("\t\t  Phone No      : %s\n", det.phNo);
    printf("\t\t  Adress        : %s , %s ,\n\t\t\t\t  %s ,\n\t\t\t\t  %s-%s.\n", det.door, det.street, det.area, det.district, det.pin);
    if (d == 1)
    {
        printf("\t\t  Last donation : %d months before\n", det.lastDonation);
    }
    else
    {
        printf("\t\t  Last donation : First time donor\n");
    }
    printf("\n\t\tsssssssssssssssssssssssssssssssssssssss\n\t\tss                                   ss\n\t\tss   #Do you have any alterations#   ss\n\t\tss                                   ss\n\t\tsssssssssssssssssssssssssssssssssssssss\n\t\tss                                   ss\n\t\tss       [1]Yes                      ss\n\t\tss       [0]No                       ss\n\t\tss                                   ss\n\t\tsssssssssssssssssssssssssssssssssssssss\n\n\t\tEnter your choice : ");
    scanf("%d", &n);
    if (n != 1 && n != 0)
    {
        system("cls");
        goto corr;
    }
    
    switch (n)
    {
    case 1:
        system("cls");
        if (correct() == 1)
        {
            goto corr;
        }
        break;
    case 0:
        break;
    }
}