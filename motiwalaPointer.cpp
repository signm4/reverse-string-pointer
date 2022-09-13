#include <iostream>
//#include <iomanip>
using namespace std;

void ReverseIt(char* s, char* r);

int main()
{
    char original[100] = "Conan the Barbarian\0";
    char reversed[100];
    ReverseIt(original, reversed);

    cout << original << " reversed is : " << reversed << endl;

}

void ReverseIt(char* s, char* r)
{
    int i=0;
    int z=0;
    int j=0;
    int flag = 0; //flag counter
    int counter = 0;
    int numSpace = 0;


    while(*(s+z)!= '\0') // space counter
    {
        if(*(s+z) == ' ')
            counter++;
        z++;
    }
    // first and middle name going into temp
    while(*(s+i)!= ' ' || flag != counter-1)// while counter does not equal space and counter to 2
    { 
        if (*(s+i) == ' ')
            flag++;
        i++;            // change position
    }
    int b=i-1;

    // last name going to temp1    
    int l = 0;
    i++;

    while(*(s+i) != '\0'){ // while pointer does not point to \0
        *(r+l) = *(s+i);
        i++;
        l++;  // temp
    }
    
    *(r+l) = ',';
    *(r+l+1) = ' ';

    int k = l+2;
    i=0;
    while(i <= b)
    {
        *(r+k) = *(s+i);
        i++;
        k++;
    }
    *(r+k)='\0';
}