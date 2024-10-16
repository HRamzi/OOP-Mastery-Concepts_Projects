
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud
#include <iostream>
#include "clsString.h"

using namespace std;

int main()

{
    clsString String1;


    clsString String2("Mohammed");

    String1.value = "Ali Ahmed";

    cout << "String1 = " << String1.value << endl;
    cout << "String2 = " << String2.value << endl;

    cout << "Number of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Hennane Ramzi") << endl;

    //----------------
    clsString String3("hi how are you?");

    cout << "String 3 = " << String3.value << endl;

    cout << "String Length = " << String3.Length() << endl;

    String3.UpperFirstLetterOfEachWord();
    cout << String3.value << endl;

    //----------------

    String3.LowerFirstLetterOfEachWord();
    cout << String3.value << endl;

    //----------------

    String3.UpperAllString();
    cout << String3.value << endl;

    //----------------

    String3.LowerAllString();
    cout << String3.value << endl;

    //----------------

    cout << "After inverting a : "
        << clsString::InvertLetterCase('a') << endl;

    //----------------

    String3.value = "AbCdEfg";

    String3.InvertAllLettersCase();
    cout << String3.value << endl;

    String3.InvertAllLettersCase();
    cout << String3.value << endl;

    //----------------

    cout << "Capital Letters count : "
        << clsString::CountLetters("Hennane Ramzi", clsString::CapitalLetters)
        << endl << endl;

    //----------------

    String3.value = "Welcome to Algeria";
    cout << String3.value << endl;

    cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

    //----------------

    cout << "Small Letters count :" << String3.CountSmallLetters() << endl;

    //----------------

    cout << "vowels count :" << String3.CountVowels() << endl;

    //----------------

    cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;

    //----------------

    cout << "is letter u vowel? " << clsString::IsVowel('a')
        << endl;

    //----------------

    cout << "Words Count" << String3.CountWords()
        << endl;

    //----------------


    vector<string> vString;

    vString = String3.Split(" ");

    cout << "\nTokens = " << vString.size() << endl;

    for (string& s : vString)
    {
        cout << s << endl;
    }

    //----------------

    //Tirms
    String3.value = "    Hennane Ramzi     ";
    cout << "\nString     = " << String3.value;

    String3.value = "    Hennane Ramzi     ";
    String3.TrimLeft();
    cout << "\n\nTrim Left  = " << String3.value;

    //----------------

    String3.value = "    Hennane Ramzi     ";
    String3.TrimRight();
    cout << "\nTrim Right = " << String3.value;

    //----------------

    String3.value = "    Hennane Ramzi     ";
    String3.Trim();
    cout << "\nTrim       = " << String3.value;

    //----------------

    //Joins
    vector<string> vString1 = { "Mohammed","Faid","Ali","Maher" };

    cout << "\n\nJoin String From Vector: \n";
    cout << clsString::JoinString(vString1, " ");


    string arrString[] = { "Mohammed","Faid","Ali","Maher" };

    cout << "\n\nJoin String From array: \n";
    cout << clsString::JoinString(arrString, 4, " ");

    //----------------

    String3.value = "Hennane Ramzi";
    cout << "\n\nString     = " << String3.value;

    String3.ReverseWordsInString();
    cout << "\nReverse Words : " << String3.value
        << endl;

    //---------------

    String3.value = "Hennane Ramzeddine";
    cout << "\nReplace : " << String3.ReplaceWord("Ramzeddine", "Ramzi")
        << endl;

    //---------------

    String3.value = "This is: a sample text, with punctuations.";
    cout << "\n\nString     = " << String3.value;

    String3.RemovePunctuations();
    cout << "\nRemove Punctuations : " << String3.value
        << endl;

    //---------------
    system("pause>0");
    return 0;
};

