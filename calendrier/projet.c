#include<stdio.h>
#include<conio.h>
#include<myconio.h>
#include<string.h>
int premierjourdumoi(int j,int m,int a)
{
    int m1,a1,ns,as,f;
if( m>=3)
{
    m1=m-2;
    a1=a;
}
else
{
    m1=m+10;
    a1=a-1;
}
    ns=a1/100;;
    as=a1%100;
f=j+as+(as/4)-2*ns+(ns/4)+((26*m1-2)/10);
f=f%7;
if (f<0)
    f=f+7;
return f;
}
int bissectil(int a,int b)
{
    if(a%4==0 && a%100!=0 || a%400==0)
   {
    b=1;
   }
    else
    {
    b=0;
    }
    return b;
}
void carre()
{
    int i;
      for(i=0;i<1;i++)
    {
system("color 1A");Sleep(300);
system("color 2B");Sleep(300);
system("color 3C");Sleep(300);
system("color 4D");Sleep(300);
system("color 5E");Sleep(300);
system("color 6F");Sleep(300);
system("color 4A");Sleep(300);
    }

     clrscr();
  gotoxy(15,1)  ;
  printf("%c\n",201);
  gotoxy(79,1)  ;
  printf("%c\n",187);
  for (i=0;i<63;i++)
  {
  gotoxy(16+i,1);
  printf("%c\n",205);
  }
  gotoxy(15,2);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,3);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,4);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,5);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,6);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,7);
printf("%c                                                               %c\n",186,186);
gotoxy(15,8);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,9);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,10);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,11);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,12);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,13);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,14);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,15);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,16);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,17);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,18);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,19);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,20);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,21);
printf("%c                                                               %c\n",186,186);
gotoxy(15,22);
printf("%c\n",200);
gotoxy(79,22);
printf("%c\n",188);
for (i=1;i<64;i++)
{
gotoxy(15+i,22);
printf("%c\n",205);
}
gotoxy(40,10);
 printf("CHARGEMENT EN COURS \n");
 gotoxy(40,10);
 gotoxy(55,15);
 for (i=0;i<26;i++)
 {
 gotoxy(35+i,14);
 printf("%c",3);
 }
for (i=0;i<26;i++)
 {
 gotoxy(35+i,14);
 printf("%c",1) ;
Sleep(200);
 }

  for(i=0;i<3;i++)
  {
  clrscr();Sleep(500);
  gotoxy(1,6);
 printf("   #######   ###                                                                          \n");
 printf("   ###  ####                                                                              \n");
 printf("   ###  ###  ###    #####   #######   ####  ####   #####   #######   ###   ###   #####    \n");
 printf("   ###  #### #### ######### #########  ###  ###  ########  ######### ###   #### #######   \n");
 printf("   ########  ###  ###   ### ####  ###  ###  ###  ###   ### ###   ### ###   ###  ###   ### \n");
 printf("   ###  #### ###  ######### ####  ###   ######   ######### ###   ### ###   ###  ######### \n");
 printf("   ###   ### ###  ###       ####  ###   #####    ###       ###   ### ###   ###  ###       \n");
 printf("   ########  #### ######### ####  ###    ####    ########  ###   ###  ########  ########  \n");
 printf("   #######   ###     ####   ####  ###    ####      ####    ###   ###    ######    ####    \n");
 Sleep(500);
 clrscr();
  }
 clrscr();
}

main()
{
    int i,r,j,a,m,s1,s2,s3,s,t,tt,choix,x=0,max1,mat[100][100],tab1[10],tab2[10],tab3[10];
    char tab1c[100],rep,touche;

 gotoxy(25,7);printf("Pragramme du cour d'Analyse Numerique  ");
 for(i=0;i<3;i++)
  {
           gotoxy(25,10);
printf ("El Hadji    ");Sleep(700);
printf ("Bandiougou    ");Sleep(500);
printf ("KAMISSOKHO    ");Sleep(5000);
for(i=0;i<3;i++)
  {
  clrscr();Sleep(500);
  }
  }
clrscr();
    system("color 5C");
 clrscr();

carre();clrscr();
choix=1;
      for(i=0;i<1;i++)
    {
     system("color 1A");Sleep(300);
    system("color 2B");Sleep(300);
system("color 3C");Sleep(300);
system("color 4D");Sleep(300);
system("color 5E");Sleep(300);
system("color 6F");Sleep(300);
system("color 4A");Sleep(300);
    }

     clrscr();
  gotoxy(15,1)  ;
  printf("%c\n",201);
  gotoxy(79,1)  ;
  printf("%c\n",187);
  for (i=0;i<63;i++)
  {
  gotoxy(16+i,1);
  printf("%c\n",205);
  }
  gotoxy(15,2);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,3);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,4);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,5);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,6);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,7);
