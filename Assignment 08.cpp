// Assignment 08.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<string>
#include<windows.h>
using namespace std;
//void decleration for a game over
void gameOver();
int main() {
	//Opens the promt in full screen 
	system("mode con COLS=700");
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	//variable to determine user's answer
	int answer;
	//The story is being told
	cout << "\nHenry Morgan's Escape\nFor this story, you are known as Henry Morgan, a great pirate from\nthe Golden Age of Piracy!\n\n" << endl;
	cout << "Your journey begins with you, being kept on a island\nslaving away against your will!\n\nDuring the time you're harvesting sugar cane\nA man hears you murmuring about how much you hate this place.\n\n\"I too left my homeland in search of riches and fame\nand yet here I am slaving away after 6 years!\",he says" << endl;
	cout << "\n\nWhat do you do?\n1. Talk to him\n\n2.Ignore him\n" << endl;
	cin >> answer;
	cout << "" << endl;
		if (answer == 1) {
			cout << "\"Help me then\", you respond\n\"I've got a plan to get us out of here!\"\n\"By the way, the name's Henry Morgan!\", you respond eagerly\n\n\"Count me in!\", he quickly replied\n\"The name's David, Jean David of France!\", he says" << endl;
		}
		else if (answer == 2) {
			cout << "\"Not much of a of talker eh?\", he says\n\"Well, what if I told yee I've got a plan to get out of this hell hole?\"\n\n\"Count me in!, Anyything to leave this forsaken place!\", you quickly respond\n\"By the way, The name's Morgan, Henry Morgan, future King of the Sea!\"" << endl;
		}
	cout << "\n\n*Wuh-PSSSSH!* *Wuh-PSSSSH!*\n\n\"Quit yer' slakin' and get back to work DOGS!\",exclaimed the tyrant\n\"One more utter out of yee means no supper tonight!\"\n\n" << endl;
	cout << "What do you do?\n1.Get back to work without saying a thing.\n\n2.Get up and fight back!\n" << endl;
	cin >> answer;
	cout << "" << endl;
		if (answer == 1) {
			cout << "With anger in your eyes, you bite your tounge and get back to work.\nAfter some time, the master finally leaves\n\n\*pssst*\n\"David, Let's meet during supper, we need to get out this wretched place soon!\"\n\n\"Agreed Morgan, now shut it before we catch the guards' attention.\"" << endl;
		}
		if (answer == 2) {
			cout <<"Anger overwhlems you! You'll do anything to get out of this horrible place!\nYou glance at your machete, thinking the only way to get out of here is to kill the oppresor You quickly get up\nas soon as you raise your weapon to throw it at the master.\nOne of the guards shoots you in the back of the head."<<endl;
			gameOver();
			system("PAUSE");
			return 0;
		}
		cout << "\nAs the day went on, both men seemed to work allot faster and harder\nFor it was their desire to escape the clutches of their cruel oppressor\nthat fueled their hard labor for that day\n\nThe sun has set, and it was finally time for supper.\nBoth you and David sit next to each other. Suddenly, the Master comes in\n\n" << endl;
		cout << "\"You!\", says the tyrant pointing at you\n\"I want you to sit right here, next to me where I can see you!\"\n\"I don't know if you and that other dog were\nplanning something stupid, but I musn't take any chances.\"\n\n" << endl;
		cout << "What do you do?\n\n1.Do as the tyrant says and sit next him\n2.Refuse his orders and sit wherever you want\n" << endl;
		cin >> answer;
		if (answer == 1) {
			cout << "\"Yes sir.\",You reply, trying back to hold your anger.\n\n\"Good boy! Just for that you get a little extra food tonight\",says the Tyrant\n\nHe then proceeds to hand you a piece of bread\nJust when you're about to grab it, he drops it to the ground and steps on it\n\n\"Enjoy, you filthy maggot!\"\n\n" << endl;
			cout << "What do you do?\n\n1.Take the piece of bread off the ground and eat it\n2.Pick up the piece of bread and toss it at him\n3.Leave the bread alone and proceed to eat your food." << endl;
			cout << "" << endl;
			cin >> answer;
			switch (answer) {
			case 1:
				cout << "A few minutes after eating the bread, you start to feel sick.\nYou then start to shake uncontrollably\nYou fall to the ground, and after 3 minutes of that, you die." << endl;
				gameOver();
				return 0;
				break;
			case 2:
				cout << "You toss the piece of bread and manage to get it into his mouth\nYour master quickly spits it out\n\n\"You dare refuse my generosity!\nGuards! take this damn dog to his cage where he belongs!\",exclaims the Tyrant\n\nDavid chuckles under his breathe. The look on the tyrant's face was priceless!\n\n\"AAAHH HAHAHAHA!\",David laughs uncontrolably\n\"You should've look at your face!\"\n\n\"Perhaps you'd like to join your new friend, MAGGOT!?\",exclaims the Tyrant\n\n\"No sir.\",said David" << endl;
				break;
			case 3:
				cout << "You dare refuse my generosity!,exclaims the Tyrant\n*click* The Tyrant points a gun at you\n\n\"Either you eat it, like a good dog\nor catch a piece of metal in between your eyes!\"\n" << endl;
				cout << "Your pride gets the best of you, and stand with what you chose\nThe Tyrant pulls the trigger, leaving a hole in your head.\n\n\"This is what happens when you refuse to do as I say!\",exclaims the Tyrant" << endl;
				gameOver();
				system("PAUSE");
				return 0;
				break;
			defualt:
				cout << "Invalid answer! Good bye!" << endl;
				return 0;
			}
		}
		else if (answer == 2){
			cout << "*CLICK* The tyrant cocks his gun\n\"Get your ass right here, or I blow your damn brains out! NOW!!\"\n\nYou pick up your plate and start walking towards him.\nYou look at David, giving him a glance that says\nthat you're going to make him pay.\nHe shakes his head, telling you not to do it\nbut you have your mind set on burning his face with you hot soup." << endl;
			cout << "\"Sit your worthless ass down!\", screams the Tyrant\n\"And for talking bak to me!\"\n*SLAM!*\n\"You loose the privlage of eating tonight!\nNow pick that up before something bad happens!\"\n\n" << endl;
			cout << "You bend down to pick your stuff up\nWhat do you do?\n\n1.Grab the fork and stab your oppressor\n2.Refuse to pick up the filth.\n3.Grab what's on the ground and sit down" << endl;
			cin >> answer;
			cout << "" << endl;
			switch (answer) {
			case 1:
				cout << "You grab the fork and in one swift motion, you stab him in the eye.\n\"Hurry! Everyone! Grab something, fight back!\",you shout.\n but no no avail, guards come barging into the cafeteria\n\n\"Shoot him!, the dog from earlier stabbed me in the eye!\",screams the tyrant\n\nThe guards then gun you down, leaving countless holes in your body.\n\n\"Now, let that be a lesson to all who try to oppose me!\",yells the Tyrant\n\nYou have died\n\nGAME OVER!" << endl;
				system("PAUSE");
				return 0;
				break;
			case 2:
				cout <<"He then points the gun back at you\n\"Either you pick it up, or you die where you stand!\",demands the Tyrant\n\nYou stay there, without moving a muscle\n\n\"Do it, free me from your cruel clutches! You know damn\nwell you'd be doing me a favor by pulling that trigger!\", you scream out\n\n\"Enough of this! Just for that, I'm going to make your life a lot\nworse from now on!\"\n\"GUARDS! Take him away to the cage where he belongs!\", demands the master"<<endl;
				break;
			case 3:
				cout << "You pick up all of the filth and take a seat beside your master.\nAs soon as you sit down he pulls the trigger, shooting you in the back of the head.\n\n\"EVERYONE! THIS IS WHAT HAPPENS WHEN YOU REFUSE MY ORDERS!\nGOT IT!\", exclaims the Tyrant" << endl;
				gameOver();
			default:
				cout << "Invalid answer! Good Bye!" << endl;
			}
		}
		cout << "\n\nYou are thrown into a cell, far away from the normal sleeping quarters.\n\nFrom a distance you can see the tyrant's mansion.\n\n\"That took guts what you did back there!,said one of the guards.\n\"So, what's your name anyway?\"\n\n\"Henry...\",you respond.\n\n\"Well Henry, I'm going to be blunt, I hate how this jerk treats his slaves.\"\n\"I was one myself, but he took a liking to me\"\nInstead of being released like I was promised.\"\n\"He took me in as one of his gaurds instead.\n\"I hate it! How about we team up and get out of the damn place?\"\n\n\"You lie, you just want to see if I scheme something\nto take my life where I stnad.\",you reply in a low voice\n\n" << endl;
		cout << "\"Earlier in the fields, I saw you talking to some lad next to yee.\nI wasn't able to make out exactly what yee was talking about\n\"All I heard was Count me in!\"\nWhich made me think that you were up to something!\nI'm not taking no for an answer!\"\n\n" << endl;
		cout << "How do you respond?\n\n1.\"Ok! Fine, you got me, truth is, the lad I was talking to, and myself\nwere suppose to plan an escape, but that scoundrel threw me in here!\"\n\n2.\"I'm not tellin' yee anything!\"\n\n3.\"Prove it..\nProve to me your loyalty, and only then will I tell you what's really going on.\"\n\n";
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "\n\n\"I can help you! Allow me to intorduce myself. My name is Alexander.\n\n All I have to do is to get the other guy thrown in here with you, that way, we can discuss our plan of escape!\",says the guard\n\n\"Great! I might not know much about him\n\nbut I do know that he has a short temper, use that. Should be simple enough.\",you respond\n\n" << endl;
			break;
		case 2:
			cout << "\"Oh come on! What do I need to do to prove to you that I'm telling the truth?! I'll do anything!\",says the guard in desperation.\n\n\You look at him dead in the eyes, you can tell he too craves his freedom\n\nHe's willing to do anything to be relieved from the tyrant's cruel clutches.\n\n\"Ok, tell you what, bring David to me, and onlt then will I say something. Savvy\",you respond confidently\n\n\"Consider it done! By the way, my name's Alexander.\",responds the guard" << endl;
				break;
		case 3:
			cout << "\"Alright! What is it that you want me to do? I'll do anything!\",the guard quickly responds\n\n\"Your finger..I want your finger.\",you respond\n\n\"Are..Are you serious?\",asks the guard\n\n\"I didn't stutter did I? Beside, you said anything, now either give me your finger, or leave me alone\",you respond\n\nAfter a while of silence, the guard pulls a knife from his pocket\n\n\"I said anything didn't I!? A finger is but a small price to pay for a chance at freedom!\nAAAAAHHHHHH!!!\"\n\n\"Wait! Don't do it!\", you scream right before the guard cuts his finger off\n\"I jest, you've no need to loose a finger, but that did demonstrate your commitment! You pass the test!\"\n\"Now, bring me Jean David so we may discuss our escape!\",you command him.\n\"By the way, waht's your name?\"\n\n\"Alexander\",responds the guard" << endl;
			cout << ""<<endl;
			break;
		default:
			cout << "Wrong answer! goodbye!" << endl;
			system("PAUSE");
			return 0;
		}
		cout << "As you wait for the guard to come back, you look around for anything that'll be of use to the escape.\nAt first glance there was nothing that caught your eyes, but among further inspection\nyou notice a couple of canoes on the shore close tho the mansion.\n\n\"Hm, that seems like the only way out of here. As soon as they are here, we're taking one and leaving once and fo all!\nEven so, what about the others, it wouldn't very royal of me to leave them behind.\nOn the other hand, there aren't enough canoes for everyone to escape.\nDAMMIT! I hate that it's either a select few of us, or no one!\"\n\nAll of your outlout thinking attracts the attention of one of the near by guards\nHe begins to walk towards you, trying to listen in on what you're muttering about\n\n" << endl;
		cout<<"\"Hey!\",he screams out. \"Who the hell are you talking to over here?\"\n\nWhat do you say?\n\n1.\"Nothing, just mad about being thrown in here.\"\n2.You say nothing, hoping that he'd leave you alone.\n3.\"None of your business lap dog! Now get out of here before I escape this cage!\"" << endl;
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "\"Mad?! You should be greatful that master didn't decide to blow your useless brains out!\", he screams\"Matter of fact, I should be the one to do it on his behalf!\"\nThe guard pulls a gun from his holster on his waist.\n*click*\n\n" << endl;
			cout << "\"That's enough Jaque, leave him alone, he's been through enough as it is today. Beside, have you forgotten he time you spent there too?\", says Alexander\n\nJaque simply stares at Alexander and leaves shortly after.\n\n\"What was that about?\",asks Alexander\n\n\"Nothing, he heard me complaining about being here,and said I should be greatful for being here than being dead.\",you respond\n\n\"Don't take it too personal\",says Alexander\"He's greatful to be alive and a guard of the master since he too almost died a couple years back\"\n\n\"I think you should use that, and recruit him Alexander. The more people we have on the inside, the better.\",you respond\n\n\"I can only try, but I must be cautious, he's too greatful to master for making him a guard\",responds Alexander\n\"Anyway, here's David, just like I promised.\"\n\n" << endl;
			break;
		case 2: cout << "\"Well?! Say something dog! You wouldn't shut up just a second ago! What, don't tell me you're scred of me!\",said one of the guards.\n\n\"You don't scare me, beside, it's nothing of your concern.\",you reply\n\n\"Well, I beg to differ, if you don't want to spit it out, it clearly means you're hiding something!\",insists the guard\n\n*clicl*\n\n\"Either you tell me, or you can say good-bye to your life DOG!\"\n\nYou stand your ground and don't day a thing.\n\n\"Enoughm Jaque! He's been through allot already! Put that away and leave, I'll handle this.\",says Alexander.\n\nJaque leaves with an angry expression\n\n\"Anyway, guess who I brought with me!\",says Alexander" << endl;
			break;
		case 3:
			cout << "*click*\n\n*BOOM*\n\n\"If that was a challenge to a fight, you clearly don't know who's on top of the food chain here!\",says the guard" << endl;
			gameOver();
			break;
		default:
			cout << "Wrong input, goodbye" << endl;
			system("PAUSE");
			return 0;
		}
		cout << "\"Good to see you David! Now, how about we get things started. as you know, it won't be easy, but it's not impossible either\",you say excitedly.\n\nCONGRADULATIONS ON MAKING IT THIS FAR! \n\n TO BE CONTINUED!" << endl;
	system("PAUSE");
	return 0;
}
//answer verification
/*int main() {
	int x;
	cin >> x;
	do {
		if (x == 1) {
			cout << "You entered 1" << endl;
		}
		else if (x == 2) {
			cout << "You entered 2" << endl;
		}
		else if (x != 1 || x != 2) {
			cout << "nope, try again" << endl;
			cin >> x;
		}
	} while (x != 1 && x != 2);
	system("PAUSE");
	return 0;
}*/
//game over screen 
void gameOver() {
	cout << "\nYou are now dead\nGAME OVER!\n\n" << endl;
	system("PAUSE");
	exit(0);
}