#ifndef MYCHARACTERMOVE_H_INCLUDED
#define MYCHARACTERMOVE_H_INCLUDED
#include "myVariables.h"
#include "characterStruct.h"

void WalkRight()
{
              hero2=0;
			  hero1=1;
			  hero3=0;
			  Hero.charX += 8;
			  i++;
			  if(i>7)
			     i=0;
}

void WalkLeft()
	{
		hero2=0;
		hero1=0;
		hero3=1;
		Hero.charX -= 8;
		j++;
		if(j>7)
			j=0;
}

void StairsUp()
{
	hero1=0;
	hero3=0;
    hero2=1;
	Hero.charY += 10;
	n++;
	if(n>2)
		n=0;
}

void StairsDown()
{
	hero1=0;
	hero3=0;
	hero2=1;
	Hero.charY -= 10;
	n++;
	if(n>2)
		n=0;
}

void jumpLand()
{
	
						jump=0;
						if(hero4==1)
						{
							hero1=1;
							hero4=0;
						}
						else if(hero6==1)
						{
							hero3=1;
							hero6=0;
						}
}
void jumpchangeStage1()
{
	if(book1==1||book12==1)
	{
		
		if(Hero.charY<JumpTemp)
		{
			
				Hero.charY=JumpTemp;
				jumpLand();
		}
	}
			
}
void JumpChange()
{
	if(BallFlag==1)//lightning ball move
	{
		if(hero1==1)
		{
		Ball.obX+=10;
		if(BallTempX<570)
		{
			if(Ball.obX>570)
				BallFlag=0;
		}
		if(BallTempX>570)
		{
			if(Ball.obX>1300)
				BallFlag=0;
		}
		}
		else if(hero3==1)
		{
			Ball.obX-=10;
			if(Ball.obX<0 || Ball.obX>1300)
				BallFlag=0;
		}
	}
	if(fight1==1)//Bullet Motion
	{
		if(gundie1==1 )
		{
		Bullet1.obX -= 4;
		if(Bullet1.obX<100)
			Bullet1.obX=Gunda1.charX;
		}
		if(gundie2==1)
		{
		Bullet2.obX -= 4;
		if(Bullet2.obX<820)
		{
			Bullet2.obX=-90;
			huda++;
			if(huda==80)
			{
			Bullet2.obX=Gunda2.charX;
			huda=0;
			}
		}
		}
		if(gundie3==1)
		{
		Bullet3.obX -= 4;
		if(Bullet3.obX<-50)
			Bullet3.obX=Gunda3.charX;
		}
		if(gundie4==1 )
		{
		Bullet4.obX -= 2;
		if(Bullet4.obX<820)
			Bullet4.obX=Gunda4.charX;
		}
		if(dipjoldie==1)
		{
		BulletD.obX += 4;
		if(BulletD.obX>1300)
			BulletD.obX=Dipjol.charX+70;
		}
	}
	if(jump==1)
	{
		//for going up
		if(jumpup==1)
		{
			Hero.charY += 5;
			if(book1==1||book12==1)//jumplimit for stage1
			{
				if(Hero.charY >= JumpTemp+80)
					jumpup=0;
			}
			else//jumplimit for stage2 and stage3
			{
				if(Hero.charY >= JumpTemp+120)
					jumpup=0;
			}
		}
		else// for landing
		{
			Hero.charY -= 5;
			//jump for stage1
			if(book1==1||book12==1)
				jumpchangeStage1();
			//jump for page1
			if(find1==1)
			{
				if((Hero.charX <= 190 || (Hero.charX >= 400 && Hero.charX < 570) || (Hero.charX > 685)) && Hero.charY<100)//for landing on ground
			    {
					if (Hero.charY <= 80)
						jumpLand();
				}
				else if(Hero.charX >= 320 && Hero.charX <= 400 )//for landing over crate
				{
					if(Hero.charY <= 200)
						jumpLand();
			    }
				else if((Hero.charX > 190 && Hero.charX < 320) || (Hero.charX < 430 && Hero.charX>400) )//for landing over Tila
				{
					if(Hero.charY <= 155)
					jumpLand();
				}
				else if(Hero.charX >= 400 && Hero.charX <= 610 && JumpTemp>190)//for landing over Ballon Plate
				{
					if(Hero.charY <= 270)
					jumpLand();
				}
				else if(Hero.charX >= 640 && Hero.charX <= 910 && JumpTemp> 250)//for landing over Crane
				{
					if(Hero.charY <= 380)
					jumpLand();
				}
			}
			//jump for page 2
			else if (fnd1==1)
			{
				if(JumpTemp<=100 && (Hero.charX<50 || (Hero.charX>205 && Hero.charX<690) || (Hero.charX>770 && Hero.charX<925) || Hero.charX>1235))
			{
			if(Hero.charY <= 80)
			jumpLand();
			}
				else if(Hero.charX >= 550 && Hero.charX <= 950 && JumpTemp >240 )//landing on 1st hill
			{
			if(Hero.charY <= 350)
			jumpLand();
			}
				else if(Hero.charX>1020 && Hero.charX<=1220 && JumpTemp>150 )//landing on 2nd hill
			{
			if(Hero.charY <= 265)
			jumpLand();
			}
			}
			else if(fnd2==1)//jump for page 3
			{
				if(Hero.charX>=280 && Hero.charX<=520 && JumpTemp>180)//for landing over 1st wood
				{
					if(Hero.charY <= 300)
					jumpLand();
				}
				else if(Hero.charX>=780 && Hero.charX<=1020 && JumpTemp>250)//for landing over crane
				{
					if(Hero.charY <= 380)
					jumpLand();
				}
				else if(Hero.charX>=1050 && Hero.charX<=1220 && JumpTemp>150)//for landing over 2nd wood
				{
					if(Hero.charY <= 280)
					jumpLand();
				}
				else if(Hero.charX>=120 && Hero.charX<=370)//for landing over 1st hole
				{
					if(Hero.charY <= 40)
					jumpLand();
				}
				else if(Hero.charX>=1210 && Hero.charX<=1240)//for landing over 2nd hole
				{
					if(Hero.charY <= 20)
					jumpLand();
				}
				else if(Hero.charY<100)//for landing on ground
				{
					if(Hero.charY <= 80)
					jumpLand();
				}
			}
			//jump for page 4
			else if (fnd3==1)
			{
				if(Hero.charX>290 && Hero.charX<525)//to land over the tila
				{
					if(Hero.charY <= 130)
					jumpLand();
				}
				else//to land on ground
				{
					if(Hero.charY <= 80)
					jumpLand();
				}
			}
			else if (fight1==1)
			{
				if(Hero.charX>355 && Hero.charX<1210 && Hero.charY>350)//to land over the dipjol floor
				{
					if(Hero.charY <= 385)
					jumpLand();
				}
				else if(Hero.charY<350 && Hero.charX>605 && Hero.charX<790)//to land on high tila
				{
					if(Hero.charY <= 165)
					jumpLand();
				}
				else if(Hero.charY<350 && ((Hero.charX>520 && Hero.charX<=605) ||  (Hero.charX>=790 && Hero.charX<820)))//to land on low tila
				{
					if(Hero.charY <= 110)
					jumpLand();
				}
				else if(Hero.charY<350 && (Hero.charX<=520 || Hero.charX>=820))//to land on ground
				{
					if(Hero.charY <= 55)
					jumpLand();
				}
			}
		}

	}
	
}



#endif // !MYCHARACTERMOVE_H_INCLUDED