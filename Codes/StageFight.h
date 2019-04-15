#ifndef STAGEFIGHT_H_INCLUDED
#define STAGEFIGHT_H_INCLUDED
#include "myVariables.h"
#include "myLoadPicture.h"
#include "myDialougeScene.h"
#include "myCharacterMove.h"
#include "stages.h"
#include "characterStruct.h"
#include "scores.h"
#include "StageFind.h"
#include "MenuPage.h"

//function for stage 3
void stage3()
{
	if(fight1==1)
	{
		
		iShowImage(0,0,screenX,screenY,StageBg[3]);
		if(gundie1==1)
		{
		iShowImage(Gunda1.charX,Gunda1.charY,Gunda1.charW,Gunda1.charL,gunda1[gun1]);
		iShowImage(Bullet1.obX,Bullet1.obY,30,10,bul);
		}
		if(gundie2==1)
		{
		iShowImage(Gunda2.charX,Gunda2.charY,Gunda2.charW,Gunda2.charL,gunda2[gun2]);
		iShowImage(Bullet2.obX,Bullet2.obY,30,10,bul);
		}
		if(gundie3==1)
		{
			iShowImage(Gunda3.charX,Gunda3.charY,60,105,gunda3[1]);
		iShowImage(Bullet3.obX,Bullet3.obY,30,10,bul);
		}
		if(gundie4==1)
		{
		iShowImage(Gunda4.charX,Gunda4.charY,60,105,gunda1[1]);
		iShowImage(Bullet4.obX,Bullet4.obY,30,10,bul);
		}
		if(dipjoldie==1)
		{
		iShowImage(Dipjol.charX,Dipjol.charY,70,110,DipjolPic[DipCount]);
		iShowImage(BulletD.obX,BulletD.obY,30,10,bul);
		}
		if(BallFlag==1)
		{
			iShowImage(Ball.obX,Ball.obY,30,30,ballPic);
		}
	}
}
void CollisionBallCheck()
{
	if(fight1==1 )
	{
		if(BallFlag==1)
		{
			if(Ball.obX>(Gunda1.charX-30) && Ball.obX<(Gunda1.charX+60))
			{
				gundie1=0;
				Bullet1.obX=0;
				Gunda1.charX=1600;
				Ball.obX=0;
				BallFlag=0;
				point += 15;
			}
			if(Ball.obX>(Gunda2.charX-30) && Ball.obX<(Gunda2.charX+60))
			{
				gundie2=0;
				Bullet2.obX=0;
				Gunda2.charX=1600;
				Ball.obX=0;
				BallFlag=0;
				point += 15;
			}
			if(Ball.obX>Gunda3.charX )
			{
				gundie3=0;
				Bullet3.obX=0;
				Gunda3.charX=1600;
				Ball.obX=0;
				BallFlag=0;
				point += 15;
			}
			if(Ball.obX>Gunda4.charX)
			{
				gundie4=0;
				Bullet4.obX=0;
				Gunda4.charX=1600;
				Ball.obX=0;
				BallFlag=0;
				point += 15;
			}
			if(Ball.obX<Dipjol.charX && Ball.obY>Dipjol.charY)
			{
				dipjoldie=0;
				BulletD.obX=1600;
				Dipjol.charX=1600;
				Ball.obX=0;
				BallFlag=0;
				point += 15;
				EndFlag=1;
				iResumeTimer(DiaPhase);
			}
		}
	}
}

void CollisionBulletCheck()
{
	if(fight1==1 ){
	if(Bullet1.obX-Hero.charX<3 && Bullet1.obX>(Hero.charX-30) && Bullet1.obY>(Hero.charY+70) && Bullet1.obY<(Hero.charY+Hero.charL) && (hero1==1 || hero3==1))
	{
		colFunction();
		Bullet1.obX=Gunda1.charX;
	}
	if(Bullet2.obX<(Hero.charX+Hero.charW) && Bullet2.obX>(Hero.charX-30) && Bullet2.obY>(Hero.charY+70) && Bullet2.obY<(Hero.charY+Hero.charL) && (hero1==1 || hero3==1))
	{
		colFunction();
		Bullet2.obX=Gunda2.charX;
	}
	if(Bullet3.obX-Hero.charX<3 && Bullet3.obX>(Hero.charX-30) && Bullet3.obY>(Hero.charY+70) && Bullet3.obY<(Hero.charY+Hero.charL) && (hero1==1 || hero3==1))
	{
		colFunction();
		Bullet3.obX=Gunda3.charX;
	}
	if(Bullet4.obX-Hero.charX<3 && Bullet4.obX>(Hero.charX-30) && Bullet4.obY>(Hero.charY+70) && Bullet4.obY<(Hero.charY+Hero.charL) && (hero1==1 || hero3==1))
	{
		colFunction();
		Bullet4.obX=Gunda4.charX;
	}
	if(BulletD.obX>(Hero.charX-30) && BulletD.obX<(Hero.charX+Hero.charW) && BulletD.obY>(Hero.charY) && BulletD.obY<(Hero.charY+Hero.charL) && (hero1==1 || hero3==1))
	{
		colFunction();
		BulletD.obX=Dipjol.charX;
	}
	}
}

void GundaMove()
{
	if(fight1==1)
	{
		//gunda1 walk
		if(gundaChange1==1)
		{
			Gunda1.charX -=10; 
			gun1++;
			if(gun1>3)
			{
				gun1=1;
			}
			if(Gunda1.charX == 200)
			{
				gundaChange1=0;
				gun1=4;
			}
		}
		if(gundaChange1==0)
		{
			Gunda1.charX += 10; 
			gun1++;
			if(gun1>6)
			{
				gun1=4;
			}
			if(Gunda1.charX == 500)
				gundaChange1=1;
		}
		//gunda2 walk
		if(gundaChange2==1)
		{
			Gunda2.charX -= 10; 
			gun2++;
			if(gun2>3)
			{
				gun2=1;
			}
			if(Gunda2.charX == 800)
			{
				gundaChange2=0;
				gun2=4;
			}
		}
		if(gundaChange2==0)
		{
			Gunda2.charX += 10; 
			gun2++;
			if(gun2>6)
			{
				gun2=4;
			}
			if(Gunda2.charX == 1040)
				gundaChange2=1;
		}
		
		DipCount++;
		if(DipCount>2)
			DipCount=1;
		if(DipChange==0)
			Dipjol.charX += 5;
		if(Dipjol.charX>=865)
			DipChange=1;
		if(DipChange==1)
			Dipjol.charX -= 5;
		if(Dipjol.charX<=370)
			DipChange=0;
	}
	
}

void WalkFightR()
{
	if(((Hero.charX<520 || Hero.charX>850) && Hero.charY<60) || (Hero.charY>370 && Hero.charX>350 && Hero.charX<1160) || (Hero.charY>130 && Hero.charY<200 && Hero.charX>650 && Hero.charX<770) || (Hero.charY>80 && Hero.charY<120 && Hero.charX>=520 && Hero.charX<=650))
		WalkRight();
}
void WalkFightL()
{
	if(((Hero.charX<520 || Hero.charX>850) && Hero.charY<60) || (Hero.charY>370 && Hero.charX>350 && Hero.charX<1160) || (Hero.charY>130 && Hero.charY<200 && Hero.charX>650 && Hero.charX<770) || (Hero.charY>80 && Hero.charY<120 && Hero.charX>=520 && Hero.charX<=650))
		WalkLeft();
}
#endif