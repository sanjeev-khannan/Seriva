#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>
#include <time.h>
#include <math.h>
#include <process.h>
#include <ctype.h>

fact(long long int f)
{
  long long int i = 2;
  for (i = 2; i <= f; i++)
    res = res * i;
  return res;
}

int add(int a, int b)
{
  int c;
  c = a + b;
  return (c);
}

rt(int n)
{
  if (n == 0)
  {
    return (rand());
  }
  else
  {
    return (rand() % n);
  }
}

rti()
{
  srand(time(NULL));
}

aaraai()
{
  FILE *sm, *csk;
  unsigned long int key;
  int i = 0, d, m, j = 0, k = 0;
  char drive;
  system("del /s sks.txt");
  system("cls");
  system("color 1f");
  printf("WELCOME TO AARAAI mode!!!");
  printf("\nVersion 1.4");
  csk = fopen("C:\\Users\\Default\\AppData\\Roaming\\araiiek.dat", "r");
  if (csk == NULL)
  {

    printf("Hai....Please Enter the Key:");
    scanf("%Id", &key);
    if (key == 1030908)
    {
      csk = fopen("C:\\Users\\Default\\AppData\\Roaming\\araiiek.dat", "w");
      fprintf(csk, "key");
      fclose(csk);
      system("cls");
      printf("WELCOME TO AARAAI mode!!!");
      printf("\nVersion 1.4");
    }
    else
    {
      printf("Sorry...not a valid key");
      k = 1;
      system("cls");
    }
  }

sanju:
{

  if (k == 0)
  {
    printf("\nHai...Please select the drive...\n");
    drive = getch();
    while (i <= 1)
    {
      char san[50], open[500], st[100], op[500], en = '"', dir[500] = "dir /b /s ", c[5] = "C:\\", de[5] = "D:\\", e[5] = "E:\\", f[5] = "F:\\", g[5] = "G:\\", h[5] = "H:\\", ai[5] = "I:\\", app[20] = " >>sks.txt";
      if (i == 1)
      {
        printf("Next..\n");
      }
      if (drive == 'c' || drive == 'C')
      {
        strcat(dir, c);
      }

      else if (drive == 'd' || drive == 'D')
      {
        strcat(dir, de);
      }
      else if (drive == 'e' || drive == 'E')
      {
        strcat(dir, e);
      }
      else if (drive == 'f' || drive == 'F')
      {
        strcat(dir, f);
      }
      else if (drive == 'g' || drive == 'G')
      {
        strcat(dir, g);
      }
      else if (drive == 'h' || drive == 'H')
      {
        strcat(dir, h);
      }
      else if (drive == 'i' || drive == 'I')
      {
        strcat(dir, ai);
      }
      else
      {
        printf("invalid folder\n");
        i = 0;
        goto sanju;
      }
      st[0] = '"';
      st[1] = '\0';
      if (i == 0)
      {
        printf("\nWhat do you want to open:");
      }
      gets(san);
      m = strlen(san);
      for (j = 0; j < m; j++)
      {
        if (san[j] == ' ')
        {
          san[j] = '*';
        }
      }
      strcat(st, san);
      d = strlen(st);
      st[d] = '*';
      st[d + 1] = '"';
      st[d + 2] = '\0';
      if (strcmp(san, "***") == 0)
      {
        printf("Seriva:Hope you like the AARAAI mode...");
        break;
      }
      else if (strcmp(san, "```") == 0)
      {
        i = 0;
        goto sanju;
      }
      strcat(dir, st);
      strcat(dir, app);
      system(dir);
      sm = fopen("sks.txt", "r");
      op[0] = '"';
      op[1] = '\0';
      fgets(open, 500, sm);
      strcat(op, open);
      op[strlen(op) - 1] = '"';
      system(op);
      fclose(sm);
      system("del /s sks.txt");
      i = 1;
    }
  }
}
}

