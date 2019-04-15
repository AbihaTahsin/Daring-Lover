#ifndef MYLOADPICTURE_H_INCLUDED
#define MYLOADPICTURE_H_INCLUDED
#include"myVariables.h"

//to load all images
void loadPicture()
{
	//image of obstacles
	image[1]=iLoadImage("images\\book1.png");
	image[2]=iLoadImage("images\\book2.png");
	image[3]=iLoadImage("images\\book3.png");
	image[4]=iLoadImage("images\\desk.png");

	//opening page
	CoverImage[1] = iLoadImage("images\\poster.jpg");
	Loading[1]= iLoadImage("images\\load1.png");
	Loading[2]= iLoadImage("images\\load2.png");
	Loading[3]= iLoadImage("images\\load3.png");
	Loading[4]= iLoadImage("images\\load4.png");
	Loading[5]= iLoadImage("images\\load5.png");


	//menu components
	MenuImage[2] = iLoadImage("images\\menu.jpg");
	Button[1] = iLoadImage("images\\button1.png");
	Button[2] = iLoadImage("images\\buttonC1.png");
	Button[3] = iLoadImage("images\\button2.png");
	Button[4] = iLoadImage("images\\buttonC2.png");
	Button[5] = iLoadImage("images\\button3.png");
	Button[6] = iLoadImage("images\\buttonC3.png");
	Button[7] = iLoadImage("images\\button4.png");
	Button[8] = iLoadImage("images\\buttonC4.png");

	//menu pages
	MenuImage[6] = iLoadImage("images\\character.jpg");
	MenuImage[7] = iLoadImage("images\\rules.jpg");
	MenuImage[8] = iLoadImage("images\\scoreboard.jpg");

	//stage 2 backgrounds
	StageFindBg[1] = iLoadImage("images\\scene 21.jpg");
	StageFindBg[2] = iLoadImage("images\\scene 22.jpg");
	StageFindBg[3] = iLoadImage("images\\scene 23.jpg");
	StageFindBg[4] = iLoadImage("images\\scene 24.jpg");

	//stage components
	crate=iLoadImage("images\\crate.png");
	balloon=iLoadImage("images\\balloon.png");
	wheel=iLoadImage("images\\wheel.png");
	ballPic=iLoadImage("images\\ball.png");
	for(int st=0;st<30;st++)
	{
		star[st]=iLoadImage("images\\star.png");
	}
	for(int ss=0;ss<100;ss++)//for assigning value 1 to all variables
		st[ss]=1;
	bul=iLoadImage("images\\bullet.png");
	HeroKneelPic=iLoadImage("images\\Kneel.png");

	//life bar images
	life[0]=iLoadImage("images\\life1.png");
	life[1]=iLoadImage("images\\life2.png");
	life[2]=iLoadImage("images\\life3.png");
	life[3]=iLoadImage("images\\life4.png");
	life[4]=iLoadImage("images\\life5.png");
	life[5]=iLoadImage("images\\life6.png");

	//stage 3 villains
	gunda1[1]=iLoadImage("images\\Gunda11.png");
	gunda1[2]=iLoadImage("images\\Gunda12.png");
	gunda1[3]=iLoadImage("images\\Gunda13.png");
	gunda1[4]=iLoadImage("images\\Gunda14.png");
	gunda1[5]=iLoadImage("images\\Gunda15.png");
	gunda1[6]=iLoadImage("images\\Gunda16.png");
	
	gunda2[1]=iLoadImage("images\\Gunda21.png");
	gunda2[2]=iLoadImage("images\\Gunda22.png");
	gunda2[3]=iLoadImage("images\\Gunda23.png");
	gunda2[4]=iLoadImage("images\\Gunda24.png");
	gunda2[5]=iLoadImage("images\\Gunda25.png");
	gunda2[6]=iLoadImage("images\\Gunda26.png");

	gunda3[1]=iLoadImage("images\\Gunda31.png");
	gunda3[2]=iLoadImage("images\\Gunda32.png");
	gunda3[3]=iLoadImage("images\\Gunda33.png");
	gunda3[4]=iLoadImage("images\\Gunda34.png");
	gunda3[5]=iLoadImage("images\\Gunda35.png");
	gunda3[6]=iLoadImage("images\\Gunda36.png");
	

	StageBg[1] = iLoadImage("images\\pageUp.jpg");
	heroinPic = iLoadImage("images\\heroin.png");
	love=iLoadImage("images\\love.png");

	StageBg[2] = iLoadImage("images\\PageDown.jpg");
	StageBg[3] = iLoadImage("images\\stage3.jpg");
	StageBg[4] = iLoadImage("images\\stage4.jpg"); 

	//dead pic
	for(int deadc=0; deadc<5 ; deadc++)
	{
		dead[deadc] = iLoadImage("images\\dead.png"); 
	}

	//shagor walking right
	shagorWalkFront[0]=iLoadImage("images\\walk1.png");
	shagorWalkFront[1]=iLoadImage("images\\walk2.png");
	shagorWalkFront[2]=iLoadImage("images\\walk3.png");
	shagorWalkFront[3]=iLoadImage("images\\walk4.png");
	shagorWalkFront[4]=iLoadImage("images\\walk5.png");
	shagorWalkFront[5]=iLoadImage("images\\walk6.png");
	shagorWalkFront[6]=iLoadImage("images\\walk7.png");
	shagorWalkFront[7]=iLoadImage("images\\walk8.png");

	//shagor walking left
	shagorBackwalk[0]=iLoadImage("images\\bwalk1.png");
	shagorBackwalk[1]=iLoadImage("images\\bwalk2.png");
	shagorBackwalk[2]=iLoadImage("images\\bwalk3.png");
	shagorBackwalk[3]=iLoadImage("images\\bwalk4.png");
	shagorBackwalk[4]=iLoadImage("images\\bwalk5.png");
	shagorBackwalk[5]=iLoadImage("images\\bwalk6.png");
	shagorBackwalk[6]=iLoadImage("images\\bwalk7.png");
	shagorBackwalk[7]=iLoadImage("images\\bwalk8.png");

	//shagor stairs down
	shagorStairsDown[0]=iLoadImage("images\\down1.png");
	shagorStairsDown[1]=iLoadImage("images\\down2.png");
	shagorStairsDown[2]=iLoadImage("images\\down3.png");
	
	shagorJump[1]=iLoadImage("images\\jump3.png");//jump image for shagor
	shagorJumpBack=iLoadImage("images\\jump2.png");

	//Dipjol Images
	DipjolPic[1]=iLoadImage("images\\Dipjol1.png");
	DipjolPic[2]=iLoadImage("images\\Dipjol2.png");
	DipjolPic[3]=iLoadImage("images\\Dipjol3.png");

	//GameOver scene
	overLetter[0]=iLoadImage("GameOver\\end1.jpg");
	overLetter[1]=iLoadImage("GameOver\\end2.jpg");
	overLetter[2]=iLoadImage("GameOver\\end3.jpg");
	overLetter[3]=iLoadImage("GameOver\\end4.jpg");
	overLetter[4]=iLoadImage("GameOver\\end5.jpg");
	overLetter[5]=iLoadImage("GameOver\\end6.jpg");
	overLetter[6]=iLoadImage("GameOver\\end7.jpg");
	overLetter[7]=iLoadImage("GameOver\\end8.jpg");

	EnterNamePic=iLoadImage("GameOver\\EnterName.png");

	//Dialouge Scene 
	for(int z = 0 ; z < 113 ; z ++)
	{
		Dialouge[z]=iLoadImage(DialougePic[z]);
	}
	//for book fall Scene
	for(int y = 0 ; y < 9 ; y ++)
	{
		BookScene[y]=iLoadImage(BookScenePic[y]);
	}
	//Climax Scene 
	for(int z=0; z<65 ; z++)
	{
		Climax[z]=iLoadImage(ClimaxPic[z]);
	}
	//for ending
	for(int z=0; z<39 ; z++)
	{
		Ending[z]=iLoadImage(EndPic[z]);
	}

}

#endif // !MYLOADPICTURE_H_INCLUDED