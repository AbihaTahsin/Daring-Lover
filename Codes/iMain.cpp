# include "iGraphics.h"
#include "myVariables.h"
#include "myLoadPicture.h"
#include "myDialougeScene.h"
#include "myCharacterMove.h"
#include "stages.h"
#include "characterStruct.h"
#include "scores.h"
#include "StageFind.h"
#include "MenuPage.h"
#include "StageFight.h"

//main character function
void character()//called from iDraw
{
	if(hero1==1)//front walk images
	{
		iShowImage(Hero.charX,Hero.charY,Hero.charW,Hero.charL,shagorWalkFront[i]);
	}
	if(hero3==1)//backwalk images
	{
		iShowImage(Hero.charX,Hero.charY,Hero.charW,Hero.charL,shagorBackwalk[j]);
	}
	if(hero2==1)//stairs up down images
	{
		iShowImage(Hero.charX,Hero.charY,(Hero.charW-20),Hero.charL,shagorStairsDown[n]);
	}
	if(hero4==1)//jump images
	{
		iShowImage(Hero.charX,Hero.charY,Hero.charW,Hero.charL,shagorJump[1]);
	}
	if(hero5==1)//kneel down images
		iShowImage(Hero.charX,Hero.charY,50,60,HeroKneelPic);
	if(hero6==1)//kneel down images
		iShowImage(Hero.charX,Hero.charY,Hero.charW,Hero.charL,shagorJumpBack);
}

//stage 1 function

	void stage1()
{
	if(book1==1)
	{
		if(movie1==0)
		{
			iShowImage(0,0,screenX,screenY,StageBg[1]);
			iShowImage(Golapi.charX,Golapi.charY,40,75,heroinPic);
			if(BookColEnd==0)
			{
				iSetColor(255,255,255);
		        iText(580, 15, "Meet Golapi", GLUT_BITMAP_HELVETICA_12);
			}
			else
			{
				iSetColor(255,255,255);
		        iText(550, 15, "Collect All The Books", GLUT_BITMAP_HELVETICA_12);
			}
		}
	BookCollision();
	if(movie1==1)
		iShowImage(0,0,screenX,screenY,BookScene[y]);
	obstacles2();
	obstacles1();
	}
	if(book12==1)
	{
		iShowImage(0,0,screenX,screenY,StageBg[2]);
	    obstacles3();
		obstacles1();
		iShowImage(170,25,40,75,heroinPic);
		book2=1;
		if(BookEnd==1)
		{
			iShowImage(220,80,30,40,love);
			iSetColor(255,255,255);
		    iText(550, 15, "Press Enter To Continue", GLUT_BITMAP_HELVETICA_12);
		}
		else
		{
			iSetColor(255,255,255);
		    iText(550, 15, "Collect All The Books", GLUT_BITMAP_HELVETICA_12);
		}
	}
	
}
void climax()
{
	if(ClimaxFlag==1)
	{
		fnd3=0;
		iShowImage(0,0,screenX,screenY,Climax[ClimaxCount]);
		iSetColor(255,255,255);
		iText(580, 30, "Press C To Continue", GLUT_BITMAP_HELVETICA_18);
	}
}

//function for dialouge session with father
void dia()
{
	if(dia1==1)//flag opens when stage 1 is completed
	{
		book2=0;
		iSetColor(0,0,0);
		iFilledRectangle(0,0,screenX,screenY);//for the border in both sides
		iShowImage(150,0,1000,screenY,Dialouge[l]);//scenes for dialogue session
		iSetColor(255,255,255);
		iText(550, 50, "Press C To Continue", GLUT_BITMAP_HELVETICA_18); 
	}
}

void ShagorDead()
{
	hero1=0;
	hero3=0;
	hero4=0;
	iShowImage((Hero.charX-Hero.charL),Hero.charY,Hero.charL,Hero.charW-30,dead[deadCount]);
}

void lifeBar()
{
	if(lifeOpen==1)
	{
		iShowImage(40,560,220,80,life[lifeCount]);
		_itoa(point, pointSTR , 10);
		iSetColor(0,0,0);
		iText(85, 570, pointSTR , GLUT_BITMAP_TIMES_ROMAN_24); 
	}
}

