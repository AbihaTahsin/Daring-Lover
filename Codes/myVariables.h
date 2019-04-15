#ifndef MYVARIABLES_H_INCLUDED
#define MYVARIABLES_H_INCLUDED
#include "characterStruct.h"
int huda=0;
//array for images
int MenuImage[20];
int Button[10];int but[5]={0,0,0,0,0};
int CoverImage[5];

int StageBg[5],BookEnd=0,love,BookColEnd=0;
int StageFindBg[5];
int Loading[20]; int LoadFlag=1, load=0;

//obstacles
int image[50];
int crate, balloon, star[100], wheel;int ballPic,BallFlag=0,BallTempX,BallVanish=0;
int ExtraLife;
int st[100];

//flag for obstacles
int b[30],m1=0;
int bb[30];

//character informartions
int heroinPic;//golapi's photo

int shagorWalkFront[20] , shagorBackwalk[20] , shagorStairsDown[20], shagorJump[10];//shagor walk photos
int jump=0,jumpup=0,jumpdown=0,jumpLimit,JumpTemp;//jump related variables
int hero1=0,hero2=0,hero3=0,hero4=0,hero5=0,hero6=0;
int heroX,heroY;int shagorJumpBack;

int DipjolPic[10];int DipCount=1;int DipChange=0;int dipjoldie=1;
int collision=0;int dead[10],deadCount=0;//collision and death
int life[10];int lifeCount=0,lifeOpen=0;//lifebar image, life lessen, life bar show flag
int point=0;char pointSTR[100];//score counting variables
int overLetter[30]; int overLetterCount=0;int GameOverFlag=0;int EnterNamePic;
int EnterNameFlag=0;//game over related variables
int EndFlag=0;int Ending[50]; int EndCount=0;

int gunda1[10],gunda2[10],gunda3[10];
int gun1,gun2,gun3;
int gundaChange1=1,gundaChange2=1,gundaChange3=1;
int gundie1=1,gundie2=1,gundie3=1,gundie4=1;
int bul;int NewBullet1=0,NewBullet2=0,NewBullet3=0,NewBullet4=0;int BulShow=1;
int HeroKneelPic;int KneelFlag=0;int ShieldCount=0;

//flags for menu pages
int RulePage=0,ScorePage=0,MenuPage=0,IntroPage=0;

//flags for stages
int book1=0,book12=0,book2=0,rail=0;
int dia1=0,dia2=0;
int find1=0,find2=0,fnd1=0,fnd2=0,fnd3=0;
int fight1=0,fight2=0;


char *str="Back";
int input=0;
char name[20];
int len=0;

//i for frontwalk, j for backwalk, n for stairsdown
int i=0,j=0,n=0;
int k=0,l=0,m=0;
int y=0;

int screenX=1300,screenY=650;

int scene,DiaPhase,Dialouge[200],BookScene[20],Climax[100];
int movie1=0;
int ClimaxFlag=0; int ClimaxCount=0;

char* BookScenePic[]={
"Movie1\\BookSc1.jpg",
"Movie1\\BookSc2.jpg",
"Movie1\\BookSc3.jpg",
"Movie1\\BookSc4.jpg",
"Movie1\\BookSc5.jpg",
"Movie1\\BookSc6.jpg",
"Movie1\\BookSc7.jpg",
"Movie1\\BookSc8.jpg",
"Movie1\\BookSc9.jpg"};

