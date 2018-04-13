/* THANK YOU GUYZ FOR SUPPORT & SUGGESTIONS
check out the various methods of printing hello world plz contribute with comments if u hv got other printing ideas tooo */

#include <iostream>
#include <string>
#include <stdio.h>
#include <unistd.h>
//need unistd above for using system call                               

using namespace std;

int main() 
{

//simplest way would be
cout<<"1.Hello World"<<endl;



/*or the old but precise C way with printf but gotta use that #include<stdio.h> at the top*/
printf("2.Hello world\n");



/*puts() function works fine too, but we should avoid using it as it causes lots of warnings in many compilers*/
puts("3.Hello world ");



/*printf can also be used for str7 with %s as format specifier for string type*/
char str7[20] = "4.Hello World";
printf("%s\n",str7);



//first way
string str1="5.Hello World";
cout<<str1<<endl;


// also can consider string as an array, here '\0' is end of string notation
int x=0;
string str9="6.Hello World";
while(str9[x]!='\0')
{
   cout<<str9[x];
   x++;
}
cout<<endl;


//second way usin characters array
x=0;
char txt[20]={'7','.','H','e','l','l','o',' ','W','o','r','l','d','!'};
while(txt[x]!='!')
{
     cout<<txt[x] ;  
     x++;
}


//third way using for loop when u know the count of char array
char text[20]={'8','.','H','e','l','l','o',' ','W','o','r','l','d'};
cout<<endl;
for(x=0;x<13;x++)
    cout<<text[x];





//fourth way using pointer to characters array if u dont know count
x=0;
cout<<endl;
char *p="9.Hello World!";
while(*(p+x)!='!')
{
       cout<<*(p+x); 
       x++;
}


//fifth way extracting from a larger string usin inbuilt substr() function
string largetext="This is the sample large text from which we ll extract this 10.Hello World part";
cout<<endl;
 cout<<largetext.substr(60,14);
// here 60 is the starting position of required substring and 14 is no of characters to extract from largetext starting from 60



//sixth way using ASCII codes for charachters
char a=72;  // ascii code for H is 72
char b=101; // for e 101 and so on for all
char c=108;
char d=108;
char e=111;
char f=32;
char g=87;
char h=111;
char i=114;
char j=108;
char k=100;
char l=49;
char m=49;
char n=46;
cout<<endl;
cout<<l<<m<<n<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k;



/*seventh way using string concatenation with +
dont forget to include string header to use this overloaded + operator */
string str2 = "12.Hello ";
string str3 = "World";
cout<<endl;
cout<<str2+str3;




/*eigth way by taking input but im just commenting the input interface for quick run*/
string str4="13.Hello World";
//cin>>str4;
cout<<endl<<str4;



/*ninth way using files for storing hello world in hello.txt using fprintf() and copying it in str5 and str6 using fscanf() */
FILE *fp;
char str5[10], str6[10];
fp=fopen("hello.txt","w+");
    fprintf(fp,"%s %s","14.Hello","World");
    rewind(fp);

    fscanf(fp,"%s",str5);
    fscanf(fp,"%s",str6);
fclose(fp);
cout<<endl<<str5<<" "<<str6<<endl;
/*but gotta use that stdio.h header here too for using files*/



/*tenth way using lower level system calls, this one is my personal favorate, ask if u wanna know the working coz  I gotta write big comment to explain the working*/

const char str8[]= "15.Hello World";
write(STDOUT_FILENO, str8, sizeof(str8));




/* eleventh way
we can also use post/pre increment/decrement operators to move through the string or array, but should be avoided as it causes warning in many compilers and causes error in large texts*/

//post increment x++
char str10[20]={'1','6','.','H','e','l','l','o',' ','W','o','r','l','d','!'};
x=0;
cout<<endl;
while(str10[x]!='!')
{
   cout<<str10[x++];
}

//pre increment ++x
char str11[20]={'1','7','.','H','e','l','l','o',' ','W','o','r','l','d'};
x=-1;
cout<<endl;
while(x<=13)
{
   cout<<str11[++x];
}



//post decrement x--
char str12[20]={'d','l','r','o','W',' ','o','l','l','e','H','.','8','1'};
x=13;
cout<<endl;
while(x>=0)
{
   cout<<str12[x--];
}

//pre decrement  --x
char str13[20]={'d','l','r','o','W',' ','o','l','l','e','H','.','9','1'};
x=14;
cout<<endl;
while(x>=0)
{
   cout<<str13[x--];
}


/* twelvth way using socket programs, working on it but stuck badly can anyone help how to implement client and server here in sololearn */

    return 0;
}
