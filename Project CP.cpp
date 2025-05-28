#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int Teacher_portal(string x,string y);
void Cafe_menu();
void game();


int main(){
	string x,y;
	int a;
	cout<<"Enter the number 1,2,3 respectively for:"<<endl;
	cout<<"1. Teacher-portal"<<endl;
	cout<<"2. University cafe"<<endl;
	cout<<"3. Gaming zone"<<endl;
	cin>>a;
	if(a == 1)
	cout<<Teacher_portal (x,y);
	
	else if( a == 2){
		cout << "-------------------------------------------------*-" << endl
             << endl;
        cout << "\tCafe menu" << endl;
		Cafe_menu();
        cout << "-------------------------------------------------*-" << endl
             << endl;
	}
		
	else if(a == 3)
		game();
	else {
	cout<<"invalid"<<endl;}
	cout<<"Do you want to select again (Y/N): ";
	char q;
	cin>>q;
	if(q=='y' || q=='Y'){
	main();	
	}
	else
	cout<<"Thank You :)";
	return 0;	
}
	int Teacher_portal(string x,string y)
	{
		string k;
		int f;
		char n;
		ifstream file("Project-doc.csv");
		int w,s,roll[50],roll2[50],p[50];
		string name[50],clas[50];
		float Total_marks=0.0,weight,lab_perf[50],lab_repo[50],Mid[50],CEA[50],Final[50],lab_perf2[50],lab_repo2[50],Mid2[50],CEA2[50],Final2[50];
		cout<<"\nEnter number of classes: ";
		int e;
		cin>>e;
		for(int i=0;i<e;i++)
		{
		cin.ignore(50,'\n');
		cout<<"\nName of '"<<i+1<<"' Class: ";
		getline(cin,clas[i]);
	}
		for(int i=0;i<e;i++){
		cout<<"\nEnter number of students of class"<<clas[i]<<" : ";
		cin>>f;
		for(int i=0;i<f;i++){
			cin.ignore(50,'\n');
			cout<<"Enter Name of student"<<i+1<<" : ";
			getline(cin,name[i]);
			cout<<"Enter Roll num of student"<<name[i]<<" : ";
			cin>>roll[i];
			bool var=true;
			while(var==true){
			cout<<"Enter the respective number (1-5) for entering marks in relative subject:"<<endl;
			cout<<"1. Lab Performance."<<endl;
			cout<<"2. Lab Reports."<<endl;
			cout<<"3. Midterm."<<endl;
			cout<<"4. CEA."<<endl;
			cout<<"5. Final Term."<<endl;
			cin>>f;
			switch(f){
			case 1:
				cout<<"Enter number of lab-performance done: ";
				cin>>s;
				for(int j=0;j<s;j++){
				cout<<"Enter Marks of Lab-performance '"<<j+1<<"' for student "<<name[i]<<" = ";
				cin>>lab_perf[j];
				}
			cout<<"Do you want to see total marks (Y/N): ";
			cin>>n;
			if(n== 'Y' || n=='y')
			{
				for(int j=0;j<s;j++)
				Total_marks=Total_marks + lab_perf[j];
				cout<<"\nTotal marks are: "<<Total_marks<<endl;
			}
			break;
			case 2:
				cout<<"\nEnter number of lab-reports done: ";
				cin>>s;
				for(int j=0;j<s;j++){
				cout<<"Enter Marks of Lab-reports"<<j+1<<" for student"<<name[i]<<" : ";
				cin>>lab_repo[j];
				}
				cout<<"Want to see total marks Y/N :";
				cin>>n;
				if(n=='Y' || n=='y')
			{
				for(int j=0;j<s;j++)
				Total_marks=Total_marks+lab_repo[j];
				cout<<"Total marks are: "<<Total_marks<<endl;
			}
			break;
			case 3:
				cout<<" Enter number of Questions in Midterm done: ";
				cin>>s;
				for(int j=0;j<s;j++){
				cout<<"Enter Marks of Question"<<j+1<<" in Midterm for student"<<name[i]<<" : ";
				cin>>Mid[j];
				}
				cout<<"Want to see total marks Y/N :";
				cin>>n;
				if(n=='Y' || n=='y')
			{
				for(int j=0;j<s;j++)
				Total_marks=Total_marks+Mid[j];
				cout<<"Total marks are: "<<Total_marks<<endl;
			}
			break;
			case 4:
				cout<<" Enter number of CEA done: ";
				cin>>s;
				for(int j=0;j<s;j++){
				cout<<"Enter Marks of CEA"<<j+1<<" for student"<<name[i]<<" : ";
				cin>>CEA[j];
				}
				cout<<"Want to see total marks Y/N :";
				cin>>n;
				if(n=='Y' || n=='y')
			{
				for(int j=0;j<s;j++)
				Total_marks=Total_marks+CEA[j];
				
			}cout<<"Total marks are: "<<Total_marks<<endl;
			break;
			case 5:
				cout<<" Enter number of Questions in Final terms done: ";
				cin>>s;
				for(int j=0;j<s;j++){
				cout<<"Enter Marks of Question"<<j+1<<" in final term for student '"<<name[i]<<"' : ";
				cin>>Final[j];
				}cout<<"Want to see total marks Y/N :"<<endl;
				cin>>n;
				if(n=='Y' || n=='y')
			{
				for(int j=0;j<s;j++)
				Total_marks=Total_marks+Final[j];
				
			}cout<<"Total marks are: "<<Total_marks<<endl;
			break;
	}
	cout<<"Want to enter marks again Y/N: ";
	cin>>k;

if(k=="y" || k=="Y"){

	var=true;
}
else
{

	var=false;
}
	}
	}
	}
	}

	void Cafe_menu()
{
	int count,select,food,price,choice;
	cout<<"Menu Of Food:\n 1) Biryani 210 \n 2) Haleem 120 \n 3) White Handi 800 \n 4) Pizza 1200 \n 5) Burger 180 \n 6) Shwarma 120 \n 7) Sajji 2000 \n 8) Pasta 300 \n 9) Afgani roti 30 \n 10) Veg Roll 20";	
	cout<<"\n Select Food By Pressing The Number Given To Food: ";
	cin >> select;
	cout<<endl<<"\t";
	switch(select){
		case 1:
			cout<<"1) Biryani  Rs 210 "<<endl;
			count++;
			price=210;
			break;
		case 2:
			cout<<"2) Haleem  Rs 120"<<endl;
			count++;
			price=120;
			break;
		case 3:
			cout<<"3) White Handi  Rs 800"<<endl;
			count++;
			price=800;
			break;
		case 4:
			cout<<"4) Pizza  Rs 1200"<<endl;
			count++;
			price=1200;
			break;
		case 5:
			cout<<"5) Burger  Rs 180"<<endl;
			count++;
			price=180;
			break;
		case 6:
			cout<<"6) Shwarma Rs 120"<<endl;
			count++;
			price=120;
			break;
		case 7:
			cout<<"7) Sajji  Rs 2000"<<endl;
			count++;
			price=2000;
			break;
		case 8: 
			cout<<"8) Pasta Rs 300"<<endl;
			count++;
			price=300;
			break;
		case 9: 
			cout<<"9) Afgani roti Rs 30"<<endl; 
			count++;
			price=300;
			break;
		case 10: 
			cout<<"10) Veg Roll Rs 20"<<endl;
			count++;
			price=300;
			break; 
		}
	for ( int i=0  ; i<100 ; i++)
	{
		cout << "Do you want add more items" << endl;
        cout << "Enter '1' if YES for more items OR Enter '2' if NO for show bill: ";
        cin>>choice;
        if ( choice != 1 )
        {
        	break;
		}
           	if (choice == 1 ) {
			  
        		cout<<"What do you want to add  :"<<endl;
        		cout<<"1) Biryani 210"<<endl;
	            cout<<"2) Haleem 120"<<endl;
	            cout<<"3) White Handi 800"<<endl;
	            cout<<"4) Pizza 1200"<<endl;
	            cout<<"5) Burger 180"<<endl;
	            cout<<"6) Shwarma 120"<<endl;
	            cout<<"7) Sajji 2000"<<endl;
	            cout<<"8) Pasta 300"<<endl;
	            cout<<"9) Afgani roti"<<endl;
	            cout<<"10) Veg Roll 20"<<endl;
	            cin>>food;
	            count++;
		    if(food == 1){
		    	cout<<"biryani added "<<endl;
		    	price+=210;
			}
			if(food == 2){
		    	cout<<"Haleem added "<<endl;
		    	price+=120;
			}
			if(food == 3){
		    	cout<<"White Handi added "<<endl;
		    	price+=800;
			}
			if(food == 4){
		    	cout<<"Pizza added "<<endl;
		    	price+=1200;
			}
			if(food == 5){
		    	cout<<"burger added "<<endl;
		    	price+=180;
			}
			if(food == 6){
		    	cout<<"Shwarma added "<<endl;
		    	price+=120;
			}
			if(food == 7){
		    	cout<<"Sajji added "<<endl;
		    	price+=2000;
			}
			if(food == 8){
		    	cout<<"8)Pasta added "<<endl;
		    	price+=2000;
			}
			if(food == 9){
		    	cout<<"Afgani roti added "<<endl;
		    	price+=2000;
			}
			if(food == 10){
		    	cout<<"Veg Roll added "<<endl;
		    	price+=2000;
			}
			if(food <1 &&food > 10)
			cout<<"Invalid";
		}
	}
			
			    cout<<" Number of Foods is: "<<count<<endl;
                cout << "Bill of your Food "<<"\n\t"<<price<<endl;
        }
       
       
       
       
       
       
