#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void help()
{
    system("cls");
    printf("\n .................................... C program Quiz Game......................................");
    printf("\n __________________________________________________________________________________________________");
    printf("\n\n                                            HELP");
    printf("\n __________________________________________________________________________________________________");
    printf("\n\n => In this quiz game you will be asked total 10 questions each right answer give you price .");
    printf("\n => Final wining is ONE MILLION cash prize .\n");
    printf("\n => You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");
    printf("\n    right option\n");
    printf("\n => You will be asked questions continuously if you keep giving the right answers.\n");
    printf("\n => No negative marking for wrong answers\n");
	printf("\n\n\t\t************************BEST OF LUCK**************************\n\n");


}
void about()
{
    system("cls");
    printf("\n .................................... C program Quiz Game......................................");
    printf("\n __________________________________________________________________________________________________\n");
    printf("\n                                            ABOUT");
    printf("\n __________________________________________________________________________________________________");
    printf("\n\n => This Quiz game is made by using C language only .");
    printf("\n\n => For making this quiz game i use my knowledge about c and take some help from \n    online available materials .");
    printf("\n\n => This code is made in Code::Blocks so it prefer Code::Blocks to better result.");
    printf("\n\n => If you want code of this quiz you can download by using given link is description .");
    printf("\n\n\t\t************************BEST OF LUCK**************************\n\n");


}
void quit()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n __________________________________________________________________________________________________");
    printf("\n\n\t\t\t* * * * THANK YOU FOR COMMING HERE , HAVE A GREAT DAY ! * * * *");
    printf("\n __________________________________________________________________________________________________\n\n\n\n\n");
}

void congo()
{
    system("cls");
    printf("\n\n\n\n\t\t");
    for(int row=1;row<=15;row++)
        {
            for(int col=1;col<=65;col++)
                {
                    if(row==1||row==15||col==1||col==65)
                        printf("$");
                    else if(row==8 && (col==2))

                        printf("\t* * * CONGRATULATIONS YOU ARE A MILLIONAIRE! * * *");

                    else
                        printf(" ");
                }
printf("\n\t\t");
}
printf("\n\n\n\n\n\n\n");
}

