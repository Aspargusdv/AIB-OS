#include <stdio.h>
#include <iostream>
#include <array> 
#include <math.h>
#include <vector>
#include <stdlib.h> 
#include <time.h>  
#include <cstdlib>
#include <ctime>

using namespace std;
int userInput;
string userInpot;
string questions[4]{ "Calculator	", "Pascal triangle" , "Sierpinski triangle" , "Game!		" };
string classes[4] = { "Wizard " , "Warrior" , "Healer " , "Archer " };
string acoes[4] = { "Looking for monsters  " , "looking for medicine  " , "looking for weapons   " , "TRY TO DEFEAT THE BOSS" };
int numeros[4] = { 1,2,3,4 };
int n = 16;
int a = 1;
bool value;
string userName;
char op;
float num1, num2;
int rows, coef = 1, i, j;


class wizard {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void callwizard() {
		cout << endl;
		cout << "You have chosen the Wizard class" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}

};
class warrior {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void callwarrior() {
		cout << endl;
		cout << "You have chosen the Warrior class" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}
};
class healer {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void callHealer() {
		cout << endl;
		cout << "You have chosen the Healer class" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}
};
class archer {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void callArcher() {
		cout << endl;
		cout << "You have chosen the archer class" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}

	//hp -) health points
	//xp -) experience points
	//ap-) atack points
};
class jelly {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void calljelly() {
		cout << endl;
		cout << "You have found Jelly" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}
};
class wearwolf {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void callwearwolf() {
		cout << endl;
		cout << "You have found the Wearwolf" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}

};
class darkspirit {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void calldarkspirit() {
		cout << endl;
		cout << "You have found the Dark Spirit" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}

};
class superbear {
public:
	int id;
	int hp;
	int ap;
	int xp;
	void callsuperbear() {
		cout << endl;
		cout << "You have found the Super-Bear" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}

};
class medkit {
public:
	int hp;

	void callmedkit() {
		cout << "You have found a medkit" << endl;
		cout << endl;
		cout << "It heals your wounds and gives you more Hp" << endl;
		cout << endl;
		cout << "+ " << hp << "HP" << endl;
		cout << endl;
	}
};
class bandage {
public:
	int hp;
	void callbandage() {
		cout << endl;
		cout << "You have found a bandage" << endl;
		cout << endl;
		cout << "It heals your wounds and gives you more Hp" << endl;
		cout << endl;
		cout << "+" << hp << "HP" << endl;
		cout << endl;
	}
};
class excalibur {
public:
	int ap;
	void callexcalibur() {
		cout << endl;
		cout << "You have found the mighty excalibur from the legends!!!" << endl;
		cout << endl;
		cout << "It feels like you can take on the world " << endl;
		cout << endl;
		cout << "+" << ap << "AP" << endl;
		cout << endl;
	}
};
class leviathan {
public:
	int ap;
	void calleviathan() {
		cout << endl;
		cout << "You have found the legendary weapon that the God-Killer KRATOS used!" << endl;
		cout << endl;
		cout << "It feels like you can take on the world" << endl;
		cout << endl;
		cout << "+" << ap << "AP" << endl;
		cout << endl;
	}
};
class longsword {
public:
	int ap;
	void callongsword() {
		cout << endl;
		cout << "You have found an Ancient weapon used by soldiers from medival ages!" << endl;
		cout << endl;
		cout << "It feels like you can take on the world" << endl;
		cout << endl;
		cout << "+" << ap << "AP" << endl;
		cout << endl;
	}

};
class wand {
public:
	int ap;
	void callwand() {
		cout << endl;
		cout << "You found the Harry Potter wand" << endl;
		cout << endl;
		cout << "It feels like you can take on the world" << endl;
		cout << endl;
		cout << "+" << ap << "AP" << endl;
		cout << endl;
	}
};
class BOSS {
public:
	int id;
	int ap;
	int xp;
	int hp;
	void callboss() {
		cout << endl;
		cout << "YOU ARE GOING TO DIE" << endl;
		cout << "HP: " << hp << endl;
		cout << "AP: " << ap << endl;
		cout << "XP: " << xp << endl;
		cout << endl;
	}

};

