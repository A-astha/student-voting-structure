#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

void main_loges();
void voter_insert();
void voting();
void admin();
void show();
void winner();
void stop();
void not_again();
void exi();

typedef struct voter_information
{
    char id[10];
    char name[30];
    char year[15];
    char branch[30];
    
    struct voter_information *next;
} node;

node *head;

char t_password[32];
int i;
int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;

int main()
{
    system("COLOR 3f");
    system("cls");

    system("COLOR 3f");
    int a=177;
    int i=0;
    printf("Loading - ");
    for(i=0; i<40; i++)
    {
        printf("%c",a);
        Sleep(100);
    }


    printf("\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*******WELCOME TO MY PROJECT*******  \t\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n");
    printf("\t\t\t  **************************************************************\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **\t\t        _VOTING SYSTEM_ \t\t      **\n");
    printf("\t\t\t  **\t\t         \t\t                      **\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **\t\t\t\t\t\t\t      **\n");
    printf("\t\t\t  **************************************************************\n");
    printf("\t\t\t ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **\n\n");
    printf("         \t\t- - - - - Please Enter One(1) For Logging Vote Main Loges - - - - -\n\n\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }


    return 0;
}

void main_loges()
{
    system("cls");

    printf("\n\n\n");
    printf("       \t\t\t\t1. FOR VOTE ENTRY    - - - - - |||\n");
    Sleep(300);
    printf("       \t\t\t\t2. FOR ADMIN PANEL   - - - - - |||\n");
    Sleep(300);
    printf("       \t\t\t\t3. FOR WINNER        - - - - - |||\n");
    Sleep(300);
    printf("       \t\t\t\t4. FOR EXIT          - - - - - |||\n\n\n\n\n");
    printf("    \t         ---------- - - - - BEFORE VOTING YOU HAVE TO BE VOTER- - - - -----------\n\n\n");
    Sleep(500);
    printf("    \t- - - - - - - - - - - - -If You Want To Give Vote Please Enter (1) - - - - - - - - - - - - -\n\n\n");
    int T;
    scanf("%d",&T);
    if(T==1)
    {
        voter_insert();
    }
    if(T==2)
    {
        admin();
    }
    if(T==3)
    {
        winner();
    }
    if(T==4)
    {
        exi();
    }

}


int cunt=0,count=0,R=3;
void voter_insert()
{
    node *temp;

    char name[25],year[15],branch[25],id[10];
    system("cls");
    printf("\n\n\n\n");
    printf("\tIF  ID ,YOUR NAME, YEAR , YOUR BRANCH  MATCH YOU CAN GIVE VOTE OTHERWISE NOT\n\n");
    Sleep(300);
    printf("\t\t\tIF YOU DO WRONG  (%d)  TIMES, THE PROGRAMME WILL BE STOP AUTOMATICALLY\n\n\n",R);
    Sleep(300);
    printf("\t\tPLEASE---,\n");
    Sleep(300);
    printf("\t\t\t\tENTER YOUR  ID NUMBER");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME");
    gets(name);
    printf("\t\t\t\tENTER YOUR YEAR");
    gets(year);
    printf("\t\t\t\tENTER YOUR BRANCH");
    gets(branch);
    if(id==temp->id)
    {
    	printf("single time");
	}
	else{
	
    
    temp=(node *)malloc (sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->year,year);
    strcpy(temp->branch,branch);
    
    temp->next=NULL;
    head=temp;
    
    while(temp!=NULL)
    {
        if((strcmp(temp->id,"101")==0 && strcmp(temp->name,"SHREYA")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0 )||
                (strcmp(temp->id,"102")==0 && strcmp(temp->name,"AAA")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"103")==0 && strcmp(temp->name,"BBB")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"104")==0 && strcmp(temp->name,"CCC")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"105")==0 && strcmp(temp->name,"DDD")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"106")==0 && strcmp(temp->name,"EEE")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"107")==0 && strcmp(temp->name,"FFF")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"108")==0 && strcmp(temp->name,"GGG")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"109")==0 && strcmp(temp->name,"HHH")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"110")==0 && strcmp(temp->name,"III")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"111")==0 && strcmp(temp->name,"JJJ")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0)||
                (strcmp(temp->id,"112")==0 && strcmp(temp->name,"KKK")==0 && strcmp(temp->year,"2")==0 && strcmp(temp->branch,"ISE")==0))
                
		{

            cunt++;
            if(cunt>12)
            {
                not_again();
                break;
            }
            voting();
        }
		       
        else
        {
            R--;
            count++;
            if(count == 3)
            {
                stop();
                break;
            }
            printf("\n\n\n\n");
            printf("\t\tYou voter ID or NAME or YEAR or  is wrong\n\n");
            Sleep(300);
            printf("\t\t\t\t\tPlease Re Enter\n\n");
            Sleep(300);
            system("pause");
            Sleep(300);
            main_loges();
        }
        temp=temp->next;
    }

}
}



