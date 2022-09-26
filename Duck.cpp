#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
// the pain begins here
using namespace std;
using std::cin;
using std::cout;
using std::transform;
using std::exit;
using std::system;

void FinalLevel() {
    std::system("cls");
    string treetext = "\u001b[32mYou opened up the tree and there was a small hidden panel, and head into the void, falling down\u001b[0m";
    int y = 0;
    while (treetext[y] != '\0') {
        cout << treetext[y];
        usleep(70);
        y++;
    };
    usleep(2500);
    std::system("cls");
    string FinalUserInput;
    TryInput:
    cout << "What are you going to do now:";
    getline(cin, FinalUserInput);
    transform(FinalUserInput.begin(), FinalUserInput.end(), FinalUserInput.begin(), ::tolower);
    std::system("clear");
    unordered_map<string, string> finalinput{
        {"describe room", "You are inside what seems like a vending machine with a bunch of knockoff drinks"}
        ,{"help", "1.Mountain Frost\n2.Dr Soda\n3.Spurt\n4.Fantana\n5.Dorbitos\n6.Quarters"}
        ,{"describe dorbitos", "Dorbitos a cheese falvored chip with the moto 'The worst snack of all time!'\nYeah sounds good..."}
        ,{"push dorbitos", "You pushed the dorbitos and popped the bag\nLeading to them getting all over the wall and floor\nGross..."}
        ,{"open dorbitos", "You open the bag of dorbitos only to be met with a terrible stench\nMaybe you should just stick to Cheezie Doodles"}
        ,{"describe mountain frost", "This looks the funniest drink ever\nit's so obvious it's a knockoff"}
        ,{"open mountain frost", "You take a sip of the drink\nAnd surprisingly it's not mid asf"}
        ,{"push mountain frost", "You pushed the drink and just shook the drink up"}
        ,{"describe dr soda", "Brown liquid inside a clear bottle\nYou've never really liked dr soda"}
        ,{"push dr soda", "Thank god, you decided to stop\nBecause, there was a bomb inside the dr.soda"}
        ,{"open dr soda", "You really don't want to take a sip of that dr.soda"}
        ,{"describe spurt", "Honestly, the best carbonated drink ever, really good when you are sick"}
        ,{"push spurt", "You pushed the spurt and it decided to forgive you"}
        ,{"describe fantana", "Fantana is okay-ish on a hot day however, you wouldn't drink it all the time"}
        ,{"push fantana", "You push the Fantana the top unscrews a little bit and suddenly\nYou smell a lot of a nice orange scent"}
        ,{"describe quarters", "A quarter with a nice big smiley on it with the slogan 'In lobster we trust'"}
        ,{"push quarters", "You don't feel like betraying the mighty lobster lord"}
        ,{"open quarters", "You cannot open the quarters"}
    };
    if (FinalUserInput == "open spurt") {
        string FinalEnding = "\u001b[32mYou take a nice sip of your drink, and suddenly everything just melts away\nWondering when will this Duck Quest finally end?\u001b[0m";
        int b = 0;
        while (FinalEnding[b] != '\0') {
            cout << FinalEnding[b];
            usleep(70);
            b++;
        }
        usleep(2000);
        cout << "\n\u001b[32mThank you for playing my game, my heart goes out to those who enjoy this product\u001b[0m" << endl;
        string Credits = "\u001b[32mCoder: Spooky Cookies\nDirector: Spooky Cookies\nStory Writer: Spooky Cookies\nBest Supporter: Steve\nAgain, I apologize for this game taking so long to make\nHonestly, I try to work on this in my free time however, when I get home I just get unmotivated\nThank You for playing!\u001b[0m\n";
        int z = 0;
        while (Credits[z] != '\0') {
            cout << Credits[z];
            usleep(85);
            z++;
        }
        std::exit(0);
    }
    else if (FinalUserInput == "break free") {
        string FinalEnding = "\u001b[32mYou decide to break free, from the vending machine and fall into a rainbow void\nWhen will this Duck Quest finall end?\u001b[0m";
        int y = 0;
        while (FinalEnding[y] != '\0') {
            cout << FinalEnding[y];
            usleep(85);
            y++;
        }
        usleep(2000);
        cout << "\n\u001b[32mThank you for playing my game, my heart goes out to those who enjoy this product\u001b[0m" << endl;
        string Credits = "\u001b[32mCoder: Spooky Cookies\nDirector: Spooky Cookies\nStory Writer: Spooky Cookies\nBest Supporter: Steve\nAgain, I apologize for this game taking so long to make\nHonestly, I try to work on this in my free time however, when I get home I just get unmotivated\nThank You for playing!\u001b[0m";
        int x = 0;
        while (Credits[x] != '\0') {
            cout << Credits[x];
            usleep(85);
            x++;
        }
        std::exit(0);
    }
    try {
        cout << finalinput.at(FinalUserInput) << "\n";
        goto TryInput;
    }
    catch (const out_of_range&) {
        cout << "Please use help if you are stuck on what to do" << endl;
        goto TryInput;
    }
}
void FourthLevel() {
    string nextleveltransition = "\u001b[32mYou open the orange cat drink\nTempted by the scent you take a sip\nThat shit was so mid you blacked out\u001b[0m";
    int y = 0;
    while (nextleveltransition[y] != '\0') {
        cout << nextleveltransition[y];
        usleep(70);
        y++;
    }
    Sleep(2500);
    std::system("clear");
    string ForestText = "\u001b[32mYou wake up in a forest\nIt's covered in fog and looks kind of scary\u001b[0m";
    int z = 0;
    while (ForestText[z] != '\0') {
        cout << ForestText[z];
        usleep(70);
        z++;
    }
    Sleep(1500);
    std::system("clear");
    string FourthUserInput;
TryInput:
    cout << "What are you going to do now:";
    getline(cin, FourthUserInput);
    std::transform(FourthUserInput.begin(), FourthUserInput.end(), FourthUserInput.begin(), ::tolower);
    std::system("clear");
    unordered_map<string, string> fourthinput{
        {"describe room", "You are in a forest with a suprising amount of pineapples and a lot of trees"}
        ,{"help", "Things you can interact with\n1.Slender Person\n2.Mountain Frost\n3.Tree\n4.Pineapple"}
        ,{"describe slender person", "It seems like a knockoff of a more popular character\nOh yeah, it's the mascot of dorbitos"}
        ,{"push slender person", "You push the slender person and nothing happens"}
        ,{"open slender person", "How would you open....\nWhatever...."}
        ,{"describe mountain frost", "This looks the funniest drink ever\nit's so obvious it's a knockoff"}
        ,{"open mountain frost", "You take a sip of the drink\nAnd surprisingly it's not mid asf"}
        ,{"push mountain frost", "You pushed the drink and just shook the drink up"}
        ,{"describe tree", "Brown and green stick that goes into the sky\nPretty cool ngl"}
        ,{"push tree", "It's solid like wood\nSuch a complex topic"}
        ,{"describe pineapple", "A sour fruit\nSometimes good, Sometimes bad"}
        ,{"push pineapple", "You try to push the pineapples however\nThey are oddly stronger than you???"}
        ,{"open pineapple", "After a grueling hour of trying to rip open the pineapple\nYou finally do and the fruit doesn't even taste that good\nWhat a waste of time"}
    };
    if (FourthUserInput == "open tree") {
        FinalLevel();
    }
    else if (FourthUserInput == "open terminal") {
        std::system("clear");
        string sayingtohim;
    TerminalInput:
        cout << "What are you going to say to him:";
        getline(cin, FourthUserInput);
        transform(FourthUserInput.begin(), FourthUserInput.end(), FourthUserInput.begin(), ::tolower);
        std::system("clear");
        if (FourthUserInput == "Filler Text") {
            cout << "FillerText" << endl;
            goto TerminalInput;
        }
        else {
            goto TerminalInput;
        }
    }
    try {
        cout << fourthinput.at(FourthUserInput) << "\n";
        goto TryInput;
    }
    catch (const out_of_range&) {
        cout << "Please use help if you are stuck on what to do" << endl;
        goto TryInput;
    }
}
void ThirdLevel() {
    string lawnchair = "\u001b[32mYou pushed the lawn chair, and it turns out it is cake\nYou try to get a better look at the pile of cake on the ground\nAnd, slip and fall causing youself to fall unconcious\u001b[0m";
    int y = 0;
    while (lawnchair[y] != '\0') {
        cout << lawnchair[y];
        usleep(70);
        y++;
    };
    usleep(2500);
    std::system("clear");
    string cat = "\u001b[32mWell guess what you wake up in a new place again\nIt's some sort of room, looks like a convention\u001b[0m";
    int v = 0;
    while (cat[v] != '\0') {
        cout << cat[v];
        usleep(70);
        v++;
    };
    usleep(1500);
    std::system("clear");
    string ThirdUserInput;
TryInput:
    cout << "What are you going to do now:";
    getline(cin, ThirdUserInput);
    std::transform(ThirdUserInput.begin(), ThirdUserInput.end(), ThirdUserInput.begin(), ::tolower);
    std::system("clear");
    unordered_map<string, string> thirduserinput{
        {"describe room", "You notice a large banner that says 'Funny Orange Cat Meetup'\nFrom the looks of it they loves this cat\nGot posters all over the walls etc."}
        ,{"help","List of things you can interact with\n1.Dorbitos\n2.Computer Monitor\n3.Cat Drink\n4.Cat Blanket\n5.Orange Cat\n6.Stick"}
        ,{"describe dorbitos", "dorbitos a cheese falvored chip with the moto 'The worst snack of all time!'\nYeah sounds good..."}
        ,{"push dorbitos", "You pushed the dorbitos and popped the bag\nLeading to them getting all over the wall and floor\nGross..."}
        ,{"open dorbitos", "You open the bag of dorbitos only to be met with a terrible stench\nMaybe you should just stick to Cheezie Doodles"}
        ,{"describe computer monitor", "It seems like a computer monitor\nAnd a program called notetaker++ is open on it\nJust a bunch of if/else/else if statements\nGross..."}
        ,{"push computer monitor", "You push the computer monitor\nAnd it falls onto the ground and turns off\nGreat now how are you going to watch\nThe funny orange cat show now???"}
        ,{"open computer monitor", "sadly with the background displaying a cute orange cat\nYou feel like you shouldn't open the computer monitor"}
        ,{"describe cat drink", "It seems like another funny orange cat product\ncalled 'Fast Kitty' seems like just another crappy energy drink,\n\u001b[31mWonder how it tastes...\u001b[0m"}
        ,{"push cat drink", "you push the cat drink over\n and since its not opened you just shook up the drink"}
        ,{"describe cat blanket", "Soft, orange blanket with that orange cats face on it\nSadly, its not time to take a right now"}
        ,{"open cat blanket", "You try to rip open the cat blanket\nHowever, it seems like the orange cat is hissing at you\nYou decide not to do it"}
        ,{"push cat blanket", "The nice soft cat blanket runs through you fingers\nFeels nice"}
        ,{"describe orange cat", "The orange cat seems to be hesitant about you however, is not hostile\n\u001b[31mBest to not mess with cat\u001b[0m"}
        ,{"open orange cat", "\u001b[31Yeah you should not try to do that kinda fucked up man\u001b[0m"}
        ,{"describe stick", "It's a stick on the wall\nWith a label called 'The One' kinda ominous"}
        ,{"open stick", "\u001b[31You should not break 'The One' I don't believe thats a wise choice\u001b[0m"}
        ,{"push stick", "You pushed the stick, and it just falls off the walls\nand is now on the floor"}
    };
    if (ThirdUserInput == "open cat drink") {
        FourthLevel();
    };
    if (ThirdUserInput == "push orange cat") {
        string catending = "\u001b[32mYou pushed the orange cat, why would you do such a thing?\nAnimal cruelty is not a very fun thing to do\nThe cat claws off your face and you bleed to death\nYou got the: WHY DID YOU PUSH THE CAT? ENDING\nTHE END.\u001b[0m";
        int x = 0;
        while (catending[x] != '\0') {
            cout << catending[x];
            usleep(70);
            x++;
        };
    }
        try {
            cout << thirduserinput.at(ThirdUserInput) << "\n";
            goto TryInput;
        }
        catch (const out_of_range&) {
            cout << "Please use help if you are stuck on what to do" << endl;
            goto TryInput;
        }
    
}
    void SecondLevel() {
    std::system("clear");           
    string SecondUserInput;
    TryInputTwo:
    cout << "What are you going to do now:";
    std::getline(std::cin, SecondUserInput);
    std::transform(SecondUserInput.begin(), SecondUserInput.end(), SecondUserInput.begin(), ::tolower);
    std::system("clear");
    unordered_map<string, string> user_mappings{
        {"describe room", "It seems like a simple grocery store except every single isle is full of lawn chairs and a lobster?????"}
        ,{"help", "Things you can interact with:\n1.Lawn Chair\n2.Lobster\n3.Missing Poster\n4.Dark Poles\n5.???"}
        ,{"describe lawn chair", "Simple white sleek lawn chair,\u001b[31m it smells oddly good though.\u001b[0m"}
        ,{"open lawn chair", "You tried to open the lawn chairs however you instantly felt woozy because you ignored the\u001b[31m DO NOT OPEN LAWN CHAIRS\u001b[0m sign"}
        ,{"describe lobster", "Alan please add details"}
        ,{"push lobster", "\u001b[31mDon't you dare ever push a lobster again, you fucking piece of shit\u001b[0m"}
        ,{"open lobster", "\u001b[31mNO\u001b[0m"}
        ,{"describe missing poster", "It's a missing poster for a certain person named Nataniel B, last seen ???"}
        ,{"push missing poster", "You push the poster and it like doesn't move"}
        ,{"open missing poster", "You open the missing poster and guess what there's nothing inside it"}
       ,{"describe dark poles", "It seems challenging"}
       ,{"push dark poles", "You are hearing boss music coming towards you and a looming presence of doom"}
       ,{"open dark poles", "It's a large metal pole with a errie essence, you deside to not open it"}
       ,{"describe peaches", "It's a can of peaches and it looks nice as hell"}
       ,{"push peaches", "No."}
       ,{"describe ???", "Lw'v d fdq ri shdfkhv"}
    };
    if (SecondUserInput == "open peaches") {
        cout << "Suddenly you see a clone of yourself going for the peaches as well, and now it wants to fight" << endl;
        usleep(1500);
        std::system("clear");
        int yourhealth = 100;
        int clonehealth = 100;
        string fightchoice;
    peachfight:
        int clonedamage = rand() % 100 + 1;
        int yourdamage = rand() % 100 + 1;
        cout << "You have " << yourhealth << " hp left\nAnd the clone has " << clonehealth << " hp left" << endl;
        if (yourhealth <= 0 && clonehealth <= 0) {
            cout << "I looks like you both died, damn I guess you both suck" << endl;
            std::exit(0);
        }
        if (yourhealth <= 0) {
            string lostfight = "\u001b[32m\nWell you lost the fight, and the clone of you wanted those peaches just more than you\nAlso, how did a CLONE of yourself beat you\nYOU GOT THE: HOW DID A CLONE BEAT YOU ENDING\nTHE END.\u001b[0m";
            int y = 0;
            while (lostfight[y] != '\0') {
                cout << lostfight[y];
                usleep(70);
                y++;

            };
            std::exit(0);
        }
        if (clonehealth <= 0) {
            cout << "You kicked that clones ass good going pal, +1 peaches for you" << endl;
            usleep(3200);
            SecondLevel();
        } 
        getline(cin, fightchoice);
        transform(fightchoice.begin(), fightchoice.end(), fightchoice.begin(), ::tolower);
        system("clear");
        unordered_map<string, string> userinputmappings{
            {"right hook", "you threw a nasty right hook" }
            ,{"left hook", "you obliterated your clone with a nasty left hook"}
            ,{"uppercut", "damn that must have hurt, your clone those peaches must be yours"}
        };
        if (fightchoice == "help") {
            cout << "You can\n1.Left Hook\n2.Right Hook\n3.Uppercut" << endl;
        }
        try {
            cout << userinputmappings.at(fightchoice) << "\n";
            yourhealth = yourhealth - clonedamage;
            clonehealth = clonehealth - yourdamage;
            goto peachfight;
        }
        catch (const out_of_range&) {
            cout << "Please use help if you are stuck on what to do" << endl;
            goto peachfight;
        }
    }
    else if (SecondUserInput == "push lawn chair") {
        ThirdLevel();
    }
    try {
        std::cout << user_mappings.at(SecondUserInput) << '\n';
        goto TryInputTwo;
    }
    catch (const std::out_of_range&) {
        std::cout << "Please use help if you are stuck.\n";
        goto TryInputTwo;
    }
}

