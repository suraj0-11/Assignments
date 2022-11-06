#include<stdio.h>
struct student
{
    char usn[20];
    char name[20];
    int marks;
}s[10];
void main()
{
    int i,n; //ignore countav=0,countbv=0;
    //And ignore float average,sum;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    printf("Enter the studet info\n");
    for(i=0;i<n;i++)
    {
        printf("Enter your USN\n");
        scanf("%s",s[i].usn);
        printf("Enter your name\n");
        scanf("%s",s[i].name);
        printf("Enter your marks\n");
        scanf("%d",&s[i].marks);
    }
    //USING FOR DISPLAYING THE INFO #BAKA
    for(i=0;i<n;i++)
    {
        printf("INFO : %d\n",i+1);
        printf("USN : %s\nNAME : %s\nMARKS : %d\n",s[i].usn,s[i].name,s[i].marks);
    }
}
    /*COMMENTS FROM HERE IGNORE KARO 🤷🏻‍♀️
      for(i=0;i<n;i++)
    {
        sum = sum + s[i].marks;
    }
    average = sum/n;
    for(i=0;i<n;i++)
    {
        if(s[i].marks>=average)
        {
            countav++;
        }
        else
        {
            countbv++;
        }
    }
    //IMPORTANT USE THIS PRINT STATEMENT AFTER LOOP
    printf("Above average students are %d\nBelow average students are %d\n",countav,countbv);
}*/
