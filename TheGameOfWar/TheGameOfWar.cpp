// TheGameOfWar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "MISCELL.cpp";
#include <iostream>//allows user input and print out 
#include <string>
#include <vector>
#include <random>
#include <algorithm>






string theDeck[52] = {
  
        "twoOfSpades", 
        "threeOfSpades",
        "fourOfSpades",
        "fiveOfSpades",
        "sixOfSpades",
        "sevenOfSpades",
        "eightOfSpades",
        "nineOfSpades",
        "tenOfSpades",
        "jackOfSpades",
        "queenOfSpades",
        "kingOfSpades",
        "aceOfSpades",

        "twoOfHearts",
        "threeOfHearts",
        "fourOfHearts",
        "fiveOfHearts", 
        "sixOfHearts",
        "sevenOfHearts",
        "eightOfHearts",
        "nineOfHearts",
        "tenOfHearts",
        "jackOfHearts",
        "queenOfHearts",
        "kingOfHearts",
        "aceOfHearts",

        "twoOfClubs ",
        "threeOfClubs ",
        "fourOfClubs ",
        "fiveOfClubs ",
        "sixOfClubs ",
        "sevenOfClubs ",
        "eightOfClubs ",
        "nineOfClubs ",
        "tenOfClubs ",
        "jackOfClubs ",
        "queenOfClubs ",
        "kingOfClubs ", 
        "aceOfClubs ",

        "twoOfDiamonds",
        "threeOfDiamonds",
        "fourOfDiamonds",
        "fiveOfDiamonds",
        "sixOfDiamonds",
        "sevenOfDiamonds",
        "eightOfDiamonds",
        "nineOfDiamonds",
        "tenOfDiamonds",
        "jackOfDiamonds",
        "queenOfDiamonds",
        "kingOfDiamonds",
        "aceOfDiamonds",


        
        


    };





//FUNCTION 
string playerOneHand[52] = {
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
};


//FUNCTION
string playerTwoHand[52] = {
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
};


//PLACEHOLDER p1
string TempPlaceHolder[20] = {

    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",
    "NA",

};




//SHIFT PLAYER ONE CARDS BY ONE 
string* p1ShiftOne(string p1Hand[52]) {


   
    int addOne = 1;
   
    for (int c = 0; c < 52; c++ ) {
       
        if (addOne < 52) {
            p1Hand[c] = p1Hand[addOne];
            addOne++;
        }
        else {
            p1Hand[c] = "NA";

        }
    }

    return p1Hand;
}



//SHIFT PLAYER TWO CARDS BY ONE 
string* p2ShiftOne(string p2Hand[52]) {

    int addOne = 1;

    for (int c = 0; c < 52; c++) {
        if (addOne < 52) {

            p2Hand[c] = p2Hand[addOne];
            addOne++;
        }
        else{
            p2Hand[c] = "NA";

        }
        
    }
    return p2Hand;
}








//P1 GET TWO CHARS AND SET AN INT TO THEM
class p1FindIntVal {
public:
    string p1TwoChars;
    int p1IntVal;



    void p1SendIntVal(string ap1PlayedCard) {
        p1TwoChars = ap1PlayedCard.substr(0, 2);
        //std::cout << p1TwoChars << endl;

        if (p1TwoChars == "tw") {
            p1IntVal = 2;
        }
        else if (p1TwoChars == "th") {
            p1IntVal = 3;
        }
        else if (p1TwoChars == "fo") {
            p1IntVal = 4;
        }
        else if (p1TwoChars == "fi") {
            p1IntVal = 5;
        }
        else if (p1TwoChars == "si") {
            p1IntVal = 6;
        }
        else if (p1TwoChars == "se") {
            p1IntVal = 7;
        }
        else if (p1TwoChars == "ei") {
            p1IntVal = 8;
        }
        else if (p1TwoChars == "ni") {
            p1IntVal = 9;
        }
        else if (p1TwoChars == "te") {
            p1IntVal = 10;
        }
        else if (p1TwoChars == "ja") {
            p1IntVal = 11;
        }
        else if (p1TwoChars == "qu") {
            p1IntVal = 12;
        }
        else if (p1TwoChars == "ki") {
            p1IntVal = 13;
        }
        else {//ACE
            p1IntVal = 14;
        }

       
    }


    int p1GetIntVal() {

        return p1IntVal;
    }

};




//P2 GET TWO CHARS AND SET AN INT TO THEM
class p2FindIntVal {
public:
    string p2TwoChars;
    int p2IntVal;



