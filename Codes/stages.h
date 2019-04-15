#ifndef STAGES_H_INCLUDED
#define STAGES_H_INCLUDED
#include "myVariables.h"
#include "characterStruct.h"
#include "myCharacterMove.h"

void BookCollision()//collision with heroin
{
	if(book1==1)
	{
		if(Hero.charX>1010 && Hero.charY > 495)
		{
			movie1=1;
			hero1=0;
		}
	}
}
void StageBookEnd()
{
	if(book12==1)
		if(Hero.charX<260 && Hero.charY>10 && Hero.charY<70)
		{
			BookEnd=1;
		}
}
void StairUp()
{
	if((Hero.charX+45)>100 && (Hero.charX+45)<145 &&  Hero.charY<=505 && Hero.charY>=355 )//staircase 1
	       {
			 StairsUp();
			 if(Hero.charY>505)
				 Hero.charY=505;
		  }
	if(((Hero.charX+45)>1105 && (Hero.charX+45)<1150) && (Hero.charY<=355 && Hero.charY>=190))//staircase 2
	  {
			  StairsUp();
			  if(Hero.charY>355)
				  Hero.charY=355;
	 }
	 if(((Hero.charX+45)>100 && (Hero.charX+45)<145) && (Hero.charY<=190 && Hero.charY>=25))//staircase 3
	  {
			  {
				  StairsUp();
				  if(Hero.charY>190)
					  Hero.charY=190;
			  }
	}
	 
}
void StairDown()
{
	if((Hero.charX+45)>100 && (Hero.charX+45)<145 &&  Hero.charY<=505 && Hero.charY>=355 )//staircase 1
			  {
			 StairsDown();
			 if(Hero.charY<355)
				 Hero.charY=355;
		  }
	if(((Hero.charX+45)>1105 && (Hero.charX+45)<1150) && (Hero.charY<=355 && Hero.charY>=190))//staircase 2
	  {
			  StairsDown();
			  if(Hero.charY<190)
				  Hero.charY=190;
	 }
	if(((Hero.charX+45)>100 && (Hero.charX+45)<145) && (Hero.charY<=190 && Hero.charY>=25))//staircase 3
	  {
	          StairsDown();
			  if(Hero.charY<25)
				  Hero.charY=25;
	}
	if(((Hero.charX+45)>1107 && Hero.charY<=25) && (((Hero.charX+45)<1135) && (Hero.charY<=25 )))//staircase 4
	 {
		  StairsDown();
			  book1=0;
			 book12=1;
			 Hero.charX=1107;
			Hero.charY=505;
			Hero.charW=50;
			Hero.charL=80;
	 }

}
//funtion for point counting
void BookCollison2(int pt)
{
	if(b[pt]==0)
	{
		b[pt]=1;
		point+=5;
	}
	
}
void BookCollison3(int pt1)
{
	if(bb[pt1]==0)
	{
		bb[pt1]=1;
		point+=5;
	}
}
//stage1 obstacles
void obstacles1()
{
	if(book1==1)
	{
	iShowImage(357,345,55,35,image[4]);
	iShowImage(842,345,55,35,image[4]);
	iShowImage(282,180,55,35,image[4]);
	iShowImage(666,180,55,35,image[4]);
	iShowImage(595,20,55,35,image[4]);
	iShowImage(876,20,55,35,image[4]);
	}
	if(book12==1)
	{
	iShowImage(658,500,55,35,image[4]);
	iShowImage(842,340,55,35,image[4]);
	iShowImage(357,340,55,35,image[4]);
	iShowImage(282,178,55,35,image[4]);
	iShowImage(666,178,55,35,image[4]);
	iShowImage(595,17,55,35,image[4]);
	}
}
//stage1 obstacles2
void obstacles2()
{
	if(m1==1)
	{
		if(b[1]==0)
		iShowImage(450,185,30,20,image[1]);
		if(b[2]==0)
		iShowImage(700,352,30,20,image[2]);
		if(b[3]==0)
		iShowImage(1250,352,30,20,image[3]);
		if(b[4]==0)
		iShowImage(1050,25,30,20,image[1]);
		if(b[5]==0)
		iShowImage(850,185,30,20,image[2]);
		if(b[6]==0)
		iShowImage(200,185,30,20,image[3]);
		if(b[7]==0)
		iShowImage(500,25,30,20,image[1]);
		if(b[8]==0)
		iShowImage(750,25,30,20,image[2]);
		if(b[9]==0)
		iShowImage(1000,185,30,20,image[3]);

		if(book1==1)
		{
			if(((Hero.charX + Hero.charW)>=450 && Hero.charX<=450+30) && ((Hero.charY + Hero.charW )>=185 && Hero.charY<=185+20))
			{
				 BookCollison2(1);
			}
			if(((Hero.charX + Hero.charW)>=700 && Hero.charX<=700+30) && ((Hero.charY + Hero.charW )>=352 && Hero.charY<=352+20))
			{
				 BookCollison2(2);
			}
			if(((Hero.charX + Hero.charW)>=1250 && Hero.charX<=1250+30) && ((Hero.charY + Hero.charW )>=352 && Hero.charY<=352+20))
			{
				 BookCollison2(3);
			}
			if(((Hero.charX + Hero.charW)>=1050 && Hero.charX<=1050+30) && ((Hero.charY + Hero.charW )>=25 && Hero.charY<=25+20))
			{
				 BookCollison2(4);
			}
			if(((Hero.charX + Hero.charW)>=850 && Hero.charX<=850+30) && ((Hero.charY + Hero.charW )>=185 && Hero.charY<=185+20))
			{
				 BookCollison2(5);
			}
			if(((Hero.charX + Hero.charW)>=200 && Hero.charX<=200+30) && ((Hero.charY + Hero.charW )>=185 && Hero.charY<=185+20))
			{
				 BookCollison2(6);
			}
			if(((Hero.charX + Hero.charW)>=500 && Hero.charX<=500+30) && ((Hero.charY + Hero.charW )>=25 && Hero.charY<=25+20))
			{
				 BookCollison2(7);
			}
			if(((Hero.charX + Hero.charW)>=750 && Hero.charX<=750+30) && ((Hero.charY + Hero.charW )>=25 && Hero.charY<=25+20))
			{
				 BookCollison2(8);
			}
			if(((Hero.charX + Hero.charW)>=1000 && Hero.charX<=1000+30) && ((Hero.charY + Hero.charW )>=185 && Hero.charY<=185+20))
			{
				 BookCollison2(9);
			}
		}

	}
}

