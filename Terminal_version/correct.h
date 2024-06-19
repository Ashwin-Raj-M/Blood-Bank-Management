#include"struct.h"

int correct()
{
    int c, s, b;
corr:
    printf("Choose the detail to be corrected\n");
    printf("\t[1]Name\n\t[2]Age\n\t[3]Sex\n\t[4]Blood group\n\t[5]Phone number\n\t[6]door number\n\t[7]Street\n\t[8]Area\n\t[9]Dictrict\n\t[10]PIN\n\t[11]Last donation\n\t[0]Exit\n");
    printf("Enter your choice : ");
    scanf("%d", &c);
    system("cls");
    if (c != 1 && c != 2 && c != 3 && c != 4 && c != 5 && c != 6 && c != 7 && c != 8 && c != 9 && c != 10 && c != 11 && c != 0)
    {
        system("cls");
        goto corr;
    }
    switch (c)
    {
    case 1:
        printf("Enter your name : ");
        scanf("\n%[^\n]c", det.name);
        break;

    case 2:
        printf("Enter your age : ");
        scanf("%d", &det.age);
        if (det.age < 18)
        {
            printf("Sorry, your not eligible for blood donation.\n");
            printf("You have %d more years to get your self ready for donation.\n", 18 - det.age);
            return 1;
        }
        break;

    case 3:
    se:
        printf("Enter your sex\n");
        printf("\t[1]Male\n\t[2]Female\n\t[3]Trans\n\t[4]Costum\n");
        printf("Enter your choice : ");
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
        break;

    case 4:
    bl:
        printf("Enter your blood group\n");
        printf("\t[1]A+\n\t[2]B+\n\t[3]AB+\n\t[4]O+\n\t[5]A-\n\t[6]B-\n\t[7]AB-\n\t[8]O-\n");
        printf("Enter your choice : ");
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
        break;

    case 5:
    ph:
        printf("Enter your phone number : ");
        scanf("%s", det.phNo);
        if (strlen(det.phNo) != 10)
        {
            printf("!!Enter a valid number!!\n");
            goto ph;
        }
        break;

    case 6:
        printf("Door number : ");
        scanf("%s", det.door);
        break;

    case 7:
        printf("Street : ");
        scanf("%[^\n]c", det.street);
        break;

    case 8:
        printf("Area : ");
        scanf("%[^\n]c", det.area);
        break;

    case 9:
        printf("District : ");
        scanf("%[^\n]c", det.district);
        break;

    case 10:
    pi:
        printf("Pincode : ");
        scanf("%s", det.pin);
        if (strlen(det.pin) != 6)
        {
            printf("\n!!Enter a valid number!!\n\n");
            goto pi;
        }
        break;

    case 11:
        printf("Enter when was you last donation in months : ");
        scanf("\n%d", &det.lastDonation);
        break;

    case 0:
        return 1;
        break;
    }
    system("cls");
    goto corr;
}