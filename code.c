#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
void create(int);
void deposit(int);
void withdraw(int);
void bal(int);
void issue(int);
void rate();
void passwordset(int);
int checkpassword(int);
void changepass(int);
char ch;
int i=101,p,accno[MAX];
struct bank
{
        int no,quesno;
        char name[20],lname[20],pass[20],backup[20];
        float bal;
        float dep;
}s[20];
        void main()
       {
                  int a=0,choice;
                  printf("\n**********************************");
                  printf("\n BANKING PROGRAM FOR MINI PROJECT");
                  printf("\n**********************************");
                  while(1)
                        {
                              printf("\n-------------------------------------------------");
                              printf("\n              *****MAIN MENU*****                ");
                              printf("\n-------------------------------------------------");
                              printf("\nEnter 1 to Create a New Account in the                                                                           KMN Bank");    
                              printf("\nEnter 2 to Deposit Amount in your account ");
                              printf("\nEnter 3 to Withdraw Money from your Account");
                              printf("\nEnter 4 to Enquire about the Balance");
                              printf("\nEnter 5 to Issue with your account in KMN Bank");
                              printf("\nEnter 6 to Rate KMN Bank");
                              printf("\nEnter 7 if you forgot password");
                              printf("\nEnter 8 to Exit");
                              printf("\nEnter your choice:");
                              scanf("%d",&choice);
                              switch(choice)
                                       {
                                              case 1: creation(a);
                                                         break;
                                              case 2: deposit(a);
                                                         break;
                                              case 3: withdraw(a);
                                                         break;
                                              case 4: bal(a);
                                                         break;
                                              case 5: issue(a);
                                                         break;
                                              case 6: rate();
                                                         break;
                                              case 7: changepass(a);
                                                        break;
                                              case 8: printf("Thank you,It was a pleasure to serve you");
                                                        exit(0);
                                              defalut: printf("Please enter a number from 1-7 only");
                                                         exit(0);
                                        }
                         }
        }
         void passwordset(int a)
         {
            int k;
            for(k=0;k<20;k++)
            {
                ch=getch();
                if(ch==13)
                break;
                if(ch==8)
                {
                k--;
                s[a].pass[k]=NULL;
                printf("\b");
                }
                else{
                s[a].pass[k]=ch;
                ch='*';
                printf("%c",ch);}
            }
            s[a].pass[k]='\0';
            printf("\n The password you have entered is %s",s[a].pass);
            printf("\n>>>>PLEASE REMEMBER YOUR PASSWORD<<<<\n");
            printf("\nPLEASE SELECT A BACKUP QUESTION");
            printf("\n1.Who is your favourite Actor?");
            printf("\n2.Where were you born?");
            printf("\n3.What is your favourite sport?");
            printf("\n4.Which smartphone do you use?");
            printf("\nEnter your choice:");
            scanf("%d",&s[a].quesno);
            switch(s[a].quesno)
            {
                case 1:printf("\nEnter you Answer:");
                        scanf("%s",&s[a].backup);
                        break;
                case 2:printf("\nEnter you Answer:");
                        scanf("%s",&s[a].backup);
                        break;
                case 3:printf("\nEnter you Answer:");
                        scanf("%s",&s[a].backup);
                        break;
                case 4:printf("\nEnter you Answer:");
                        scanf("%s",&s[a].backup);
                        break;
            }
        }
           int checkpassword(int a)
            {
                int k;
                char password[20];
                for(k=0;k<20;k++)
                {
                    ch=getch();
                    if(ch==13)
                    break;
                    if(ch==8)
                    {
                        k--;
                        password[k]=NULL;
                        continue;
                    }
                    password[k]=ch;
                    ch='*';
                    printf("%c",ch);
                }
                password[k]='\0';
                if(strcmp(password,s[a].pass)==0)
                return 1;
                else
                {
                    printf("\nWrong Password");
                    return 0;
                }
          }
        void changepass(int a)
        {
            int c;
            char ques[20];
            printf("\nChoose your BACKUP question");
            printf("\n1.Who is your favourite Actor?");
            printf("\n2.Where were you born?");
            printf("\n3.What is your favourite sport?");
            printf("\n4.Which smartphone do you use?\n");
            printf("Enter your choice:");
            scanf("%d",&c);
            if(c==s[a].quesno)
            {
                switch(c)
                {
                     case 1:printf("\nEnter you Answer:");
                            scanf("%s",ques);
                            if(strcmp(ques,s[a].backup)==0)
                            {
                                printf("\nYour password is: %s",s[a].pass);
                            }
                            else
                                printf("\nSorry wrong answer");
                                return;
                    case 2:printf("\nEnter you Answer:");
                            scanf("%s",ques);
                               if(strcmp(ques,s[a].backup)==0)
                            {
                                printf("\nYour password is: %s",s[a].pass);
                            }
                            else
                                printf("\nSorry wrong answer");
                                return;
                            break;
                    case 3:printf("\nEnter you Answer:");
                            scanf("%s",ques);
                               if(strcmp(ques,s[a].backup)==0)
                            {
                                printf("\nYour password is: %s",s[a].pass);
                            }
                            else
                                printf("\nSorry wrong answer");
                                return;
                            break;
                    case 4:printf("\nEnter you Answer:");
                            scanf("%s",ques);
                               if(strcmp(ques,s[a].backup)==0)
                            {
                                printf("\nYour password is: %s",s[a].pass);
                            }
                            else
                                printf("\nSorry wrong answer");
                                return;
                            break;
                }
            }
            else
            {
            printf("\nSorry you selected the wrong question.Please try again\n");
            }
        }
         void creation(int a)
         {
                   printf("\n Welcome to KMN Bank");
                   printf("\n*************************************");
                   printf("\n       ACCOUNT CREATION ");
                   printf("\n*************************************");
                   printf("\nYour Account Number is :%d",i);
                              s[a].no = i;
                   printf("\nEnter your First Name:");
                              scanf("%s",s[a].name);
                   printf("Enter your Last Name:");
                              scanf("%s",s[a].lname);
                   strcat(s[a].name,s[a].lname);
                   printf("Set your Password: ");
                   passwordset(a);
                   printf("\nYour Minimum Balance in your account at any given point of time is Rs.500 \n");
                              s[a].dep=500;
                              a++;
                              i++;
         }
              void deposit(int a)
        {
                   int k,no,b=0,copy=0;
                   float depo ;
                   printf("\n*************************************");
                   printf("\n              DEPOSIT ");
                   printf("\n*************************************");
                   printf("\nEnter your Account Number:");
                   scanf("%d",&no);
                   for(b=0;b<i;b++)
                       {
                           if(s[b].no == no)
                               copy = b;
                       }
                           if(s[copy].no == no)
                             {
                                        printf("Enter your password: ");
                                        k=checkpassword(a);
                                        if(k==0)
                                            return;
                                        else
                                        {
                                        printf("\n Account Number : %d",s[copy].no);
                                        printf("\n Name : %s",s[copy].name);
                                        printf("\n Balance : %f",s[copy].dep);
                                        printf("\n How Much Money is to be Deposited Now:");
                                        scanf("%f",&depo);
                                        s[copy].dep+=depo;
                                        printf("\n The Balance Amount is :%f",s[copy].dep);
                                        getch();
                                        }
                             }
                            else
                             {
                                       printf("\nACCOUNT NUMBER YOU HAVE ENTERED IS INVALID");
                                       getch();
                              }
         }
             void withdraw(int a)
         {
                    int k,no,b=0,copy=0;
                    float aa;
                    printf("\n*************************************");
                    printf("\n             WITHDRAW ");
                    printf("\n*************************************");
                    printf("\nEnter your Account Number");
                    scanf("%d",&no);
                    for(b=0;b<i;b++)
                        {
                               if(s[b].no == no)
                                 copy = b;
                        }
                              if(s[copy].no == no)
                                 {
                                        printf("Enter your password: ");
                                        k=checkpassword(a);
                                        if(k==0)
                                            return;
                                        else
                                        {
                                        printf("\n Account Number : %d",s[copy].no);
                                        printf("\n Name : %s",s[copy].name);
                                        printf("\n Balance : %f",s[copy].dep);
                                        printf("\n How Much Do You Want To Withdraw Now:");
                                        scanf("%f",&aa);
                                        if(s[copy].dep<aa+500)
                                           {
                                                  printf("\nCANNOT WITHDRAW, YOUR ACCOUNT HAS MINIMUM BALANCE");
                                                  getch();
                                           }
                                          else
                                           {
                                                  s[copy].dep-=aa;
                                                  printf("\nThe Balance Amount is:%f",s[copy].dep);
                                            }
                                        }
                                 }
                               else
                                {
                                      printf("\nACCOUNT NO YOU HAVE ENTERED IS INVALID");
                                      getch();
                                }
                               getch();
           }