void admin()
{
	
	

	int pass;
 
    printf("\n\n\n\n");
    printf("\t\t\tEnter Password To Unlock Admin Panel\n\n");
    scanf("%d",&pass);
    if(pass==1234)
    {
        show();
    }
    else
    {
        printf("Wrong Password\n");
    }
}



void voting()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t        * * * * *  List of the Candidates * * * * *     \n\n\n");
    Sleep(300);
    printf("\t\t\t --------NAME--------\n\n");
    Sleep(300);
    printf("\t\t\t 1. AKSHAY   \n");
    Sleep(300);
    printf("\t\t\t 2. DISHA    \n");
    Sleep(300);
    printf("\t\t\t 3. VARSHA   \n");
    Sleep(300);
    printf("\t\t\t 4. PRIYA    \n");
    Sleep(300);
    printf("\t\t\t 5. CHANDAN   \n\n\n");


    int B,j;
    printf("\t\t\t Please--,\n");
    printf("\t\t\t\t   Enter Your Choice    ");
    for(j=1; j<=1; j++)
    {
        scanf("%d",&B);

        if(B==1)
        {
            cunt1++;
        }
        if(B==2)
        {
            cunt2++;
        }
        if(B==3)
        {
            cunt3++;
        }
        if(B==4)
        {
            cunt4++;
        }
        if(B==5)
        {
            cunt5++;
        }
        if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
        {
            printf("\t\t\t Your vote is Invalid\n");
            main_loges();
        }
    }
    int R;
    system("cls");

    printf("\n\n\n\n");
    printf("\t\t\t If You Want To See Present Winner Enter One (1) OR\n\n\n \t\t\t\t\tZero(0) For Main Loges\n\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R!=1)
    {
        main_loges();
    }

}




void show()
{
    
    FILE *fpt;
    fpt=fopen("adminwinnerlist.txt","w+");
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t   How Many Votes Who Got\n\n\n");
    fprintf(fpt,"\t\t\tHow many votes who got\n\n\n");
    Sleep(500);
    printf("\t\t\t   AKSHAY GOT    %d  votes\n",cunt1);
    fprintf(fpt,"\t\t\t   AKSHAY GOT    %d  votes\n",cunt1);
    Sleep(500);
    printf("\t\t\t   DISHA got    %d  votes\n",cunt2);
    fprintf(fpt,"\t\t\t   DISHA GOT    %d  votes\n",cunt2);
    Sleep(500);
    printf("\t\t\t   VARSHA got   %d  votes\n",cunt3);
    fprintf(fpt,"\t\t\t   VARSHA GOT    %d  votes\n",cunt3);
    Sleep(500);
    printf("\t\t\t   PRIYA got     %d  votes\n",cunt4);
    fprintf(fpt,"\t\t\t   PRIYA GOT    %d  votes\n",cunt4);
    Sleep(500);
    printf("\t\t\t   CHANDAN got   %d  votes\n\n\n",cunt5);
    fprintf(fpt,"\t\t\t   CHANDAN GOT    %d  votes\n",cunt5);
    Sleep(500);

    int R;
    printf("\t\t\t Enter One(1) For Main Loges OR\n\n\n \t\t\t\tZero(0) For Exit\n");
    scanf("%d",&R);
    if(R==1)
    {
        main_loges();
    }
    else
    {
        exi();
    }
   fclose(fpt);

}


