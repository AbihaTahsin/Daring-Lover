#ifndef MYDIALOUGESCENE_H_INCLUDED
#define MYDIALOUGESCENE_H_INCLUDED
#include"myVariables.h"
#include "characterStruct.h"

void MovieMaker()
{
	if(ClimaxFlag==1)
	{
		ClimaxCount++;
		if(ClimaxCount>64)
			ClimaxCount=64;
	}
	if(dia1==1)//dialouge session with father
	{
	    l++;
	    if(l>111)
			l=111;
	}
	if(GameOverFlag==1)//GAME OVER appears
	{
		overLetterCount++;
		if(overLetterCount>6)
		{
			overLetterCount=6;
			EnterNameFlag=1;
		}
	}
	if(EndFlag==1)
	{
		EndCount++;
		if(EndCount>37)
		{
			EnterNameFlag=1;
			iPauseTimer(DiaPhase);
		}
	}
}

void LoadCover()
{
	if(movie1==1)//Collision with heroin, falling books scene
	{
		y++;
		if(y>7)
		{
			Hero.charX=1000;
			hero1=1;
			movie1=0;
			m1=1;
			BookColEnd=1;
		}
	}
	if(hero5==1)
	{
		ShieldCount++;
		if(ShieldCount>2)
		{
			ShieldCount=0;
			hero1=1;
			hero5=0;
		}
	}
	if(LoadFlag==1)//loading page show
	{
		load++;
	    if(load > 5)
		{
			MenuPage=1;
			LoadFlag=0;
		}
	}
	if(collision==1)//Hero being senseless for a while
	{
		deadCount++;
		if(deadCount>1)
		{
			deadCount=0;
			if(find1==1||fnd1==1||fnd2==1||fnd3==1)
			{
			Hero.charX=10;
			Hero.charY=80;
			}
			if(book1==1||book12==1)
			{
				Hero.charX=heroX;
				Hero.charY=heroY;
			}
			if(fight1==1)
			{
				Hero.charX=100;
			   Hero.charY=55;
			}
			hero1=1;
			collision=0;
		}
	}
}


#endif // !MYDIALOUGESCENE_H_INCLUDED