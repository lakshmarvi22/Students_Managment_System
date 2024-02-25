#include <stdio.h>
#include<string.h>
struct logina{
char category [100];
char alg [100];
char apa [100];
char slg [100];
char spa [100];
};
struct assign {
int reg;
int marks [3];
char grades[3];
};
int main()
{

    char alogin[100];
    char apassword[100];
    char slogin[100];
    char spassword[100];
    strcpy(alogin,"RITSTAFF3");
    strcpy(apassword,"ritcseadmin");
    strcpy(slogin,"RITSTUDENT");
    strcpy(spassword,"ritcsestudent");

    int number;

    struct logina loga;
    struct assign ass[100];
    int r,ex=0,in=0;

    for (int i=0;i<5;i++)
    {
    printf("\nARE YOU AN ADMIN OR STUDENT? ");
    scanf("%s",loga.category);
    if(i==0 && (strcmp(loga.category,"student")==0))
    {
        printf("MARKS NOT YET UPDATED");
    }
    else if(ex==0 && (strcmp(loga.category,"student")==0))
    {
        printf("MARKS NOT YET UPDATED");
    }
    else if((strcmp(loga.category,"admin")==0) || (strcmp(loga.category,"Admin")==0))
    {
    printf("ENTER LOGIN ID : ");
    scanf("%s",loga.alg);
    printf("ENTER PASSWORD : ");
    scanf("%s",loga.apa);
    if (strcmp (loga.alg,alogin)==0 && strcmp(loga.apa,apassword)==0)
    {
        printf ("ENTER NUMBER OF STUDENTS: ");
        scanf ("%d",&number);
        for (int i=0;i<number;i++)
        {
            printf ("ENTER REGISTER NUMBER OF STUDENT %d : ",i+1);
            scanf ("%d",&ass[i].reg);
            for (int j=0;j<3;j++)
            {
                printf ("ENTER MARK OF SUBJECT %d : ",j+1);
                scanf ("%d",&ass[i].marks[j]);

            }
        }
        ex=1;
        printf ("THANKYOU FOR UPLOADING ! YOUR MARKS HAS SUCCESSFULLY STORED");
    }

    else{
        printf("LOGIN ID AND PASSWORD MISMATCHES");
    }
    }

    else if ((strcmp(loga.category,"student")==0)||(strcmp(loga.category,"Student")==0))

    {
        printf("ENTER LOGIN ID: ");
        scanf("%s",loga.slg);
        printf("ENTER  PASSWORD: ");
        scanf("%s",loga.spa);
        if (strcmp (loga.slg,slogin)==0 && strcmp(loga.spa,spassword)==0)
        {
            printf("ENTER REGISTER NUMBER: ");
            scanf("%d",&r);
            for(int i=0;i<100;i++)
            {
                if (ass[i].reg == r)
                {
                    in=1;
                    printf("REGISTER NUMBER\t");
                    printf ("%d",r);
                    for (int j=0;j<3;j++)
                    {
                        printf("\nSUBJECT %d MARK %d\t",j+1,ass[i].marks[j]);
                        if (ass[i].marks[j]<=100 && ass[i].marks[j]>90)
                        {
                            printf ("SUBJECT %d GRADE %c",j+1,'O');

                        }
                        else if(ass[i].marks[j]<=90&& ass[i].marks[j]>80)
                        {
                          printf("SUBJECT %d GRADE ",j+1);
                          puts("A+");
                        }

                        else if (ass[i].marks[j]<=80 && ass[i].marks[j]>70)
                        {
                            printf("SUBJECT %d GRADE %c",j+1,'A');
                        }
                        else if (ass[i].marks[j]<=70 && ass[i].marks[j]>80)
                        {
                            printf("SUBJECT %d GRADE ",j+1);
                            puts("B+");
                        }
                        else {
                            printf("SUBJECT %d GRADE %c",j+1,'U');
                        }
                    }

                }
            }
                if(in==0){
                    printf("INVALID REGISTER NUMBER");
                }




            }
                else
                {
                printf("PASSWORD AND LOGIN ID MISMATCHES");
                }

            }
            else{
                printf("CATEGORY DOESN'T FOUND");
            }

     }



      return 0;
    }



