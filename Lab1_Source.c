//Author: Trevor Garner
//Assignment: Lab 1
//Date: 7 / 7 / 2018
//Description: **What this program does**
//Sources: None

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char		name;
char		reason;
char		experience;
char		systemIn;
char		environment;
char		dislike;
char		like;
char		instructorKnow;
char		instructorDo;
char		campus;

void input()
{
	
}

int main()
{	

	///////////INPUT///////////////////INPUT/////////////////
	printf("what is your name? ");
	name = getchar();
	while (name == ' ' && name != '\n');
	printf("Why are you taking CS 133U? ");
	reason = getchar();
	while (reason == ' ' && reason != '\n');
	printf("What type of programming experience do you have? ");
	experience = getchar();
	while (experience == ' ' && experience != '\n');
	printf("What type of system will you use to develop programs? ");
	systemIn = getchar();
	while (systemIn == ' ' && systemIn != '\n');
	printf("What IDE will you use to develop programs? ");
	environment = getchar();
	while (environment == ' ' && environment != '\n');
	printf("Based on what you know at this time, what do you dislike most about this course? ");
	dislike = getchar();
	while (dislike == ' ' && dislike != '\n');
	printf("Based on what you know at this time, what do you like most about this course? ");
	like = getchar();
	while (like == ' ' && like != '\n');
	printf("What are the most important things the instructor should know about you? ");
	instructorKnow = getchar();
	while (instructorKnow == ' ' && instructorKnow != '\n');
	printf("What are the mose important things the instructor should do to help you? ");
	instructorDo = getchar();
	while (instructorDo == ' ' && instructorDo != '\n');
	printf("If an in-person meeting is needed with your instructor, which PCC campus would be the most convenient? ");
	campus = getchar();
	while (campus == ' ' && campus != '\n');
	
	/////////////////OUTPUT////////////OUTPUT/////////////////////

	printf("\n\nMy name is: ");
	putchar(name);
	while (name != '\n');

	printf("");
	putchar(reason);
	while (reason != '\n');

	printf("");
	putchar(experience);
	while (experience != '\n');

	printf("The system I will use to develop programs is: ");
	putchar(systemIn);
	while (systemIn != '\n');

	printf("The IDE I will use to develop programs is: ");
	putchar(environment);
	while (environment != '\n');

	printf("What I dislike the most thus far is: ");
	putchar(dislike);
	while (dislike != '\n');

	printf("What I like the most thus far is: ");
	putchar(like);
	while (like != '\n');

	printf("What the instructor should know about me is: ");
	putchar(instructorKnow);
	while (instructorKnow != '\n');

	printf("What the instructor should do to help me is: ");
	putchar(instructorDo);
	while (instructorDo != '\n');

	printf("If an in-person meeting is required, the campus most convenient for me is: ");
	putchar(campus);
	while (campus != '\n');

	return 0;
}

