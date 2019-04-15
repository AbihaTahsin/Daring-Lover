#ifndef STAGEFIND_H_INCLUDED
#define STAGEFIND_H_INCLUDED

#include "myVariables.h"
#include "characterStruct.h"
#include "myCharacterMove.h"

//function for stage 2. called in iDraw
void stage2()
{
	if(find1==1)
	{
		dia2=0;
		iShowImage(0,0,screenX,screenY,StageFindBg[1]);
		iShowImage(375,150,50,50,crate);
		iShowImage(450,250,170,170,balloon);
		iShowImage(860,385,80,90,wheel);
		if(st[0]==1)
		iShowImage(720,400,30,30,star[0]);//a
		if(st[1]==1)
		iShowImage(800,400,30,30,star[1]);//b
		if(st[2]==1)
		iShowImage(500,290,30,30,star[2]);//c
		if(st[3]==1)
			iShowImage(730,120,30,30,star[3]);//d
		find2=1;
	}
	if(fnd1==1)
	{
		iShowImage(0,0,screenX,screenY,StageFindBg[2]);
		if(st[5]==1)
			iShowImage(320,200,30,30,star[5]);//a
		if(st[6]==1)
			iShowImage(390,200,30,30,star[6]);//b
		if(st[7]==1)
			iShowImage(590,400,30,30,star[7]);//c
		if(st[8]==1)
			iShowImage(850,400,30,30,star[8]);//d
		if(st[9]==1)
			iShowImage(870,150,30,30,star[9]);//e
	}

	if(fnd2==1)
	{
		iShowImage(0,0,screenX,screenY,StageFindBg[3]);
		if(st[10]==1)
			iShowImage(360,120,30,30,star[10]);//star a
		if(st[11]==1)
			iShowImage(560,120,30,30,star[11]);//b
		if(st[12]==1)
			iShowImage(520,380,30,30,star[12]);//c
		if(st[13]==1)
			iShowImage(950,400,30,30,star[13]);//d
		if(st[14]==1)
			iShowImage(1010,400,30,30,star[14]);//e
		if(st[15]==1)
			iShowImage(1160,130,30,30,star[15]);//f
	}

	if(fnd3==1)
	{
		iShowImage(0,0,screenX,screenY,StageFindBg[4]);
		if(st[16]==1)
			iShowImage(310,200,30,30,star[16]);//a
		if(st[17]==1)
			iShowImage(380,200,30,30,star[17]);//b
		if(st[18]==1)
			iShowImage(980,120,30,30,star[18]);//c
	}

}

void StairDownFind()
{
	if(fnd1==1)
			  {
				  if((Hero.charX+45)>630 && (Hero.charX+45)<675 &&  Hero.charY<=345 && Hero.charY>=80 )//First Staircase
				  {
					  StairsDown();
					  if(Hero.charY<80)
						  Hero.charY=80;
				  }
			  }
			  if(fnd2==1)
			  {
				  if(Hero.charX>450 && Hero.charX<520 &&  Hero.charY<=300 && Hero.charY>=80 )//First ladder
				  {
					  StairsDown();
					  if(Hero.charY<80)
						  Hero.charY=80;
				  }
				  if(Hero.charX>1080 && Hero.charX<1150 &&  Hero.charY<=280 && Hero.charY>=80 )//second ladder
				  {
					  StairsDown();
					  if(Hero.charY<80)
						  Hero.charY=80;
				  }
			  }
}

void StairUpFind()
{
	 if(fnd1==1)
			  {
				  if((Hero.charX+45)>630 && (Hero.charX+45)<675 &&  Hero.charY<=345 && Hero.charY>=80 )//First Staircase
				  {
					  StairsUp();
					  if(Hero.charY>345)
						  Hero.charY=345;
				  }
			  }
			  if(fnd2==1)
			  {
				  if(Hero.charX>450 && Hero.charX<520 &&  Hero.charY<=300 && Hero.charY>=80 )//First ladder
				  {
					  StairsUp();
					  if(Hero.charY>300)
						  Hero.charY=300;
				  }
				  if(Hero.charX>1080 && Hero.charX<1150 &&  Hero.charY<=280 && Hero.charY>=80 )//second ladder
				  {
					  StairsUp();
					  if(Hero.charY>280)
						  Hero.charY=280;
				  }
			  }
}

