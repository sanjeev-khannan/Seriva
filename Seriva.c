#include <SerivaCore.c>
char user[20];
main()
{
	int i = 1, j = 1, d, check = 0;
	FILE *fp, *sk;
	rti();
	system("color 4e");
	char name[15], txt[6] = ".txt", chat1[20], chat[20][30], pesu[500][30];
	fp = fopen("intro.txt", "r");
	while (fgets(chat[i], 30, fp) != NULL)
	{
		i++;
	}
	fclose(fp);
	sk = fopen("aiwords.txt", "r");
	printf("Seriva: %s", chat[rt(i - 1) + 1]);
	printf("May I know who you are..?\n\nYou:");
	gets(user);
	strcpy(name, user);
	strcat(user, txt);
	fp = fopen(user, "r");
	if (fp == NULL)
	{
		printf("\nSeriva:Sorry %s..I have no details of you..", name);
		getch();
	}
	else
	{
		while (fgets(pesu[j], 30, sk) != NULL)
		{
			pesu[j][strlen(pesu[j]) - 1] = '\0';
			j++;
		}
		fclose(sk);
		printf("\nSeriva:Hloo..%s\n", name);
	sanju:
	{
		system("color 4e");
		char s = 'n';
		check = 0;
		printf("\n");
		printf("You:");
		gets(chat1);
		d = 2;
		while (d < j)
		{
			if (strcmp(pesu[d], chat1) == 0)
			{
				check = (check * 10) + (pesu[d - 1][0] - 48);
				check = (check * 10) + (pesu[d - 1][1] - 48);
				check = (check * 10) + (pesu[d - 1][2] - 48);
				check = (check * 10) + (pesu[d - 1][3] - 48);
				check = (check * 10) + (pesu[d - 1][4] - 48);
				if (check == 0)
				{
					printf("\nSeriva:Its %s\n", (rt(2) == 0) ? "Heads" : "Tails");
					break;
				}
				else if (check == 5)
				{
					system("shutdown /s");
					break;
				}
				else if (check == 1)
				{
					system("shutdown /p");
					break;
				}
				else if (check == 2)
				{
					system("shutdown /r");
					break;
				}
				else if (check == 3)
				{
					system("shutdown /a");
					break;
				}
				else if (check == 4)
				{
					s = 'a';
					break;
				}
				else if (check == 6)
				{
					timesay();
					break;
				}
				else if (check == 8)
				{
					system("notepad");
					break;
				}
				else if (check == 10)
				{
					aaraai();
					system("cls");
					printf("Seriva:Hope you like AARAAI mode..\n\nSeriva:Back to Seriva chat mode....\n");
					break;
				}
				else if (check == 9)
				{
					datesay();
					break;
				}
				else if (check == 14)
				{
					alunaarcp(1);
					break;
				}
				else if (check == 16)
				{
					alunaarcp(2);
					break;
				}
				else if (check == 17)
				{
					aaraaisi();
					break;
				}
				else if (check == 11)
				{
					system("control panel");
					break;
				}
				else if (check == 13)
				{
					xoleg();
					break;
				}
				else if (check == 15)
				{
					printf("\nSeriva :%s", chat[rt(i - 1) + 1]);
					break;
				}
				else if (check == 18)
				{
					printf("\nSeriva :Entered math mode\n\nYou :");
					calculator(name);
					printf("\n");
					break;
				}
			}
			d += 2;
			printf("%s%s%s", (d > j) ? "\nSeriva:I can't get you " : "", (d > j) ? name : "", (d > j) ? "\n" : "");
		}
		if (s != 'a')
		{
			goto sanju;
		}
	}
	}
}