printf("%c                                                               %c\n",186,186);
gotoxy(15,8);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,9);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,10);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,11);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,12);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,13);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,14);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,15);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,16);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,17);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,18);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,19);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,20);
printf("%c                                                               %c\n",186,186);
      gotoxy(15,21);
printf("%c                                                               %c\n",186,186);
gotoxy(15,22);
printf("%c\n",200);
gotoxy(79,22);
printf("%c\n",188);
for (i=1;i<64;i++)
{
gotoxy(15+i,22);
printf("%c\n",205);
}

gotoxy(22,2); printf("@@     @@   @@@@@@@  @@      @  @      @ \n");
gotoxy(22,3); printf("@@@    @@   @        @ @@    @  @      @ \n");
 gotoxy(22,4);printf("@ @   @ @   @@@@@@@  @  @@   @  @      @ \n");
 gotoxy(22,5);printf("@ @@  @ @   @        @   @@  @  @      @ \n");
 gotoxy(22,6);printf("@  @ @  @   @        @    @@ @  @      @ \n");
gotoxy(22,7); printf("@  @@@  @   @@@@@@@  @      @@   @@@@@@  \n");
printf(" \n\n\n");
gotoxy(22,10);  printf ("\n");
gotoxy(22,11);  printf ("Utilisez les touches de defilement");
gotoxy(22,12);  printf("       pour changer de rubrique\n");
gotoxy(22,13);  printf ("\n");
  while (touche!=13) //ENTER
  {

    gotoxy(25,15);
    if (choix==1) textcolor(13); //JAUNE
    else textcolor(15); //BLANC
    gotoxy(25,16);printf("Calendrier Annuel\n");
    if (choix==2) textcolor(14); //JAUNE
    else textcolor(15); //BLANC
    gotoxy(25,17);printf("Calendrier Mensuel\n");
    if (choix==3) textcolor(11); //JAUNE
    else textcolor(15); //BLANC
    gotoxy(25,18);printf("Quitter\n");
    touche=getch();
    if (touche==80) //BAS
    {
      choix++;
      if (choix==5) choix=1;
    }
    if (touche==72) //HAUT
    {
      choix--;
      if (choix==0) choix=4;
    }
  }