longsword l2;
wand w4;
leviathan l1;
excalibur e1;
wizard w1;
warrior w2;
healer  h1;
archer a1;
medkit med1;
bandage bg1;
jelly j2;
wearwolf w3;
darkspirit d1;
superbear s1;
BOSS b1;
int numbermeds = 2;
int numberweapons = 0;
int numbmonsterkill = 0;
void resetstats() {
	w1.hp = 0;
	w1.ap = 0;
	w1.xp = 0;
	w1.id = 0;
	w2.hp = 0;
	w2.ap = 0;
	w2.xp = 0;
	h1.hp = 0;
	h1.ap = 0;
	h1.xp = 0;
	a1.hp = 0;
	a1.ap = 0;
	a1.xp = 0;
	numberweapons = 0;
	numbmonsterkill = 0;
	numbermeds = 2;


}
void choices();
void dying();
void stats();
void help() {

	for (int i = 0; i <= 3; i++)
		cout << "-" << questions[i] << "\t" << numeros[i] << endl;


}
int calculator() {

	cout << "So you want to do Math?   yes/no" << endl;
	cout << endl;
	cout << userName << ": ";
	cin >> userInpot;
	cout << endl;
	if (userInpot == "yes") {
		cout << " OK then, enter operator: +, -, *, /: " << endl;
		cout << endl;
		cout << userName << ":";
		cin >> op;

		cout << "Enter the first number: " << endl;
		cout << userName << ":";
		cin >> num1;
		cout << endl;
		cout << "Enter the second number: " << endl;
		cout << userName << ":";
		cin >> num2;
		cout << endl;

		switch (op) {
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2;
			cout << endl;
			break;

		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
			cout << endl;
			break;

		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2;
			cout << endl;
			break;

		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2;
			cout << endl;
			break;

		default:

			cout << "just type one of the operator is that so hard?";
			cout << endl;

			break;
		}
		cout << endl;
		help();
		choices();
		return 0;
	}
	else if (userInpot == "no") {
		cout << "then why did you pick the calculator?" << endl;

		cout << endl;
		help();
		choices();
		return 0;

	}
	else {
		cout << "at least write yes or no" << endl;
		cout << endl;
		help();
		choices();
		return 0;
	}
}
void introduction() {
	char ch{ 34 };
	cout << "TYPE " << ch << "on" << ch << " TO TURN ON AIB OS" << endl;
	cin >> userInpot;
	if (userInpot == "on") {
		cout << "WELCOME to AIB OS";
		cout << endl;
		cout << "I'm an AI who opens everything for you," << endl;
		cout << endl;
		cout << "From the options that I can give you can choose one of them ";
		cout << endl;
		cout << "Hello!" << endl;
		cout << endl;
		cout << "Guest: ";
		cin >> userInpot;
		cout << endl;
		cout << "My Name is Legion, What is your name ?" << endl;
		cout << endl;
		cout << "Guest: ";
		cin >> userName;
		cout << endl;
		cout << "Hi again " << userName << ", Down bellow you'll have the options that you can choose" << endl;
		cout << endl;
		cout << "To choose one of them just write the number in front of the option!" << endl;
		help();


	}
	else {
		introduction();
	}
}
void bossfight() {

	if ((w1.id == 1 ||  w2.id == 2 || h1.id == 3 || a1.id == 4) && b1.id == 14) {
		
		if ((w1.ap | w2.ap | h1.ap | a1.ap) >= 18) {
			numbmonsterkill++;
			cout << endl;
			cout << "Boss: Impossible..." << endl;
			cout << endl;
			cin.get();
			cout << "Boss: How did you..." << endl;
			w1.xp += 10000000000;
			w2.xp += 10000000000;
			h1.xp += 10000000000;
			a1.xp += 10000000000;
			cout << "you have gained 10000000000 XP " << endl;
			stats();

		}

		else if ((w1.ap | w2.ap | h1.ap | a1.ap) < 18) {
			cout << "I WARNED YOU NOW ITS TIME TO DIE " << endl;
			cout << endl;
			cin.get();
			cout << endl;
			cout << "Your hp is -10000000000000" << endl;
			cout << endl;
			cout << "DEAD END" << endl;
			dying();
		}
		else {
			cout << "error!" << endl;
		}
	}
	else {
		cout << "error!";
	}
}
void boss() {
	b1.id = 14;
	cout << "####### ####### ######   #####" << endl;
	cout << "     #  #     # #     # #     # " << endl;
	cout << "    #   #     # #     # #        " << endl;
	cout << "   #    #     # ######  #  #### " << endl;
	cout << "  #     #     # #   #   #     # " << endl;
	cout << " #      #     # #    #  #     # " << endl;
	cout << "####### ####### #     #  #####  " << endl;
	if (numbmonsterkill == 0) {
		cout << endl;
		cout << "Boss: WOW what a pure soul you didn't even try to kill anyone! You just came to see me immediatly " << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Weren't you scared that you could die instantly?" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Probably not" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: You are a pure soul and for that..." << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: I WILL CONSUME YOU AND YOU WILL BECOME ONE OF US " << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Your hp is -10000000000000" << endl;
		cout << endl;
		cout << "DEAD END" << endl;
		dying();
	}
	else if (1 <= numbmonsterkill && numbmonsterkill <= 2) {
		cout << endl;
		cout << "BOSS: OH finally it took you long enough " << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "BOSS: Oh wait im supposed to say ARGH I WILL EAT YOU" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "BOSS: Enh I guess im not in the mood" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "BOSS: Mhhhhhhhhhhhhhh..." << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "BOSS: Do you want to fight?" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "BOSS: Wait dont awnser, I dont want to, just take the XP and go." << endl;
		cout << endl;
		w1.xp += 10;
		w2.xp += 10;
		h1.xp += 10;
		a1.xp += 10;
		cout << "You have gained 10 XP" << endl;
		cout << endl;
	}
	else if (3 <= numbmonsterkill && numbmonsterkill <= 4) {
		cout << "BOSS: Well Well Well, look who it is... " << endl;
		cout << endl;
		cin.get();
		cout << "BOSS: You think you have the right to do this??" << endl;
		cout << endl;
		cin.get();
		cout << "BOSS: You just enter MY forest, kill most of my friends, come to my house..." << endl;
		cout << endl;
		cin.get();
		cout << "BOSS: AND YOU TRY TO KILL ME ?!" << endl;
		cout << endl;
		cin.get();
		cout << "BOSS: YOU CAN'T KILL ME ITS IMPOSSIBLE" << endl;
		cout << endl;
		cin.get();
		cout << "BOSS: OH YOU ARE TRYING TO LEAVE NO NO NO NO" << endl;
		cout << endl;
		cin.get();
		cout << "BOSS: NOW I WILL HAVE MY VENGENCE" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Your hp is -10000000000000" << endl;
		cout << endl;
		cout << "DEAD END" << endl;
		dying();



	}
	else if (numbmonsterkill <= 5) {
		cout << endl;
		cout << "Boss: So you finally decided to face me..." << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: What a foollish creature... leave NOW " << endl;
		cin.get();
		cout << endl;
		cout << "Boss: I dont know if you noticed but you killed a lot of monsters" << endl;
		cin.get();
		cout << endl;
		cout << "Boss: A total of " << numbmonsterkill << ", are you satisfied?" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Do you feel like a winner now?" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Just leave... I have nothing for you here, after you killed so much of my family" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Why? just because a villager said so? Please leave I'm not in the mood for this" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Next time someone asks you to kill someone think twice ok? Now... just leave" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: Your still here?" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: leave please, just close the game alredy" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: PLAYER please close the game" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: leave!" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: leave, close the game alredy " << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: leave, leave, leave, LEAVE GOD DAMMIT" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: C'mon LEAVE NOW OR I WILL GET MAD" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Boss: IF YOU WONT CLOSE THE GAME I WILL KILL YOU " << endl;
		cout << endl;
		cout << "Boss: OK THATS IT PREPARE FOR BATTLE I WILL END YOU" << endl;
		bossfight();


	}
	else {
		cout << "error" << endl;
	}

}
void dying() {
	if ((w1.hp | w2.hp | h1.hp | a1.hp) <= 0) {
		cout << endl;
		cout << "DEAD END" << endl;
		cout << endl;
		void xptraker();
		cout << endl;
		help();
		choices();

	}
}
//choosing the class
void xptraker() {
	if (w1.id == 1) { cout << "YOUR TOTAL XP WAS: " << w1.xp << " And you killed " << numbmonsterkill << " monsters!" << endl; }
	else if (w2.id == 2) { cout << "YOUR TOTAL XP WAS: " << w2.xp << " And you killed " << numbmonsterkill << " monsters!" << endl; }
	else if (h1.id == 3) { cout << "YOUR TOTAL XP WAS: " << h1.xp << " And you killed " << numbmonsterkill << " monsters!" << endl; }
	else if (a1.id == 4) { cout << "YOUR TOTAL XP WAS: " << a1.xp << " And you killed " << numbmonsterkill << " monsters!" << endl; }
	else { cout << "error" << endl; }
}
void stats() {
	if (w1.id == 1) {

		cout << "Your stats are:" << endl;
		cout << "HP: " << w1.hp << endl;
		cout << "AP: " << w1.ap << endl;
		cout << "XP: " << w1.xp << endl;
		cout << endl;
	}
	else if (w2.id == 2) {
		cout << "Your stats are:" << endl;
		cout << "HP: " << w2.hp << endl;
		cout << "AP: " << w2.ap << endl;
		cout << "XP: " << w2.xp << endl;
		cout << endl;
	}
	else if (h1.id == 3) {
		cout << "Your stats are:" << endl;
		cout << "HP: " << h1.hp << endl;
		cout << "AP: " << h1.ap << endl;
		cout << "XP: " << h1.xp << endl;
		cout << endl;
	}
	else if (a1.id == 4) {
		cout << "Your stats are:" << endl;
		cout << "HP: " << a1.hp << endl;
		cout << "AP: " << a1.ap << endl;
		cout << "XP: " << a1.xp << endl;
		cout << endl;
	}
	else {
		cout << " error" << endl;
		cout << endl;
	}
}

