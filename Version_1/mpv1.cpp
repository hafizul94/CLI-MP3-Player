#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
using namespace std;
#pragma comment(lib, "winmm.lib")

void playerUI(){
    int mBar, mLength=182000, mRemain, mLoad=mLength/50;
    printf("\n\n\t|     Now playing: Miniskirt (AOA)");
    for (mBar=0;mBar<15;mBar++){
        printf(" ");
    }
    printf("|\n\t");
    for (mRemain=mLength;mRemain>0;mRemain-=mLoad){
        printf(">");
        Sleep(mLoad);
    }
}

int main(){
    char start='y';
    while(start=='y'){
        int choice;   //input music length to mLength, where 1s=1000
        system("COLOR 0A");
        printf("\n\n\t::::: SIMPLE MUSIC PLAYER ::::::::::::::::::::::::");
        printf("\n\tSelect music to play:-");
        printf("\n\t1 - Miniskirt\t2 - Miniskirt (Karoke Ver.)");
        scanf("%d",&choice);
        if(choice==1){
            PlaySound(TEXT("miniskirt.wav"), NULL,SND_ASYNC);    //input music name(.wav) with subsequent location
            playerUI();
        }
        else if(choice==2){
            PlaySound(TEXT("miniskirt2.wav"), NULL,SND_ASYNC);    //input music name(.wav) with subsequent location
            playerUI();
        }
        //Frequency Table: http://liutaiomottola.com/formulae/freqtab.htm
        //  or http://www.sengpielaudio.com/calculator-notenames.htm
        /* START BASIC FREQUENCY
        A = 880     B = 494     C = 523
        D = 587     E = 659     F = 698
        G = 784
        END BASIC FREQUENCY*/
        int nFreq=523, nDur=500;
        printf("\n\n\n\tHappy Birthday Mirul NOOBIES.....");
        Sleep(500);
        printf("\n\n\tHappy ");
        Beep(nFreq, nDur);  //C
        Beep(523, 400); //C
        printf("birthday ");
        Beep(587, 400); //D
        Beep(523, 500); //C
        printf("to you...");
        Beep(698, 500); //F
        Beep(659, 900); //E
        Sleep(500);
        printf("\n\tHappy ");
        Beep(523, 500); //C
        Beep(523, 400); //C
        printf("birthday ");
        Beep(587, 400); //D
        Beep(523, 500); //C
        printf("to you...");
        Beep(784, 500); //G
        Beep(698, 900); //F
        Sleep(500);
        printf("\n\tHappy ");
        Beep(523, 500); //C
        Beep(523, 400); //C
        printf("birthday ");
        Beep(880, 400); //A
        Beep(784, 500); //G
        printf("to Mirul NOOBIES...");
        Beep(698, 500); //F
        Beep(659, 500); //E
        Beep(587, 900); //D
        Sleep(500);
        printf("\n\tHappy ");
        Beep(880, 500); //A
        Beep(880, 400); //A
        printf("birthday ");
        Beep(784, 400); //G
        Beep(698, 600); //F
        printf("to you...");
        Beep(784, 500); //G
        Beep(698, 900); //F
        printf("\n\n\n\tHAHAHA!!!\n\n\n");
        printf("\tP/s: It took hours for me to write this program. ;-)\n\n");
        printf("\tWant to replay (y/n): ");
        scanf("%c",&start);
        system("cls");
    }
}