switch  (choix)
{
case 1:
    {
clrscr();
do
    {

    printf("saisir l'annee\n");
    scanf("%d",&a);
    }while(a<=0);

for(m=1;m<13;m++)

{
    r=premierjourdumoi(1,m,a);
    t=bissectil(a,tt);
   switch(m)
{
    case 1:printf("\t\n                        JANVIER\n\n");break;
    case 2:printf("\t\n                        FEVRIER\n\n");break;
    case 3:printf("\t\n                        MARS\n\n");break;
    case 4:printf("\t\n                        AVRIL\n\n");break;
    case 5:printf("\t\n                        MAI\n\n");break;
    case 6:printf("\t\n                        JUIN\n\n");break;
    case 7:printf("\t\n                        JUILLET\n\n");break;
    case 8:printf("\t\n                        AOUT\n\n");break;
    case 9:printf("\t\n                        SEPTEMBRE\n\n");break;
    case 10:printf("\t\n                       OCTOBRE\n\n");break;
    case 11:printf("\t\n                       NOVEMBRE\n\n");break;
    case 12:printf("\t\n                       DECEMBRE\n\n");break;
  }
   if(m==2)
            {
               if(t==1)
               max1=29;
               else
                max1=28;
            }

      else if( m==4 || m==6 || m==9 || m==11)
            max1=30;
    else if(m==1|| m==3 || m==5 || m==7 || m==8 || m==10|| m==12)
            max1=31;



    switch(r)
    {
    case 1:
        {   s1=1;
            for(i=0;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<3;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<7;i++)
    printf("%d\t",tab1[i]);
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<3;i++)
     {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
        }break;
        }
    case 2:
        {   s1=1;
        tab1c[0]=' ';
            for(i=1;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<4;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<1;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=1;i<7;i++)
    printf("%d\t",tab1[i]);
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<4;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
        }
        }break;
    case 3:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
            for(i=2;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<5;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<2;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=2;i<7;i++)
    {
    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<5;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
        }
        }break;
        case 4:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
            for(i=3;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<6;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<3;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=3;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<6;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
    }}break;
       case 5:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
        tab1c[3]=' ';
            for(i=4;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<7;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<4;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=4;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<7;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
    }}break;
       case 6:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
        tab1c[3]=' ';
        tab1c[4]=' ';
            for(i=5;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<7;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            s3=s2;
             for(i=0;i<1;i++)
            {
             tab3[i]=s3;
            s3++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<5;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=5;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<7;i++)
     {

if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);

    }
    printf("\n");
    if(m==2)
            break;
        else
     for(i=0;i<1;i++)
    {

         if(tab3[i]==max1+1)
            break;
    printf("%d\t",tab3[i]);
        }
    }break;

       case 0:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
        tab1c[3]=' ';
        tab1c[4]=' ';
        tab1c[5]=' ';
            for(i=6;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<7;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            s3=s2;
            for(i=0;i<2;i++)
            {
             tab3[i]=s3;
            s3++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<6;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=6;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<7;i++)
        {

         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
    }
        printf("\n");
       if(m==2)
            break;
        else
     for(i=0;i<2;i++)
    {

         if(tab3[i]==max1+1)
            break;
    printf("%d\t",tab3[i]);
        }break;
    }

    }
}
    printf("\n");
     do
   {
   printf("tapez 'o' pour passer au menu  ou  'n' pour quitter\n");
  scanf("%s",&rep);
   }while(rep!='n' && rep !='N' && rep!='o' && rep !='O');
   if(rep=='o' || rep=='O')
   {

    clrscr();
    main();
   }
     else if(rep=='n' || rep=='N')
    exit;

    }break;