char* EndPic[]={
	"Movie3\\e1.jpg",
	"Movie3\\e2.jpg",
	"Movie3\\e3.jpg",
	"Movie3\\e4.jpg",
	"Movie3\\e5.jpg",
	"Movie3\\e6.jpg",
	"Movie3\\e7.jpg",
	"Movie3\\e8.jpg",
	"Movie3\\e9.jpg",
	"Movie3\\e10.jpg",
	"Movie3\\e11.jpg",
	"Movie3\\e12.jpg",
	"Movie3\\e13.jpg",
	"Movie3\\e14.jpg",
	"Movie3\\e15.jpg",
	"Movie3\\e16.jpg",
	"Movie3\\e17.jpg",
	"Movie3\\e18.jpg",
	"Movie3\\e19.jpg",
	"Movie3\\e20.jpg",
	"Movie3\\e21.jpg",
	"Movie3\\e22.jpg",
	"Movie3\\e23.jpg",
	"Movie3\\e24.jpg",
	"Movie3\\e25.jpg",
	"Movie3\\e26.jpg",
	"Movie3\\e27.jpg",
	"Movie3\\e28.jpg",
	"Movie3\\e29.jpg",
	"Movie3\\e30.jpg",
	"Movie3\\e31.jpg",
	"Movie3\\e32.jpg",
	"Movie3\\e33.jpg",
	"Movie3\\e34.jpg",
	"Movie3\\e35.jpg",
	"Movie3\\e36.jpg",
	"Movie3\\e37.jpg",
	"Movie3\\e38.jpg",
	"Movie3\\e39.jpg"};

char* ClimaxPic[]={
	"Movie2\\climax1.jpg",
	"Movie2\\climax2.jpg",
	"Movie2\\climax3.jpg",
	"Movie2\\climax4.jpg",
	"Movie2\\climax5.jpg",
	"Movie2\\climax6.jpg",
	"Movie2\\climax7.jpg",
	"Movie2\\climax8.jpg",
	"Movie2\\climax9.jpg",
	"Movie2\\climax10.jpg",
	"Movie2\\climax11.jpg",
	"Movie2\\climax12.jpg",
	"Movie2\\climax13.jpg",
	"Movie2\\climax14.jpg",
	"Movie2\\climax15.jpg",
	"Movie2\\climax16.jpg",
	"Movie2\\climax17.jpg",
	"Movie2\\climax18.jpg",
	"Movie2\\climax19.jpg",
    "Movie2\\climax20.jpg",
	"Movie2\\climax21.jpg",
	"Movie2\\climax22.jpg",
	"Movie2\\climax23.jpg",
	"Movie2\\climax24.jpg",
	"Movie2\\climax25.jpg",
	"Movie2\\climax26.jpg",
	"Movie2\\climax27.jpg",
	"Movie2\\climax28.jpg",
	"Movie2\\climax29.jpg",
	"Movie2\\climax30.jpg",
	"Movie2\\climax31.jpg",
	"Movie2\\climax32.jpg",
	"Movie2\\climax33.jpg",
	"Movie2\\climax34.jpg",
	"Movie2\\climax35.jpg",
	"Movie2\\climax36.jpg",
	"Movie2\\climax37.jpg",
	"Movie2\\climax38.jpg",
	"Movie2\\climax39.jpg",
	"Movie2\\climax40.jpg",
	"Movie2\\climax41.jpg",
	"Movie2\\climax42.jpg",
	"Movie2\\climax43.jpg",
	"Movie2\\climax44.jpg",
	"Movie2\\climax45.jpg",
	"Movie2\\climax46.jpg",
	"Movie2\\climax47.jpg",
	"Movie2\\climax48.jpg",
	"Movie2\\climax49.jpg",
	"Movie2\\climax50.jpg",
	"Movie2\\climax51.jpg",
	"Movie2\\climax52.jpg",
	"Movie2\\climax53.jpg",
	"Movie2\\climax54.jpg",
	"Movie2\\climax55.jpg",
	"Movie2\\climax56.jpg",
	"Movie2\\climax57.jpg",
	"Movie2\\climax58.jpg",
	"Movie2\\climax59.jpg",
	"Movie2\\climax60.jpg",
	"Movie2\\climax61.jpg",
	"Movie2\\climax62.jpg",
	"Movie2\\climax63.jpg",
	"Movie2\\climax64.jpg",
	"Movie2\\climax65.jpg"
};

