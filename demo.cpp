#include<iostream>
using namespace std;

char space[3][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
string n1 = " ", n2 = " "; // For take name as input
int row, colom;
bool tie = false;
char token = 'X';

int RandomNum(){
    int flag=0,digit;
    do{

 digit = 1 + (rand() % 9);
flag=0;
    if (digit == 1)
    {
        row = 0;
        colom = 0;
    }
    else if (digit == 2)
    {
        row = 0;
        colom = 1;
    }
    else if (digit == 3)
    {
        row = 0;
        colom = 2;
    }
    else if (digit == 4)
    {
        row = 1;
        colom = 0;
    }
    else if (digit == 5)
    {
        row = 1;
        colom = 1;
    }
    else if (digit == 6)
    {
        row = 1;
        colom = 2;
    }
    else if (digit == 7)
    {
        row = 2;
        colom = 0;
    }
    else if (digit == 8)
    {
        row = 2;
        colom = 1;
    }
    else if (digit == 9)
    {
        row = 2;
        colom = 2;
    }
    else{

    }

if(space[row][colom] == 'X' && space[row][colom] == '0') {
        flag=1;
    }

    }while(flag==1);

    return digit; 
}
int function_One()
{

    cout << "   |     | \n";
    cout << " " << space[0][0] << " | " << space[0][1] << "   | " << space[0][2] << " \n";
    cout << "_|__|__\n";
    cout << "   |     | \n";
    cout << " " << space[1][0] << " | " << space[1][1] << "   | " << space[1][2] << " \n";
    cout << "_|__|__\n";
    cout << "   |     | \n";
    cout << " " << space[2][0] << " | " << space[2][1] << "   | " << space[2][2] << " \n";
    cout << "   |     | \n";

    return 0;
}

void function_Two()
{
    int digit;
    if (token == 'X')
    {
        cout << n1 << " Please Enter Your Move:"<<endl;
        cin >> digit;
    }
    if (token == '0')
    {
        cout << n2 << " Please Enter Your Move:"<<endl;
        cin >> digit;
    }

    if (digit == 1)
    {
        row = 0;
        colom = 0;
    }
    else if (digit == 2)
    {
        row = 0;
        colom = 1;
    }
    else if (digit == 3)
    {
        row = 0;
        colom = 2;
    }
    else if (digit == 4)
    {
        row = 1;
        colom = 0;
    }
    else if (digit == 5)
    {
        row = 1;
        colom = 1;
    }
    else if (digit == 6)
    {
        row = 1;
        colom = 2;
    }
    else if (digit == 7)
    {
        row = 2;
        colom = 0;
    }
    else if (digit == 8)
    {
        row = 2;
        colom = 1;
    }
    else if (digit == 9)
    {
        row = 2;
        colom = 2;
    }
    else
    {
        cout << "Sorry Invalid !!!" << endl;
        function_Two();
        return;
    }

    if (space[row][colom] != 'X' && space[row][colom] != '0')
    {
        if (token == 'X')
        {
            space[row][colom] = 'X';
            token = '0';
        }
        else
        {
            space[row][colom] = '0';
            token = 'X';
        }
    }
    else
    {
        cout << "There Is No Empty Space." << endl;
        function_Two();
    }

    function_One();
}
void function_Four()
{
    int digit;
    if (token == 'X')
    {
        cout << n1 << " Please Enter Your Move:"<<endl;
        cin >> digit;
    }
    if (token == '0')
    {   digit = RandomNum();

    }

    if (digit == 1)
    {
        row = 0;
        colom = 0;
    }
    else if (digit == 2)
    {
        row = 0;
        colom = 1;
    }
    else if (digit == 3)
    {
        row = 0;
        colom = 2;
    }
    else if (digit == 4)
    {
        row = 1;
        colom = 0;
    }
    else if (digit == 5)
    {
        row = 1;
        colom = 1;
    }
    else if (digit == 6)
    {
        row = 1;
        colom = 2;
    }
    else if (digit == 7)
    {
        row = 2;
        colom = 0;
    }
    else if (digit == 8)
    {
        row = 2;
        colom = 1;
    }
    else if (digit == 9)
    {
        row = 2;
        colom = 2;
    }
    else
    {
        cout << "Sorry Invalid !!!" << endl;
        function_Two();
        return;
    }
    if (space[row][colom] != 'X' && space[row][colom] != '0')
    {
        if(token=='0'){
                cout <<" Computer Choice :"<<digit<<endl;
}
        if (token == 'X')
        {
            
            space[row][colom] = 'X';
            token = '0';
        }
        else
        {
            space[row][colom] = '0';
            token = 'X';
        }
            function_One();

    }
    else
    {
        function_Four();
    }

}

bool function_Three()
{
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            cout << (token == '0' ? n1 : n2) << " is the winner!" << endl;
            return true;
        }
    }

    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
    {
        cout << (token == '0' ? n1 : n2) << " is the winner!" << endl;
        return true;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'X' && space[i][j] != '0')
            {
                return false;
            }
        }
    }

    tie = true;
    cout << "Game is a Draw!!!" << endl;
    return true;
}

int UserChoice(){
   int choice;
   cout<<"#################Menu#########################";
   cout<<"\n1.Play With Computer\n2.Two Player\n3.Exit";
   cout<<"Enter Your Choice";
   cin>>choice; 
   return choice;
}

int main()
{
    int a=UserChoice();
    cout<<a;
    if(a==2){
    cout << "Enter First Player Name:";
    getline(cin, n1);
    cout << "Enter Second Player Name:";
    getline(cin, n2);
    cout << n1 << " is First Player, so he/she will play first." << endl;
    cout << n2 << " is Second Player, so he/she will play second." << endl;
    cout << "   |     | \n";
    cout << " " << space[0][0] << " | " << space[0][1] << "   | " << space[0][2] << " \n";
    cout << "_|__|__\n";
    cout << "   |     | \n";
    cout << " " << space[1][0] << " | " << space[1][1] << "   | " << space[1][2] << " \n";
    cout << "_|__|__\n";
    cout << "   |     | \n";
    cout << " " << space[2][0] << " | " << space[2][1] << "   | " << space[2][2] << " \n";
    cout << "   |     | \n";

    while (function_Three()!=true)
    {
        function_Two();
    }
    }
    else if(a==1){
     cout << "Enter First Player Name:";
    getline(cin, n1);
    cout << n1 << " is First Player, so he/she will play first." << endl;
    cout << "Computer" << " is Second Player, so he/she will play second." << endl;
    cout << "   |     | \n";
    cout << " " << space[0][0] << " | " << space[0][1] << "   | " << space[0][2] << " \n";
    cout << "_|__|__\n";
    cout << "   |     | \n";
    cout << " " << space[1][0] << " | " << space[1][1] << "   | " << space[1][2] << " \n";
    cout << "_|__|__\n";
    cout << "   |     | \n";
    cout << " " << space[2][0] << " | " << space[2][1] << "   | " << space[2][2] << " \n";
    cout << "   |     | \n";

    while (function_Three()!=true)
    {
        function_Four();
    }   
    }
    else{
        exit(0);
    }
    return 0;
}