void bal(int a)
          {
                  int k,no,b=0,copy=0;
                  float aa;
                  printf("\n*************************************");
                  printf("\n         BALANCE ENQUIRY ");
                  printf("\n*************************************");
                  printf("\n Enter your Account Number:");
                  scanf("%d",&no);
                  for(b=0;b<i;b++)
                      {
                           if(s[b].no == no)
                             copy = b;
                      }
                           if(s[copy].no==no)
                              {
                                    printf("Enter your password: ");
                                    k=checkpassword(a);
                                    if(k==0)
                                        return;
                                    else
                                        {
                                            printf("\n Account Number :  
                                                       %d",s[copy].no);
                                            printf("\n Name : %s",s[copy].name);
                                            printf("\n Your Balance is: %f",s[copy].dep);
                                            getch();
                                        }
                              }
                             else
                             {
                                    printf("/n ACCOUNT NO. ENTERED IS INVALID");
                                    getch();
                              }
            }
                void issue(int a)
            {
                 int no,b=0,copy=0,ch;
                 char chr[100];
                 float aa;
                 printf("\n*************************************");
                 printf("\n PROBLEMS YOU ARE FACING");
                 printf("\n*************************************");
                 printf("\n Enter your Account Number:");
                 scanf("%d",&no);
                 for(b=0;b<i;b++)
                        {
                               if(s[b].no == no)
                                 copy = b;
                        }
                              if(s[copy].no == no)
                                 {
                                        printf("\n Account Number : %d",s[copy].no);
                                        printf("\n Name : %s",s[copy].name);
                                        printf("\n What is Problem that you are Facing?");
                                        printf("\n Enter 1 If You Are Facing Technical Issue");
                                        printf("\n Enter 2 If You Have Issue Regarding Customer Service");
                                        printf("\n Enter 3 For Any Other Issue");
                                        printf("\n Enter 4 To Exit");
                                        printf("\n Enter Your Choice:");
                                        scanf("%d",&ch);
                              switch(ch)
                                       {
                                              case 1: printf("\n Please describe the problem you are facing\n");
                                                      scanf("%s",chr);
                                                      printf("\n We are extremely sorry for the inconvenience caused.We will surely look upon to your issue and get back to you as soon as possible.Thank you for your cooperation\n");
                                                         break;
                                              case 2: printf("\n Please describe the problem you are facing\n");
                                                      scanf("%s",chr);
                                                      printf("\n We are extremely sorry for the inconvenience caused.We will definitely see to it that this sort of issue never happens again.Thank you for your cooperation\n");
                                                         break;
                                              case 3: printf("\n Please describe the problem you are facing\n");
                                                      scanf("%s",chr);
                                                      printf("\n We are extremely sorry for the inconvenience caused.We will surely look upon to your issue and get back to you as soon as   possible.Thank you for your cooperation\n");
                                                         break;
                                              case 4: break;
                                              defalut: printf("Please enter a number from 1-4 only");
                                                         break;
                                        }
                                 }
                          else
                                 {
                                      printf("\n ACCOUNT NO YOU HAVE ENTERED IS INVALID");
                                      getch();
                                 }
            }
                void rate()
            {
                 int rate,no,b=0,copy=0;
                 char chr[100];
                 float aa;
                 printf("\n*************************************");
                 printf("\n  RATE KMN BANK ");
                 printf("\n*************************************");
                 printf("\n How Much would you like to rate our Bank out of 10?\n");
                 scanf("%d",&rate);
                 if (rate>7 && rate<=10)
                    printf("\nThank you for rating our Bank %d / 10.\n We look forward to keep serving you",rate);
                 else if (rate>4 && rate<=7)
                    printf("\n Thank you for rating our bank %d / 10",rate);
                 else if(rate>=0 && rate<=5)
                    {
                        printf("\n Thank you for rating our Bank %d / 10",rate);
                        printf("\n Hope we are able to serve you better next time.");
                    }
            }