void StarCol(int index)//Collision with stars
{
	if(st[index]==1)
	{
		st[index]=0;//star vanish
		point+=5;//point increse
	}
}

void StarCollection()//collision check with the stars
{
	if(find1==1)//for page 1
	{
		if(Hero.charY>310 && Hero.charY<460 && Hero.charX>670 && Hero.charX<750)//star a
			StarCol(0);
		if(Hero.charY>310 && Hero.charY<460 && Hero.charX>750 && Hero.charX<830)//b
			StarCol(1);
		if(Hero.charY>200 && Hero.charY<350 && Hero.charX>450 && Hero.charX<530)//c
			StarCol(2);
		if(Hero.charY>30 && Hero.charY<180 && Hero.charX>680 && Hero.charX<760)//d
			StarCol(3);

	}
	if(fnd1==1)//for page 2
	{
		if(Hero.charY>110 && Hero.charY<260 && Hero.charX>270 && Hero.charX<350)//star a
			StarCol(5);
		if(Hero.charY>110 && Hero.charY<260 && Hero.charX>340 && Hero.charX<420)//b
			StarCol(6);
		if(Hero.charY>310 && Hero.charY<460 && Hero.charX>540 && Hero.charX<620)//c
			StarCol(7);
		if(Hero.charY>310 && Hero.charY<460 && Hero.charX>800 && Hero.charX<880)//d
			StarCol(8);
		if(Hero.charY>60 && Hero.charY<210 && Hero.charX>820 && Hero.charX<900)//e
			StarCol(9);
	}
	if(fnd2==1)//for page 3
	{
		if(Hero.charY>30 && Hero.charY<180 && Hero.charX>310 && Hero.charX<390)//star a
			StarCol(10);
		if(Hero.charY>30 && Hero.charY<180 && Hero.charX>510 && Hero.charX<590)//b
			StarCol(11);
		if(Hero.charY>290 && Hero.charY<440 && Hero.charX>470 && Hero.charX<550)//c
			StarCol(12);
		if(Hero.charY>310 && Hero.charY<460 && Hero.charX>900 && Hero.charX<980)//d
			StarCol(13);
		if(Hero.charY>310 && Hero.charY<460 && Hero.charX>960 && Hero.charX<1040)//e
			StarCol(14);
		if(Hero.charY>40 && Hero.charY<190 && Hero.charX>1110 && Hero.charX<1190)//f
			StarCol(15);
	}
	if(fnd3==1)//for page 4
	{
		if(Hero.charY>110 && Hero.charY<260 && Hero.charX>260 && Hero.charX<340)//a
			StarCol(16);
		if(Hero.charY>110 && Hero.charY<260 && Hero.charX>330 && Hero.charX<410)//b
			StarCol(17);
		if(Hero.charY>30 && Hero.charY<180 && Hero.charX>930 && Hero.charX<1010)//c
			StarCol(18);
	}
}
void colFunction()//collision with obstacles
{
	if(collision==0)
	{
	collision=1;
	lifeCount++;//life lessens
	if(lifeCount>4)
	{
		GameOverFlag=1;
		iResumeTimer(DiaPhase);
	}
	}
}
void CollisionCheck()
{
	if(find1==1)//obstacles for page 1
	{
		if(Hero.charX>840 && Hero.charY==80 && Hero.charX<980)//road block
		{
			colFunction();
		}
		if(Hero.charY<25)//spikes
		{
			colFunction();
			Hero.charX=70;
			Hero.charY=80;
		}
		if(Hero.charX>820 && Hero.charY>350 && Hero.charX<920)//blade
			colFunction();
	}
	if(fnd1==1)//obstacles for page 2
	{
		if(Hero.charY>280 && Hero.charY<400 && Hero.charX>870 && Hero.charX<955)//road block1
			colFunction();
		if(Hero.charY>250 && Hero.charY<310 && Hero.charX>1110 && Hero.charX<1195)//road block 2
			colFunction();
		if(Hero.charY<10)//spikes
		{
			colFunction();
			Hero.charX=300;
			Hero.charY=80;
		}
	}
	if(fnd2==1)//obstacles for page 3
	{
		if(Hero.charY>280 && Hero.charY<350 && Hero.charX>330 && Hero.charX<410)//road block 1
			colFunction();
		if(Hero.charY==80 && Hero.charX>550 && Hero.charX<765)//Fat crane
			colFunction();
		if(Hero.charY>250 && Hero.charY<315 && Hero.charX>1160 && Hero.charX<1245)//road block 2
			colFunction();
		if(Hero.charY<70 && Hero.charX>180 && Hero.charX<295)//spikes in landing
			colFunction();
		if(Hero.charY<10)//spikes
		{
			colFunction();
			Hero.charX=70;
			Hero.charY=80;
		}
	}
	if(fnd3==1)//for page 4
	{
		if(Hero.charY>120 && Hero.charY<180 && Hero.charX>420 && Hero.charX<510)//road block 1
			colFunction();
		if(Hero.charY>40 && Hero.charY<155 && Hero.charX>760 && Hero.charX<915)//rock
			colFunction();
	}

}
void CollisonCheck2()
{
	if(book1==1)
	{
		if(((Hero.charX+Hero.charW)>364 && Hero.charY==355 &&( Hero.charX+Hero.charW)<400)||((Hero.charX+Hero.charW)>852 && Hero.charY==355 && (Hero.charX+Hero.charW)<885))
		{
			colFunction();
			heroX=120;
			heroY=355;
		}
		if(((Hero.charX+Hero.charW)>286 && Hero.charY==190 && (Hero.charX+Hero.charW)<329)||((Hero.charX+Hero.charW)>671 && Hero.charY==190 && (Hero.charX+Hero.charW)<705))
		{
			colFunction();
			heroX=120;
			heroY=180;
		}
		if(((Hero.charX+Hero.charW)>598 && Hero.charY==25 && (Hero.charX+Hero.charW)<635)||((Hero.charX+Hero.charW)>881 && Hero.charY==25 && (Hero.charX+Hero.charW)<922))
		{
			colFunction();
			heroX=120;
			heroY=20;
		}
	}
		if(book12==1)
	{
		if(((Hero.charX+Hero.charW)>658 && Hero.charY==505 &&(Hero.charX+Hero.charW)<695))
		{
			colFunction();
			heroX=120;
			heroY=500;
		}
		if(((Hero.charX+Hero.charW)>845 && Hero.charY==347 && (Hero.charX+Hero.charW)<885)||((Hero.charX+Hero.charW)>355 && Hero.charY==347 && (Hero.charX+Hero.charW)<390))
		{
			colFunction();
			heroX=120;
			heroY=340;
		}
		if(((Hero.charX+Hero.charW)>282 && Hero.charY==185 && (Hero.charX+Hero.charW)<313)||((Hero.charX+Hero.charW)>665 && Hero.charY==185 && (Hero.charX+Hero.charW)<707))
		{
			colFunction();
			heroX=120;
			heroY=20;
		}
		if(((Hero.charX+Hero.charW)>595 && Hero.charY==25 && (Hero.charX+Hero.charW)<630))
		{
			colFunction();
			heroX=120;
			heroY=500;
		}
	}
}
//to walk right
void StageFindWalk1()
{
	if((Hero.charY == 80 &&  (Hero.charX <= 190|| (Hero.charX >=430 && Hero.charX<570) || Hero.charX>680)) || (Hero.charX > 220 && Hero.charY > 150 && Hero.charX <= 320 && Hero.charY<180) || (Hero.charY>190 && Hero.charX > 320 && Hero.charX< 410 ) || (Hero.charY>=250 && Hero.charX>=430 && Hero.charX<=610) || (Hero.charX>640 && Hero.charX<910 && Hero.charY>350) )
	{
		WalkRight();
	}
}
//to walk left
void StageFindBWalk1()
{
	if((Hero.charY == 80 &&  (Hero.charX <= 190|| (Hero.charX >=430 && Hero.charX<570) || Hero.charX>680)) || (Hero.charX > 220 && Hero.charY > 150 && Hero.charX <= 320 && Hero.charY<180) || (Hero.charY>190 && Hero.charX > 320 && Hero.charX< 410 ) || (Hero.charY>=250 && Hero.charX>=430 && Hero.charX<=610) || (Hero.charX>640 && Hero.charX<910 && Hero.charY>350) )
	{
		WalkLeft();
	}
}