    void p2SendIntVal(string ap2PlayedCard) {
        p2TwoChars = ap2PlayedCard.substr(0, 2);
        //std::cout << p2TwoChars << endl;

        if (p2TwoChars == "tw") {
            p2IntVal = 2;
        }
        else if (p2TwoChars == "th") {
            p2IntVal = 3;
        }
        else if (p2TwoChars == "fo") {
            p2IntVal = 4;
        }
        else if (p2TwoChars == "fi") {
            p2IntVal = 5;
        }
        else if (p2TwoChars == "si") {
            p2IntVal = 6;
        }
        else if (p2TwoChars == "se") {
            p2IntVal = 7;
        }
        else if (p2TwoChars == "ei") {
            p2IntVal = 8;
        }
        else if (p2TwoChars == "ni") {
            p2IntVal = 9;
        }
        else if (p2TwoChars == "te") {
            p2IntVal = 10;
        }
        else if (p2TwoChars == "ja") {
            p2IntVal = 11;
        }
        else if (p2TwoChars == "qu") {
            p2IntVal = 12;
        }
        else if (p2TwoChars == "ki") {
            p2IntVal = 13;
        }
        else {//ACE
            p2IntVal = 14;
        }

        
    }


    int p2GetIntVal() {

        return p2IntVal;
    }

};


//COMPARE FUNCTION 

class compareHands {
public:
    string aWarResult;

    void setCompareHands(int ap1IntReadyForCompare, int ap2IntReadyForCompare) {

        if (ap1IntReadyForCompare > ap2IntReadyForCompare) {
            
            aWarResult = "P1W";
        }
        else if (ap1IntReadyForCompare < ap2IntReadyForCompare) {
            
            aWarResult = "P2W";
        }
        else {
    
            aWarResult = "TIE";
        }
    }

    string getCompareHands() {

        return aWarResult;

    }
};



//DEAL WITH P1 WINNING 
    
//LOAD WINNING CARDS TO PLAYER 1
    string* vWarResultP1W(string aPlayerOneHand[], string aTempPlaceHolder[]) {
        
        int i = 0;
        int g = 0;

        std::cout << "ATTEMPTING TO FIND LAST CARD P1 HAND" << endl;
        while (aPlayerOneHand[i] != "NA") {//finding the last open spot in the players hand 

            std::cout << aPlayerOneHand[i] << endl;

            i++;

        }

 
        while (aTempPlaceHolder[g] != "NA") {

            
            aPlayerOneHand[i] = aTempPlaceHolder[g];
            
            //std::cout << aPlayerOneHand[i] << endl;

            i++;
            g++;
        }
        

        
       
        return aPlayerOneHand;
    }

    