char current_marker;
int current_player;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void drawBoard()
{
	cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
	cout<<"______________\n";
	cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
	cout<<"______________\n";
	cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
	
}
bool placeMarker(int slot)
{
	int row=slot/3;
	int col;
	if(slot %3==0)
	{
		row=row-1;
		col=2;
	}
	else col=(slot % 3) -1;
	if(board[row][col] != 'X' && board[row][col] != 'O')
	{
		board[row][col]=current_marker;
		return true;
	}
	else return false;
}
	int winner()
	{
		for(int i=0;i<3;i++)
		{
			//for rows
			if(board[i][0]==board[i][1] && board[i][1]==board[i][2])return current_player;
			//columns
			if(board[0][i]==board[1][i]&&board[1][i]==board[2][i])return current_player;
		}
		if(board[0][0]==board[1][1] && board[1][1]==board[2][2])return current_player;
		if(board[0][2]==board[1][1] && board[1][1]==board[2][0])return current_player;
		return 0;
	}
	void swap_player_and_marker()
	{
		if(current_marker == 'X') current_marker= 'O';
		else current_marker = 'X';
		
		if(current_player == 1)current_player = 2;
		else current_player = 1;
	}
	void game()
	{
		cout<<"Player one,choose your marker: ";
		char marker_p1;
		cin>>marker_p1;
		current_player = 1;
		current_marker = marker_p1;
		drawBoard();
		int player_won;
		for(int i=0;i<9;i++)
		{
			cout<<"It's player "<<current_player<<"'s turn your slot: ";
			int slot;
			cin>>slot;
			if(slot<1 || slot>9){
			cout<<" That slot is invalid! try another slot!"<<endl;
			i--;
			continue;	
			}
			if(!placeMarker(slot)) {
			cout<<" That slot occupaid! try another slot!"<<endl;
			i--;
			continue;
			}
			drawBoard();
			player_won =winner();
			if(player_won == 1) { cout<<"Player one won! Congratulations!"<<endl; break;}
			if(player_won ==2) { cout<<"Player two won! Congratulations!"<<endl; break;}
			swap_player_and_marker();
		}
		if(player_won==0)cout<<"That is a tie game!";
}