void start()
{system("cls");

    int nom,que,ans;
    {
    char name[15];
    int counter=0,sel,ans,que,amount=1;
    printf(" __________________________________________________________________________________________________");
    printf("\n\n\t\t\t* * * * Well come to quiz on C * * * * \n");
    printf(" __________________________________________________________________________________________________");
    printf("\n\n\tLet's start the quiz ......\n");
    printf("\n\tEnter your name : ");
    scanf("%s",&name);
    printf(" __________________________________________________________________________________________________");

    for(que=1;que<=10;que++)
    {
        printf("\n __________________________________________________________________________________________________");

        ans=0;
        nom=que;
        switch(nom)
    {
        case 1 :
            printf("\n\n\t1.The keyword used to transfer control from a function back to the calling function is");
            printf("\n\t\t1.goto\t\t\t2.switch\n\t\t3.go back\t\t4.return");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 4)
                {
                    amount = amount * 1000;
                    printf("\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;
                }
            else
            {
                printf("\n\n\t\tYour answer is wrong , thanks you %s for taking this quiz  ",name);
                que=11;
                break;
            }
            printf("\n __________________________________________________________________________________________________");

        case 2:

            printf("\n\n\t2.Which bitwise operator is suitable for turning off a particular bit in a number?");
            printf("\n\t\t1.&& operator\t\t2.& operator\n\t\t3.|| operator\t\t4.! operator\n");
            printf("\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 2)
                {
                    amount=5000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;



                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");
        case 3:

            printf("\n\n\t3.Which bitwise operator is suitable for turning on a particular bit in a number?");
            printf("\n\t\t1.&& operator\t\t2.& operator\n\t\t3.|| operator\t\t4.! operator\n");
            printf("\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 4)
                {
                    amount=10000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else

                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }

        printf("\n __________________________________________________________________________________________________");

        case 4:

            printf("\n\n\t4.Which is the correct order of mathematical operators ?\n");
            printf("\n\t\t1.Addition, Subtraction, Multiplication, Division   \n\t\t2.Multiplication, Addition, Division, Subtraction");
            printf("\n\t\t3.Division, Multiplication, Addition, Subtraction	\n\t\t4.Addition, Division, Modulus, Subtraction");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 3)
                {
                    amount=20000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;
                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");


        case 5:

            printf("\n\n\t5.Which of the following cannot be checked in a switch-case statement?\n");
            printf("\n\t\t1.Float\t\t2.Integer\n\t\t3.enum\t\t4.Character\n");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 1)
                {
                    amount=50000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");

        case 6:

            printf("\n\n\t6.Input/output function prototypes and macros are defined in which header file?\n");
            printf("\n\t\t1.stdio.h\t\t2.stdlib.h\n\t\t3.string.h\t\t4.conio.h\n");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 1)
                {
                    amount=100000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");

        case 7:

            printf("\n\n\t7.Does there any function exist to convert the int or float to a string?\n");
            printf("\n\t\t1.Yes\t\t\t\t2.No\n");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 1)
                {
                    amount=200000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");

        case 8:

            printf("\n\n\t8.How many bytes are occupied by near, far and huge pointers (DOS)?\n");
            printf("\n\t\t1.near=4 far=8 huge=8\t\t2.near=2 far=4 huge=8\n\t\t3.near=2 far=4 huge=4\t\t4.near=4 far=4 huge=8\n");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 3)
                {
                    amount=400000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");

        case 9:

            printf("\n\n\t9.If the two strings are identical, then strcmp() function returns\n");
            printf("\n\t\t1. -1\t\t\t2. 1\n\t\t3. 0\t\t\t4.YES\n");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 3)
                {
                    amount=700000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");

        case 10:

            printf("\n\n\t10.How will you free the allocated memory ?\n");
            printf("\n\t\t1.remove(var-name);\t\t2.delete(var-name);\n\t\t3.dalloc(var-name);\t\t4.free(var-name);	n");
            printf("\n\n\tEnter your answer : ");
            scanf("%d",&ans);
            if(ans == 4)
                {
                    amount=1000000;
                    printf("\n\tYour Answer is right ......Your Wining amount is %d /- Rs",amount);
                    counter++;

                }
            else
                {
                    printf("\n\n\t\tYour answer is wrong , thanks you %s !\n\n\t\t* * * CONGRATULATIONS your final winning amount is %d /-Rs * * *",name,amount);
                    que=11;
                    break;
                }
        printf("\n __________________________________________________________________________________________________");


        default :
        //printf("\n\n***************CONGRATULATIONS YOU WON %d /- Rs ****************\n",amount);

        {
            congo();
            break;
        }
    }
    }

}
}




int main()
{
    int counter=0,nom;


    home:
        system("cls");
        printf("___________________________________________________________________________________________________\n");
        printf("..................................WELLCOME TO C program Quiz Game.................................");
        printf("\n___________________________________________________________________________________________________\n");
        printf("\n\t => Press S to start the game\n");
        printf("\n\t => Press A to read about quiz  ");
        printf("\n\n\t => press H for help            ");
        printf("\n\n\t => press Q to quit             \n");
        printf("\n__________________________________________________________________________________________________\n");


    if(toupper(getch())=='H')
    {
        help();
        getch();
        goto home;
    }
    else if(toupper(getch())=='A')
    {
        about();
        getch();
        goto home;

    }
    else if(toupper(getch())=='S')
    {
        start();
        getch();
        goto home;
    }
    else if(toupper(getch())=='Q')
    {
        quit();
    }
    else
    {
        printf("\n\n\n\t\t\* * * * Please enter valid character ,Thank you ! * * * * \n\n\n");
        getch();
        goto home;
    }
}