void winner()
{
    FILE *fpt;
    fpt=fopen("winner1.txt","w+");

    system("cls");

    printf("\n\n\n\n");


    if(cunt1>cunt2 && cunt1>cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is AKSHAY and got %d votes\n\n\n\n\n",cunt1);
        fprintf(fpt,"The present Winner Person Is AKSHAY and got %d votes",cunt1);
    }


    if(cunt1==cunt2 && cunt1>cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes also DISHA got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt2);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes also DISHA got %d votes.By toss  AKSHAY wins",cunt1,cunt2);
    }



    if(cunt1>cunt2 && cunt1==cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes also VARSHA got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt3);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes also VARSHA got %d votes.By toss AKSHAY wins",cunt1,cunt3);
    }


    if(cunt1>cunt2 && cunt1>cunt3 && cunt1==cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes also PRIYA  got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt4);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes also PRIYA got %d votes.By toss AKSHAY wins",cunt1,cunt4);
    }


    if(cunt1>cunt2 && cunt1>cunt3 && cunt>cunt4 && cunt1==cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes also CHANDAN got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt5);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes also CHANDAN got %d votes.By toss AKSHAY wins",cunt1,cunt5);
    }


    if(cunt1==cunt2 && cunt1==cunt3 && cunt1>cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss AKSHAY wins",cunt1,cunt2,cunt3);
    }


    if(cunt1==cunt2 && cunt1==cunt3 && cunt1==cunt4 && cunt1>cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes also PRIYTA got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt2,cunt3,cunt4);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes also PRIYA got %d votes.By toss AKSHAY wins",cunt1,cunt2,cunt3,cunt4);
    }


    if(cunt1==cunt2 && cunt1==cunt3 && cunt1==cunt4 && cunt1==cunt5 )
    {
        printf("\t\t\tThe present situation is draw and AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes, PRIYA got %d votes also CHANDAN got %d votes.By toss AKSHAY wins\n\n\n\n\n",cunt1,cunt2,cunt3,cunt4,cunt5);
        fprintf(fpt,"The present situation is draw and AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes, PRIYA got %d votes also CHANDAN got %d votes.By toss AKSHAY wins",cunt1,cunt2,cunt3,cunt4,5);
    }


    if(cunt2>cunt1 && cunt2>cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is DISHA and got %d votes\n\n\n\n\n",cunt2);
        fprintf(fpt,"The present Winner Person Is DISHA and got %d votes",cunt2);
    }


    if(cunt2==cunt1 && cunt2>cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes also AKSHAY got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt1);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes also AKSHAY got %d votes.By toss DISHA wins",cunt2,cunt1);
    }



    if(cunt2>cunt1 && cunt2==cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes also VARSHA got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes also VARSHA got %d votes By toss DISHA wins",cunt2,cunt3);
    }


    if(cunt2>cunt1 && cunt2>cunt3 && cunt2==cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes also PRIYA got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt4);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes also PRIYA got %d votes.By toss DISHA wins",cunt2,cunt4);
    }


    if(cunt2>cunt1 && cunt2>cunt3 && cunt2>cunt4 && cunt2==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes also CHANDAN got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt5);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes also CHANDAN got %d votes.By toss DISHA wins",cunt2,cunt5);
    }


    if(cunt2==cunt1 && cunt2==cunt3 && cunt2>cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes, AKSHAY got %d votes also VARSHA got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt1,cunt3);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes, AKSHAY got %d votes also VARSHA got %d votes.By toss DISHA wins",cunt2,cunt1,cunt3);
    }



    if(cunt2==cunt1 && cunt2==cunt3 && cunt2==cunt4 && cunt2>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes, AKSHAY got %d votes, VARSHA got %d votes also PRIYA got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt1,cunt3,cunt4);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes, AKSHAY got %d votes, VARSHA got %d votes also PRIYA got %d votes.By toss DISHA Wins",cunt2,cunt1,cunt3,cunt4);
    }




    if(cunt2==cunt1 && cunt2==cunt3 && cunt2==cunt4 && cunt2==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and DISHA got %d votes, AKSHAY got %d votes, VARSHA got %d votes, PRIYA got %d votes also CHANDAN got %d votes. By toss DISHA wins\n\n\n\n\n",cunt2,cunt1,cunt3,cunt4,cunt5);
        fprintf(fpt,"The present situation Is draw and DISHA got %d votes, AKSHAY got %d votes, VARSHA got %d votes PRIYA got %d votes also CHANDAN got %d votes.By toss DISHA wins",cunt2,cunt1,cunt3,cunt4,cunt5);
    }


    if(cunt3>cunt1 && cunt3>cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is VARSHA and got %d votes\n\n\n\n\n",cunt3);
        fprintf(fpt,"The present Winner Person Is VARSHA and got %d votes",cunt3);
    }


    if(cunt3==cunt1 && cunt3>cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes also AKSHAY got %d votes. By toss VARSHA wins.\n\n\n\n\n",cunt3,cunt1);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes also AKSHAY got %d votes.By toss VARSHA wins",cunt3,cunt1);
    }


    if(cunt3>cunt1 && cunt3==cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes also DISHA got %d votes.By toss VARSHA wins\n\n\n\n\n",cunt3,cunt2);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes also DISHA got %d votes.By toss VARSHAS wins",cunt3,cunt2);
    }


    if(cunt3>cunt1 && cunt3>cunt2 && cunt3==cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes also PRIYA got %d votes.By toss VARSHA wins\n\n\n\n\n",cunt3,cunt4);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes also PRIYA got %d votes.By toss VARSHA wins",cunt3,cunt4);
    }


    if(cunt3>cunt1 && cunt3>cunt2 && cunt3>cunt4 && cunt3==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes also CHANDAN got %d votes.By toss VARSHA wins\n\n\n\n\n",cunt3,cunt5);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes also CHANDAN got %d votes.By toss VARSHA wins",cunt3,cunt5);
    }


    if(cunt3==cunt1 && cunt3==cunt2 && cunt3>cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes, AKSHAY got %d votes also DISHA got %d votes.By toss VARSHA wins\n\n\n\n\n",cunt3,cunt1,cunt2);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes, AKSHAY got %d votes also DISHA got %d votes.By toss VARSHA wins",cunt3,cunt1,cunt2);
    }


    if(cunt3==cunt1 && cunt3==cunt2 && cunt3==cunt4 && cunt3>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes, AKSHAY got %d votes, DISHA  got %d votes also PRIYA got %d votes.By toss VARSHA wins\n\n\n\n\n",cunt3,cunt1,cunt2,cunt4);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes, AKSHAY got %d votes, DISHA  got %d votes also PRIYA got %d votes.By toss VARSHA wins",cunt3,cunt1,cunt2,cunt4);
    }



    if(cunt3==cunt1 && cunt3==cunt2 && cunt3==cunt4 && cunt3==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and VARSHA got %d votes, AKSHAY got %d votes, DISHA  got %d votes, PRIYA got %d votes also CHANDAN got %d votes.By toss VARSHA wins\n\n\n\n\n",cunt3,cunt1,cunt2,cunt4,cunt5);
        fprintf(fpt,"The present situation Is draw and VARSHA got %d votes, AKSHAY got %d votes, DISHA  got %d votes, PRIYA got %d votes also CHANDAN got %d votes.By toss VARSHA wins",cunt3,cunt1,cunt2,cunt4,cunt5);
    }


    if(cunt4>cunt1 && cunt4>cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present Winner Person Is PRIYA and got %d votes\n\n\n\n\n",cunt4);
        fprintf(fpt,"The present Winner Person Is PRIYA and got %d votes",cunt4);
    }


    if(cunt4==cunt1 && cunt4>cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes also AKSHAY got %d votes. By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt1);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes also AKSHAY got %d votes. By toss PRIYA wins",cunt4,cunt1);
    }


    if(cunt4>cunt1 && cunt4==cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes also DISHA got %d votes. By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt2);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes also DISHA got %d votes. By toss PRIYA wins",cunt4,cunt2);
    }

    if(cunt4>cunt1 && cunt4>cunt2 && cunt4==cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes also VARSHA got %d votes. By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt3);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes also VARSHA got %d votes. By toss PRIYA wins",cunt4,cunt3);
    }


    if(cunt4>cunt1 && cunt4>cunt2 && cunt4>cunt3 && cunt4==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes also CHANDAN got %d votes. By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt5);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes also CHANDAN got %d votes. By toss PRIYA wins",cunt4,cunt5);
    }


    if(cunt4==cunt1 && cunt4==cunt2 && cunt4>cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes also DISHA got %d votes.By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt1,cunt2);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes also DISHA got %d votes.By toss PRIYA wins",cunt4,cunt1,cunt2);
    }


    if(cunt4==cunt1 && cunt4==cunt2 && cunt4==cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss PRIYA wins",cunt4,cunt1,cunt2,cunt3);
    }


    if(cunt4==cunt1 && cunt4==cunt2 && cunt4==cunt3 && cunt4>cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes,DISHA got %d votes also VARSHA got %d votes.By toss PRIYA wins.\n\n\n\n\n",cunt4,cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss PRIYA wins",cunt4,cunt1,cunt2,cunt3);
    }

    if(cunt4==cunt1 && cunt4==cunt2 && cunt4==cunt3 && cunt4==cunt5 )
    {
        printf("\t\t\tThe present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes also CHANDAN got %d votes.By toss tarek wins.\n\n\n\n\n",cunt4,cunt1,cunt2,cunt3,cunt5);
        fprintf(fpt,"The present situation Is draw and PRIYA and got %d votes, AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes also CHANDAN got %d votes.By toss tarek wins",cunt4,cunt1,cunt2,cunt3,cunt5);
    }
 

    if(cunt5>cunt1 && cunt5>cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present Winner Person Is CHANDAN got %d votes\n\n\n\n\n",cunt5);
        fprintf(fpt,"The present Winner Person Is CHANDAN got %d votes",cunt5);
    }

    if(cunt5==cunt1 && cunt5>cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes also AKSHAY got %d votes.By toss CHANDAN wins\n\n\n\n\n",cunt5,cunt1);
        fprintf(fpt,"The present situation Is draw and CHANDAN got %d votes also AKSHAY got %d votes.By toss CHANDAN wins",cunt5,cunt1);
    }


    if(cunt5>cunt1 && cunt5==cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes also DISHA got %d votes.By toss CHANDAN wins\n\n\n\n\n",cunt5,cunt2);
        fprintf(fpt,"The present situation Is draw and CHANDAN got %d votes also DISHA got %d votes.By toss CHANDAN wins",cunt5,cunt2);
    }

    if(cunt5>cunt1 && cunt5>cunt2 && cunt5==cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes also VARSHA got %d votes.By toss CHANDAN wins\n\n\n\n\n",cunt5,cunt3);
        fprintf(fpt,"The present situation Is draw and CHANDAN got %d votes also VARSHA got %d votes.By toss CHANDAN wins",cunt5,cunt3);
    }

    if(cunt5>cunt1 && cunt5>cunt2 && cunt5>cunt3 && cunt5==cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes also PRIYA got %d votesBy toss CHANDAN wins\n\n\n\n\n",cunt5,cunt4);
        fprintf(fpt,"The present situation Is draw and CHANDAN got %d votes also PRIYA got %d votes.By toss CHANDAN wins",cunt5,cunt4);
    }


    if(cunt5==cunt1 && cunt5==cunt2 && cunt5>cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes, AKSHAY got %d votes also DISHA got %d votes.By toss CHANDAN wins\n\n\n\n\n",cunt5,cunt1,cunt2);
        fprintf(fpt,"The present situation Is draw and CHANDAN got %d votes, AKSHAY got %d votes also DISHA got %d votes.By toss CHANDAN wins",cunt5,cunt1,cunt2);
    }


    if(cunt5==cunt1 && cunt5==cunt2 && cunt5==cunt3 && cunt5>cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes, AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss CHANDAN wins\n\n\n\n\n",cunt5,cunt1,cunt2,cunt3);
        fprintf(fpt,"The present situation Is draw and CHANDAN  got %d votes, AKSHAY got %d votes, DISHA got %d votes also VARSHA got %d votes.By toss CHANDAN wins",cunt5,cunt1,cunt2,cunt3);
    }


    if(cunt5==cunt1 && cunt5==cunt2 && cunt5==cunt3 && cunt5==cunt4)
    {
        printf("\t\t\tThe present situation Is draw and CHANDAN got %d votes, AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes also PRIYA got %d votes.By toss CHANDAN wins\n\n\n\n\n",cunt5,cunt1,cunt2,cunt3,cunt4);
        fprintf(fpt,"The present situation Is draw and CHANDAN  got %d votes,AKSHAY got %d votes, DISHA got %d votes, VARSHA got %d votes also PRIYA got %d votes.By toss CHANDAN wins",cunt5,cunt1,cunt2,cunt4);
    }


    fclose(fpt);
    int T;
    printf("\t\t\t\t Enter One(1) For Main Loges OR\n\n\t\t\t\t\tZero(0) For Exit\n");
    scanf("%d",&T);
    if(T==1)
    {
        main_loges();
    }
    if(T!=1)
    {
        exi();
    }

}