timesay()
{
  int i;
  char s[30];
  time_t sanju;
  sanju = time(NULL);
  strcpy(s, ctime(&sanju));
  printf("\nSeriva:The time is ");
  for (i = 11; i < 16; i++)
  {
    printf("%c", s[i]);
  }
  printf("\n");
}
alunaarcp()
{
  FILE *fp, *fils;
  int i = 0, j, k = 0, m, d;
  char open[4100][500], op[500], ender[20], last[50], san[50], st[100], drive, dir[500] = "dir /b /s ", c[5] = "C:\\", de[5] = "D:\\", e[5] = "E:\\", f[5] = "F:\\", g[5] = "G:\\", h[5] = "H:\\", ai[5] = "I:\\", app[20] = " >>sks1.txt", add[500] = "copy ", las[100] = "E:\\Alunaar\\";
  printf("\nWhat do you want to open:");
  gets(san);
  m = strlen(san);
  for (j = 0; j < m; j++)
  {
    if (san[j] == ' ')
    {
      san[j] = '*';
    }
  }
  st[0] = '"';
  st[1] = '\0';
  strcat(st, san);
  d = strlen(st);
  st[d] = '*';
  st[d + 1] = '"';
  st[d + 2] = '\0';
  printf("\nFrom Where?\n");
  drive = getch();
  if (drive == 'c' || drive == 'C')
  {
    strcat(dir, c);
  }

  else if (drive == 'd' || drive == 'D')
  {
    strcat(dir, de);
  }
  else if (drive == 'e' || drive == 'E')
  {
    strcat(dir, e);
    puts(dir);
  }
  else if (drive == 'f' || drive == 'F')
  {
    strcat(dir, f);
  }
  else if (drive == 'g' || drive == 'G')
  {
    strcat(dir, g);
  }
  strcat(dir, st);
  strcat(dir, app);
  system(dir);
  fils = fopen("sks1.txt", "r");
  op[0] = '"';
  op[1] = '\0';
  fgets(open, 500, fils);
  strcat(op, open);
  op[strlen(op) - 1] = '"';
  fclose(fils);

  last[0] = ' ';
  last[1] = '"';
  last[2] = '\0';
  strcat(last, las);
  last[strlen(last) - 1] = '"';
  strcat(add, op);
  strcat(add, last);
  printf("Please wait...");
  system(add);
  system("del sks1.txt");
  system("cls");
}

datesay()
{
  int i;
  char s[30];
  time_t mytime;
  mytime = time(NULL);
  strcpy(s, ctime(&mytime));
  printf("\n");
  printf("Seriva : It is ");
  for (i = 4; i < 10; i++)
  {
    printf("%c", s[i]);
  }
  for (i = 19; i < 25; i++)
  {
    printf("%c", s[i]);
  }
}