void classs()
{
	cout << "Before starting this adventure you need to choose your class." << endl;
	cout << endl;
	cout << "You cand choose your class by typing 1 , 2 , 3 or 4." << endl;
	cout << endl;
	cout << "Choose your class: " << endl;
	cout << endl;
	for (int i = 0; i <= 3; i++)
		cout << "-" << classes[i] << "    -)" << numeros[i] << endl;
	cin >> userInput;

	switch (userInput)
	{
	case 1:
		w1.id = 1;
		w1.ap = 2;
		w1.hp = 1;
		w1.xp = 0;
		w1.callwizard();
		break;
	case 2:
		w2.id = 2;
		w2.ap = 1;
		w2.hp = 1;
		w2.xp = 1;
		w2.callwarrior();
		break;

	case 3:
		h1.id = 3;
		h1.ap = 0;
		h1.hp = 3;
		h1.xp = 0;
		h1.callHealer();
		break;
	case 4:
		a1.id = 4;
		a1.ap = 1;
		a1.hp = 2;
		a1.xp = 0;
		a1.callArcher();
		break;
	default:
		cout << "Please select your class by typing the numbers 1 , 2 , 3 or 4." << endl;
		cout << endl;
		classs();
	}
}
void ResetMonsters() {
	j2.id = 0;
	w3.id = 0;
	d1.id = 0;
	s1.id = 0;
}
//ramdom medicine generator
void lookingmedicine() {


	switch (rand() % 2) {
	case 0:
		med1.hp = 6;
		med1.callmedkit();
		if (w1.id == 1) {
			w1.hp += 6;
			cout << "Your current hp is: " << w1.hp << endl;
		}
		else if (w2.id == 2) {
			w2.hp += 6;
			cout << "Your current hp is: " << w2.hp << endl;
		}
		else if (h1.id == 3) {
			h1.hp += 6;
			cout << "Your current hp is: " << h1.hp << endl;
		}
		else if (a1.id == 4) {
			a1.hp += 6;
			cout << "Your current hp is: " << h1.hp << endl;
		}
		else {
			cout << "error";
		}
		break;
	case 1:
		bg1.hp = 3;
		bg1.callbandage();
		if (w1.id == 1) {
			w1.hp += 3;
			cout << "Your current hp is: " << w1.hp << endl;
		}
		else if (w2.id == 2) {
			w2.hp += 3;
			cout << "Your current hp is: " << w2.hp << endl;
		}
		else if (h1.id == 3) {
			h1.hp += 3;
			cout << "Your current hp is: " << h1.hp << endl;
		}
		else if (a1.id == 4) {
			a1.hp += 3;
			cout << "Your current hp is: " << a1.hp << endl;
		}
		else {
			cout << "error";
		}
		break;
	}

}
//ramdom monster generator
void lookingmonsters() {


	ResetMonsters();

	switch (rand() % 4)
	{
	case 0:
		j2.id = 11;
		j2.ap = 8;
		j2.hp = 5;
		j2.xp = 1;
		j2.calljelly();


		break;
	case 1:
		w3.id = 12;
		w3.ap = 10;
		w3.hp = 6;
		w3.xp = 3;
		w3.callwearwolf();


		break;
	case 2:
		d1.id = 13;
		d1.ap = 12;
		d1.hp = 8;
		d1.xp = 6;
		d1.calldarkspirit();


		break;
	case 3:
		s1.id = 14;
		s1.ap = 16;
		s1.hp = 7;
		s1.xp = 9;
		s1.callsuperbear();


		break;
	}
}
void combat() {

	cout << "FIGHT!!" << endl;
	cout << " press p to battle" << endl;
	cin >> userInpot;

	if (userInpot == "p") {
		if ((w1.id == 1 || w2.id == 2 || h1.id == 3 || a1.id == 4) && j2.id == 11) {
			stats();
			j2.calljelly();
			if ((w1.ap | w2.ap | h1.ap | a1.ap) > 8) {
				cout << "YOU WIN!" << endl;
				cout << "You get more 1 XP" << endl;
				if (w1.id == 1) { w1.xp += 1; }
				else if (w2.id == 2) { w2.xp += 1; }
				else if (h1.id == 3) { h1.xp += 1; }
				else if (a1.id == 4) { a1.xp += 1; }
				else { cout << "error" << endl; }
				numbmonsterkill++;

				stats();
				cout << endl;
				cout << "You have killed " << numbmonsterkill << " monsters" << endl;
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) == 8) {
				cout << "You and Jelly got hurt" << endl;
				cout << "You lose -1 HP" << endl;
				if (w1.id == 1) { w1.hp -= 1; }
				else if (w2.id == 2) { w2.hp -= 1; }
				else if (h1.id == 3) { h1.hp -= 1; }
				else if (a1.id == 4) { a1.hp -= 1; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) < 8) {
				cout << "You got demolished by a jelly I would be embareced" << endl;
				cout << "You lose -2 HP" << endl;
				if (w1.id == 1) { w1.hp -= 2; }
				else if (w2.id == 2) { w2.hp -= 2; }
				else if (h1.id == 3) { h1.hp -= 2; }
				else if (a1.id == 4) { a1.hp -= 2; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else {
				cout << "error!";
			}
		}
		else if ((w1.id == 1 || w2.id == 2 || h1.id == 3 || a1.id == 4) && w3.id == 12) {
			stats();
			w3.callwearwolf();
			if ((w1.ap | w2.ap | h1.ap | a1.ap) > 10) {
				cout << "YOU WIN!" << endl;
				cout << "You get more 3 XP" << endl;
				if (w1.id == 1) { w1.xp += 3; }
				else if (w2.id == 2) { w2.xp += 3; }
				else if (h1.id == 3) { h1.xp += 3; }
				else if (a1.id == 4) { a1.xp += 3; }
				else { cout << "error" << endl; }
				numbmonsterkill++;
				stats();
				cout << endl;
				cout << "You have killed " << numbmonsterkill << " monsters" << endl;
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) == 10) {
				cout << "You and the wearwolf got hurt" << endl;
				cout << "You lose -1 HP" << endl;
				if (w1.id == 1) { w1.hp -= 1; }
				else if (w2.id == 2) { w2.hp -= 1; }
				else if (h1.id == 3) { h1.hp -= 1; }
				else if (a1.id == 4) { a1.hp -= 1; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) < 10) {
				cout << "You got your arm beat by a wearwolf" << endl;
				cout << "You lose -2 HP" << endl;
				if (w1.id == 1) { w1.hp -= 2; }
				else if (w2.id == 2) { w2.hp -= 2; }
				else if (h1.id == 3) { h1.hp -= 2; }
				else if (a1.id == 4) { a1.hp -= 2; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else {
				cout << "error!";
			}
		}
		else if ((w1.id == 1 || w2.id == 2 || h1.id == 3 || a1.id == 4) && d1.id == 13) {
			stats();
			d1.calldarkspirit();
			if ((w1.ap | w2.ap | h1.ap | a1.ap) > 12) {
				cout << "YOU WIN!" << endl;
				cout << "You get more 7 XP" << endl;
				if (w1.id == 1) { w1.xp += 7; }
				else if (w2.id == 2) { w2.xp += 7; }
				else if (h1.id == 3) { h1.xp += 7; }
				else if (a1.id == 4) { a1.xp += 7; }
				else { cout << "error" << endl; }
				numbmonsterkill++;
				stats();
				cout << endl;
				cout << "You have killed " << numbmonsterkill << " monsters" << endl;
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) == 12) {
				cout << "You and the Spirit got hurt" << endl;
				cout << "You lose -1 HP" << endl;
				if (w1.id == 1) { w1.hp -= 1; }
				else if (w2.id == 2) { w2.hp -= 1; }
				else if (h1.id == 3) { h1.hp -= 1; }
				else if (a1.id == 4) { a1.hp -= 1; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) < 12) {
				cout << "You got your soul destroyed by the spirit" << endl;
				cout << "You lose -2 HP" << endl;
				if (w1.id == 1) { w1.hp -= 2; }
				else if (w2.id == 2) { w2.hp -= 2; }
				else if (h1.id == 3) { h1.hp -= 2; }
				else if (a1.id == 4) { a1.hp -= 2; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else {
				cout << "error!";
			}
		}
		else if ((w1.id == 1 || w2.id == 2 || h1.id == 3 || a1.id == 4) && s1.id == 14) {

			stats();
			s1.callsuperbear();
			if ((w1.ap | w2.ap | h1.ap | a1.ap) > 16) {
				cout << "YOU WIN!" << endl;
				cout << "You get more 9 XP" << endl;
				if (w1.id == 1) { w1.xp += 9; }
				else if (w2.id == 2) { w2.xp += 9; }
				else if (h1.id == 3) { h1.xp += 9; }
				else if (a1.id == 4) { a1.xp += 9; }
				else { cout << "error" << endl; }
				numbmonsterkill++;
				stats();
				cout << endl;
				cout << "You have killed " << numbmonsterkill << " monsters" << endl;

			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) == 16) {
				cout << "You and the bear got hurt" << endl;
				cout << "You lose -1 HP" << endl << endl;
				if (w1.id == 1) { w1.hp -= 1; }
				else if (w2.id == 2) { w2.hp -= 1; }
				else if (h1.id == 3) { h1.hp -= 1; }
				else if (a1.id == 4) { a1.hp -= 1; }
				stats();
				dying();
			}
			else if ((w1.ap | w2.ap | h1.ap | a1.ap) < 16) {
				cout << "You got your leg eaten by the super bear, it was yummy" << endl;
				cout << "You lose -2 HP" << endl;
				if (w1.id == 1) { w1.hp -= 2; }
				else if (w2.id == 2) { w2.hp -= 2; }
				else if (h1.id == 3) { h1.hp -= 2; }
				else if (a1.id == 4) { a1.hp -= 2; }
				else { cout << "error" << endl; }
				stats();
				dying();
			}
			else {
				cout << "error!";
			}
		}

	}
	else {
		cout << "Just press p." << endl;
		cout << endl;
		combat();
	}
}
//ramdom weapon generator
void lookingweapons() {
	numberweapons++;

	switch (rand() % 4) {
	case 0:
		l2.ap = 3;
		l2.callongsword();
		if (w1.id == 1) {
			w1.ap += 3;
			cout << "Your current AP is: " << w1.ap << endl;
		}
		else if (w2.id == 2) {
			w2.ap += 3;
			cout << "Your current AP is: " << w2.ap << endl;
		}
		else if (h1.id == 3) {
			h1.ap += 3;
			cout << "Your current AP is: " << h1.ap << endl;
		}
		else if (a1.id == 4) {
			a1.ap += 3;
			cout << "Your current AP is: " << a1.ap << endl;
		}
		else {
			cout << "error";
		}
		break;
	case 1:
		w4.ap = 6;
		w4.callwand();
		if (w1.id == 1) {
			w1.ap += 6;
			cout << "Your current AP is: " << w1.ap << endl;
		}
		else if (w2.id == 2) {
			w2.ap += 6;
			cout << "Your current AP is: " << w2.ap << endl;
		}
		else if (h1.id == 3) {
			h1.ap += 6;
			cout << "Your current AP is: " << h1.ap << endl;
		}
		else if (a1.id == 4) {
			a1.ap += 6;
			cout << "Your current AP is: " << a1.ap << endl;
		}
		else {
			cout << "error";
		}
		break;
	case 2:
		l1.ap = 8;
		l1.calleviathan();
		if (w1.id == 1) {
			w1.ap += 8;
			cout << "Your current AP is: " << w1.ap << endl;
		}
		else if (w2.id == 2) {
			w2.ap += 8;
			cout << "Your current AP is: " << w2.ap << endl;
		}
		else if (h1.id == 3) {
			h1.ap += 8;
			cout << "Your current AP is: " << h1.ap << endl;
		}
		else if (a1.id == 4) {
			a1.ap += 8;
			cout << "Your current AP is: " << a1.ap << endl;
		}
		else {
			cout << "error";
		}
		break;
	case 3:
		e1.ap = 10;
		e1.callexcalibur();
		if (w1.id == 1) {
			w1.ap += 10;
			cout << "Your current AP is: " << w1.ap << endl;
		}
		else if (w2.id == 2) {
			w2.ap += 10;
			cout << "Your current AP is: " << w2.ap << endl;
		}
		else if (h1.id == 3) {
			h1.ap += 10;
			cout << "Your current AP is: " << h1.ap << endl;
		}
		else if (a1.id == 4) {
			a1.ap += 10;
			cout << "Your current AP is: " << a1.ap << endl;
		}
		else {
			cout << "error";
		}
		break;

	}




}
// the beggining of the game
void escolha() {
	cout << "Villager: Hello adventurer, this vilage is being atacked by the MONSTERS who live in the DARK FOREST," << endl;
	cout << endl;
	cin.get();
	cout << endl;
	cout << "Villager: Your job is to save this vilage by defeating the BOSS, " << endl;
	cout << endl;
	cin.get();
	cout << endl;
	cout << "Villager: You have a list of options to develop your atributes HP(HEALTH POINTS) ,AP (ATACK POINTS) and XP (EXPERIENCE)," << endl;
	cout << endl;
	cin.get();
	cout << endl;
	cout << "Villager: Your objective is to have the best atribuites so you can defeat the boss." << endl;
	cout << endl;
	cin.get();
	cout << endl;
	cout << "Villager: The more XP you have the better you are doing! Try to kill as many monsters as you can!!" << endl;
	cout << endl;
	cin.get();
	cout << endl;
	cout << "Villager: Are you ready?    yes/no " << endl;
	cin >> userInpot;
	cout << "\n";
	if (userInpot == "yes") {
		cout << "So lets begin!!" << endl;
		while (a <= 5) {
			cout << a << endl;
			cout << endl;
			a++;
		}
		cout << "\n";
	}
	else if (userInpot == "no") {
		cin.get();
		cout << " . . . what are you doing here then?" << endl;
		cout << endl;
		cin.get();
		cout << endl;
		cout << "Just go to your world again you MONSTER!" << endl;
		exit(0);
	}
	else {
		cout << "Oh you didn't write yes or no xD, now u will have to see the beginning again." << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		escolha();
	}
}
// principle menu
void menu() {
	srand(time(NULL));
	cout << endl;
	cout << "Options Menu:" << endl;
	for (int i = 0; i <= 3; i++)
		cout << "-" << acoes[i] << "    -)" << numeros[i] << endl;
	cout << endl;
	cin >> userInput;
	switch (userInput)
	{
	case 1:
		
		cout << "You are looking for monsters" << endl;
		cout << "\n";
		cin.get();
		lookingmonsters();
		combat();
		menu();
		break;
	case 2:

	
		cout << "Your stamina to look for medicine is: " << numbermeds << endl;
		
		
		cout << endl;
		if (numbermeds <= 0) {
			cout << "You are too tired to look for medicine" << endl;
			menu();
		}
		 else if (numbermeds > 0){
			numbermeds--;
			cout << " You are looking for medicine" << endl;
			cout << endl;
			cin.get();
			lookingmedicine();
			cout << endl;
			cout << "Your current stamina is: " <<  numbermeds << endl;
			menu();
		}
		 else {
			cout << "error" << endl;
		}
	
		break;
	case 3:
		cout << "Your carrying " << numberweapons << " weapons" << endl;
		if (numberweapons == 2) {
			cout << "You cannot carry more than 2 weapons" << endl;
			menu();
		}
		else {
			cout << "You are looking for weapons" << endl;
			cout << endl;
			cin.get();
			lookingweapons();
			menu();
		}
		break;
	case 4:
		cout << "Are you sure you want to try to defeat the boss?  yes/no. " << endl;
		cin >> userInpot;
		if (userInpot == "yes") {
			cout << "Ok good luck, you will need it " << endl;
			cout << endl;
			cin.get();
			cout << endl;
			boss();
			cout << endl;
			cin.get();
			cout << endl;
			cout << "Congratulations you have finished the game" << endl;
			cout << endl;
			cin.get();
			cout << endl;
			xptraker();
			cout << endl;
			help();
			choices();

		}
		else if (userInpot == "no") {
			cout << "Wise choice!" << endl;
			menu();

		}
		else {
			cout << "dude just type yes or no is that so hard?" << endl;
			menu();
		}
		break;
	default:
		menu();
		break;
	}
}
int pascaltriangle() {
	int rows, coef = 1, i, j;

	cout << "Enter number of rows: " << endl;
	cout << userName << ": ";
	cin >> rows;

	for (i = 0; i < rows; i++)
	{
		for (int space = 1; space <= rows - i; space++)
			cout << "  ";

		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j + 1) / j;

			cout << coef << "   ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	help();
	choices();
	return 0;
}
void Sierpinski(int n)
{
	for (int y = n - 1; y >= 0; y--) {


		for (int i = 0; i < y; i++) {
			cout << " ";
		}

		for (int x = 0; x + y < n; x++) {


			if (x & y)
				cout << " " << " ";
			else
				cout << "* ";
		}

		cout << endl;
	}
	cout << endl;
	cout << endl;
	help();
	choices();
}

void choices() {
	cout << userName << ": ";
	cin >> userInpot;
	cout << endl;
	if (userInpot == "1") {
		calculator();
	}

	else if (userInpot == "2") {
		pascaltriangle();

	}
	else if (userInpot == "3") {
		Sierpinski(n);
	}
	else if (userInpot == "4") {
		resetstats();
		classs();
		escolha();
		menu();
	}
	else {
		cout << "choose something!!" << endl;
		cout << endl;
		choices();
	}



}

int main() {
	introduction();
	choices();
}