void FirstLevel() {
        std::system("clear");
        TryInput:
        std::string FirstUserInput;
        cout << "What are you going to do now:";
        std::getline(std::cin, FirstUserInput);
        std::transform(FirstUserInput.begin(), FirstUserInput.end(), FirstUserInput.begin(), ::tolower);
        std::system("clear");
        std::unordered_map<std::string, std::string> mappings{
            {"describe room", "The room looks like a childs bedroom, with glow in the dark stickers all over the walls.\nthere's a closet and a rocket ship bed, along with a foam dart gun",}
            ,{"help", "List of things you can interact with:\n1.Foam Dart Gun\n2.Rocket Ship Bed\n3.Glow In The Dark Stickers\n4.Closet\n5.???",}
            ,{"describe foam dart gun", "It's a yellow foam dart gun, with a big logo called NERB ULTRA BLASTER 3000 however, it looks quite weak.",}
            ,{"push foam dart gun", "Uh....., well you push it and it uh falls and stuff.",}
            ,{"open foam dart gun", "Well you use all you strength to rip open the foam dart gun and and its plastic I mean what were you expecting?"}
            ,{"describe rocket ship bed", "Its a red rocket ship bed, with the most beautiful fortplite bedsheets.",}
            ,{"push rocket ship bed", "Well, you pushed the bed and it just kinda stayed there because it's a bed???????",}
            ,{"open rocket ship bed", "Well, it's a bed, it's not like its plastic so yea you hurt your hands trying to open up a wooden bed.",}
            ,{"describe glow in the dark stickers","Just like government agents they glow at night.",}
            ,{"push glow in the dark stickers", "Suprisingly that wall is weak as hell and you just push your arm right through the wall."}
            ,{"open glow in the dark stickers", "You rip the sticker off the wall and it's stuck to your hand,\u001b[31m good job idiot.\u001b[0m",}
            ,{"describe closet", "Its a door with something on the other end,\u001b[31m wonder where it leads.\u001b[0m"}
            ,{"push closet", "Did you like not play the last game?, you should know by now that,\u001b[31m IT'S A PULL DOOR.\u001b[0m"}
            ,{"grab knife", "You grabbed the knife\u001b[31m don't get stupid, how that could do some real harm\u001b[0m"}
            ,{"describe knife", "It's sharp and dangerous\u001b[31m and that rocket ship bed is looking real nice right about now.\u001b[0m"}
            ,{"push knife", "WOAH there pal you are getting awfully courageous with that knife there,\u001b[31m try not to hurt youserlf there pal.\u001b[0m"}
            ,{"describe ???", "Lw'v d vkdus dqg gdqjhurxv nqlih"}
        };
        if (FirstUserInput == "open closet") {
            string supermarket = "\u001b[32mThe closet opens and you fall into what seems like a supermarket\u001b[0m";
            int y = 0;
            while (supermarket[y] != '\0') {
                cout << supermarket[y];
                usleep(70);
                y++;
            };
            SecondLevel();
        }
        else if (FirstUserInput == "stab rocket ship bed") {
            string HiddenText = "\u001b[32mYou stabbed the rocket ship bed, exploding the whole room and you as well killing you and destroying everything around you\nYOU GOT THE: That was a real rocket???? ENDING\nTHE END\u001b[0m";
            int y = 0;
            while (HiddenText[y] != '\0') {
                cout << HiddenText[y];
                usleep(70);
                y++;
            };
            return;
        }
        try {
            std::cout << mappings.at(FirstUserInput) << '\n';
            goto TryInput;
        }

        catch (const std::out_of_range&) {
            std::cout << "Please use help if you are stuck.\n";
            goto TryInput;
        }   
}
void GameStart() {
    string yesorno;
    cout << "Would you like to start the game Y/N" << endl;
    //Gets the users input
    firstanswer:
    getline(cin, yesorno);
    //trasnforms the users input into lowercase
    std::transform(yesorno.begin(), yesorno.end(), yesorno.begin(), ::tolower);
    //I really cannot be asked to use the universal map on a yes or no question sorry but its going to be a if statement for this one
    if (yesorno == "y") {
        cout << "Starting Game..." << endl;
        usleep(1500);
        std::system("clear");
        string IntroText = "\u001b[32mWelcome To A Ducks Quest Of The UNIVERSE\nBy: Greg Software\nYou wake up In a new place again\nIt's some sort of space themed room\nYou can interact with the world using Describe/Push/Open and use Help if you are stuck!\u001b[0m\n";
        int x = 0;
        while (IntroText[x] != '\0') {
            cout << IntroText[x];
            usleep(70);
            x++;
            
        };
        FirstLevel();
    }
    else if (yesorno == "n") {
        std::exit(0);
    }
    else {
    cout << "This is a Y/N question please answer with Y/N" << endl;
    goto firstanswer;
    }
    
}
int main() {
    srand((0));
    GameStart();
    return 0;
}

        //If you've scrolled down this far to see my INT main function CONGRATS!
        //You get a sneak peak of what I plan to do for Duck Quest three
        //Wkh odvw gxfn txhvw
        //I am planning on adding a GUI, and making it look fancy!
        //Be excited for that!!!
        //If you've gone this far to read this I want to thank you for playing my game
        //Or just even looking at my code I understand that Its not the best however I hope you played and enjoyed
        // Shoutout to Steve (you know who you are)
        //Sorry for this one taking a lot of time to come out its a mixture of laziness and not knowing C++ lmao
        //Welcome to A Ducks Quest Of the UNIVERSE
        //By: Greg Software
        //You wake up in a new place again...
        //However, you are in a sort of space themed room
        //Glow in the dark stickers on the walls and roof
        //You can interact with the world using Describe/Push/Open/ 