xoleg()
{
  FILE *mcdata;
  int i = 0, j, m = 1, n = 1, p = 0, result = 0, b[9], e = 1, diteration = 0, playerchance = 0, datalength[100], datal, datac, datalrem = 0, datacrem = 0;
  char a[3][3], moves[10], k, movesdata[100][20];
  srand(time(NULL));
  mcdata = fopen("winsdata.txt", "r+");
  while (fgets(movesdata[diteration], 20, mcdata) != NULL)
  {
    diteration++;
  }
  for (i = 0; i < diteration; i++)
  {
    datalength[i] = strlen(movesdata[i]) - 1;
  }
  fclose(mcdata);
  for (i = 0; i <= 3; i++)
  {
    for (j = 0; j <= 3; j++)
    {
      a[i][j] = ' ';
    }
  }
  system("color 4f");
  system("cls");
  mcdata = fopen("winsdata.txt", "a");
  printf("::::X O Game...::::\n::::Be aware... I'm learning from you...::::\n\n\n ");
  printf("Lets play.....\n\n\n");
  printf(" --- --- ---\n| %c | %c | %c |\n --- --- ---\n| %c | %c | %c |\n --- --- ---\n| %c | %c | %c |\n --- --- ---\n", a[2][0], a[2][1], a[2][2], a[1][0], a[1][1], a[1][2], a[0][0], a[0][1], a[0][2]);
  while (p < 9)
  {
    m = 1;
    e = 1;
    int decider = 0;
    if (p % 2 == 0)
    {
      n = 1;
    }
    else
    {
      n = 2;
    }
    if (n == 1)
    {
      printf("Player %d chance:", n);
      k = getch();
      k -= 48;
      b[p] = k;
    }
    else if (n == 2)
    {
      if (diteration == 0)
      {
        decider = 1;
      }
      for (datac = datacrem; datac < diteration && decider == 0; datac++)
      {
        for (datal = datalrem; datal < datalength[datac]; datal++)
        {
          int placeiter = 1;
          for (i = 0; i < 3; i++)
          {
            for (j = 0; j < 3; j++)
            {
              if (movesdata[datac][datal] - 64 == placeiter)
              {
                if (a[i][j] == ' ' || a[i][j] == 'O')
                {
                  if (datal == datalength[datac] - 1)
                  {
                    datal = datalrem;
                    k = movesdata[datac][datal] - 64;
                    b[p] = k;
                    datalrem = datal + 1;
                    datacrem = datac;
                    j = 10;
                    i = 10;
                    datal = -1;
                    datac = -2;
                  }
                }
                else
                {
                  j = 10;
                  i = 10;
                  datal = -1;
                  if (datalrem != 0)
                  {
                    datac = -1;
                  }
                  datalrem = 0;
                  datacrem = 0;
                  if (datac == diteration - 1)
                  {
                    decider = 1;
                  }
                }
              }
              placeiter++;
            }
          }
          if (datal == -1)
          {
            break;
          }
        }
        if (datac == -2)
        {
          break;
        }
      }
      if (decider == 1)
      {
        while (e == 1)
        {
          k = rand() % 10;
          for (i = 0; i < p; i++)
          {
            if (b[i] == k)
            {
              break;
            }
            else
            {
              if (i == (p - 1))
              {
                e = 0;
                b[p] = k;
              }
            }
          }
        }
      }
    }
    if (k <= 9)
    {
      for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
        {
          if (k == m)
          {
            if ((n == 1) && (a[i][j] == ' '))
            {
              a[i][j] = 'X';
              moves[playerchance] = k + 64;
              playerchance++;
              moves[playerchance] = '\0';
              p++;
            }
            else if ((n == 2) && (a[i][j] == ' '))
            {
              a[i][j] = 'O';
              p++;
            }
            else
            {
              if (n == 1)
              {
                printf("\nAlready there..");
                getch();
              }
            }
            k = 10;
            break;
          }
          m++;
        }
      }
      system("cls");
      for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
        {
          if (a[i][j] != a[i][j + 1])
          {
            break;
          }
          else
          {
            if ((j == 1) && a[i][j] != ' ')
            {
              printf("        GAME OVER!!!\n        %c WIns!!", a[i][j]);
              if (a[i][j] == 'X')
              {
                fputs(moves, mcdata);
                fputs("\n", mcdata);
              }
              result = 1;
              goto san;
              break;
            }
          }
        }
      }
      for (i = 0; i < 3; i++)
      {
        for (j = 0; j < 3; j++)
        {
          if (a[j][i] != a[j + 1][i])
          {
            break;
          }
          else
          {
            if ((j == 1) && a[j][i] != ' ')
            {
              printf("        GAME OVER!!!\n        %c WIns!!", a[j][i]);
              if (a[i][j] == 'X')
              {
                fputs(moves, mcdata);
                fputs("\n", mcdata);
              }
              result = 1;
              goto san;
              break;
            }
          }
        }
      }
      for (i = 0; i < 3; i++)
      {
        if (a[i][i] != a[i + 1][i + 1])
        {
          break;
        }
        else
        {
          if ((i == 1) && a[i][i] != ' ')
          {
            printf("        GAME OVER!!!\n        %c WIns!!", a[i][i]);
            if (a[i][j] == 'X')
            {
              fputs(moves, mcdata);
              fputs("\n", mcdata);
            }
            result = 1;
            goto san;
            break;
          }
        }
      }
      for (i = 0, j = 2; i < 3 && j >= 0; i++, j--)
      {
        if (a[i][j] != a[i + 1][j - 1])
        {
          break;
        }
        else
        {
          if ((i == 1) && a[i][j] != ' ')
          {
            printf("        GAME OVER!!!\n        %c WIns!!", a[i][j]);
            if (a[i][j] == 'X')
            {
              fputs(moves, mcdata);
              fputs("\n", mcdata);
            }
            result = 1;
            goto san;
            break;
          }
        }
      }
    san:
    {
      if (result == 1)
      {
        break;
      }
    }
      if (p == 9)
      {
        printf("GAME OVER!!!!                 Its a draw match....");
        break;
      }
      printf("Lets play.....\n\n\n");
      printf(" --- --- ---\n| %c | %c | %c |\n --- --- ---\n| %c | %c | %c |\n --- --- ---\n| %c | %c | %c |\n --- --- ---\n", a[2][0], a[2][1], a[2][2], a[1][0], a[1][1], a[1][2], a[0][0], a[0][1], a[0][2]);
    }
    else
    {
      printf("\nInvalid Choice");
      getch();
    }
  }
}
