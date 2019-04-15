#ifndef MENUPAGE_H_INCLUDED
#define MENUPAGE_H_INCLUDED

#include "myVariables.h"
#include "myLoadPicture.h"
#include "myDialougeScene.h"
#include "myCharacterMove.h"
#include "stages.h"
#include "characterStruct.h"
#include "scores.h"
#include "StageFind.h"

//menu page with buttons
void menu()
{
	if(MenuPage==1)
	{
	iShowImage(0,0,screenX,screenY,MenuImage[2]);
	iShowImage(860,175,150,50,Button[1]);
	iShowImage(1030,175,150,50,Button[3]);
	iShowImage(860,100,150,50,Button[5]);
	iShowImage(1030,100,150,50,Button[7]);
	if(but[1]==1)
		iShowImage(860,175,150,50,Button[2]);
	if(but[2]==1)
		iShowImage(1030,175,150,50,Button[4]);
	if(but[3]==1)
		iShowImage(860,100,150,50,Button[6]);
	if(but[4]==1)
		iShowImage(1030,100,150,50,Button[8]);
	}
}
//function for instructions page
void rules()
{
	if(RulePage==1)
	{
	MenuPage=0;
	iShowImage(0,0,screenX,screenY,MenuImage[7]);
	iSetColor(0,0,0);
	iText(35, 625,str, GLUT_BITMAP_HELVETICA_18);
	}
}
//scoreboard page
void scoreboard()
{
	if(ScorePage==1)
	{
		MenuPage=0;
	iShowImage(0,0,screenX,screenY,MenuImage[8]);
	iSetColor(0,0,0);
	iText(35, 625,str, GLUT_BITMAP_HELVETICA_18);
	}
}
//character information page
void characterIntro()
{
	if(IntroPage==1)
	{
	MenuPage=0;
	iShowImage(0,0,screenX,screenY,MenuImage[6]);
	iSetColor(0,0,0);
	iText(35, 625,str, GLUT_BITMAP_HELVETICA_18);
	}
}

#endif 