void obstacles3()
{
	if(m1==1)
	{
		//if(bb[1]==0)
		//iShowImage(400,505,30,20,image[1]);
		if(bb[2]==0)
		iShowImage(700,348,30,20,image[2]);
		if(bb[3]==0)
		iShowImage(1250,348,30,20,image[3]);
		if(bb[4]==0)
		iShowImage(1050,25,30,20,image[1]);
		if(bb[5]==0)
		iShowImage(850,180,30,20,image[2]);
		if(bb[6]==0)
		iShowImage(200,180,30,20,image[3]);
		if(bb[7]==0)
		iShowImage(500,25,30,20,image[1]);
		if(bb[8]==0)
		iShowImage(750,25,30,20,image[2]);
		if(bb[9]==0)
		iShowImage(450,185,30,20,image[3]);
		//if(bb[10]==0)
		//iShowImage(900,505,30,20,image[3]);

		if(book12==1)
		{
			if(((Hero.charX + Hero.charW)>=400 && Hero.charX<=400+30) && ((Hero.charY + Hero.charW )>=505 && Hero.charY<=505+20))
			{
				 BookCollison3(1);
			}
			if(((Hero.charX + Hero.charW)>=700 && Hero.charX<=700+30) && ((Hero.charY + Hero.charW )>=348 && Hero.charY<=348+20))
			{
				 BookCollison3(2);
			}
			if(((Hero.charX + Hero.charW)>=1250 && Hero.charX<=1250+30) && ((Hero.charY + Hero.charW )>=348 && Hero.charY<=348+20))
			{ 
				 BookCollison3(3);
			}
			if(((Hero.charX + Hero.charW)>=1050 && Hero.charX<=1050+30) && ((Hero.charY + Hero.charW )>=25 && Hero.charY<=25+20))
			{
				 BookCollison3(4);
			}
			if(((Hero.charX + Hero.charW)>=850 && Hero.charX<=850+30) && ((Hero.charY + Hero.charW )>=180 && Hero.charY<=180+20))
			{
				 BookCollison3(5);
			}
			if(((Hero.charX + Hero.charW)>=200 && Hero.charX<=200+30) && ((Hero.charY + Hero.charW )>=180 && Hero.charY<=180+20))
			{
				 BookCollison3(6);
			}
			if(((Hero.charX + Hero.charW)>=500 && Hero.charX<=500+30) && ((Hero.charY + Hero.charW )>=25 && Hero.charY<=25+20))
			{
				 BookCollison3(7);
			}
			if(((Hero.charX + Hero.charW)>=750 && Hero.charX<=750+30) && ((Hero.charY + Hero.charW )>=25 && Hero.charY<=25+20))
			{
				 BookCollison3(8);
			}
			if(((Hero.charX + Hero.charW)>=450 && Hero.charX<=450+30) && ((Hero.charY + Hero.charW )>=185 && Hero.charY<=185+20))
			{
				 BookCollison3(9);
			}
			if(((Hero.charX + Hero.charW)>=900 && Hero.charX<=900+30) && ((Hero.charY + Hero.charW )>=505 && Hero.charY<=505+20))
			{
				 BookCollison3(10);
			}
		}
	}
}

#endif // !STAGES_H_INCLUDED