void gameOver()
{
	if(GameOverFlag==1)
	{
	    iShowImage(0,0,screenX,screenY,overLetter[overLetterCount]);
		if(EnterNameFlag==1)
		{
			iShowImage(0,0,screenX,screenY,EnterNamePic);
			if(input==0)
			{
				iSetColor(140,140,140);
				iFilledRectangle(815,180,350,40);
			}
			if(input==1)
			{
				iSetColor(0,0,0);
				iText(840, 200, name, GLUT_BITMAP_HELVETICA_18); 
			}
		}
	}
}
void EndScene()
{
	if(EndFlag==1)
	{
		iShowImage(0,0,screenX,screenY,Ending[EndCount]);
		if(EnterNameFlag==1)
		{
			iShowImage(0,0,screenX,screenY,EnterNamePic);
			if(input==0)
			{
				iSetColor(140,140,140);
				iFilledRectangle(815,180,350,40);
			}
			if(input==1)
			{
				iSetColor(0,0,0);
				iText(840, 200, name, GLUT_BITMAP_HELVETICA_18); 
			}
		}
	}
}

void iDraw()
{
	//to clear the screen
	iClear();
	//opening scene
	iShowImage(0,0,screenX,screenY,CoverImage[1]);
	iShowImage(1000,60,150,130,Loading[load]);

	menu();
	stage1();
	dia();
	rules();
	characterIntro();
	scoreboard();
	stage2();
	stage3();
	lifeBar();
	character();
	if(ScorePage == 1)
	{
		readHighScore();
		highScoreShow();
	}
	if(collision==1)
	{
		ShagorDead();
	}
	gameOver();
	CollisionBulletCheck();
	CollisionBallCheck();
	climax();
	EndScene();
	CollisionCheck();
	CollisonCheck2();
	StarCollection();
	StageBookEnd();
}


/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	
}
/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
		//to go to character information
		if(MenuPage==1)
		{
		if(mx >= 1030 && mx <= 1180 && my >=100  && my <= 150)//to go to Credits Page
			but[4]=1;
		else if(mx >= 1030 && mx <= 1180 && my >= 175 && my <=225)//to go to Instructions Page
			but[2]=1;
		else if(mx >= 860 && mx <= 1010 && my >=100  && my <= 150)//to go to scoreboard
			but[3]=1;
		else if(mx >= 860 && mx <= 1010 && my >= 175 && my <= 225)//to start playing
			but[1]=1;
		else
		{
			but[1]=0;
			but[2]=0;
			but[3]=0;
			but[4]=0;
		}
		}
}


/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	printf("%d %d\n",mx,my);
	//to switch between pages from menu and the stages
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(MenuPage==1)
		{
		if(mx >= 1030 && mx <= 1180 && my >=100  && my <= 150)//to go to Credits Page
			IntroPage = 1;
		if(mx >= 1030 && mx <= 1180 && my >= 175 && my <=225)//to go to Instructions Page
			RulePage = 1;
		if(mx >= 860 && mx <= 1010 && my >=100  && my <= 150)//to go to scoreboard
			ScorePage = 1;
		if(mx >= 860 && mx <= 1010 && my >= 175 && my <= 225)//to start playing
		{
			book1=1;
			lifeOpen=1;
			MenuPage=0;
			Hero.charX=250;
			Hero.charY=500;
			Hero.charW=50;
			Hero.charL=80;
			Golapi.charX=1030;
			Golapi.charY=500;
			hero1=1;
		}
		}
		// to go back to menu page 
		  if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		  {
			  if(mx >= 35 && mx <= 72 && my >= 625 && my <= 635)
			  {
				  MenuPage=1;
				  RulePage=0;
				  IntroPage=0;
				  ScorePage=0;
			  }
		  }
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)//to activate the name input box
	{
		if(GameOverFlag==1 || EndFlag==1)
		{
		//Enter Name when game over
		if(mx >= 815 && mx <= 1165 && my >= 180 && my <= 220 && input == 0)
		{
			input = 1;
		}
		}
	}
	if(input == 1)// to enter okay button and appending player's name and then exit
	{
        if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
			if(mx >= 960 && mx <= 1020 && my >= 130 && my <= 170 )
		{
			FILE *fp=fopen("scoreBoard.txt", "a");
			fprintf(fp,"%s\n%d\n",name,point);
			fclose(fp);
			exit(0);
		}	
	}
}