case 2:
    {
       clrscr();
       do
    {
    printf("saisir le mois\n");
    scanf("%d",&m);
    }while(m<1 || m>12);

do
    {

    printf("saisir l'annee\n");
    scanf("%d",&a);
    }while(a<=0 );

clrscr();

    r=premierjourdumoi(1,m,a);
    t=bissectil(a,tt);
    switch(m)
{
    case 1:printf("\t\n                        JANVIER\n\n");break;
    case 2:printf("\t\n                        FEVRIER\n\n");break;
    case 3:printf("\t\n                        MARS\n\n");break;
    case 4:printf("\t\n                        AVRIL\n\n");break;
    case 5:printf("\t\n                        MAI\n\n");break;
    case 6:printf("\t\n                        JUIN\n\n");break;
    case 7:printf("\t\n                        JUILLET\n\n");break;
    case 8:printf("\t\n                        AOUT\n\n");break;
    case 9:printf("\t\n                        SEPTEMBRE\n\n");break;
    case 10:printf("\t\n                       OCTOBRE\n\n");break;
    case 11:printf("\t\n                       NOVEMBRE\n\n");break;
    case 12:printf("\t\n                       DECEMBRE\n\n");break;

  }
   if(m==2)
            {
               if(t==1)
               max1=29;
               else
                max1=28;
            }

      else if( m==4 || m==6 || m==9 || m==11)
            max1=30;
    else if(m==1|| m==3 || m==5 || m==7 || m==8 || m==10|| m==12)
            max1=31;



    switch(r)
    {
    case 1:
        {   s1=1;
            for(i=0;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<3;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<7;i++)
    printf("%d\t",tab1[i]);
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<3;i++)
     {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
        }break;
        }
    case 2:
        {   s1=1;
        tab1c[0]=' ';
            for(i=1;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<4;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<1;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=1;i<7;i++)
    printf("%d\t",tab1[i]);
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<4;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
        }
        }break;
    case 3:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
            for(i=2;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<5;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<2;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=2;i<7;i++)
    {
    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<5;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
        }
        }break;
        case 4:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
            for(i=3;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<6;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<3;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=3;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<6;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
    }}break;
       case 5:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
        tab1c[3]=' ';
            for(i=4;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<7;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<4;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=4;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<7;i++)
        {
         if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);
    }}break;
       case 6:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
        tab1c[3]=' ';
        tab1c[4]=' ';
            for(i=5;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<7;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            s3=s2;
             for(i=0;i<1;i++)
            {
             tab3[i]=s3;
            s3++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<5;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=5;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<7;i++)
     {

if(tab2[i]==max1+1)
            break;
    printf("%d\t",tab2[i]);

    }
    printf("\n");
    if(m==2)
            break;
        else
     for(i=0;i<1;i++)
    {

         if(tab3[i]==max1+1)
            break;
    printf("%d\t",tab3[i]);
        }
    }break;

       case 0:

        {   s1=1;
        tab1c[0]=' ';
        tab1c[1]=' ';
        tab1c[2]=' ';
        tab1c[3]=' ';
        tab1c[4]=' ';
        tab1c[5]=' ';
            for(i=6;i<7;i++)
            {
             tab1[i]=s1;
            s1++;
            }
            s=s1;
             for(i=0;i<3;i++)
              for(j=0;j<7;j++)
           {
                 mat[i][j]=s;
                 s++;
            }
            s2=s;
            for(i=0;i<7;i++)
            {
             tab2[i]=s2;
            s2++;
            }
            s3=s2;
            for(i=0;i<2;i++)
            {
             tab3[i]=s3;
            s3++;
            }
            printf("\n");
                printf("\n");
                printf("LUN\t") ;
                printf("MAR\t") ;
                printf("MER\t") ;
                printf("JEU\t") ;
                printf("VEN\t") ;
                printf("SAM\t") ;
                printf("DIM\t") ;
                printf("\n");
    for(i=0;i<6;i++)
    {
    printf("%c\t",tab1c[i]);
    }
    for(i=6;i<7;i++)
    {
        if(tab1[i]==0)
        printf("");

    printf("%d\t",tab1[i]);
    }
    printf("\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<7;j++)
      {
        printf("%d\t",mat[i][j]);
      }

      printf("\n");
     }
     for(i=0;i<7;i++)
        {

         if(tab2[i]==max1+1)
         {
            break;
         }
    printf("%d\t",tab2[i]);
    }
        printf("\n");
        if(m==2)
            break;
        else
     for(i=0;i<2;i++)
    {

         if(tab3[i]==max1+1)
            break;
    printf("%d\t",tab3[i]);
        }break;
    }

    }


printf("\n");
 do
   {
   printf("tapez 'o' pour passer au menu  ou  'n' pour quitter\n");
  scanf("%s",&rep);
   }while(rep!='n' && rep !='N' && rep!='o' && rep !='O');
   if(rep=='o' || rep=='O')
   {
    clrscr();
    main();
   }
     else if(rep='n' || rep=='N')
    exit;
    }
case 3:
    {
        clrscr();
printf("    #######                            ##    #######                       ##\n");
printf("  ##     ###                          ###    ##   ##                       ##\n");
printf("  ##           #######  #######   #######    ##    ## ##    ## #######     ##\n");
printf("  ##    ##### ##    ## ###    ## ##   ###    ########  ##  ##  ##   ###    ##\n");
printf("  ##       ## ##     # ##     ## ##    ##    ##     ##  ## ##  #######      #\n");
printf("   ##     ### ##    ## ###    ## ##   ###    ##     ##   ###   ##            \n");
printf("    #########  #######  #######  ########    ########    ##    #######     ##\n");
printf("                                                        ##                   \n");
printf("                                                      ###                    \n");


}
}
        clrscr();
printf("    #######                            ##    #######                       ##\n");
printf("  ##     ###                          ###    ##   ##                       ##\n");
printf("  ##           #######  #######   #######    ##    ## ##    ## #######     ##\n");
printf("  ##    ##### ##    ## ###    ## ##   ###    ########  ##  ##  ##   ###    ##\n");
printf("  ##       ## ##     # ##     ## ##    ##    ##     ##  ## ##  #######      #\n");
printf("   ##     ### ##    ## ###    ## ##   ###    ##     ##   ###   ##            \n");
printf("    #########  #######  #######  ########    ########    ##    #######     ##\n");
printf("                                                        ##                   \n");
printf("                                                      ###                    \n");

}



