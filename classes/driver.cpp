#include <iostream>
#include "npc.h"
#include "location.h"
#include "sigOther.h"
#include "map.h"
#include "player.h"
#include <cassert>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int split (string inputString, char separator, string arr[], int size){
    string intermediary = "";
    int splitTracker = 0;
    for (int i=0; i < inputString.length(); i++){
        if (inputString[i] != separator){
            intermediary = intermediary+inputString[i];
            
        }
        else {
            arr[splitTracker] = intermediary;
            intermediary = "";
            splitTracker++;
        }
        if (splitTracker == size){
            return -1;
        }
        if (i == inputString.length()-1){
            arr[splitTracker] = intermediary;
            intermediary = "";
            splitTracker++;
        }
    }
    
    return splitTracker;
}

int main(){
    //initialize and display map
    Map pearlStreet;
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(0, i, '=');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(11, i, '=');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(i, 0, '|');
    }
    for(int i = 0; i < 12; i++){
        pearlStreet.setMapData(i, 11, '|');
    }
    pearlStreet.displayMap();
    
    //initialize player
    player player1;

    //initialize locations
    location locations[8];
    location branBrat("temp", {""});
    location boulderCarnival("temp", {""});
    location artGallery("temp", {""});
    location bookStore("temp", {""});
    location arbys("temp", {""});
    location walkPath("temp", {""});
    location iceCream("temp", {""});
    location theatre("temp", {""});
    locations[0] = branBrat;
    locations[1] = boulderCarnival;
    locations[2] = artGallery;
    locations[3] = bookStore;
    locations[4] = arbys;
    locations[5] = walkPath;
    locations[6] = iceCream;
    locations[7] = theatre;

    //initialize npcs
    npc npcs[8];
    npc Stali("Oleg", "I've heard that Brandon's Bratwursts' relish is made from fake pickles.");
    npc Yasmeen("Yasmeen", "I absolutely LOVE the ferris wheel.");
    npc Olwen("Olwen", "That Abe Lincoln painting at the gallery is so ugly its almost good!");
    npc Oleg("Oleg", "Rumor has that there is an ancient tome of knowledge at the bookstore, the kind of knowledge you can only get on a certain streaming site.");
    npc Musad("Musad", "Your date looks like someone who would love some bacon.");
    npc Shayne("Shayne", "I was just on Lover's Pass, and let me say, it was an experience.");
    npc Valeria("Valeria", "If you love hotdogs, then you have to go to Chilled Rock Creamery.");
    npc Romulo("Romulo", "There is not a lot of rock in the Boulder schoolhouse, that's for sure.");
    npcs[0] = Stali;
    npcs[1] = Yasmeen;
    npcs[2] = Olwen;
    npcs[3] = Oleg;
    npcs[4] = Musad;
    npcs[5] = Shayne;
    npcs[6] = Valeria;
    npcs[7] = Romulo;

    //insert code to choose random npc
    int randNpc = rand() % 8;

    //switch statement with 8 nested switch statements for the different locations*
    int playerOption = -1;
    int playerOption2;
    bool location1Complete = false;
    bool location2Complete = false;
    bool location3Complete = false;
    bool location4Complete = false;
    bool location5Complete = false;
    bool location6Complete = false;
    bool location7Complete = false;
    bool location8Complete = false;


    ifstream fin("scores.txt");
    string line;
    string scores[1000];
    string names[1000];
    string tempArr[2];
    vector<float> vect;
    

    int temp;
    string tempStr;
    int i = 0;
    
    sigOther date;
    string tempDate = "";
    // hair,eyes,gender,height,complexion;
    cout << "Describe to us the characteristics of your date!" << endl <<
    "Hair type:" << endl;
    cin >> tempDate;
    date.setHair(tempDate);
    
    cout << "eye color" << endl;
    cin >> tempDate;
    date.setEyes(tempDate);

    cout << "Gender" << endl;
    cin >> tempDate;
    date.setGender(tempDate);

    cout << "Height" << endl;
    cin >> tempDate;
    date.setHeight(tempDate);

    cout << "Complextion" << endl;
    cin >> tempDate;
    date.setComplexion(tempDate);

    cout << "Congradulations! You're ready to start your date!" << endl;

    while (playerOption != 0){
        cout << "Options:" << endl
            << "0. End Game" << endl <<
                "1. Brandon's Bratwursts" << endl <<
                "2. Boulder Carnival" << endl <<
                "3. Mountaintop Art Gallery" << endl << 
                "4. A Bookstore" << endl <<
                "5. Arbys" << endl <<
                "6. Creek Walking path" << endl <<
                "7. ChilledRock Creamery" << endl <<
                "8. Boulder Theater" << endl <<
                "9. Talk to passerby" << endl <<
                "10. Look at your date" << endl;

        cin >> playerOption;
        switch (playerOption){
            //finish date
            case 0:
                cout << "Thank you for playing. Your score is " << player1.getScore() << "." << endl;
                //cout << "What is your name?" << endl;
                //cin >> names[i+1];
                cout << "This is the current leaderboard:" << endl;
                while(!fin.eof()){
                    getline(fin, line);
                    split(line, ',', tempArr, 1000);
                    scores[i] = tempArr[0];
                    names[i] = tempArr[1];
                    tempStr = scores[i];
                    vect.push_back(stoi(tempStr));
                    i++;
                }
                scores[i+1] = to_string(player1.getScore());
                vect.push_back(player1.getScore());
                //split(scores[i+1],'.',tempArr, 2);
                //scores[i+1] = tempArr[0];
                //cout << '|' << i << '|';
                //cout << "\'" << scores[i+1] << "\'"  << endl << endl;
                //cout << "\'" << player1.getScore() << "\'"  << endl << endl;
                //vect.push_back(stoi(scores[i+1]));

                for(int i = 0; i < vect.size(); i++){
                    for(int j = i + 1; j < vect.size(); j++){
                        if(vect[j] > vect[i]) {
                            temp = vect[i];
                            vect[i] = vect[j];
                            vect[j] = temp;
                        }
                    }
                }
                //cout << player1.getScore() << " " << names[i+1];
                for(int i = 0; i < vect.size(); i++){
                    cout << vect.at(i) << endl;
                }
                break;
            
            //location 1
            case 1:
                if (location1Complete == false){
                    while (location1Complete == false){
                        cout << "You come across a small hotdog stand named Brandon’s Bratwursts adjacent to the sidewalk. Youve heard that their hotdogs are renowned across the city, but their toppings are hit-or-miss. Since theres nothing sadder than a plain hotdog, you decide to go with: " << endl <<
                        "1. Ketchup" << endl << 
                        "2. Mustard" << endl <<
                        "3. Relish" << endl << 
                        "4. Leave" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You both take a bite out of the hotdog, and it’s… decent! You feel ketchup doesn’t exactly enhance the professionally made bratwurst, but it doesn’t hurt it either." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location1Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You both take a bite out of the hotdog, and instantly melt on the floor. It’s dijon mustard. That hotdog has got to be one of the best hot dogs you’ve ever had." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location1Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You order a bratwurst with relish, excited for the signature tangy taste of dill relish blended perfectly with the delicious, well cooked bratwurst. You go in for a bite, and it tastes… sweet? To your horror, you realize it was sweet relish! You still can’t comprehend how sweet relish is offered anywhere, but all you know is you and your date’s bratwurst is ruined. Way to go, you." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location1Complete = true;
                                }
                                break;
                            case 4:
                                cout << "You decide to head out without buying anything. They're probably overrated anyway" << endl;
                                location1Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "They seem to be closed." << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 2
            case 2:
                if (location2Complete == false){
                    while (location2Complete == false){
                        cout << "You hear the sounds of excited screaming and the clack of moving machinery nearby. Deciding to investigate, y’all follow the sound and find yourself at the front door of Boulder Carnival! While most carnivals charge a ticket for general admission, this place operates on a pay-per-ride agenda. Putting your sour opinions on this payment scheme aside, you chose to go on the:" << endl <<
                        "1. Ferris Wheel" << endl <<
                        "2. Roller Coaster" << endl <<
                        "3. Teacups" << endl <<
                        "4. Leave" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You decide to go on the ferris wheel. It’s not the most exciting ride you could go on, but you figured it’d be a nice break to the busy night. You chill, talk, and enjoy the city views from your new elevated position. Y’all came off the ride feeling refreshed and satisfied." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location2Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You decide to chose the Roller Coaster, because WHY WOULDN’T YOU?! Roller Coasters are always the best part of carnivals! Your date, however, didn’t seem to be feeling it. In your rush to hop on the ride, you forgot to ask if your date even liked roller coasters. Oop" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location2Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You decide on the teacups, since you feeln they’re an underrated ride in the general attraction catalog. You both hop on the ride, and have a pretty good time. While you’re not sure if it was worth the price of admission, you both had a " << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location2Complete = true;
                                }
                                break;
                            case 4:
                                cout << "You Leave." << endl;
                                location2Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "They seem to be closed for the night" << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 3
            case 3:
                if (location3Complete == false){
                    while (location3Complete == false){
                        cout << "You’re strolling along Pearlstreet when you notice a small local art gallery across the street. Wanting to boost your ego, you recommend it to your date. As you enter the gallery, the door slams behind you, locking you in! In your excitement to impress your date, you fail to read the sign saying “NO WINDOW SHOPPING ALLOWED! Entrants MUST buy a painting before they leave!”. The Owner must be tired of people coming in just to admire the paintings without buying one. Not wanting to leave your date waiting, you decide to man up and buy a painting. Trying to ignore the intense glare from the shop-owner, you chose: " << endl <<
                                    "1. An Audibon print of the Ash-throated Flycatcher bird" << endl << 
                                    "2. A watercolor painting of the sun setting behind the Flatirons" << endl <<
                                    "3. An abstract caricature of Abraham Lincoln (You think it’s him at least)" << endl <<
                                    "4. Leave " << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You chose the Audibon print. You would have never expected to find an actual Audibon print on Pearl Street of all places, but at that price you have no complaints. You escape the confines of the art gallery, and present the print to your date. They smile and gladly accept the gift, but you can tell they’re not as thrilled as they’re trying to come off. You later learn that high anatomical detail in paintings puts them off, and that they prefer more abstract works. Oh well, at least you think it’s a good piece." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location3Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You chose the watercolor painting. You feel the warm, cozy vibe the painting gives would really match the atmosphere of your date’s room. You escape the confines of the art gallery, and present the print to your date. They shriek in delight, and they tell you they absolutely love it! You even get a hug out of it. " << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location3Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose the abstract caricature piece. It’s a little off-putting, but who doesn’t love Abraham Lincoln? You escape the confines of the art gallery, and present the print to your date. Their reaction is… surprise! But not the good kind. You knew they like abstract, but this seems too abstract for their liking. It was also apparently a caricature of Johnny Depp. " << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location3Complete = true;
                                }
                                break;
                            case 4:
                                cout << "Determined to not pay a dime, you bust through th ewindow and bolt" << endl;
                                location3Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "It's closed" << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 4
            case 4:
                if (location4Complete == false){
                    while (location4Complete == false){
                        cout << "Fancying yourself as the sophisticated type, you walk into the local bookstore with your date. You’re presented with a pretty comprehensive collection of books ranging from novels, autobiographies, infographics, and graphic novels. After looking around for a couple of minutes, a couple of books catch your eye. Out of the 3 you’ve picked out, you decide to choose:" << endl <<
                        "1. Ninja: Get Good: My Ultimate Guide to Gaming; by Tyler “Ninja Fortnite” Blevins" << endl <<
                        "2. Guide to the world’s best road trips" << endl <<
                        "3. This Year in Architecture: Beach Homes edition" << endl <<
                        "4. Leave" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "Once this book was graced upon your eyes, you knew it was the one. You’ve heard of this mythical internet celebrity, but you had no idea he was an author! Who knows what wisdom you can surmise from reading this book. Once you order a copy, you go and present the book to your date. Your date is a little tad taken aback, but ends up being caught up in your enthusiasm. You both have a lovely time reading through it together. " << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location4Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You end up going with the road trip book. The only thing better than a roadtrip, you think to yourself, are armchair roadtrips! Once you order a copy, you go and present the book to your date. Your date is initially thrilled, but once you both start reading you realize it’s more of a roadside attraction advertisement than actual roadtrip stuff. You both enjoy it nonetheless, but y’all don’t read for very long. " << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location4Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You end up going with the Architecture book for… some reason. Now that you’re thinking about it, you’re not too sure why you bought it, but it’s in a bag, you’ve been handed a receipt, and you’ve left the counter. You put on a smile and present the book to your date, but their reaction is about what you’d expect. Nice going you." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location4Complete = true;
                                }
                                break;
                            case 4:
                                cout << "You decide to leave instead" << endl;
                                location4Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "it's closed" << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 5
            case 5:
                if (location5Complete == false){
                    while (location5Complete == false){
                        cout << "You approach the local Arby’s, and while the line is humongous, you thought ahead and made a reservation. The waiter checks your reservation, and directs you and your date to a quiet corner towards the back of the restaurant. You approach a lovely mahogany wood two-seat table with soft warm lighting, and once seated order a round of ginger beer and the house garlic bread. While the waiter goes to fetch your order, you take out the menu to peruse today's specials. Since the restaurant is fairly expensive, you and your date decide to order a plate to share, and you’ve been put in charge of choosing. Confident in your culinary taste, you choose:" << endl << 
                        "1. Roast Beef Sandwich" << endl <<
                        "2. Pulled Pork Sandwich" << endl <<
                        "3. BLT Sandwich" << endl << 
                        "4. Leave" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose to indulge yourself with the Roast Beef Sandwich. It did occur to you how strange the concept was, but you were confident in the house chefs to present you both with a satisfying meal. Sadly, when delivered, it was indeed a (quite large) slice of roast beef between some buns. It was the first time you had to actually consider eating a sandwich with a fork and knife. You left unsatisfied, confused, and scared." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location5Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose to indulge yourself with the Pulled Pork Sandwich. You felt confident in the choice, but once delivered, it seems your expectations were a bit too high. It wasn’t bad at all, infact it was really good all things considered, but regardless you felt a tad let down. Was this really worth the price of admission?" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location5Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose to indulge yourself with the BLT Sandwich. After you made your order, your date pointed out that it was marked as the crowd favorite. Your expectations were already high, but that was nothing compared to when the sandwich was served. It was a masterful combination of savory meats, flavorful seasoning, and delicious vegetables. That sandwich was so good you asked for another. In fact, you asked for so many more BLT’s your date had to physically drag you out of the restaurant. If that’s not the sign of a good meal, I don’t know what is." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location5Complete = true;
                                }
                                break;
                            case 4:
                                cout << "You decide to leave early" << endl;
                                location5Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "It's closed" << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 6
            case 6:
                if (location6Complete == false){
                    while (location6Complete == false){
                        cout << "You find a nice trailhead leading away from the hustle and bustle of Pearl Street. You figure this would be a good chance to take a break from the busy road and get some alone time with your date. After about 5 mins of walking, you two come across a fork in the road, leading to 3 different trails. You look at the signage, and chose:" << endl << 
                        "1. Fool's Creek" << endl <<
                        "2. Lover's Pass" << endl << 
                        "3. Pico Trail" << endl << 
                        "4. leave" << endl;

                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose to go down the path towards Fool’s Creek. As you approach the creek, you’re taken aback how pristine it is. The creek is clear, there’s no trash in sight, you’re both completely alone, and most of all it’s quiet. You have a lovely time walking along the creek with your date." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location6Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose to go down the path towards Fool’s Creek. After all, you are on a date, so it seems only fitting to go down lover’s pass. However, you failed to consider that the other people on dates would have the exact same thought process. The trail was PACKED, and you couldn’t help but notice the copious amounts of undergarments and rubber accessories lying around everywhere. You were both kinda uncomfortable and feeling very awkward, so you both power walked down the rest of the trail without much being said." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location6Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You choose to go down the path towards Pico Trail. Upon starting the trail, you notice you’re not the only ones around. You both continue down the path, and have a good time. It’s populated but not that busy, and the views are very nice. You’d both prefer a trail more secluded, but y’all have a good time regardless." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location6Complete = true;
                                }
                                break;
                            case 4:
                                cout << "You decide against the trail" << endl;
                                location6Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "The trail seems closed now." << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 7
            case 7:
                if (location7Complete == false){
                    while (location7Complete == false){
                        cout << "You walk into the well renowned ChilledRock Creamery, and are presented with a staggering amount of flavors, like way too many flavors. You didn’t even realize alfalfa ice cream existed until now. Nonetheless, you peruse the selection, making sure to ask for as many samples as possible. After depleting the store’s supply of sample spoons, you decide to go with" << endl <<
                        "1. Rocky Road" << endl <<
                        "2. Glizzy Gateau" << endl <<
                        "3. Reptile Razberry" << endl << 
                        "4. leave" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location7Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location7Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "text blurb" << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location7Complete = true;
                                }
                                break;
                            case 4:
                                cout << "text blurb" << endl;
                                location7Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "text blurb" << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //location 8
            case 8:
                if (location8Complete == false){
                    while (location8Complete == false){
                        cout << "You enter the theater, and are presented with a wide selection of movies and performances to choose from. You’ve personally never heard of a theater that doubles as both a movie theater and a performance theater, but that’s all the more reason to check it out. You check out the recent showings, and see that there are 3 shows just about to start. You end up choosing:" << endl <<
                        "1. Morbius" << endl <<
                        "2. School House Rock (the performance)" << endl << 
                        "3. Spiderman: On Broadway" << endl <<
                        "4. leave" << endl;
                        cin >> playerOption2;
                        switch (playerOption2){
                            case 1:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You chose to buy 2 tickets for Morbius. You’ve heard it’s one of the critically acclaimed best films of all time, and Jared Letto’s best performance since Suicide Squad. While it wasn’t quite the #MorbiusSweep you expected, it was a nice cozy watch. Jared Letto was still pretty good." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.6); //change .5 to score multiplier of option
                                    location8Complete = true;
                                }
                                break;
                            case 2:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You chose to buy 2 tickets for School House Rock. You remember really enjoying the movie with Jack Black, but sadly the performance didn’t hold up. You didn’t feel the kids were all that great with the instruments, and all and all it seemed hastily put together. Broadway performances must be hit or miss. You both left dissatisfied." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*0.2); //change .5 to score multiplier of option
                                    location8Complete = true;
                                }
                                break;
                            case 3:
                                if (player1.getMoney() < 10){//change 10 to price of option
                                    cout << "You do not have enough money for this option, please choose something else." << endl;
                                }
                                else{
                                    cout << "You chose to buy 2 tickets for the Spiderman Broadway show. You weren’t really sure what to expect, since it wasn’t until just now that you learned a Spiderman broadway show even existed. Nevertheless, you take the plunge and give the show a shot. To your surprise, it’s incredible! There were some really cool moments with the Spiderman actor swinging around with the ceiling cabling, and it was a very faithful recreation of Sam Rami’s Spiderman 1. What a delightful surprise." << endl;
                                    player1.setMoney(player1.getMoney() - 10); //change 10 to price of option
                                    player1.setScore(player1.getScore() + 125*1); //change .5 to score multiplier of option
                                    location8Complete = true;
                                }
                                break;
                            case 4:
                                cout << "You decide to leave without tickets" << endl;
                                location8Complete = true;
                                break;
                            default:
                                cout << "Please enter a valid option." << endl;
                                break;

                        }
                    }
                }
                else{
                    cout << "It's closed" << endl; //you cant go to a location you have already been or something like that
                }
                break;
            //npc
            case 9:
                cout << npcs[randNpc].getDialogue() << endl;
                break;
            case 10:
                // hair,eyes,gender,height,complexion;
                cout << "You take a look at your date" << endl;
                cout << "Hair: " << date.getHair() << endl;
                cout << "Eyes: " << date.getEyes() << endl;
                cout << "Gender: " << date.getGender() << endl;
                cout << "Height: " << date.getHeight() << endl;
                cout << "Complextion: " << date.getComplexion() << endl;
                break;
            default:
                cout << "Please enter a valid option." << endl;
                break;
        }
    }
}