void iKeyboard(unsigned char key)
{
	if(book12==1)//go to dia
	{
		if(key == '\r')
		{
				  lifeOpen=0;
				  book1=0;
				  movie1=0;
				  iResumeTimer(DiaPhase);
				  hero1=0;
				  hero3=0;
				  dia1=1;
				  book12=0;
		}

	}
	if(dia1==1)//go to stage 2
	{
		if(key == 'c')
		{
			lifeOpen=1;
			hero1=1;
			Hero.charX=10;
			Hero.charY=80;
			Hero.charW=60;
			Hero.charL=95;
			Crate.obX=315;
			Crate.obY=150;
			find1=1;
			dia1=0;
		}

	}
	if(ClimaxFlag==1)//go to stage 3
	{
		if(key == 'c')
		{
			fight1=1;
	
			Hero.charW=60; Hero.charX=0, Hero.charY=55,Hero.charL=105;
			  Gunda1.charX=490; Gunda1.charY=55; Gunda1.charW=60; Gunda1.charL=105;
			  Gunda2.charX=1000; Gunda2.charY=55; Gunda2.charW=60; Gunda2.charL=105;
			  Gunda3.charX=760; Gunda3.charY=165; Gunda2.charW=60; Gunda2.charL=105;
			  Gunda4.charX=1220; Gunda4.charY=55; Gunda2.charW=60; Gunda2.charL=105;
			  Bullet1.obX=Gunda1.charX;Bullet1.obY=Gunda1.charY+75;
			  Bullet2.obX=Gunda2.charX;Bullet2.obY=Gunda2.charY+75;
			  Bullet3.obX=Gunda3.charX;Bullet3.obY=Gunda3.charY+75;
			  Bullet4.obX=Gunda4.charX;Bullet4.obY=Gunda4.charY+75;
			  Dipjol.charX=370;Dipjol.charY=380;
			  BulletD.obX=Dipjol.charX+70;BulletD.obY=430;

			  ClimaxFlag=0;
		}

	}
	if(book1==1||book12==1||find1==1 || fnd1==1 || fnd2==1 ||fnd3 ==1||fight1==1)// to jump
	{
		if(key == ' ')
		{
			if(jump==0)
			{
				JumpTemp=Hero.charY;
				jump=1;
				jumpup=1;
				if(hero1==1)
		        {
					hero4=1;
		            hero1=0;
		            hero3=0;
		        }
		        else if(hero3==1)
		        {
			        hero6=1;
			        hero3=0;
			        hero1=0;
		        }
			}
		}
	}
	if(fight1==1)//to kneel down
	{
		if(hero1==1 || hero3==1)
		{
		if(key == 's')
		{
			hero5=1;
			hero1=0;
			hero3=0;
		}
		}
	}
	if(fight1==1)//to shoot lighting ball
	{
		if(hero1==1 || hero3==1)
		{
		if(key == 'd')
		{
			if(BallFlag==0)
			{
			BallFlag=1;
			if(hero1==1)
			{
			Ball.obX=Hero.charX+Hero.charW;//initializing X
			Ball.obY=Hero.charY+60;//initializing Y
			BallTempX=Ball.obX;
			}
			else if(hero3==1)
			{
				Ball.obX=Hero.charX;//initializing X
			    Ball.obY=Hero.charY+60;//initializing Y
			}
			}
		}
		}
	}
	if(input==1)//to type Player's name
		{
			name[len] = key;
			len++;
		}

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	  //to move character forward
	  if(hero1==1 || hero3==1 || hero2==1)
	  {
		  if(key == GLUT_KEY_RIGHT)
		  {
			  if(find1==1)
			  StageFindWalk1();//function in STAGEFIND header
			  else if(fnd1==1)
				  StageFindWalk2();//function in STAGEFIND header
			  else if(fnd2==1)
				  StageFindWalk3();//function in STAGEFIND header
			  else if(fnd3==1)
				  StageFindWalk4();//function in STAGEFIND header
			  else if(fight1==1)
				  WalkFightR();//function for walk in fight stage. declared in StageFight header
			  else
				  WalkRight();//Function in CharacterMove header
		  }
		  if(key == GLUT_KEY_LEFT)// to move character backward
		  {
			  if(find1==1)
			 StageFindBWalk1();//function in STAGEFIND header
			  else if(fnd1==1)
				  StageFindBWalk2();//function in STAGEFIND header
			  else if(fnd2==1)
				  StageFindBWalk3();//function in STAGEFIND header
			  else if(fnd3==1)
				  StageFindBWalk4();//function in STAGEFIND header
			  else if(fight1==1)
				  WalkFightL();//function for walk in fight stage. declared in StageFight header
			  else
				  WalkLeft();//Function in CharacterMove header
		  }
	  }
	  if(hero4==1 || hero6==1)//forward and backward while jump
	  {
		  if(key == GLUT_KEY_RIGHT)
		  {
			  Hero.charX += 15;
		  }
		  if(key == GLUT_KEY_LEFT)
		  {
			  Hero.charX -= 15;
		  }
	  }
	  //to move character up and down with staircase
	 if(book1==1)
	  {
		  if(key == GLUT_KEY_UP)
			  StairUp();
		  if(key == GLUT_KEY_DOWN)
			  StairDown();
	  }
	 if(book12==1)
	  {
	  //First Staircase
	if((Hero.charX+45)>1105 && (Hero.charX+45)<1150 &&  Hero.charY<=505 && Hero.charY>=347 )
	  {
		  if(key == GLUT_KEY_UP)
		  {
			 StairsUp();
			 if(Hero.charY>505)
				 Hero.charY=505;
		  }
		  if(key == GLUT_KEY_DOWN)
		  {
			 StairsDown();
			 if(Hero.charY<347)
				 Hero.charY=347;
		  }
	  }
	//2nd Staircase
	   if(((Hero.charX+45)>100 && (Hero.charX+45)<145) && (Hero.charY<=347 && Hero.charY>=185))
	  {
		  if(key == GLUT_KEY_UP)
		  {
			  StairsUp();
			  if(Hero.charY>347)
				  Hero.charY=347;
		  }
		  if(key == GLUT_KEY_DOWN)
		  {
			  StairsDown();
			  if(Hero.charY<185)
				  Hero.charY=185;
		  }
		   
	  }
	   //3rd staircase
		  if(((Hero.charX+45)>1105 && (Hero.charX+45)<1150) && (Hero.charY<=185 && Hero.charY>=25))
	  {
		  if(key == GLUT_KEY_UP)
			  {
				  StairsUp();
				  if(Hero.charY>185)
					  Hero.charY=185;
			  }
		  if(key == GLUT_KEY_DOWN)
		  {
			  StairsDown();
			  if(Hero.charY<25)
				  Hero.charY=25;
		  }
		   
	  }
	  }
		  if(key == GLUT_KEY_UP)
			  StairUpFind();
		  if(key == GLUT_KEY_DOWN)
			  StairDownFind();
	 if(fight1==1)
	 {
		  if(((Hero.charX+45)>1105 && (Hero.charX+45)<1150) && (Hero.charY<=385 && Hero.charY>=55))
	  {
		  if(key == GLUT_KEY_UP)
			  {
				  StairsUp();
				  if(Hero.charY>385)
					  Hero.charY=385;
			  }
		  if(key == GLUT_KEY_DOWN)
		  {
			  StairsDown();
			  if(Hero.charY<55)
				  Hero.charY=55;
		  }
		   
	  }
	 }
	  //to change character's position in stage 2  
	  FindStageChange();
	  
	  
}

int main()
{
	iSetTimer(110,GundaMove);
	iSetTimer(30,JumpChange);
	DiaPhase = iSetTimer(300,MovieMaker);
	iSetTimer(500,LoadCover);
	//to initialize screen size
	iInitialize(screenX,screenY, "Daring Lover");
	
	loadPicture();
	readHighScore();

	iStart(); // it will start drawing

	return 0;
}