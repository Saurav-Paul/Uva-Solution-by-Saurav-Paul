#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int cont=1;
    char ch[100];
    while(scanf("%s",ch)!=EOF )
    {
        if(strcmp(ch,"#")==0)
        {
            break;
        }
        else if(strcmp(ch,"HELLO")==0)
		{
		cout<<"Case "<<cont++<<": ENGLISH"<<endl;
		}

		 else if(strcmp(ch,"HOLA")==0)
		{
		cout<<"Case "<<cont++<<": SPANISH"<<endl;
		}

		else if(strcmp(ch,"HALLO")==0)
		{
		cout<<"Case "<<cont++<<": GERMAN"<<endl;
		}

		 if(strcmp(ch,"BONJOUR")==0)
		{
		cout<<"Case "<<cont++<<": FRENCH"<<endl;
		}

		else if(strcmp(ch,"CIAO")==0)
		{
		cout<<"Case "<<cont++<<": ITALIAN"<<endl;
		}

		else if(strcmp(ch,"ZDRAVSTVUJTE")==0)
		{
		cout<<"Case "<<cont++<<": RUSSIAN"<<endl;
		}

		else{

            cout<<"Case "<<cont++<<": UNKNOWN"<<endl;
		}


    }
}