void StageFindWalk2()
{
	if((Hero.charY<100 && (Hero.charX<50 || (Hero.charX>200 && Hero.charX<690) || (Hero.charX>820 && Hero.charX<880) || Hero.charX>1235)) || (Hero.charY>300 && Hero.charX>540 && Hero.charX<960) || (Hero.charY>250 && Hero.charX>1000 && Hero.charX<1220) )
	{
		WalkRight();
	}
}

void StageFindBWalk2()
{
	if((Hero.charY<100 && (Hero.charX<50 || (Hero.charX>200 && Hero.charX<690) || (Hero.charX>820 && Hero.charX<880) || Hero.charX>1235)) || (Hero.charY>300 && Hero.charX>540 && Hero.charX<960) || (Hero.charY>250 && Hero.charX>1000 && Hero.charX<1220) )
	{
		WalkLeft();
	}
}

void StageFindWalk3()
{
	if((Hero.charY>=300 && Hero.charX>325 && Hero.charX<510) || (Hero.charY>370 && Hero.charX>810 && Hero.charX<1020) || (Hero.charY>250 && Hero.charX>1090 && Hero.charX<1220) || (Hero.charY<60 && Hero.charX>120 && Hero.charX<400) || (Hero.charY>50 && Hero.charY<100 && (Hero.charX<120 || (Hero.charX>400 && Hero.charX<1180) || Hero.charX>1280) ))
	{
		WalkRight();
	}
}