//DEAL WITH P2 WINNING 
    

    //LOAD WINNING CARDS TO PLAYER 2
    string* vWarResultP2W(string aPlayerTwoHand[], string aTempPlaceHolder[]) {

        int i = 0;
        int g = 0;


       std::cout << "ATTEMPTING TO FIND LAST CARD P2 HAND" << endl;
        while (aPlayerTwoHand[i] != "NA") {//finding the last open spot in the players hand 

            std::cout << aPlayerTwoHand[i] << endl;

            i++;

        }

 
        while (aTempPlaceHolder[g] != "NA") {

            
            aPlayerTwoHand[i] = aTempPlaceHolder[g];

            //std::cout << aPlayerTwoHand[i] << endl;

            i++;
            g++;
        }
        
        return aPlayerTwoHand;
  
    }



    //////////////////////////////////////////// MAIN ////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {









    std::cout << "THIS IS THE START OF THE GAME OF WAR" << endl;



   


    //RANDOMIZE SHUFFLE 
    srand(time(0));
    random_shuffle(&theDeck[0], &theDeck[52]);

 
    //SHOW DECK AFTER SHUFFLE  
    for (int a = 0; a < 52; a++) {

        std::cout << theDeck[a] << endl;

    }

    std::cout << endl;
    std::cout << "PLAYER ONE'S HAND" << endl;
    std::cout << endl;

    //DISTRIBUTE TO BOTH PLAYERS 
    int p2Index = 0;

    for (int b = 0; b < 52; b++) {

        if (b < 26) {
            playerOneHand[b] = theDeck[b];
            std::cout << playerOneHand[b] << endl;

        }
        else {
           
            if (b == 26) {
                std::cout << endl;
                std::cout << "PLAYER TWO'S HAND" << endl;
                std::cout << endl;
            }
            
            
            playerTwoHand[p2Index] = theDeck[b];
            std::cout << playerTwoHand[p2Index] << endl;
            p2Index++;
        }

    }
    std::cout << endl;
  



    //THIS IS THE WHILE LOOP PLAYING CARD. THE BODY OF THE GAME OKAY
    int tieCount = 0;
    while (tieCount < 52) {




        //PLAYER 1 DRAW CARD
        char p1PlayTopCard;
        std::cout << "PLAYER 1 PRESS 'P' TO PLACE TOP CARD DOWN" << endl;
        std::cin >> p1PlayTopCard;

        //PLAYER 2 DRAW CARD
        char p2PlayTopCard;
        std::cout << "PLAYER 2 PRESS 'P' TO PLACE TOP CARD DOWN" << endl;
        std::cin >> p2PlayTopCard;





        //HOLD PLAYER 1 PLAYED CARDS

        std::cout << "DISPLAYING TEMP PLACE HOLDER CARDS" << endl;
        if (tieCount == 0) {
            TempPlaceHolder[0] = playerOneHand[0];
            TempPlaceHolder[1] = playerTwoHand[0];
            for (int i = 0; i < 2; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            } 
        }
        else if (tieCount == 1) {
            TempPlaceHolder[2] = playerOneHand[0];
            TempPlaceHolder[3] = playerTwoHand[0];
            for (int i = 0; i < 4; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 2) {
            TempPlaceHolder[4] = playerOneHand[0];
            TempPlaceHolder[5] = playerTwoHand[0];
            for (int i = 0; i < 6; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 3) {
            TempPlaceHolder[6] = playerOneHand[0];
            TempPlaceHolder[7] = playerTwoHand[0];
            for (int i = 0; i < 8; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 4) {
            TempPlaceHolder[8] = playerOneHand[0];
            TempPlaceHolder[9] = playerTwoHand[0];
            for (int i = 0; i < 10; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 5) {
            TempPlaceHolder[10] = playerOneHand[0];
            TempPlaceHolder[11] = playerTwoHand[0];
            for (int i = 0; i < 12; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 6) {
            TempPlaceHolder[12] = playerOneHand[0];
            TempPlaceHolder[13] = playerTwoHand[0];
            for (int i = 0; i < 14; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 7) {
            TempPlaceHolder[14] = playerOneHand[0];
            TempPlaceHolder[15] = playerTwoHand[0];
            for (int i = 0; i < 16; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 8) {
            TempPlaceHolder[16] = playerOneHand[0];
            TempPlaceHolder[17] = playerTwoHand[0];
            for (int i = 0; i < 18; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else if (tieCount == 9) {
            TempPlaceHolder[18] = playerOneHand[0];
            TempPlaceHolder[19] = playerTwoHand[0];
            for (int i = 0; i < 20; i++) {
                std::cout << TempPlaceHolder[i];
                std::cout << endl;
            }
        }
        else {// when it ties all the above amount of times 
            std::cout << "YOU HAVE TIED MAX AMOUNT OF TIES, NEED TO EDIT CODE FOR MORE TIES";
            break;
        }

       
       





        //SHIFT PLAYER ONE CARDS BY ONE 
        /*string* pP1ShiftOne = */p1ShiftOne(playerOneHand);

        //SHIFT PLAYER TWO CARDS BY ONE 
        /*string* pP2ShiftOne = */p2ShiftOne(playerTwoHand);
        std::cout << endl;






        //PLAYER 1 DISPLAY ARRAY AFTER SHIFT UP 
        std::cout << "DISPLAYING PLAYER 1 HAND AFTER SHIFT UP" << endl;
        for (int d = 0; d < 52; d++) {

            std::cout << playerOneHand[d] << endl;
        }

        std::cout << endl;

        //PLAYER 2 DISPLAY ARRAY AFTER SHIFT UP
        std::cout << "DISPLAYING PLAYER 2 HAND AFTER SHIFT UP" << endl;
        for (int e = 0; e < 52; e++) {

            std::cout << playerTwoHand[e] << endl;
        }





        //FINDING FIRST TWO CHARACTERS OF P1 AND SETTING IT TO AN INT
        p1FindIntVal p1FindIntValInst;
        p1FindIntValInst.p1SendIntVal(playerOneHand[0]);
        int p1IntReadyForCompare = p1FindIntValInst.p1GetIntVal();

        //FINDING FIRST TWO CHARACTERS OF P2 AND SETTING IT TO AN INT
        p2FindIntVal p2FindIntValInst;
        p2FindIntValInst.p2SendIntVal(playerTwoHand[0]);
        int p2IntReadyForCompare = p2FindIntValInst.p2GetIntVal();
   





        //COMPARE P1 AND P2 HAND 
        string warResult;
        compareHands compareHandsInst;
        compareHandsInst.setCompareHands(p1IntReadyForCompare, p2IntReadyForCompare);
        warResult = compareHandsInst.getCompareHands();

        std::cout << "THIS IS THE RESULT OF THE WAR" << endl;
        std::cout << warResult << endl;





        //GAME PLAY CONDITIONS 
        
       
        //PLAYER 1 WINS
        if (warResult == "P1W") {
            vWarResultP1W(playerOneHand, TempPlaceHolder);
            
            std::cout << "P1 HAND AFTER CARDS LOADED" << endl;//display cards after loaded
            for (int h = 0; h < 52; h++) {

                std::cout << playerOneHand[h] << endl;
            }

            for (int i = 0; i < 20; i++) {//zeroing the TempPlaceHolder 
                TempPlaceHolder[i] = "NA";
            }

            tieCount = 0;
        }

        //PLAYER 2 WINS 
        else if (warResult == "P2W") {
            vWarResultP2W(playerTwoHand, TempPlaceHolder);
            
            std::cout << "P2 HAND AFTER CARDS LOADED" << endl;//dislaying cards after loaded
            for (int h = 0; h < 52; h++) {

                std::cout << playerTwoHand[h] << endl;
            }

            for (int i = 0; i < 20; i++) {//zeroing the TempPlaceHolder 
                TempPlaceHolder[i] = "NA";
            }

            tieCount = 0;
        }
        else {//WAR TIE
            tieCount++;
            //call draw another card function if needed
        }


    }

    std::cout << "you broke out of the loop" << endl;



    return 0;
}

