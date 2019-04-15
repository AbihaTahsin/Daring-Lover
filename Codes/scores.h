#ifndef SCORES_H_INCLUDED
#define SCORES_H_INCLUDED

char UserName[100][100];
int ScoreArray[100];
int ScoreIndex = 0, NameIndex = 0;

void readHighScore()
{
	FILE *fp = fopen("scoreBoard.txt", "r");
	char str[100];
	ScoreIndex = 0, NameIndex = 0;

	if (fp != NULL)
	{
		while (fgets(str, 30, fp) != NULL)
		{
			
			strcpy(UserName[NameIndex++], str);
			fgets(str, 15, fp);
			ScoreArray[ScoreIndex++] = atoi(str);	

		}
	}

	fclose(fp);
}

void sortingHighScore()
{
	int tempScore;
	char tempName[100];

	for (int f = 0; f < ScoreIndex - 1; f++)
	{
		for (int e = 0; e < ScoreIndex - 1; e++)
		{
			if (ScoreArray[e] < ScoreArray[e + 1])
			{
				tempScore = ScoreArray[e];
				ScoreArray[e] = ScoreArray[e + 1];
				ScoreArray[e + 1] = tempScore;
				strcpy(tempName, UserName[e]);
				strcpy(UserName[e], UserName[e + 1]);
				strcpy(UserName[e + 1], tempName);
			}
		}
	}
}

void highScoreShow()
{
	sortingHighScore();
	
	for (int x = 0, y = 365; x < 5; x++, y -= 60)
	{
		char str[100];

		if (ScoreArray[x]>0)
		{
			_itoa(ScoreArray[x], str, 10);
			iSetColor(255, 255, 255);
			//score
			iText(720, y, str, GLUT_BITMAP_HELVETICA_18);
			//name
			iText(200, y, UserName[x], GLUT_BITMAP_HELVETICA_18);
		}
	}
}
#endif // !MYHEADER_H_INCLUDED