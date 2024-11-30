#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include<filesystem>
#include<fstream>
#include<iostream>
#include<time.h>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std; 
int i;
void ClearScreen()
{	
COORD cursorPosition;	cursorPosition.X = 0;	cursorPosition.Y = 0;	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}
void showtime(){
	std:: time_t now =time(0);
	struct tm ltm;
	localtime_s(&ltm,&now);
	 int now_time= ltm.tm_hour;
	int now_day= ltm.tm_mday;
	int now_month= ltm.tm_mon+1;
	std :: cout<<now_day<<" "<<now_month << " " <<now_time;
}
void unflag(){
	
	  int  date[31];
    int i;
     const char *months[]= {"      January" , "\n      February" , "\n       March" , "\n       April" ,
	  "\n        May" , "\n        June" , "\n        July" , "\n       August",
	  "\n     September" , "\n      October" , "\n      November" , "\n      December"};
    int month;
    cout<<endl<<endl<<endl<<endl<<endl;
     for(month=0 ; month<=11 ; month++){
     	  cout<< months[month];
     	if(month==0){
    for(i=0 ; i<31; i++){
        date[i] = i+1;
    }
    printf("\nSu Mo Tu We Th Fr Sa");
    for(i=0 ; i<31 ;i++){
    	if(i%7==0){
    		cout<<"\n";
		}
   printf("%2d " , date[i]);
}
}
if(month==1){
	for(i=0 ; i<28; i++){
        date[i] = i+1;
    }
    printf("\nSu Mo Tu We Th Fr Sa\n");
    printf("          1  2  3  4");
    for(i=4 ; i<28 ;i++){
    	if((i-4)%7==0){
    		cout<<"\n";
		}
  printf("%2d " , date[i]);
}
}
if(month==2){
	for(i=0 ; i<31 ; i++){
		date[i] = i+1;
	}
	  printf("\nSu Mo Tu We Th Fr Sa\n");
	  printf("          1  2  3  4");
	  for(i=4 ; i<31 ; i++){
	  	if((i-4)%7 ==0){
	  	cout<<"\n";
		  }
	printf("%2d " , date[i]);
	  }
}

if(month==3 ){
	 for(i=0 ; i<30; i++){
        date[i] = i+1;
    } 
    printf("\nSu Mo Tu We Th Fr Sa\n");
    printf("                   1");
    for(i=1 ; i<30 ;i++){
    	if((i-1)%7==0){
    		cout<<"\n";
		}
   printf("%2d " , date[i]);
}
}
if(month==4){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("    1  2  3  4  5  6");
	for(i=6 ; i<31 ;i++){
    	if((i+1)%7==0){
    		cout<<"\n";
		}
	printf("%2d " , date[i]);
}
}
if(month==5){
	for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("             1  2  3 ");
	for(i=3 ; i<30 ;i++){
    	if((i+4)%7==0){
    	cout<<"\n";
		}
	printf("%2d " , date[i]);
}
}
if(month==6){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                   1");
	for(i=1; i<31 ;i++){
    	if((i-1)%7==0){
    	cout<<"\n";
		}
  printf("%2d " , date[i]);
}
}
if(month==7){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("       1  2  3  4  5");
	for(i=5; i<31 ;i++){
    	if((i+2)%7==0){
    		cout<<"\n";
		}
printf("%2d " , date[i]);
}
} 
if(month==8 ){
	for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                1  2 ");
	for(i=2; i<30 ;i++){
    	if((i-2)%7==0){
    		cout<<"\n";
		}
printf("%2d " , date[i]);
}
} 
if(month==9){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa");
	for(i=0; i<31 ;i++){
    	if(i%7==0){
    		cout<<"\n";
		}
printf("%2d " , date[i]);
}
} 
if(month==10){
	for(i=0 ; i<30 ; i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	 printf("          1  2  3  4");
	  for(i=4 ; i<30 ; i++){
	  	if((i-4)%7 ==0){
	  		cout<<"\n";
		  }
	printf("%2d " , date[i]);
}
} 
if(month==11){
for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                1  2 ");
	for(i=2; i<30 ;i++){
    	if((i-2)%7==0){
    		cout<<"\n";
		}
	printf("%2d " , date[i]);
}
}
}
	
	
	
}

void flag(string str , int day ){
	int  date[31];
    int i;
     const char *months[]= {"      January" , "\n      February" , "\n       March" , "\n       April" ,
	  "\n        May" , "\n        June" , "\n        July" , "\n       August",
	  "\n     September" , "\n      October" , "\n      November" , "\n      December"};
	  const char *mont[]={"January" , "February" , "March" , "April" ,
	  "May" , "June" , "July" , "August",
	  "September" , "October" , "November" , "December"};
    int month;
    cout<<endl<<endl<<endl<<endl<<endl;
     for(month=0 ; month<=11 ; month++){
     	  cout<< months[month];
     	if(month==0){
    for(i=0 ; i<31; i++){
        date[i] = i+1;
    }
    printf("\nSu Mo Tu We Th Fr Sa");
    for(i=0 ; i<31 ;i++){
    	if(i%7==0){
    		cout<<"\n";
		}
     		if(mont[month]==str   && date[i]== day   ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
}
if(month==1){
	for(i=0 ; i<28; i++){
        date[i] = i+1;
    }
    printf("\nSu Mo Tu We Th Fr Sa\n");
    printf("          1  2  3  4");
    for(i=4 ; i<28 ;i++){
    	if((i-4)%7==0){
    		cout<<"\n";
		}
   		if(mont[month]==str   &&  date[i]==day   ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
  
}
}
if(month==2){
	for(i=0 ; i<31 ; i++){
		date[i] = i+1;
	}
	  printf("\nSu Mo Tu We Th Fr Sa\n");
	  printf("          1  2  3  4");
	  for(i=4 ; i<31 ; i++){
	  	if((i-4)%7 ==0){
	  	cout<<"\n";
		  }
       		if(mont[month]==str   &&  date[i]==day ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
	  }
}

if(month==3 ){
	 for(i=0 ; i<30; i++){
        date[i] = i+1;
    } 
    printf("\nSu Mo Tu We Th Fr Sa\n");
    printf("                   1");
    for(i=1 ; i<30 ;i++){
    	if((i-1)%7==0){
    		cout<<"\n";
		}
     		if(mont[month]==str   &&   date[i]==day  ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
}
if(month==4){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("    1  2  3  4  5  6");
	for(i=6 ; i<31 ;i++){
    	if((i+1)%7==0){
    		cout<<"\n";
		}
	  		if(mont[month]==str   &&  date[i]==day  ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
}
if(month==5){
	for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("             1  2  3 ");
	for(i=3 ; i<30 ;i++){
    	if((i+4)%7==0){
    	cout<<"\n";
		}
	  		if(mont[month]==str   &&  date[i]==day  ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
}
if(month==6){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                   1");
	for(i=1; i<31 ;i++){
    	if((i-1)%7==0){
    	cout<<"\n";
		}
       		if(mont[month]==str   &&   date[i]==day  ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
}
if(month==7){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("       1  2  3  4  5");
	for(i=5; i<31 ;i++){
    	if((i+2)%7==0){
    		cout<<"\n";
		}
  		if(mont[month]==str   && date[i]==day  ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
} 
if(month==8 ){
	for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                1  2 ");
	for(i=2; i<30 ;i++){
    	if((i-2)%7==0){
    		cout<<"\n";
		}
  		if(mont[month]==str   &&   date[i]==day ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
} 
if(month==9){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa");
	for(i=0; i<31 ;i++){
    	if(i%7==0){
    		cout<<"\n";
		}
  		if(mont[month]==str   &&   date[i]==day   ) {
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
} 
if(month==10){
	for(i=0 ; i<30 ; i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	 printf("          1  2  3  4");
	  for(i=4 ; i<30 ; i++){
	  	if((i-4)%7 ==0){
	  		cout<<"\n";
		  }
	  		if(mont[month]==str   &&    date[i]==day  ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
} 
if(month==11){
for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                1  2 ");
	for(i=2; i<30 ;i++){
    	if((i-2)%7==0){
    		cout<<"\n";
		}
  		if(mont[month]==str   && date[i]==day   ){
		printf("# " );
 }
   else{
   	  
   	   printf("%2d " , date[i]);
   }
}
} }
}
void addnote(string month , string day){
	string str1=".text";
	string str2 = month+day+str1; 
	string txt = "hello";
	getline(cin , txt);
	ofstream File(str2 , ios::app);
	File << txt;
	File.close();
} 
void addrepnote(string day){  
string text= "hello";
           getline(cin , text);
           if(day=="Saturday"){
                    string str1=".text" ;
                    string s1="January";
                    string s2="7";
        string  str= s1 + s2 + str1;
        ofstream file(str, ios::app);
         file << text;
         file.close();
         s2="14" ;
         str= s1 + s2 + str1;
        ofstream file1 (str, ios::app);
         file1 << text;
         file1 .close();
		  s2="21";
		  str= s1 + s2 + str1;
        ofstream file12 (str, ios::app);
         file12 << text;
         file12 .close();
		  s2="28";
		  str= s1 + s2 + str1;
        ofstream file13 (str, ios::app);
         file13 << text;
         file13 .close();
         s1="February";
                   s2="4" ;
                   str= s1 + s2 + str1;
        ofstream file2(str, ios::app);
         file2 << text;
         file2.close();
				   s2="11" ;
				   str= s1 + s2 + str1;
        ofstream file21(str, ios::app);
         file21 << text;
         file21.close();
				   s2= "18";
				   str= s1 + s2 + str1;
        ofstream file22(str, ios::app);
         file22 << text;
         file22.close();
				    s2="25";
          str= s1 + s2 + str1;
        ofstream file23(str, ios::app);
         file23 << text;
         file23.close();
              s1="March";
                   s2="4" ;
                   str= s1 + s2 + str1;
        ofstream file3(str, ios::app);
         file3 << text;
         file3.close();
				   s2="11";
				   str= s1 + s2 + str1;
        ofstream file31(str, ios::app);
         file31 << text;
         file31.close();
				    s2= "18";
				    str= s1 + s2 + str1;
        ofstream file32(str, ios::app);
         file32 << text;
         file32.close();
					 s2="25";
          str= s1 + s2 + str1;
        ofstream file33(str, ios::app);
         file33 << text;
         file33.close();
             s1="April";
                   s2="1" ;
                   str= s1 + s2 + str1;
        ofstream file4(str, ios::app);
         file4 << text;
         file4.close();
				    s2="8" ;
				    str= s1 + s2 + str1;
        ofstream file41(str, ios::app);
         file41 << text;
         file41.close();
				    s2="15" ;
				    str= s1 + s2 + str1;
        ofstream file42(str, ios::app);
         file42 << text;
         file42.close();
				    s2="22"; 
				    str= s1 + s2 + str1;
        ofstream file43(str, ios::app);
         file43 << text;
         file43.close();
				   s2="29";
          str= s1 + s2 + str1;
        ofstream file44(str, ios::app);
         file44 << text;
         file44.close();
                        s1="May";
                   s2="6";
                   str= s1 + s2 + str1;
        ofstream filea5(str, ios::app);
         filea5 << text;
         filea5.close();
				   s2= "13" ;
				   str= s1 + s2 + str1;
        ofstream filea51(str, ios::app);
         filea51 << text;
         filea51.close();
				   s2="20" ;
				   str= s1 + s2 + str1;
        ofstream filea52(str, ios::app);
         filea52 << text;
         filea52.close();
				   s2= "27";
          str= s1 + s2 + str1;
        ofstream filea53(str, ios::app);
         filea53 << text;
         filea53.close();
                      s1="June";
                   s2="3" ;
                   str= s1 + s2 + str1;
        ofstream file6(str, ios::app);
         file6 << text;
         file6.close();
				   s2= "10";
				   str= s1 + s2 + str1;
        ofstream file61(str, ios::app);
         file61 << text;
         file61.close();
				   s2= "17" ;
				   str= s1 + s2 + str1;
        ofstream file62(str, ios::app);
         file62 << text;
         file62.close();
				   s2="24";
          str= s1 + s2 + str1;
        ofstream file63(str, ios::app);
         file63 << text;
         file63.close();
                      s1="July";
                   s2="1" ; 
                   str= s1 + s2 + str1;
        ofstream file7(str, ios::app);
         file7<< text;
         file7.close();
				   s2="8" ; 
				   str= s1 + s2 + str1;
        ofstream file71(str, ios::app);
         file71<< text;
         file71.close();
				   s2="15" ; 
				   str= s1 + s2 + str1;
        ofstream file72(str, ios::app);
         file72<< text;
         file72.close();
				   s2="22" ;
				   str= s1 + s2 + str1;
        ofstream file73(str, ios::app);
         file73<< text;
         file73.close();
				   s2="29";
          str= s1 + s2 + str1;
        ofstream file74(str, ios::app);
         file74<< text;
         file74.close();
          s1="August";
                   s2="5";
                   str= s1 + s2 + str1;
        ofstream file8(str, ios::app);
         file8<< text;
         file8.close();
				   s2="12";
				   str= s1 + s2 + str1;
        ofstream file81(str, ios::app);
         file81<< text;
         file81.close();
				   s2="19";
				   str= s1 + s2 + str1;
        ofstream file82(str, ios::app);
         file82<< text;
         file82.close();
				   s2= "26";
          str= s1 + s2 + str1;
        ofstream file83(str, ios::app);
         file83<< text;
         file83.close();
          s1="September";
                    s2="2"; 
                    str= s1 + s2 + str1;
        ofstream file9(str, ios::app);
         file9<< text;
         file9.close();
					s2= "9" ;
					str= s1 + s2 + str1;
        ofstream file91(str, ios::app);
         file91<< text;
         file91.close();
					s2="16" ;
					str= s1 + s2 + str1;
        ofstream file92(str, ios::app);
         file92<< text;
         file92.close();
					s2= "23" ;
					str= s1 + s2 + str1;
        ofstream file93(str, ios::app);
         file93<< text;
         file93.close();
					  s2= "30";
         str= s1 + s2 + str1;
        ofstream file94(str, ios::app);
         file94<< text;
         file94.close();
         s1="October";
                    s2="7" ;
                     str= s1 + s2 + str1;
        ofstream file10(str, ios::app);
         file10 << text;
         file10.close();
					 s2="14"; 
					  str= s1 + s2 + str1;
        ofstream file101(str, ios::app);
         file101 << text;
         file101.close();
					 s2="21" ;
					  str= s1 + s2 + str1;
        ofstream file102(str, ios::app);
         file102 << text;
         file102.close();
					  s2="28";
        str= s1 + s2 + str1;
        ofstream file103(str, ios::app);
         file103 << text;
         file103.close();
          s1="November";
                    s2="4";
                    str= s1 + s2 + str1;
        ofstream file11(str, ios::app);
         file11<< text;
         file11.close();
					s2= "11"; 
					str= s1 + s2 + str1;
        ofstream file111(str, ios::app);
         file111<< text;
         file111.close();
					s2="18";
					str= s1 + s2 + str1;
        ofstream file112(str, ios::app);
         file112<< text;
         file112.close();
					s2="25";
         str= s1 + s2 + str1;
        ofstream file113(str, ios::app);
         file113<< text;
         file113.close();
          s1="December";
                    s2="2"; 
                     str= s1 + s2 + str1;
        ofstream file120(str, ios::app);
         file120<< text;
         file120.close();
					 s2="9";
					  str= s1 + s2 + str1;
        ofstream file121(str, ios::app);
         file121<< text;
         file121.close();
					 s2="16" ;
					  str= s1 + s2 + str1;
        ofstream file122(str, ios::app);
         file122<< text;
         file122.close();
					 s2= "23";
					  str= s1 + s2 + str1;
        ofstream file123(str, ios::app);
         file123<< text;
         file123.close();
					 s2= "30";
          str= s1 + s2 + str1;
        ofstream file124(str, ios::app);
         file124<< text;
         file124.close();
        }
        if(day=="Sunday"){

                    string str1=".text" ;
                    string s1="January";
                    string s2="1";
        string  str= s1 + s2 + str1;
        ofstream file125(str, ios::app);
         file125 << text;
         file125.close();
         s2="8" ; 
         str= s1 + s2 + str1;
        ofstream file13(str, ios::app);
         file13 << text;
         file13.close();
		 s2="15" ; 
		 str= s1 + s2 + str1;
        ofstream file131(str, ios::app);
         file131 << text;
         file131.close();
		 s2="22" ;
		 str= s1 + s2 + str1;
        ofstream file132(str, ios::app);
         file132 << text;
         file132.close();
		 s2="29";
          str= s1 + s2 + str1;
        ofstream file133(str, ios::app);
         file133<< text;
         file133.close();
         s1="February";
                   s2="5" ;
                   str= s1 + s2 + str1;
        ofstream file14(str, ios::app);
         file14 << text;
         file14.close();
				   s2= "12";
				   str= s1 + s2 + str1;
        ofstream file141(str, ios::app);
         file141 << text;
         file141.close();
				   s2="26";
          str= s1 + s2 + str1;
        ofstream file142(str, ios::app);
         file142 << text;
         file142.close();
              s1="March";
                   s2="5";
                    str= s1 + s2 + str1;
        ofstream file15(str, ios::app);
         file15 << text;
         file15.close();
				   s2= "12";
				    str= s1 + s2 + str1;
        ofstream file151(str, ios::app);
         file151 << text;
         file151.close();
				   s2= "19";
				    str= s1 + s2 + str1;
        ofstream file152(str, ios::app);
         file152 << text;
         file152.close();
				   s2= "26";
          str= s1 + s2 + str1;
        ofstream file153(str, ios::app);
         file153 << text;
         file153.close();
             s1="April";
                   s2="2";
                   str= s1 + s2 + str1;
        ofstream file16(str, ios::app);
         file16 << text;
         file16.close();
				   s2= "9" ;
				   str= s1 + s2 + str1;
        ofstream file161(str, ios::app);
         file161 << text;
         file161.close();
				   s2= "16" ;
				   str= s1 + s2 + str1;
        ofstream file162(str, ios::app);
         file162 << text;
         file162.close();

				   s2="23";
          str= s1 + s2 + str1;
        ofstream file163(str, ios::app);
         file163 << text;
         file163.close();

                        s1="May";
                   s2="7" ;
                   str= s1 + s2 + str1;
        ofstream file17(str, ios::app);
         file17 << text;
         file17.close();
				   s2= "14" ;
				   str= s1 + s2 + str1;
        ofstream file171(str, ios::app);
         file171 << text;
         file171.close();
				   s2="21" ;
				   str= s1 + s2 + str1;
        ofstream file172(str, ios::app);
         file172 << text;
         file172.close();
				   s2= "28" ;
          str= s1 + s2 + str1;
        ofstream file173(str, ios::app);
         file173 << text;
         file173.close();
                      s1="June";
                   s2="4" ;
                   str= s1 + s2 + str1;
        ofstream file180(str, ios::app);
         file180 << text;
         file180.close();
				   s2="11" ;
				   str= s1 + s2 + str1;
        ofstream file181(str, ios::app);
         file181 << text;
         file181.close();
				   s2="18" ;
				   str= s1 + s2 + str1;
        ofstream file182(str, ios::app);
         file182 << text;
         file182.close();
				   s2="25";
          str= s1 + s2 + str1;
        ofstream file183(str, ios::app);
         file183 << text;
         file183.close();
                      s1="July";
                   s2="2";
                   str= s1 + s2 + str1;
        ofstream file190(str, ios::app);
         file190 << text;
         file190.close();
				   s2= "9" ;
				   str= s1 + s2 + str1;
        ofstream file191(str, ios::app);
         file191 << text;
         file191.close();
				   s2= "16";
				   str= s1 + s2 + str1;
        ofstream file192(str, ios::app);
         file192 << text;
         file192.close();
				   s2="23";
				   str= s1 + s2 + str1;
        ofstream file193(str, ios::app);
         file193 << text;
         file193.close();
				    s2="30";
          str= s1 + s2 + str1;
        ofstream file194(str, ios::app);
         file194 << text;
         file194.close();
          s1="August";
                   s2="6" ;
                   str= s1 + s2 + str1;
        ofstream file20(str, ios::app);
         file20 << text;
         file20.close();
				   s2= "13";
				   str= s1 + s2 + str1;
        ofstream file201(str, ios::app);
         file201 << text;
         file201.close();       
				   s2= "20" ;
				   str= s1 + s2 + str1;
        ofstream file202(str, ios::app);
         file202 << text;
         file202.close();
				   s2= "27";
          str= s1 + s2 + str1;
        ofstream file203(str, ios::app);
         file203 << text;
         file203.close();
          s1="September";
                    s2="3";
                    str= s1 + s2 + str1;
        ofstream file21(str, ios::app);
         file21 << text;
         file21.close();
					s2 ="10";
					str= s1 + s2 + str1;
        ofstream file211(str, ios::app);
         file211 << text;
         file211.close();
					s2= "17";
					str= s1 + s2 + str1;
        ofstream file212(str, ios::app);
         file212 << text;
         file212.close();
					s2= "24";
         str= s1 + s2 + str1;
        ofstream file213(str, ios::app);
         file213 << text;
         file213.close();
         s1="October";
                    s2="1";
                    str= s1 + s2 + str1;
        ofstream file22(str, ios::app);
         file22 << text;
         file22.close();
					s2= "8";
					str= s1 + s2 + str1;
        ofstream file221(str, ios::app);
         file221 << text;
         file221.close();
					s2= "15" ;
					str= s1 + s2 + str1;
        ofstream file222(str, ios::app);
         file222 << text;
         file222.close();
					s2= "22" ;
					str= s1 + s2 + str1;
        ofstream file223(str, ios::app);
         file223 << text;
         file223.close();
					s2= "29";
        str= s1 + s2 + str1;
        ofstream file224(str, ios::app);
         file224 << text;
         file224.close();
          s1="November";
                    s2="5";
                    str= s1 + s2 + str1;
        ofstream file23(str, ios::app);
         file23 << text;
         file23.close();
					s2= "12" ;
					str= s1 + s2 + str1;
        ofstream file231(str, ios::app);
         file231 << text;
         file231.close();
					s2= "19" ;
					str= s1 + s2 + str1;
        ofstream file232(str, ios::app);
         file232 << text;
         file232.close();
					s2="26";
         str= s1 + s2 + str1;
        ofstream file233(str, ios::app);
         file233<< text;
         file233.close();
          s1="December";
                    s2="3" ;
                    str= s1 + s2 + str1;
        ofstream file24(str, ios::app);
         file24 << text;
         file24.close();
					s2="10" ;
					str= s1 + s2 + str1;
        ofstream file241(str, ios::app);
         file241 << text;
         file241.close();
					s2= "17";
					str= s1 + s2 + str1;
        ofstream file242(str, ios::app);
         file242 << text;
         file242.close();
					s2= "24";
					str= s1 + s2 + str1;
        ofstream file243(str, ios::app);
         file243 << text;
         file243.close();
					s2="31";
          str= s1 + s2 + str1;
        ofstream file244(str, ios::app);
         file244 << text;
         file244.close();
     }
        if(day=="Monday"){

                    string str1=".text" ;
                    string s1="January";
                    string s2="2";
        string  str= s1 + s2 + str1;
        ofstream file25(str, ios::app);
         file25<< text;
         file25.close();
         s2="9" ;
         str= s1 + s2 + str1;
        ofstream file26(str, ios::app);
         file26<< text;
         file26.close();
		 s2= "16";
		 str= s1 + s2 + str1;
        ofstream file261(str, ios::app);
         file261<< text;
         file261.close();
		 s2= "23";
		 str= s1 + s2 + str1;
        ofstream file262(str, ios::app);
         file262<< text;
         file262.close();
		 s2= "30";
          str= s1 + s2 + str1;
        ofstream file263(str, ios::app);
         file263<< text;
         file263.close();
         s1="February";
                   s2="6";
                   str= s1 + s2 + str1;
        ofstream file27(str, ios::app);
         file27<< text;
         file27.close();
				   s2="13" ;
				   str= s1 + s2 + str1;
        ofstream file271(str, ios::app);
         file271<< text;
         file271.close();
				   s2="20" ;
				   str= s1 + s2 + str1;
        ofstream file272(str, ios::app);
         file272<< text;
         file272.close();
				   s2="27";
          str= s1 + s2 + str1;
        ofstream file273(str, ios::app);
         file273<< text;
         file273.close();
              s1="March";
                   s2="6" ;
                   str= s1 + s2 + str1;
        ofstream file28(str, ios::app);
         file28 << text;
         file28.close();
				   s2="13";
				   str= s1 + s2 + str1;
        ofstream file281(str, ios::app);
         file281 << text;
         file281.close();
				    s2="20" ;
				    str= s1 + s2 + str1;
        ofstream file282(str, ios::app);
         file282 << text;
         file282.close();
					s2="27";
          str= s1 + s2 + str1;
        ofstream file283(str, ios::app);
         file283 << text;
         file283.close();
             s1="April";
                   s2="3" ;
                   str= s1 + s2 + str1;
        ofstream file29(str, ios::app);
         file29<< text;
         file29.close();
				   s2="10" ;
				   str= s1 + s2 + str1;
        ofstream file291(str, ios::app);
         file291<< text;
         file291.close();
				   s2="17" ;
				   str= s1 + s2 + str1;
        ofstream file292(str, ios::app);
         file292<< text;
         file292.close();
				   s2="24";
          str= s1 + s2 + str1;
        ofstream file293(str, ios::app);
         file293<< text;
         file293.close();
                        s1="May";
                   s2="1" ;
                    str= s1 + s2 + str1;
        ofstream file30(str, ios::app);
         file30 << text;
         file30.close();
				   s2="8";
				    str= s1 + s2 + str1;
        ofstream file301(str, ios::app);
         file301 << text;
         file301.close();
				   s2= "15";
				    str= s1 + s2 + str1;
        ofstream file302(str, ios::app);
         file302 << text;
         file302.close();
				    s2="22";
				     str= s1 + s2 + str1;
        ofstream file303(str, ios::app);
         file303<< text;
         file303.close();
					 s2="29";
          str= s1 + s2 + str1;
        ofstream file304(str, ios::app);
         file304 << text;
         file304.close();
                      s1="June";
                   s2="5";
                   str= s1 + s2 + str1;
        ofstream file31(str, ios::app);
         file31 << text;
         file31.close();
				   s2= "12";
				   str= s1 + s2 + str1;
        ofstream file311(str, ios::app);
         file311 << text;
         file311.close();
				   s2="19" ;
				   str= s1 + s2 + str1;
        ofstream file312(str, ios::app);
         file312 << text;
         file312.close();
				   s2="26";
          str= s1 + s2 + str1;
        ofstream file313(str, ios::app);
         file313 << text;
         file313.close();
                      s1="July";
                   s2="3";
                   str= s1 + s2 + str1;
        ofstream file32(str, ios::app);
         file32 << text;
         file32.close();
				   s2= "19";
				   str= s1 + s2 + str1;
        ofstream file321(str, ios::app);
         file321 << text;
         file321.close();
				   s2= "17" ;
				   str= s1 + s2 + str1;
        ofstream file322(str, ios::app);
         file322 << text;
         file322.close();
				   s2= "24" ;
				   str= s1 + s2 + str1;
        ofstream file323(str, ios::app);
         file323 << text;
         file323.close();
				   s2="31";
          str= s1 + s2 + str1;
        ofstream file324(str, ios::app);
         file324 << text;
         file324.close();
          s1="August";
                   s2="7" ;
                   str= s1 + s2 + str1;
        ofstream file33(str, ios::app);
         file33 << text;
         file33.close();
				   s2= "14" ;
				   str= s1 + s2 + str1;
        ofstream file331(str, ios::app);
         file331 << text;
         file331.close();
				   s2= "21" ;
				   str= s1 + s2 + str1;
        ofstream file332(str, ios::app);
         file332 << text;
         file332.close();
				   s2= "28";
          str= s1 + s2 + str1;
        ofstream file333(str, ios::app);
         file333 << text;
         file333.close();
          s1="September";
                    s2="4" ;
                    str= s1 + s2 + str1;
        ofstream file34(str, ios::app);
         file34 << text;
         file34.close();
					s2= "11" ;
					str= s1 + s2 + str1;
        ofstream file341(str, ios::app);
         file341 << text;
         file341.close();
         
					s2= "18" ;
					str= s1 + s2 + str1;
        ofstream file342(str, ios::app);
         file342 << text;
         file342.close();
         
					s2= "25";
         str= s1 + s2 + str1;
        ofstream file343(str, ios::app);
         file343 << text;
         file343.close();
         
         s1="October";
                    s2="2" ;
                    str= s1 + s2 + str1;
        ofstream file35(str, ios::app);
         file35 << text;
         file35.close();
					s2= "9" ;
					str= s1 + s2 + str1;
        ofstream file351(str, ios::app);
         file351 << text;
         file351.close();
					s2= "16" ;
					str= s1 + s2 + str1;
        ofstream file352(str, ios::app);
         file352 << text;
         file352.close();
					s2= "23" ;
					str= s1 + s2 + str1;
        ofstream file353(str, ios::app);
         file353 << text;
         file353.close();
					s2= "30";
        str= s1 + s2 + str1;
        ofstream file354(str, ios::app);
         file354<< text;
         file354.close();
          s1="November";
                    s2="6";
                    str= s1 + s2 + str1;
        ofstream file36(str, ios::app);
         file36 << text;
         file36.close();
					s2="13";
					str= s1 + s2 + str1;
        ofstream file361(str, ios::app);
         file361 << text;
         file361.close();
					s2="20" ;
					str= s1 + s2 + str1;
        ofstream file362(str, ios::app);
         file362 << text;
         file362.close();
					s2="27";
         str= s1 + s2 + str1;
        ofstream file363(str, ios::app);
         file363 << text;
         file363.close();
          s1="December";
                    s2="4" ;
                     str= s1 + s2 + str1;
        ofstream file37(str, ios::app);
         file37 << text;
         file37.close();
					 s2="11";
					  str= s1 + s2 + str1;
        ofstream file371(str, ios::app);
         file371 << text;
         file371.close();
					  s2="18" ;
					   str= s1 + s2 + str1;
        ofstream file372(str, ios::app);
         file372 << text;
         file372.close();
					  s2= "25";
          str= s1 + s2 + str1;
        ofstream file373(str, ios::app);
         file373 << text;
         file373.close();
        }
        if(day=="Tuesday"){
                    string str1=".text" ;
                    string s1="January";
                    string s2="3";
        string  str= s1 + s2 + str1;
        ofstream file38(str, ios::app);
        file38 << text;
         file38.close();
         s2="10" ;
         str= s1 + s2 + str1;
        ofstream file39(str, ios::app);
         file39 << text;
         file39.close();
		 s2="17";
		 str= s1 + s2 + str1;
        ofstream file390(str, ios::app);
         file390 << text;
         file390.close();
		  s2= "24";
		  str= s1 + s2 + str1;
        ofstream file391(str, ios::app);
         file391 << text;
         file391.close();
		 s2= "31";
          str= s1 + s2 + str1;
        ofstream file392(str, ios::app);
         file392 << text;
         file392.close();
         s1="February";
                   s2="7" ;
                   str= s1 + s2 + str1;
        ofstream file400(str, ios::app);
         file400 << text;
         file400.close();
				   s2= "14" ;
				   str= s1 + s2 + str1;
        ofstream file401(str, ios::app);
         file401 << text;
         file401.close();
				   s2= "21" ;
				   str= s1 + s2 + str1;
        ofstream file402(str, ios::app);
         file402 << text;
         file402.close();
				   s2= "28";
          str= s1 + s2 + str1;
        ofstream file403(str, ios::app);
         file403 << text;
         file403.close();
              s1="March";
                   s2="7";
                   str= s1 + s2 + str1;
        ofstream file404(str, ios::app);
         file404<< text;
         file404.close();
				    s2= "14";
				    str= s1 + s2 + str1;
        ofstream file405(str, ios::app);
         file405<< text;
         file405.close();
					 s2="21";
					 str= s1 + s2 + str1;
        ofstream file406(str, ios::app);
         file406<< text;
         file406.close();
					 s2="28";
          str= s1 + s2 + str1;
        ofstream file407(str, ios::app);
         file407<< text;
         file407.close();
             s1="April";
                   s2="4"; 
                   str= s1 + s2 + str1;
        ofstream file408(str, ios::app);
         file408 << text;
         file408.close();
				   s2= "11";
				   str= s1 + s2 + str1;
        ofstream file409(str, ios::app);
         file409 << text;
         file409.close();
				   s2 ="18" ;
				   str= s1 + s2 + str1;
        ofstream file410(str, ios::app);
         file410 << text;
         file410.close();
				   s2="25";
          str= s1 + s2 + str1;
        ofstream file411(str, ios::app);
         file411 << text;
         file411.close();
                  s1="May";
                   s2="2"; 
                   str= s1 + s2 + str1;
        ofstream file430(str, ios::app);
         file430 << text;
         file430.close();
				   s2= "9" ;
				   str= s1 + s2 + str1;
        ofstream file431(str, ios::app);
         file431 << text;
         file431.close();
				   s2="16"; 
				   str= s1 + s2 + str1;
        ofstream file432(str, ios::app);
         file432 << text;
         file432.close();
				   s2= "23"; 
				   str= s1 + s2 + str1;
        ofstream file433(str, ios::app);
         file433 << text;
         file433.close();
				   s2 ="30";
          str= s1 + s2 + str1;
        ofstream file434(str, ios::app);
         file434 << text;
         file434.close();
                      s1="June";
                   s2="6" ;
                   str= s1 + s2 + str1;
        ofstream file440(str, ios::app);
         file440<< text;
         file440.close();
				   s2="13";
				   str= s1 + s2 + str1;
        ofstream file441(str, ios::app);
         file441<< text;
         file441.close();
				   s2= "20" ;
				   str= s1 + s2 + str1;
        ofstream file442(str, ios::app);
         file442<< text;
         file442.close();
				   s2="27";
          str= s1 + s2 + str1;
        ofstream file443(str, ios::app);
         file443<< text;
         file443.close();
                      s1="July";
                   s2="4";
                   str= s1 + s2 + str1;
        ofstream file450(str, ios::app);
         file450 << text;
         file450.close();
				   s2="11";
				   str= s1 + s2 + str1;
        ofstream file451(str, ios::app);
         file451 << text;
         file451.close();
				    s2="18";
				    str= s1 + s2 + str1;
        ofstream file452(str, ios::app);
         file452 << text;
         file452.close();
					s2= "25";
          str= s1 + s2 + str1;
        ofstream file453(str, ios::app);
         file453 << text;
         file453.close();
          s1="August";
              s2="1" ;
              str= s1 + s2 + str1;
        ofstream file460(str, ios::app);
         file460 << text;
         file460.close();
			  s2="8";
			  str= s1 + s2 + str1;
        ofstream file461(str, ios::app);
         file461 << text;
         file461.close();
			  s2="15" ;
			  str= s1 + s2 + str1;
        ofstream file462(str, ios::app);
         file462 << text;
         file462.close();
			   s2="22";
			   str= s1 + s2 + str1;
        ofstream file463(str, ios::app);
         file463 << text;
         file463.close();
			    s2="29";
          str= s1 + s2 + str1;
        ofstream file464(str, ios::app);
         file464 << text;
         file464.close();
          s1="September";
                    s2="5" ;
                    str= s1 + s2 + str1;
        ofstream file470(str, ios::app);
         file470 << text;
         file470.close();
					s2= "12" ;
					str= s1 + s2 + str1;
        ofstream file471(str, ios::app);
         file471 << text;
         file471.close();
					s2= "19";
					str= s1 + s2 + str1;
        ofstream file472(str, ios::app);
         file472 << text;
         file472.close();
					s2="26";
         str= s1 + s2 + str1;
        ofstream file473(str, ios::app);
         file473 << text;
         file473.close();
         s1="October";
                    s2="3" ;
                    str= s1 + s2 + str1;
        ofstream file480(str, ios::app);
         file480 << text;
         file480.close();
					s2="10";
					str= s1 + s2 + str1;
        ofstream file481(str, ios::app);
         file481 << text;
         file481.close();
					s2= "17";
					str= s1 + s2 + str1;
        ofstream file482(str, ios::app);
         file482 << text;
         file482.close();
					s2= "24";
					str= s1 + s2 + str1;
        ofstream file483(str, ios::app);
         file483 << text;
         file483.close();
					s2= "31";
        str= s1 + s2 + str1;
        ofstream file484(str, ios::app);
         file484<< text;
         file484.close();
          s1="November";
                    s2="7" ;
                    str= s1 + s2 + str1;
        ofstream file490(str, ios::app);
         file490 << text;
         file490.close();
					s2="14";
					str= s1 + s2 + str1;
        ofstream file491(str, ios::app);
         file491 << text;
         file491.close();
					s2= "21" ;
					str= s1 + s2 + str1;
        ofstream file492(str, ios::app);
         file492 << text;
         file492.close();
					s2= "28";
         str= s1 + s2 + str1;
        ofstream file493(str, ios::app);
         file493 << text;
         file493.close();
          s1="December";
                    s2="5" ;
                    str= s1 + s2 + str1;
        ofstream file500(str, ios::app);
         file500 << text;
         file500.close();
					s2= "12";
					str= s1 + s2 + str1;
        ofstream file501(str, ios::app);
         file501 << text;
         file501.close();
					s2="19";
					str= s1 + s2 + str1;
        ofstream file502(str, ios::app);
         file502 << text;
         file502.close();
					s2= "26";
          str= s1 + s2 + str1;
        ofstream file503(str, ios::app);
         file503 << text;
         file503.close();
        }

        if(day=="Wednesday"){

                    string str1=".text" ;
                    string s1="January";
                    string s2="4";
        string  str= s1 + s2 + str1;
        ofstream file510(str, ios::app);
         file510 << text;
         file510.close();
         s2="11" ;
         str= s1 + s2 + str1;
        ofstream file511(str, ios::app);
         file511 << text;
         file511.close();
		 s2= "18" ;
		 str= s1 + s2 + str1;
        ofstream file512(str, ios::app);
         file512 << text;
         file512.close();
		 s2= "25";
          str= s1 + s2 + str1;
        ofstream file513(str, ios::app);
         file513 << text;
         file513.close();
         s1="February";
                   s2="1" ;
                   str= s1 + s2 + str1;
        ofstream file520(str, ios::app);
         file520 << text;
         file520.close();
				   s2= "8" ;
				   str= s1 + s2 + str1;
        ofstream file521(str, ios::app);
         file521 << text;
         file521.close();
				   s2= "15" ;
				   str= s1 + s2 + str1;
        ofstream file522(str, ios::app);
         file522<< text;
         file522.close();
				   s2="22";
          str= s1 + s2 + str1;
        ofstream file523(str, ios::app);
         file523 << text;
         file523.close();
              s1="March";
                   s2="1";
                   str= s1 + s2 + str1;
        ofstream file540(str, ios::app);
         file540<< text;
         file540.close();
				   s2= "8";
				   str= s1 + s2 + str1;
        ofstream file541(str, ios::app);
         file541<< text;
         file541.close();
				   s2= "15";
				   str= s1 + s2 + str1;
        ofstream file542(str, ios::app);
         file542<< text;
         file542.close();
				   s2= "22" ;
				   str= s1 + s2 + str1;
        ofstream file543(str, ios::app);
         file543<< text;
         file543.close();
				   s2= "29";
          str= s1 + s2 + str1;
        ofstream file544(str, ios::app);
         file544<< text;
         file544.close();
             s1="April";
                   s2="5" ;
                   str= s1 + s2 + str1;
        ofstream file550(str, ios::app);
         file550 << text;
         file550.close();
				   s2= "12" ;
				   str= s1 + s2 + str1;
        ofstream file551(str, ios::app);
         file551 << text;
         file551.close();
				   s2= "19";
				   str= s1 + s2 + str1;
        ofstream file552(str, ios::app);
         file552 << text;
         file552.close();
				   s2= "26";
          str= s1 + s2 + str1;
        ofstream file553(str, ios::app);
         file553 << text;
         file553.close();
              
                        s1="May";
                   s2="3" ;
                   str= s1 + s2 + str1;
        ofstream file560(str, ios::app);
         file560 << text;
         file560.close();
				   s2= "10";
				   str= s1 + s2 + str1;
        ofstream file561(str, ios::app);
         file561 << text;
         file561.close();
				   s2="17" ;
				   str= s1 + s2 + str1;
        ofstream file562(str, ios::app);
         file562 << text;
         file562.close();
				   s2= "24";
				   str= s1 + s2 + str1;
        ofstream file563(str, ios::app);
         file563 << text;
         file563.close();
				   s2= "31";
          str= s1 + s2 + str1;
        ofstream file564(str, ios::app);
         file564 << text;
         file564.close();
                      s1="June";
                   s2="7" ;
                   str= s1 + s2 + str1;
        ofstream file570(str, ios::app);
         file570<< text;
         file570.close();
				   s2= "14";
				   str= s1 + s2 + str1;
        ofstream file571(str, ios::app);
         file571<< text;
         file571.close();
				   s2="21" ;
				   str= s1 + s2 + str1;
        ofstream file572(str, ios::app);
         file572<< text;
         file572.close();
				   s2= "28";
          str= s1 + s2 + str1;
        ofstream file573(str, ios::app);
         file573<< text;
         file573.close();
                      s1="July";
                   s2="5" ;
                   str= s1 + s2 + str1;
        ofstream file580(str, ios::app);
         file580 << text;
         file580.close();
				   s2= "12"; 
				   str= s1 + s2 + str1;
        ofstream file581(str, ios::app);
         file581 << text;
         file581.close();
				   s2="19";
				   str= s1 + s2 + str1;
        ofstream file582(str, ios::app);
         file582 << text;
         file582.close();
				   s2="26";
          str= s1 + s2 + str1;
        ofstream file583(str, ios::app);
         file583 << text;
         file583.close();
          s1="August";
                   s2="2";
                   str= s1 + s2 + str1;
        ofstream file590(str, ios::app);
         file590 << text;
         file590.close();
				   s2= "9" ;
				   str= s1 + s2 + str1;
        ofstream file591(str, ios::app);
         file591<< text;
         file591.close();
				   s2= "16" ;
				   str= s1 + s2 + str1;
        ofstream file592(str, ios::app);
         file592 << text;
         file592.close();
				   s2="23" ;
				   str= s1 + s2 + str1;
        ofstream file593(str, ios::app);
         file593 << text;
         file593.close();
				   s2= "30";
          str= s1 + s2 + str1;
        ofstream file594(str, ios::app);
         file594 << text;
         file594.close();
          s1="September";
                    s2="6";
                     str= s1 + s2 + str1;
        ofstream file600(str, ios::app);
         file600 << text;
         file600.close();
					s2= "13";
					 str= s1 + s2 + str1;
        ofstream file601(str, ios::app);
         file601 << text;
         file601.close();
					s2= "20" ;
					 str= s1 + s2 + str1;
        ofstream file602(str, ios::app);
         file602 << text;
         file602.close();
					s2= "27";
         str= s1 + s2 + str1;
        ofstream file603(str, ios::app);
         file603 << text;
         file603.close();
         s1="October";
                    s2="4" ;
                    str= s1 + s2 + str1;
        ofstream file610(str, ios::app);
         file610 << text;
         file610.close();
					s2= "11";
					str= s1 + s2 + str1;
        ofstream file611(str, ios::app);
         file611 << text;
         file611.close();
					s2= "18";
					str= s1 + s2 + str1;
        ofstream file612(str, ios::app);
         file612 << text;
         file612.close();
					s2="25";
        str= s1 + s2 + str1;
        ofstream file613(str, ios::app);
         file613 << text;
         file613.close();
          s1="November";
          s2="1" ;
          str= s1 + s2 + str1;
        ofstream file620(str, ios::app);
         file620<< text;
         file620.close();
		  s2= "8";
		  str= s1 + s2 + str1;
        ofstream file621(str, ios::app);
         file621<< text;
         file621.close();
		  s2= "15" ;
		  str= s1 + s2 + str1;
        ofstream file622(str, ios::app);
         file622<< text;
         file622.close();
		  s2="22";
		  str= s1 + s2 + str1;
        ofstream file623(str, ios::app);
         file623<< text;
         file623.close();
		  s2= "29";
          str= s1 + s2 + str1;
        ofstream file624(str, ios::app);
         file624<< text;
         file624.close();
          s1="December";
                    s2="6";
                    str= s1 + s2 + str1;
        ofstream file630(str, ios::app);
         file630 << text;
         file630.close();
					s2= "13" ;
					str= s1 + s2 + str1;
        ofstream file631(str, ios::app);
         file631 << text;
         file631.close();
					s2="20";
					str= s1 + s2 + str1;
        ofstream file632(str, ios::app);
         file632 << text;
         file632.close();
					s2= "27";
          str= s1 + s2 + str1;
        ofstream file633(str, ios::app);
         file633 << text;
         file633.close();
        }
        if(day=="Thursday"){

                    string str1=".text" ;
                    string s1="January";
                    string s2="5";
        string  str= s1 + s2 + str1;
        ofstream file640(str, ios::app);
         file640 << text;
         file640.close();
         s2= "12" ;
         ofstream file641(str, ios::app);
         file641 << text;
         file641.close();
		 s2= "19" ;
		 ofstream file642(str, ios::app);
         file642 << text;
         file642.close();
		 s2= "26";
        ofstream file643(str, ios::app);
         file643<< text;
         file643.close();
         s1="February";
                   s2="2";
                   str= s1 + s2 + str1;
        ofstream file650(str, ios::app);
         file650 << text;
         file650.close();
				   s2="9" ;
				   str= s1 + s2 + str1;
        ofstream file651(str, ios::app);
         file651 << text;
         file651.close();
				   s2= "16" ;
				   str= s1 + s2 + str1;
        ofstream file652(str, ios::app);
         file652 << text;
         file652.close();
				   s2= "23";
          str= s1 + s2 + str1;
        ofstream file653(str, ios::app);
         file653 << text;
         file653.close();
              s1="March";
                   s2="2";
                   str= s1 + s2 + str1;
        ofstream file660(str, ios::app);
         file660<< text;
         file660.close();
				   s2= "9";
				   str= s1 + s2 + str1;
        ofstream file661(str, ios::app);
         file661<< text;
         file661.close();
				   s2= "16" ;
				   str= s1 + s2 + str1;
        ofstream file670(str, ios::app);
         file670<< text;
         file670.close();
				   s2= "23" ;
				   str= s1 + s2 + str1;
        ofstream file671(str, ios::app);
         file671<< text;
         file671.close();
				   s2= "30";
          str= s1 + s2 + str1;
        ofstream file672(str, ios::app);
         file672<< text;
         file672.close();
             s1="April";
                   s2="6" ;
                   str= s1 + s2 + str1;
        ofstream file680(str, ios::app);
         file680<< text;
         file680.close();
				   s2="13" ;
				   str= s1 + s2 + str1;
        ofstream file681(str, ios::app);
         file681<< text;
         file681.close();
				   s2= "20";
				   str= s1 + s2 + str1;
        ofstream file682(str, ios::app);
         file682<< text;
         file682.close();
				   s2="27";
          str= s1 + s2 + str1;
        ofstream file683(str, ios::app);
         file683<< text;
         file683.close();
           s1="May";
                   s2="4" ;
                   str= s1 + s2 + str1;
        ofstream file690(str, ios::app);
        file690 << text;
         file690.close();
				   s2= "11";
				   str= s1 + s2 + str1;
        ofstream file691(str, ios::app);
        file691 << text;
         file691.close();
				   s2= "18";
				   str= s1 + s2 + str1;
        ofstream file692(str, ios::app);
        file692 << text;
         file692.close();
				   s2= "25";
          str= s1 + s2 + str1;
        ofstream file693(str, ios::app);
        file693 << text;
         file693.close();
                      s1="June";
                   s2="1" ;
                   str= s1 + s2 + str1;
        ofstream file700(str, ios::app);
         file700 << text;
         file700.close();
				   s2= "8" ;
				   str= s1 + s2 + str1;
        ofstream file701(str, ios::app);
         file701 << text;
         file701.close();
				   s2= "15" ;
				   str= s1 + s2 + str1;
        ofstream file702(str, ios::app);
         file702 << text;
         file702.close();
				   s2= "22" ;
				   str= s1 + s2 + str1;
        ofstream file703(str, ios::app);
         file703 << text;
         file703.close();
				   s2= "29";
          str= s1 + s2 + str1;
        ofstream file704(str, ios::app);
         file704<< text;
         file704.close();
                      s1="July";
                   s2="6" ;
                   str= s1 + s2 + str1;
        ofstream file710(str, ios::app);
         file710 << text;
         file710.close();
				   s2= "13" ;
				   str= s1 + s2 + str1;
        ofstream file711(str, ios::app);
         file711 << text;
         file711.close();
				   s2= "20" ;
				   str= s1 + s2 + str1;
        ofstream file712(str, ios::app);
         file712 << text;
         file712.close();
				   s2= "27";
          str= s1 + s2 + str1;
        ofstream file713(str, ios::app);
         file713 << text;
         file713.close();
          s1="August";
               s2="3" ;
                str= s1 + s2 + str1;
        ofstream file720(str, ios::app);
         file720<< text;
         file720.close();
			   s2= "10" ;
			    str= s1 + s2 + str1;
        ofstream file721(str, ios::app);
         file721<< text;
         file721.close();
			   s2= "17" ;
			    str= s1 + s2 + str1;
        ofstream file722(str, ios::app);
         file722<< text;
         file722.close();
			   s2= "24" ;
			    str= s1 + s2 + str1;
        ofstream file723(str, ios::app);
         file723<< text;
         file723.close();
			   s2= "31";
          str= s1 + s2 + str1;
        ofstream file724(str, ios::app);
         file724<< text;
         file724.close();
          s1="September";
                    s2="7";
                    str= s1 + s2 + str1;
        ofstream file730(str, ios::app);
         file730 << text;
         file730.close();
					s2="14" ;
					str= s1 + s2 + str1;
        ofstream file731(str, ios::app);
         file731 << text;
         file731.close();
					s2= "21" ;
					str= s1 + s2 + str1;
        ofstream file732(str, ios::app);
         file732 << text;
         file732.close();
					s2= "28";
         str= s1 + s2 + str1;
        ofstream file733(str, ios::app);
         file733 << text;
         file733.close();
         s1="October";
                    s2="5" ;
                    str= s1 + s2 + str1;
        ofstream file740(str, ios::app);
         file740<< text;
         file740.close();
					s2= "12" ;
					str= s1 + s2 + str1;
        ofstream file741(str, ios::app);
         file741 << text;
         file741.close();
					s2= "19" ;
					str= s1 + s2 + str1;
        ofstream file742(str, ios::app);
         file742 << text;
         file742.close();
					s2= "26";
        str= s1 + s2 + str1;
        ofstream file743(str, ios::app);
         file743 << text;
         file743.close();
          s1="November";
                s2="2" ;
                str= s1 + s2 + str1;
        ofstream file750(str, ios::app);
        file750<< text;
        file750.close();
				s2= "9" ;
				str= s1 + s2 + str1;
        ofstream file751(str, ios::app);
        file751<< text;
        file751.close();
				s2= "16" ;
				str= s1 + s2 + str1;
        ofstream file752(str, ios::app);
        file752<< text;
        file752.close();
				s2="23" ;
				str= s1 + s2 + str1;
        ofstream file753(str, ios::app);
        file753<< text;
        file753.close();
				s2="30";
          str= s1 + s2 + str1;
        ofstream file754(str, ios::app);
        file754<< text;
        file754.close();
          s1="December";
                    s2="7" ;
                    str= s1 + s2 + str1;
        ofstream file760(str, ios::app);
         file760 << text;
         file760.close();
					s2= "14";
					str= s1 + s2 + str1;
        ofstream file761(str, ios::app);
         file761 << text;
         file761.close();
					s2= "21";
					str= s1 + s2 + str1;
        ofstream file762(str, ios::app);
         file762 << text;
         file762.close();
					s2= "28";
          str= s1 + s2 + str1;
        ofstream file763(str, ios::app);
         file763 << text;
         file763.close();
        }
        else if(day=="Friday"){
                    string str1=".text" ;
                    string s1="January";
                    string s2="6";
        string  str= s1 + s2 + str1;
        ofstream file770(str, ios::app);
         file770<< text;
         file770.close();
         s2="13" ;
         str= s1 + s2 + str1;
        ofstream file771(str, ios::app);
         file771 << text;
         file771.close();
		 s2= "20" ;
		 str= s1 + s2 + str1;
        ofstream file772(str, ios::app);
         file772 << text;
         file772.close();
		 s2= "27";
          str= s1 + s2 + str1;
        ofstream file773(str, ios::app);
         file773 << text;
         file773.close();
         s1="February";
                   s2="3";
                   str= s1 + s2 + str1;
        ofstream file780(str, ios::app);
         file780 << text;
         file780.close();
				   s2="10" ;
				   str= s1 + s2 + str1;
        ofstream file781(str, ios::app);
         file781 << text;
         file781.close();
				   s2= "17" ;
				   str= s1 + s2 + str1;
        ofstream file782(str, ios::app);
         file782 << text;
         file782.close();
				   s2="24";
          str= s1 + s2 + str1;
        ofstream file783(str, ios::app);
         file783 << text;
         file783.close();
              s1="March";
                   s2="3";
                   str= s1 + s2 + str1;
        ofstream file790(str, ios::app);
         file790 << text;
         file790.close();
				   s2= "10" ;
				   str= s1 + s2 + str1;
        ofstream file791(str, ios::app);
         file791 << text;
         file791.close();
				   s2= "17" ;
				   str= s1 + s2 + str1;
        ofstream file792(str, ios::app);
         file792 << text;
         file792.close();
				   s2= "24" ;
				   str= s1 + s2 + str1;
        ofstream file793(str, ios::app);
         file793 << text;
         file793.close();
				   s2= "31";
          str= s1 + s2 + str1;
        ofstream file794(str, ios::app);
         file794 << text;
         file794.close();
             s1="April";
                   s2="7" ;
                   str= s1 + s2 + str1;
        ofstream file800(str, ios::app);
         file800 << text;
         file800.close();
				   s2= "14" ;
				   str= s1 + s2 + str1;
        ofstream file801(str, ios::app);
         file801 << text;
         file801.close();
				   s2="21";
				   str= s1 + s2 + str1;
        ofstream file802(str, ios::app);
         file802 << text;
         file802.close();
				   s2= "28";
          str= s1 + s2 + str1;
        ofstream file803(str, ios::app);
         file803 << text;
         file803.close();
                        s1="May";
                         str= s1 + s2 + str1;
        ofstream file810(str, ios::app);
         file810 << text;
         file810.close();
                        s2="5" ;
                         str= s1 + s2 + str1;
        ofstream file811(str, ios::app);
         file811 << text;
         file811.close();
						s2="12" ;
						 str= s1 + s2 + str1;
        ofstream file812(str, ios::app);
         file812 << text;
         file812.close();
						s2= "19" ;
						 str= s1 + s2 + str1;
        ofstream file813(str, ios::app);
         file813 << text;
         file813.close();
						s2= "26";
          str= s1 + s2 + str1;
        ofstream file814(str, ios::app);
         file814 << text;
         file814.close();
                      s1="June";
                   s2="2";
                   str= s1 + s2 + str1;
        ofstream file820(str, ios::app);
         file820 << text;
         file820.close();
				   s2= "9";
				   str= s1 + s2 + str1;
        ofstream file821(str, ios::app);
         file821 << text;
         file821.close();
				   s2= "16";
				   str= s1 + s2 + str1;
        ofstream file822(str, ios::app);
         file822 << text;
         file822.close();
				   s2="23";
				   str= s1 + s2 + str1;
        ofstream file823(str, ios::app);
         file823 << text;
         file823.close();
				   s2="30";
          str= s1 + s2 + str1;
        ofstream file824(str, ios::app);
         file824 << text;
         file824.close();
                      s1="July";
                   s2="7" ;
                   str= s1 + s2 + str1;
        ofstream file830(str, ios::app);
         file830 << text;
         file830.close();
				   s2= "14"; 
				   str= s1 + s2 + str1;
        ofstream file831(str, ios::app);
         file831 << text;
         file831.close();
				   s2="21" ;
				   str= s1 + s2 + str1;
        ofstream file832(str, ios::app);
         file832 << text;
         file832.close();
				   s2= "28";
          str= s1 + s2 + str1;
        ofstream file833(str, ios::app);
         file833 << text;
         file833.close();
          s1="August";
                   s2="4" ;
                   str= s1 + s2 + str1;
        ofstream file840(str, ios::app);
         file840 << text;
         file840.close();
				   s2= "11" ;
				   str= s1 + s2 + str1;
        ofstream file841(str, ios::app);
         file841 << text;
         file841.close();
				   s2= "18" ;
				   str= s1 + s2 + str1;
        ofstream file842(str, ios::app);
         file842 << text;
         file842.close();
				   s2= "25";
          str= s1 + s2 + str1;
        ofstream file843(str, ios::app);
         file843<< text;
         file843.close();
          s1="September";
                    s2="1" ;
                    str= s1 + s2 + str1;
        ofstream file850(str, ios::app);
         file850 << text;
         file850.close();
					s2="8" ;
					str= s1 + s2 + str1;
        ofstream file851(str, ios::app);
         file851 << text;
         file851.close();
					s2="15" ;
					str= s1 + s2 + str1;
        ofstream file852(str, ios::app);
         file852 << text;
         file852.close();
					s2= "22" ;
					str= s1 + s2 + str1;
        ofstream file853(str, ios::app);
         file853 << text;
         file853.close();
					s2= "29";
         str= s1 + s2 + str1;
        ofstream file854(str, ios::app);
         file854 << text;
         file854.close();
         s1="October";
                    s2="6" ;
                    str= s1 + s2 + str1;
        ofstream file860(str, ios::app);
         file860 << text;
         file860.close();
					s2= "13" ;
					str= s1 + s2 + str1;
        ofstream file861(str, ios::app);
         file861 << text;
         file861.close();
					s2="20";
					str= s1 + s2 + str1;
        ofstream file862(str, ios::app);
         file862 << text;
         file862.close();
					s2= "27";
        str= s1 + s2 + str1;
        ofstream file863(str, ios::app);
         file863 << text;
         file863.close();
          s1="November";
                    s2="3" ;
                    str= s1 + s2 + str1;
        ofstream file870(str, ios::app);
         file870 << text;
         file870.close();
					s2= "10";
					str= s1 + s2 + str1;
        ofstream file871(str, ios::app);
         file871 << text;
         file871.close();
					s2= "17" ;
					str= s1 + s2 + str1;
        ofstream file872(str, ios::app);
         file872 << text;
         file872.close();
					s2= "24";
         str= s1 + s2 + str1;
        ofstream file873(str, ios::app);
         file873 << text;
         file873.close();
          s1="December";
                    s2="1" ;
                    str= s1 + s2 + str1;
        ofstream file880(str, ios::app);
         file880 << text;
         file880.close();
					s2= "8" ;
					str= s1 + s2 + str1;
        ofstream file881(str, ios::app);
         file881 << text;
         file881.close();
					s2= "15" ;
					str= s1 + s2 + str1;
        ofstream file882(str, ios::app);
         file882 << text;
         file882.close();
					s2="22";
					str= s1 + s2 + str1;
        ofstream file883(str, ios::app);
         file883 << text;
         file883.close();
					 s2= "29";
          str= s1 + s2 + str1;
        ofstream file884(str, ios::app);
         file884 << text;
         file884.close();
}
}
void shownote(string month, string day){
	string str1 =".text";
	fstream file;
	string s1=month+day+str1;
	file.open(s1,ios::in);
	if(file.is_open()){
		string t;
		while(getline(file , t)){
			cout <<t<<"\n";
		}
		file.close();
	}
}
void showallnote(){
          for(int i=1;i<=31 ; i++){
             string s0;
           fstream file;
                 string str1=".text" ;
            s0=to_string(i);
           string month="January";
        string s1=month + s0 + str1;;
        cout<<"January "<<i<<"-> ";
        file.open(s1,ios::in); 
   if (file.is_open()){
      string t;
      while(getline(file, t)){ 
         cout << t << "\n"; 
      }
      file.close(); 
   }
       cout<<endl;
          }
       cout<<endl;
       for(int i=1;i<=28 ; i++){
             string s0;
           fstream file;
                 string str1=".text" ;
            s0=to_string(i);
           string month="February";
        string s1=month + s0 + str1;;
        cout<<"February"<<i<<"-> ";
        file.open(s1,ios::in); 
   if (file.is_open()){ 
      string t;
      while(getline(file, t)){ 
         cout << t << "\n"; 
      }
      file.close(); 
   }
       cout<<endl;
          }
           cout<<endl;
           for(int i=1;i<=31 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="March";
        string s1=month + s0 + str1;;
        cout<<"March "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close(); 
   }
       cout<<endl;
          }
           cout<<endl;
          for(int i=1;i<=30 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="April";
        string s1=month + s0 + str1;;
        cout<<"April "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){
         cout << t << "\n"; 
      }
      newfile.close();
   }
       cout<<endl;
          }
           cout<<endl;
 for(int i=1;i<=31 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="May";
        string s1=month + s0 + str1;;
        cout<<"May "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n";
      }
      newfile.close(); 
   }
       cout<<endl;
          }
            cout<<endl;
 for(int i=1;i<=30 ; i++){
    
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="June";
        string s1=month + s0 + str1;;
        cout<<"June "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close();
   }
       cout<<endl;
          }
           cout<<endl;
          for(int i=1;i<=31 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="July";
        string s1=month + s0 + str1;;
        cout<<"July "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close(); 
   }
       cout<<endl;
          }
          cout<<endl;
               for(int i=1;i<=31 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="August";
        string s1=month + s0 + str1;;
        cout<<"August "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close(); 
   }
       cout<<endl;
          }
               cout<<endl;
               for(int i=1;i<=30 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="September";
        string s1=month + s0 + str1;;
        cout<<"September "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close();
   }
       cout<<endl;
          }
             cout<<endl;
               for(int i=1;i<=31 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="October";
        string s1=month + s0 + str1;;
        cout<<"October "<<i<<"->";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close(); 
   }
       cout<<endl;
          }
               cout<<endl;
               for(int i=1;i<=30 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="November";
        string s1=month + s0+ str1;;
        cout<<"November "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close(); 
   }
       cout<<endl;
          }
                 cout<<endl;
               for(int i=1;i<=31 ; i++){
             string s0;
           fstream newfile;
                 string str1=".text" ;
            s0=to_string(i);
           string month="December";
        string s1=month + s0 + str1;;
        cout<<"December "<<i<<"-> ";
        newfile.open(s1,ios::in); 
   if (newfile.is_open()){ 
      string t;
      while(getline(newfile, t)){ 
         cout << t << "\n"; 
      }
      newfile.close(); 
   }
       cout<<endl;
          }
    }
void deletenote(string month , string day){
	string str1=".text";
	string str=month+day+str1;
	ofstream ofs;
	ofs.open(str,std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	}
int main(){
	
    int  date[31];
    int i;
     const char *months[]= {"      January" , "\n      February" , "\n       March" , "\n       April" ,
	  "\n        May" , "\n        June" , "\n        July" , "\n       August",
	  "\n     September" , "\n      October" , "\n      November" , "\n      December"};
    int month;
    cout<<endl<<endl<<endl<<endl<<endl;
     for(month=0 ; month<=11 ; month++){
     	  cout<< months[month];
     	if(month==0){
    for(i=0 ; i<31; i++){
        date[i] = i+1;
    }
    printf("\nSu Mo Tu We Th Fr Sa");
    for(i=0 ; i<31 ;i++){
    	if(i%7==0){
    		cout<<"\n";
		}
   printf("%2d " , date[i]);
}
}
if(month==1){
	for(i=0 ; i<28; i++){
        date[i] = i+1;
    }
    printf("\nSu Mo Tu We Th Fr Sa\n");
    printf("          1  2  3  4");
    for(i=4 ; i<28 ;i++){
    	if((i-4)%7==0){
    		cout<<"\n";
		}
  printf("%2d " , date[i]);
}
}
if(month==2){
	for(i=0 ; i<31 ; i++){
		date[i] = i+1;
	}
	  printf("\nSu Mo Tu We Th Fr Sa\n");
	  printf("          1  2  3  4");
	  for(i=4 ; i<31 ; i++){
	  	if((i-4)%7 ==0){
	  	cout<<"\n";
		  }
	printf("%2d " , date[i]);
	  }
}

if(month==3 ){
	 for(i=0 ; i<30; i++){
        date[i] = i+1;
    } 
    printf("\nSu Mo Tu We Th Fr Sa\n");
    printf("                   1");
    for(i=1 ; i<30 ;i++){
    	if((i-1)%7==0){
    		cout<<"\n";
		}
   printf("%2d " , date[i]);
}
}
if(month==4){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("    1  2  3  4  5  6");
	for(i=6 ; i<31 ;i++){
    	if((i+1)%7==0){
    		cout<<"\n";
		}
	printf("%2d " , date[i]);
}
}
if(month==5){
	for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("             1  2  3 ");
	for(i=3 ; i<30 ;i++){
    	if((i+4)%7==0){
    	cout<<"\n";
		}
	printf("%2d " , date[i]);
}
}
if(month==6){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                   1");
	for(i=1; i<31 ;i++){
    	if((i-1)%7==0){
    	cout<<"\n";
		}
  printf("%2d " , date[i]);
}
}
if(month==7){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("       1  2  3  4  5");
	for(i=5; i<31 ;i++){
    	if((i+2)%7==0){
    		cout<<"\n";
		}
printf("%2d " , date[i]);
}
} 
if(month==8 ){
	for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                1  2 ");
	for(i=2; i<30 ;i++){
    	if((i-2)%7==0){
    		cout<<"\n";
		}
printf("%2d " , date[i]);
}
} 
if(month==9){
	for(i=0 ; i<31 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa");
	for(i=0; i<31 ;i++){
    	if(i%7==0){
    		cout<<"\n";
		}
printf("%2d " , date[i]);
}
} 
if(month==10){
	for(i=0 ; i<30 ; i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	 printf("          1  2  3  4");
	  for(i=4 ; i<30 ; i++){
	  	if((i-4)%7 ==0){
	  		cout<<"\n";
		  }
	printf("%2d " , date[i]);
}
} 
if(month==11){
for(i=0 ; i<30 ;i++){
		date[i] = i+1;
	}
	printf("\nSu Mo Tu We Th Fr Sa\n");
	printf("                1  2 ");
	for(i=2; i<30 ;i++){
    	if((i-2)%7==0){
    		cout<<"\n";
		}
	printf("%2d " , date[i]);
}
}
}
while(1){
 cout<<endl<<"enter your request:";
      string str,txt,day , mont;
      getline(cin , str);
      if (str == "add note"){
         cout<<"enter the month :";
         cin>>mont;
         cout<<endl<<"enter the day :";
         cin>>day;
         getline(cin , txt);
         cout<<endl<<"Enter the note :";
       addnote(mont, day);
      } 
     if (str == "show note"){
         cout<<"enter the month :";
         cin>>mont;
         cout<<endl<<"enter the day :";
         cin>>day;
      shownote(mont, day);
      }
      if (str == "delete note"){
        cout<<"enter the month :";
         cin>>mont;
         cout<<endl<<"enter the day :";
         cin>>day;
        deletenote(mont,day);
      }
       if (str == "add repetetive note"){
         cout<<endl<<"enter the day of the week:";
         cin>>day;
             getline(cin , txt);
         cout<<endl<<"Write the note you want to:";
        addrepnote(day);
      }
      if (str == "show all notes"){
          cout<<endl<<"enter the day of the week:";
          cin>>day;
            showallnote();
           }
           if (str == "flag"){
                string t;
		     cout<<"enter the month :";
         cin>>t;
         cout<<endl<<"enter the day :";
         int da;
         cin>>da;
        flag(t,da);
  }
           if (str == "unflag"){

        unflag();

  } 
  if(str == "show time and date"){
  	showtime(); 
  }
             if (str == "exit"){

break;
  }
}
      ClearScreen();
return 0;
}