void StageFindBWalk3()
{
	if((Hero.charY>=300 && Hero.charX>325 && Hero.charX<510) || (Hero.charY>370 && Hero.charX>810 && Hero.charX<1020) || (Hero.charY>250 && Hero.charX>1090 && Hero.charX<1220) || (Hero.charY<60 && Hero.charX>120 && Hero.charX<400) || (Hero.charY>50 && Hero.charY<100 && (Hero.charX<120 || (Hero.charX>400 && Hero.charX<1180) || Hero.charX>1280) ))
	{
		WalkLeft();
	}
}

void StageFindWalk4()
{
	if((Hero.charY<100 && (Hero.charX<=260 || Hero.charX>=520)) || (Hero.charY>110 && Hero.charX>=260 && Hero.charX<=520) )
	{
		WalkRight();
	}
}

void StageFindBWalk4()
{
	if((Hero.charY<100 && (Hero.charX<=260 || Hero.charX>=520)) || (Hero.charY>110 && Hero.charX>=260 && Hero.charX<=520) )
	{
		WalkLeft();
	}
}

//tp change scenes. called in iSpecialKeyboard
void FindStageChange()
{
      if(find1==1)
	  {
		  if(Hero.charX>1250)
	  {
		  Hero.charX=0;
		  fnd1=1; 
		  find1=0;
	  }
	  }
	  if(fnd1==1)
	  {
		  if(Hero.charX>1250)
		  {
			  Hero.charX=0;
			  fnd2=1;
			  fnd1=0;
		  }
		  if(Hero.charX<0)
		  {
			  Hero.charX=1250;
			  find1=1;
			  fnd1=0;
		  }
	  }
	  if(fnd2==1)
	  {
		  if(Hero.charX>1250)
		  {
			  Hero.charX=0;
			  fnd3=1;
			  fnd2=0;
		  }
		  if(Hero.charX<0)
		  {
			  Hero.charX=1250;
			  fnd1=1;
			  fnd2=0;
		  }
	  }
	  if(fnd3==1)
	  {
		  if(Hero.charX<0)
		  {
			  Hero.charX=1250;
			  fnd2=1;
			  fnd3=0;
		  }
		  if(Hero.charX>1100)
		  {
			  ClimaxFlag=1;
			  iResumeTimer(DiaPhase);
				fnd3=0;
		  }
	  }
}


#endif