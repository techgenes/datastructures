#include<stdio.h>
int language;
int main()
{
    printf("to continue in english press 1\n hindi mein jaankari ke liye 2 dabaayein\n");
    scanf("%d",&language);
    (language%2==0)?hindi():english();

}
english()
{
    int ch;
    printf("to know you bill press 1\n");
    printf("for porting request press 2\n");
    printf("to talk to our customer care representative press 3 \n ");
    printf("for going back to previous menu press 9 \n");
    printf("to exit press 0\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        bill();
        break;
    case 2:
        portRequest();
        break;
    case 3:
        customerCare();
        break;
    case 9:
        main();
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("invalid option please type again");
        english();
    }
}

hindi()
{
    int ch;
    printf("bill ki jaankari ke liye 1 dabaayein\n");
    printf("portability ke liye 2 dabaayein\n");
    printf("customer care representative se baat karne ke liye 3 dabaayein \n ");
    printf("picchhle menu mein jaane ke liye 9 dabaayein \n");
    printf("exit karne ke liye 0 dabaayein\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        bill();
        break;
    case 2:
        portRequest();
        break;
    case 3:
        customerCare();
        break;
    case 9:
        main();
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("invalid option please type again");
        english();
    }
}
bill()
{
    int ch;
    if(language%2==0)
    {
        printf("aapka bill Rs.200 hai\n ");
        printf("picchhle menu mein jaane ke liye 9 dabaayein  \n to exit press 0");
        scanf("%d",&ch);
        if(ch==9)
        {
           hindi();
        }
        else if(ch==0)
        {
            exit(0);
        }
        else
        {
            printf("you entered a wrong option");
            bill();
        }
    }
    else
    {
        printf("your bill is Rs. 200\n");
        printf("to go back to previous menu press 9 \n to exit press 0\n");
        scanf("%d",&ch);
        if(ch==9)
        {
           english();
        }
        else if(ch==0)
        {
            exit(0);
        }
        else
        {
            printf("you entered a wrong option");
            bill();
        }

    }
}
portRequest()
{
    int ch;
    if(language%2==0)
    {
        printf("porting request pragati per hai\n ");
        printf("picchhle menu mein jaane ke liye 9 dabaayein  \n to exit press 0");
        scanf("%d",&ch);
        if(ch==9)
        {
           hindi();
        }
        else if(ch==0)
        {
            exit(0);
        }
        else
        {
            printf("aapne galat vikalp chuna hai");
            portRequest();
        }
    }
    else
    {
        printf("porting request is under process\n");
        printf("to go back to previous menu press 9 \n to exit press 0\n");
        scanf("%d",&ch);
        if(ch==9)
        {
           english();
        }
        else if(ch==0)
        {
            exit(0);
        }
        else
        {
            printf("you entered a wrong option");
            portRequest();
        }

    }
}
customerCare()
{
    int ch;
    if(language%2==0)
    {
        printf("hamare sare adhikaari java coding mein vyast hai kripya todi der baad fir dial kare\n ");
        printf("picchhle menu mein jaane ke liye 9 dabaayein  \n to exit press 0");
        scanf("%d",&ch);
        if(ch==9)
        {
           hindi();
        }
        else if(ch==0)
        {
            exit(0);
        }
        else
        {
            printf("aapne galat vikalp chuna hai");
            customerCare();
        }
    }
    else
    {
        printf("All our executives are busy in learning java please try again later\n");
        printf("to go back to previous menu press 9 \n to exit press 0\n");
        scanf("%d",&ch);
        if(ch==9)
        {
           english();
        }
        else if(ch==0)
        {
            exit(0);
        }
        else
        {
            printf("you entered a wrong option");
            customerCare();
        }

    }
}