void stop()
{
    system("cls");

    printf("\n\n\n");
    printf("\t- - - - - - - (:- SORRY YOU CAN NOT GIVE YOUR VOTE FOR YOUR WRONG ENTRY THREE(3) TIMES -:) - - - - - - -\n\n\n");
    Sleep(500);
    printf("\t\t\t* * * * * ~~~~~ PLEASE TRY AGAIN AFTER A FEW MOMENT ~~~~~~ * * * * *\n\n\n");
    Sleep(800);
    printf("\t\t\t\t* * * * * ~~~~~ THANK YOU ~~~~~ * * * * *\n\n\n");
    Sleep(500);
}

void not_again()
{
    system("cls");

    printf("\n\n\n");
    printf("\t\t- - - - - - - - - - YOU HAVE GIVE YOUR VOTE SUCCESSFULLY - - - - - - - - - - \n\n");
    Sleep(300);
    printf("         \t\t- - - - - SO, YOU CAN NOT GIVE VOTE MORE THEN ONE(1) TIME - - - - - \n\n\n");
    Sleep(300);
    printf("\t\t\t    If You Want To See Present Winner Enter One (1) OR\n\t\t\t\t\tTwo(2) For Main Loges\n");
    Sleep(300);
    printf("\t\t\t\t\t  Zero(0) For Exit\n\n");
    scanf("%d",&R);
    if(R==1)
    {
        winner();
    }
    if(R==2)
    {
        main_loges();
    }
    if((R!=1) || (R!=2))
    {
        exi();
    }
}

void getpass()
{
    i=0;
    t_password[32]='0';
    t_password[0]=getch();
    while(t_password[i]!='\r')

    {

        if(t_password[i]=='\b')

        {

            i--;

            printf("\b");

            printf(" ");

            printf("\b");

            t_password[i]=getch();

        }

        else

        {

            printf("*");

            i++;

            t_password[i]=getch();

        }

    }
    t_password[i]='\0';
}
void exi()

{
    system("cls");

    printf("\n\n\n");
    printf("\t\t\22- - - - - - - - - - @ YOU HAVE GIVE YOUR VOTE SUCCESSFULLY @ - - - - - - - - - - \22\n\n\n");
    Sleep(500);
    printf("\t\t\t\t\22    * * * * * ~~~ THANK YOU ~~~ * * * * *\22\n\n\n");
    Sleep(500);
}