char* DialougePic[]={
"dia\\scene1.jpg",
"dia\\scene2.jpg",
"dia\\scene3.jpg",
"dia\\scene4.jpg",
"dia\\scene5.jpg",
"dia\\scene6.jpg",
"dia\\scene7.jpg",
"dia\\scene8.jpg",
"dia\\scene9.jpg",
"dia\\scene10.jpg",
"dia\\scene11.jpg",
"dia\\scene12.jpg",
"dia\\scene13.jpg",
"dia\\scene14.jpg",
"dia\\scene15.jpg",
"dia\\scene16.jpg",
"dia\\scene17.jpg",
"dia\\scene18.jpg",
"dia\\scene19.jpg",
"dia\\scene20.jpg",
"dia\\scene21.jpg",
"dia\\scene22.jpg",
"dia\\scene23.jpg",
"dia\\scene24.jpg",
"dia\\scene25.jpg",
"dia\\scene26.jpg",
"dia\\scene27.jpg",
"dia\\scene28.jpg",
"dia\\scene29.jpg",
"dia\\scene30.jpg",
"dia\\scene31.jpg",
"dia\\scene32.jpg",
"dia\\scene33.jpg",
"dia\\scene34.jpg",
"dia\\scene35.jpg",
"dia\\scene36.jpg",
"dia\\scene37.jpg",
"dia\\scene38.jpg",
"dia\\scene39.jpg",
"dia\\scene40.jpg",
"dia\\scene41.jpg",
"dia\\scene42.jpg",
"dia\\scene43.jpg",
"dia\\scene44.jpg",
"dia\\scene45.jpg",
"dia\\scene46.jpg",
"dia\\scene47.jpg",
"dia\\scene48.jpg",
"dia\\scene49.jpg",
"dia\\scene50.jpg",
"dia\\scene51.jpg",
"dia\\scene52.jpg",
"dia\\scene53.jpg",
"dia\\scene54.jpg",
"dia\\scene55.jpg",
"dia\\scene56.jpg",
"dia\\scene57.jpg",
"dia\\scene58.jpg",
"dia\\scene59.jpg",
"dia\\scene60.jpg",
"dia\\scene61.jpg",
"dia\\scene62.jpg",
"dia\\scene63.jpg",
"dia\\scene64.jpg",
"dia\\scene65.jpg",
"dia\\scene66.jpg",
"dia\\scene67.jpg",
"dia\\scene68.jpg",
"dia\\scene69.jpg",
"dia\\scene70.jpg",
"dia\\scene71.jpg",
"dia\\scene72.jpg",
"dia\\scene73.jpg",
"dia\\scene74.jpg",
"dia\\scene75.jpg",
"dia\\scene76.jpg",
"dia\\scene77.jpg",
"dia\\scene78.jpg",
"dia\\scene79.jpg",
"dia\\scene80.jpg",
"dia\\scene81.jpg",
"dia\\scene82.jpg",
"dia\\scene83.jpg",
"dia\\scene84.jpg",
"dia\\scene85.jpg",
"dia\\scene86.jpg",
"dia\\scene87.jpg",
"dia\\scene88.jpg",
"dia\\scene89.jpg",
"dia\\scene90.jpg",
"dia\\scene91.jpg",
"dia\\scene92.jpg",
"dia\\scene93.jpg",
"dia\\scene94.jpg",
"dia\\scene95.jpg",
"dia\\scene96.jpg",
"dia\\scene97.jpg",
"dia\\scene98.jpg",
"dia\\scene99.jpg",
"dia\\scene100.jpg",
"dia\\scene101.jpg",
"dia\\scene102.jpg",
"dia\\scene103.jpg",
"dia\\scene104.jpg",
"dia\\scene105.jpg",
"dia\\scene106.jpg",
"dia\\scene107.jpg",
"dia\\scene108.jpg",
"dia\\scene109.jpg",
"dia\\scene110.jpg",
"dia\\scene111.jpg",
"dia\\scene112.jpg",
"dia\\scene113.jpg"
};


#endif // !MYVARIABLES_H_INCLUDED
