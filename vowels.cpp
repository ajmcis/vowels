/*
* Alex Mack
* Vowel Counter
* This program counts the number of vowels in a word
* 11/27/2015 @ 1:36 PM
* Modified on 5/18/2017 @ 4:24 PM
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{

     const int SIZE = 12;
     int aCount;       // holds the number a's in the word
     int eCount;       // holds the number e's in the word
     int iCount;       // holds the number i's in the word
     int oCount;       // holds the number o's in the word
     int uCount;       // holds the number u's in the word
     char word[SIZE];
     char option;

     do
     {
         aCount = 0;
         eCount = 0;
         iCount= 0;
         oCount = 0;
         uCount = 0;
		 
	 cout << "Enter a word: ";
         cin.getline(word, SIZE);

         for (int index = 0; index < strlen(word); index++)
         {

             if (word[index] == 'a')
                 aCount++;
             else if (word[index] == 'e')
                  eCount++;
             else if (word[index] == 'i')
                  iCount++;
             else if (word[index] == 'o')
                  oCount++;
             else if (word[index] == 'u')
                  uCount++;

         }

          cout << "\na: " << aCount << "  ";
          cout << "e: " << eCount << "  ";
          cout << "i: " << iCount << "  ";
          cout << "o: " << oCount << "  ";
          cout << "u: " << uCount << endl;
	  cout << "\ncontinue (y/n)?: ";
	  cin.get(option);
          cin.ignore();
		 
      }while(option == 'Y' || option == 'y');
	 
         cout << endl;
	 cout << static_cast<char>(169) << "Mack 2017\n";
	      
         return 0;

}