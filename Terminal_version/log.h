#include "oldLog.h"

int login()
{
    int a;
    char password[11];
lo:
    system("cls");
    printf("\n\n\t\t\tsssssssssssssssssssssssssssss\n\t\t\tss                         ss\n\t\t\tss   #New to blood bank#   ss\n\t\t\tss                         ss\n\t\t\tsssssssssssssssssssssssssssss\n\t\t\tss                         ss\n\t\t\tss       [1]Yes            ss\n\t\t\tss       [0]No             ss\n\t\t\tss                         ss\n\t\t\tsssssssssssssssssssssssssssss\n\n\t\t\tEnter your choice : ");
    scanf("%d", &a);
    system("cls");
    if (a != 1 && a != 0)
    {
        system("cls");
        goto lo;
    }
    switch (a)
    {
    case 1:
        if (donar() == 1)
        {
            return 1;
        }
        system("cls");
        printf("\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\t\tss                                                               ss\n\t\tss    #Important things to be noted while creating password#     ss\n\t\tss                                                               ss\n\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\t\tss                                                               ss\n\t\tss   #Create a strong password using alphanumeric value.         ss\n\t\tss   #Don't forget the password.It's advisable to keep a note    ss\n\t\tss    of the password.                                           ss\n\t\tss   #The password must contain exactlu 10 characters.           ss\n\t\tss   #Best if the user ID is created with your name.             ss\n\t\tss                                                               ss\n\t\tsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n\n");
        printf("\t\t  Create a User ID : ");
        scanf("%s",det.userID);        
    pa:
        printf("\n\t\t  Create a password : ");
        scanf("%s", det.password);
        printf("\n\t\t  Confirm password : ");
        scanf("%s", det.password1);
        if (strlen(det.password) != 10)   
        {
            printf("\n\t\t!!Create a valid password!!\n");
            goto pa;
        }
        if(strcmp(det.password,det.password1))
        {
            printf("\n\t\t!!Re-enter the password!!\n");
            goto pa;
        }
        FILE *pass;
        pass = fopen("password.txt", "a");
        fprintf(pass, "%s:%s\n",det.userID,det.password);
        fclose(pass);
        goto pass;
        break;

    case 0:
    pass:
        printf("\t\t\n  Enter your password : ");
        scanf("%s", password);
        if (strlen(password) != 10)
        {
            printf("\t\t\n!!Enter a valid password!!\n");
            goto pass;
        }
        
        if (1)
        {
            oldLog();
        }
    }
}