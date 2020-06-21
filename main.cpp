#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "stdio.h"


using namespace std;

int main(){
string repeat = "n";
do{
int repeatnum;
static string word = "hello";
string str = word;

string curletterstr;
char curletter;
string curscan;
int attempts = 0;


int i = 0;
int b = 5;
int countfor = 0;

string firstletter;
string secondletter;
string thirdletter;
string fourthletter;
string fifthletter;

string progressorder;
bool first = false;
bool second = false;
bool third = false;
bool fourth = false;
bool fifth = false;

char wordcontents[5] = {'h','e','l','l','o'};

char letter1 = wordcontents[0];
char letter2 = wordcontents[1];
char letter3 = wordcontents[2];
char letter4 = wordcontents[3];
char letter5 = wordcontents[4];

string progress;
int progressnum = 0;

char alph[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

cout << "how many times to scan:";
cin >> repeatnum;

string astr = alph;
srand((unsigned) time(0));
int randomnumber;
for (int index = 0; index < repeatnum; index++) {
        countfor++;
    randomnumber = (rand() % astr.size()) + 1;
    curletterstr = alph[randomnumber];
        if (curletterstr.find(wordcontents[countfor]) !=   std::string::npos ){
            progressnum++;
            if (alph[randomnumber] == letter1)
                cout << letter1 << endl;
                progress += "h";
                first = true;

            if (alph[randomnumber] == letter2)
                cout << letter2 << endl;
                progress += "e";
                second = true;

            if (alph[randomnumber] == letter3)
                cout << letter3 << letter4 << endl;
                progress += "l", "l";
                third = true;
                fourth = true;

            if (alph[randomnumber] == letter4)
                cout << letter5 << endl;
                progress += "o";
                fifth = true;

        }
    cout << alph[randomnumber] << endl;
    i++;
    cout << "repeated:" << i << endl;
}
attempts++;

if (progress.length() == 0)
{
    cout << "no letters were found" << endl;
} else {
    cout << "letters found: " <<progress << endl;
}
if (first == true){
    progressorder += "h";
}
if (second == true){
    progressorder += "e";
}
if (third == true){
    progressorder += "l";
}
if (fourth == true){
    progressorder += "l";
}
if (fifth == true){
    progressorder += "o";
}




cout << progressorder << endl;
cout << "run again Y/N";
cin >> repeat;
}while (repeat == "y");
return 0;
}
