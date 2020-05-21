#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

enum input
{
    A1, A2, A3,
    B1, B2, B3,
    C1, C2, C3, C4, C5,
    S1, S2, S3, S4, S5,
    D, fail
};//define a enumeration
input string_to_enum(string choice_input)
{
    if ( choice_input=="A1" ) return A1;
    else if ( choice_input=="A2" ) return A2;
    else if ( choice_input=="A3" ) return A3;
    else if ( choice_input=="B1" ) return B1;
    else if ( choice_input=="B2" ) return B2;
    else if ( choice_input=="B3" ) return B3;
    else if ( choice_input=="C1" ) return C1;
    else if ( choice_input=="C2" ) return C2;
    else if ( choice_input=="C3" ) return C3;
    else if ( choice_input=="C4" ) return C4;
    else if ( choice_input=="C5" ) return C5;
    else if ( choice_input=="S1" ) return S1;
    else if ( choice_input=="S2" ) return S2;
    else if ( choice_input=="S3" ) return S3;
    else if ( choice_input=="S4" ) return S4;
    else if ( choice_input=="S5" ) return S5;
    else if ( choice_input=="D" ) return D;
    else return fail;    
}//map strings to enum for later switch()
void initial_banner()
{
    cout << "====================================================================================================\n"
            " █████   ███   █████          ████                                                 █████            \n"
            "░░███   ░███  ░░███          ░░███                                                ░░███             \n"
            " ░███   ░███   ░███   ██████  ░███   ██████   ██████  █████████████    ██████     ███████    ██████ \n"
            " ░███   ░███   ░███  ███░░███ ░███  ███░░███ ███░░███░░███░░███░░███  ███░░███   ░░░███░    ███░░███\n"
            " ░░███  █████  ███  ░███████  ░███ ░███ ░░░ ░███ ░███ ░███ ░███ ░███ ░███████      ░███    ░███ ░███\n"
            "  ░░░█████░█████░   ░███░░░   ░███ ░███  ███░███ ░███ ░███ ░███ ░███ ░███░░░       ░███ ███░███ ░███\n"
            "    ░░███ ░░███     ░░██████  █████░░██████ ░░██████  █████░███ █████░░██████      ░░█████ ░░██████ \n"
            "     ░░░   ░░░       ░░░░░░  ░░░░░  ░░░░░░   ░░░░░░  ░░░░░ ░░░ ░░░░░  ░░░░░░        ░░░░░   ░░░░░░  \n"
            "                                                                                                    \n"
            " ██████████             ████████   ████████       █████████               ██████              ███   \n"
            "░███░░░░███            ███░░░░███ ███░░░░███     ███░░░░░███             ███░░███            ░███   \n"
            "░░░    ███            ░░░    ░███░░░    ░███    ███     ░░░   ██████    ░███ ░░░   ██████    ░███   \n"
            "      ███   ██████████   ███████    ██████░    ░███          ░░░░░███  ███████    ███░░███   ░███   \n"
            "     ███   ░░░░░░░░░░   ███░░░░    ░░░░░░███   ░███           ███████ ░░░███░    ░███████    ░███   \n"
            "    ███                ███      █ ███   ░███   ░░███     ███ ███░░███   ░███     ░███░░░     ░░░    \n"
            "   ███                ░██████████░░████████     ░░█████████ ░░████████  █████    ░░██████     ███   \n"
            "  ░░░                 ░░░░░░░░░░  ░░░░░░░░       ░░░░░░░░░   ░░░░░░░░  ░░░░░      ░░░░░░     ░░░    \n"
            "====================================================================================================\n"
            "                                   Press any key to continue.....                                   \n"
            "====================================================================================================\n";
    system("pause>nul");
    system("cls");
}//print a welcome banner
int main_menu_1()
{
    int start_order_flag;
    int start_order_error_flag;
    cout << "====================================================================================================\n"
            "                                                                                                    \n"
            "                                             Main  Menu                                             \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                     Please select your choice:                                     \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                             0: Exit Order System And Close This Window                             \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                             1: Start Ordering Now And Continue                                     \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "====================================================================================================\n";
    do
    {
        cin >> start_order_flag;
        if (cin.fail() || (start_order_flag != 0 && start_order_flag != 1)) 
        {
            cin.clear();
            cin.sync();
            start_order_error_flag = 1;
            cout << "Invalid input, Please select the correct choice.\n";
        }
        else
        {
            start_order_error_flag = 0;
        }        
    } while (start_order_error_flag == 1);//auto adjust input
    cin.ignore();
    system("cls");//clean screen
    return start_order_flag;
}//1st menu, tell whether to start
void exit_no_order()
{
    cout << "====================================================================================================\n"
            "                                                                                                    \n"
            "                                   Exit From System Successfully!                                   \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "    ███████████ █████                           █████         █████ █████                     ███   \n"
            "   ░█░░░███░░░█░░███                           ░░███         ░░███ ░░███                     ░███   \n"
            "   ░   ░███  ░  ░███████    ██████   ████████   ░███ █████    ░░███ ███    ██████  █████ ████░███   \n"
            "       ░███     ░███░░███  ░░░░░███ ░░███░░███  ░███░░███      ░░█████    ███░░███░░███ ░███ ░███   \n"
            "       ░███     ░███ ░███   ███████  ░███ ░███  ░██████░        ░░███    ░███ ░███ ░███ ░███ ░███   \n"
            "       ░███     ░███ ░███  ███░░███  ░███ ░███  ░███░░███        ░███    ░███ ░███ ░███ ░███ ░░░    \n"
            "       █████    ████ █████░░████████ ████ █████ ████ █████       █████   ░░██████  ░░████████ ███   \n"
            "      ░░░░░    ░░░░ ░░░░░  ░░░░░░░░ ░░░░ ░░░░░ ░░░░ ░░░░░       ░░░░░     ░░░░░░    ░░░░░░░░ ░░░    \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "                                     Thanks For Your Patronage!                                     \n"
            "                                      Press any key to exit...                                      \n"
            "                                                                                                    \n"
            "====================================================================================================\n";
}//exit banner when nothing is ordered in this turn
string main_menu_OIS()
{
    string OIS_input = "";
    cout << "====================================================================================================\n"
            "                                                                                                    \n"
            "                                             OIS System                                             \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                    Please enter your name here:                                    \n"
            "                                                                                                    \n"
            "                            We will inform you once your order is ready.                            \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                     Name: ____________________                                     \n"
            "                                                                                                    \n"
            "                              Please input no more than 40 characters.                              \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "====================================================================================================\n";
    getline(cin, OIS_input);
    system("cls");
    //cin.ignore();
    return OIS_input;
}//window for OIS input, guided
int new_order(string OIS)
{
    int new_order_flag;
    int new_order_error_flag;
    cout << "====================================================================================================\n"
            "                                                                                                    \n"
            "          Successfully recorded!         Customer:"<< setw(40) << OIS << "          \n" 
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                Would you like to start a new order?                                \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                             0: No. Do not start a new one and exit                                 \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                             1: Start a new one now.                                                \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "====================================================================================================\n";
    do
    {
        cin >> new_order_flag;
        if (cin.fail() || (new_order_flag != 0 && new_order_flag != 1)) 
        {
            cin.clear();
            cin.sync();
            new_order_error_flag = 1;
            cout << "Invalid input, Please select the correct choice.\n";
        }
        else
        {
            new_order_error_flag = 0;
        }        
    } while (new_order_error_flag == 1);//Guided new order start/exit
    cin.ignore();
    system("cls");
    return new_order_flag;
}//window to enquire whether to finish the whole program
void menu_detailed() 
{
    cout << "====================================================================================================\n"
            "                                           Detailed Menu:                                           \n"
            "                                      Press anykey to return                                        \n"
            "====================================================================================================\n"
            "Code|               Name               |                 Detailed Description                 |Price\n"
            "----+----------------------------------+------------------------------------------------------+-----\n"
            " S1 |       Refreshing Breakfast       |Food:                          Bagel with Cream Cheese| $48 \n"
            "    |                                  |Drink:                                          Coffee|     \n"
            "----+----------------------------------+------------------------------------------------------+-----\n"
            " S2 |       Best Value Breakfast       |Food:  Chicken Caesar Sandwich+Bagel with Cream Cheese| $60 \n"
            "    |                                  |Drink:                                            Milk|     \n"
            "----+----------------------------------+------------------------------------------------------+-----\n"
            " S3 |           Veggie Lunch           |Food:                           Cheese veggie sandwich| $50 \n"
            "    |                                  |Drink:                                           Juice|     \n"
            "----+----------------------------------+------------------------------------------------------+-----\n"
            " S4 |           Power  Lunch           |Food:                     Salmon & cheese sandwich+Pie| $90 \n"
            "    |                                  |Drink:                                    Juice+Coffee|     \n"
            "----+----------------------------------+------------------------------------------------------+-----\n"
            " S5 |         Afternoon Tea Set        |Food:                                      Quinche/Pie| $50 \n"
            "    |                                  |Drink:                                      Coffee/Tea|     \n"
            "====================================================================================================\n";
            system("pause>nul");
}//print detailed menu for set meals
int order_continue()
{
    int choice_continue;
    int choice_continue_error_flag ;
    system("cls");
    cout << "====================================================================================================\n"
            "                                                                                                    \n"
            "                                       Successfully recorded!                                       \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                Would you like to continue ordering?                                \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                             0: Order completed. Ready to check out                                 \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                             1: Continue this order.                                                \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "                                                                                                    \n"
            "====================================================================================================\n";
    do
    {
        cin >> choice_continue;
        if (cin.fail() || (choice_continue != 0 && choice_continue != 1)) 
        {
            cin.clear();
            cin.sync();
            choice_continue_error_flag = 1;
            cout << "Invalid input, Please select the correct choice.\n";
        }
        else
        {
            choice_continue_error_flag = 0;
        }
    } while (choice_continue_error_flag == 1);//guided input
    return choice_continue;
}//print the continue ordering menu
void check_out( string item_code_a[], string item_code_b[], string item_code_c[], string item_code_s[],
                string item_name_a[], string item_name_b[], string item_name_c[], string item_name_s[],
                int item_price_a[], int item_price_b[], int item_price_c[], int item_price_s[],
                int item_num_a[], int item_num_b[], int item_num_c[], int item_num_s[])
{
    while (item_num_b[1] > 0 && item_num_c[0] > 0)
    {
        item_num_b[1]--;
        item_num_c[0]--;
        item_num_s[0]++;
    }//merge single items to set meal s1
    while (item_num_a[2] > 0 && item_num_b[1] > 0 && item_num_c[3] > 0)
    {
        item_num_a[2]--;
        item_num_b[1]--;
        item_num_c[3]--;
        item_num_s[1]++;
    }//merge single items to set meal s2
    while (item_num_a[0] > 0 && item_num_c[4] > 0)
    {
        item_num_a[0]--;
        item_num_c[4]--;
        item_num_s[2]++;
    }//merge single items to set meal s3
    while (item_num_a[1] > 0 && item_num_b[2] > 0 && item_num_c[0] > 0 && item_num_c[4] > 0)
    {
        item_num_a[1]--;
        item_num_b[2]--;
        item_num_c[0]--;
        item_num_c[4]--;
        item_num_s[3]++;
    }//merge single items to set meal s4
    while (item_num_b[0] > 0 && item_num_c[0] > 0)
    {
        item_num_b[0]--;
        item_num_c[0]--;
        item_num_s[4]++;
    }//merge single items to set meal s5
    while (item_num_b[2] > 0 && item_num_c[0] > 0)
    {
        item_num_b[2]--;
        item_num_c[0]--;
        item_num_s[4]++;
    }//merge single items to set meal s5
        while (item_num_b[0] > 0 && item_num_c[1] > 0)
    {
        item_num_b[0]--;
        item_num_c[1]--;
        item_num_s[4]++;
    }//merge single items to set meal s5
    while (item_num_b[2] > 0 && item_num_c[1] > 0)
    {
        item_num_b[2]--;
        item_num_c[1]--;
        item_num_s[4]++;
    }//merge single items to set meal s5
    float price_original = 0.0;
    float price_final = 0.0;
    char discount_flag;
    for (int i = 0; i < 3; i++)
    {
        price_original = price_original + item_price_a[i] * item_num_a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        price_original = price_original + item_price_b[i] * item_num_b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        price_original = price_original + item_price_c[i] * item_num_c[i];
    }
    for (int i = 0; i < 5; i++)
    {
        price_original = price_original + item_price_s[i] * item_num_s[i];
    }//sum the prices of all items
    if (price_original >= 100)
    {
        price_final = price_original * 0.95;
        price_final = roundf(price_final * 100) / 100;
        discount_flag = 'Y';
    }
    else
    {
        price_final = price_original;
        price_final = roundf(price_original * 100) / 100;
        discount_flag = 'N';
    }//set discount and 1st formation
    system("cls");
    cout.precision(2);
    cout << "====================================================================================================\n"
            "                                      Please check your order:                                      \n"
            "====================================================================================================\n"
            "Code|               Name               |Price|Qty||Code|               Name               |Price|Qty\n"
            "----+----------------------------------+-----+---++----+----------------------------------+-----+---\n"
            <<setw(4)<<item_code_a[0]<<"|"<<setw(34)<<item_name_a[0]<<"|"<<setw(3)<<"$"<<item_price_a[0]<<"|"<<setw(3)<<item_num_a[0]<<"||"
            <<setw(4)<<item_code_b[0]<<"|"<<setw(34)<<item_name_b[0]<<"|"<<setw(3)<<"$"<<item_price_b[0]<<"|"<<setw(3)<<item_num_b[0]<<"\n"
            <<setw(4)<<item_code_a[1]<<"|"<<setw(34)<<item_name_a[1]<<"|"<<setw(3)<<"$"<<item_price_a[1]<<"|"<<setw(3)<<item_num_a[1]<<"||"
            <<setw(4)<<item_code_b[1]<<"|"<<setw(34)<<item_name_b[1]<<"|"<<setw(3)<<"$"<<item_price_b[1]<<"|"<<setw(3)<<item_num_b[1]<<"\n"
            <<setw(4)<<item_code_a[2]<<"|"<<setw(34)<<item_name_a[2]<<"|"<<setw(3)<<"$"<<item_price_a[2]<<"|"<<setw(3)<<item_num_a[2]<<"||"
            <<setw(4)<<item_code_b[2]<<"|"<<setw(34)<<item_name_b[2]<<"|"<<setw(3)<<"$"<<item_price_b[2]<<"|"<<setw(3)<<item_num_b[2]<<"\n"
            "----+----------------------------------+-----+---++----+----------------------------------+-----+---\n"
            "Code|               Name               |Price|Qty||Code|               Name               |Price|Qty\n"
            "----+----------------------------------+-----+---++----+----------------------------------+-----+---\n"
            <<setw(4)<<item_code_c[0]<<"|"<<setw(34)<<item_name_c[0]<<"|"<<setw(3)<<"$"<<item_price_c[0]<<"|"<<setw(3)<<item_num_c[0]<<"||"
            <<setw(4)<<item_code_s[0]<<"|"<<setw(34)<<item_name_s[0]<<"|"<<setw(3)<<"$"<<item_price_s[0]<<"|"<<setw(3)<<item_num_s[0]<<"\n"
            <<setw(4)<<item_code_c[1]<<"|"<<setw(34)<<item_name_c[1]<<"|"<<setw(3)<<"$"<<item_price_c[1]<<"|"<<setw(3)<<item_num_c[1]<<"||"
            <<setw(4)<<item_code_s[1]<<"|"<<setw(34)<<item_name_s[1]<<"|"<<setw(3)<<"$"<<item_price_s[1]<<"|"<<setw(3)<<item_num_s[1]<<"\n"
            <<setw(4)<<item_code_c[2]<<"|"<<setw(34)<<item_name_c[2]<<"|"<<setw(3)<<"$"<<item_price_c[2]<<"|"<<setw(3)<<item_num_c[2]<<"||"
            <<setw(4)<<item_code_s[2]<<"|"<<setw(34)<<item_name_s[2]<<"|"<<setw(3)<<"$"<<item_price_s[2]<<"|"<<setw(3)<<item_num_s[2]<<"\n"
            <<setw(4)<<item_code_c[3]<<"|"<<setw(34)<<item_name_c[3]<<"|"<<setw(3)<<"$"<<item_price_c[3]<<"|"<<setw(3)<<item_num_c[3]<<"||"
            <<setw(4)<<item_code_s[3]<<"|"<<setw(34)<<item_name_s[3]<<"|"<<setw(3)<<"$"<<item_price_s[3]<<"|"<<setw(3)<<item_num_s[3]<<"\n"
            <<setw(4)<<item_code_c[4]<<"|"<<setw(34)<<item_name_c[4]<<"|"<<setw(3)<<"$"<<item_price_c[4]<<"|"<<setw(3)<<item_num_c[4]<<"||"
            <<setw(4)<<item_code_s[4]<<"|"<<setw(34)<<item_name_s[4]<<"|"<<setw(3)<<"$"<<item_price_s[4]<<"|"<<setw(3)<<item_num_s[4]<<"\n"
            "====================================================================================================\n"
            "            Original Price            |            Final Price            |      Discount(95%)      \n"
            "              "<<'$'<<setw(9)<<fixed<<price_original<<"              |"
            "            "<<'$'<<setw(10)<<fixed<<price_final<<"            |"
            "            "<<discount_flag<<"            \n"
            "====================================================================================================\n"
            "                                     Press anykey to continue                                       \n"
            "====================================================================================================\n";
            //output final payment details and format final prices again
    system("pause>nul");
}
void order_menu(string item_code_a[], string item_code_b[], string item_code_c[], string item_code_s[],
                string item_name_a[], string item_name_b[], string item_name_c[], string item_name_s[],
                int item_price_a[], int item_price_b[], int item_price_c[], int item_price_s[],
                int item_num_a[], int item_num_b[], int item_num_c[], int item_num_s[])
{
    cout << "====================================================================================================\n"
            "                                                                                                    \n"
            "                                    Please select your food here                                    \n"
            "                                                                                                    \n"
            "                         Input 'D' to see detailed information of set meals                         \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "Code|               Name               |Price|Qty||Code|               Name               |Price|Qty\n"
            "----+----------------------------------+-----+---++----+----------------------------------+-----+---\n"
            <<setw(4)<<item_code_a[0]<<"|"<<setw(34)<<item_name_a[0]<<"|"<<setw(3)<<"$"<<item_price_a[0]<<"|"<<setw(3)<<item_num_a[0]<<"||"
            <<setw(4)<<item_code_b[0]<<"|"<<setw(34)<<item_name_b[0]<<"|"<<setw(3)<<"$"<<item_price_b[0]<<"|"<<setw(3)<<item_num_b[0]<<"\n"
            <<setw(4)<<item_code_a[1]<<"|"<<setw(34)<<item_name_a[1]<<"|"<<setw(3)<<"$"<<item_price_a[1]<<"|"<<setw(3)<<item_num_a[1]<<"||"
            <<setw(4)<<item_code_b[1]<<"|"<<setw(34)<<item_name_b[1]<<"|"<<setw(3)<<"$"<<item_price_b[1]<<"|"<<setw(3)<<item_num_b[1]<<"\n"
            <<setw(4)<<item_code_a[2]<<"|"<<setw(34)<<item_name_a[2]<<"|"<<setw(3)<<"$"<<item_price_a[2]<<"|"<<setw(3)<<item_num_a[2]<<"||"
            <<setw(4)<<item_code_b[2]<<"|"<<setw(34)<<item_name_b[2]<<"|"<<setw(3)<<"$"<<item_price_b[2]<<"|"<<setw(3)<<item_num_b[2]<<"\n"
            "----+----------------------------------+-----+---++----+----------------------------------+-----+---\n"
            "Code|               Name               |Price|Qty||Code|               Name               |Price|Qty\n"
            "----+----------------------------------+-----+---++----+----------------------------------+-----+---\n"
            <<setw(4)<<item_code_c[0]<<"|"<<setw(34)<<item_name_c[0]<<"|"<<setw(3)<<"$"<<item_price_c[0]<<"|"<<setw(3)<<item_num_c[0]<<"||"
            <<setw(4)<<item_code_s[0]<<"|"<<setw(34)<<item_name_s[0]<<"|"<<setw(3)<<"$"<<item_price_s[0]<<"|"<<setw(3)<<item_num_s[0]<<"\n"
            <<setw(4)<<item_code_c[1]<<"|"<<setw(34)<<item_name_c[1]<<"|"<<setw(3)<<"$"<<item_price_c[1]<<"|"<<setw(3)<<item_num_c[1]<<"||"
            <<setw(4)<<item_code_s[1]<<"|"<<setw(34)<<item_name_s[1]<<"|"<<setw(3)<<"$"<<item_price_s[1]<<"|"<<setw(3)<<item_num_s[1]<<"\n"
            <<setw(4)<<item_code_c[2]<<"|"<<setw(34)<<item_name_c[2]<<"|"<<setw(3)<<"$"<<item_price_c[2]<<"|"<<setw(3)<<item_num_c[2]<<"||"
            <<setw(4)<<item_code_s[2]<<"|"<<setw(34)<<item_name_s[2]<<"|"<<setw(3)<<"$"<<item_price_s[2]<<"|"<<setw(3)<<item_num_s[2]<<"\n"
            <<setw(4)<<item_code_c[3]<<"|"<<setw(34)<<item_name_c[3]<<"|"<<setw(3)<<"$"<<item_price_c[3]<<"|"<<setw(3)<<item_num_c[3]<<"||"
            <<setw(4)<<item_code_s[3]<<"|"<<setw(34)<<item_name_s[3]<<"|"<<setw(3)<<"$"<<item_price_s[3]<<"|"<<setw(3)<<item_num_s[3]<<"\n"
            <<setw(4)<<item_code_c[4]<<"|"<<setw(34)<<item_name_c[4]<<"|"<<setw(3)<<"$"<<item_price_c[4]<<"|"<<setw(3)<<item_num_c[4]<<"||"
            <<setw(4)<<item_code_s[4]<<"|"<<setw(34)<<item_name_s[4]<<"|"<<setw(3)<<"$"<<item_price_s[4]<<"|"<<setw(3)<<item_num_s[4]<<"\n"
            "====================================================================================================\n";
    string choice_input;
    unsigned int choice_amount;
    int choice_error_flag = 0;
    int choice_return_flag = 0;
    int recursion_level = 0;
    do
    {
        choice_error_flag = 0;
        choice_return_flag = 0;
        cout << "Please input your choice: ";
        cin >> choice_input ;
        if (cin.fail())
        {
            cin.clear();
            cin.sync();
            choice_error_flag = 1;
            cout << "Invalid input, Please follow the format.\n";
        }
        else
        {
            if (choice_input != "D")
            {
                cout << "Please input the amount: ";
                cin >> choice_amount ;
            }
            if (cin.fail() && choice_input != "D")
            {
                cin.clear();
                cin.sync();
                choice_error_flag = 1;
                cout << "Invalid input, Please follow the format.\n";
            }//guided input
            else
            {
            switch (string_to_enum(choice_input))
            {
            case A1:
                item_num_a[0] = item_num_a[0] + choice_amount;
                break;
            case A2:
                item_num_a[1] = item_num_a[1] + choice_amount;
                break;
            case A3:
                item_num_a[2] = item_num_a[2] + choice_amount;
                break;
            case B1:
                item_num_b[0] = item_num_b[0] + choice_amount;
                break;
            case B2:
                item_num_b[1] = item_num_b[1] + choice_amount;
                break;
            case B3:
                item_num_b[2] = item_num_b[2] + choice_amount;
                break;
            case C1:
                item_num_c[0] = item_num_c[0] + choice_amount;
                break;
            case C2:
                item_num_c[1] = item_num_c[1] + choice_amount;
                break;
            case C3:
                item_num_c[2] = item_num_c[2] + choice_amount;
                break;
            case C4:
                item_num_c[3] = item_num_c[3] + choice_amount;
                break;
            case C5:
                item_num_c[4] = item_num_c[4] + choice_amount;
                break;
            case S1:
                item_num_s[0] = item_num_s[0] + choice_amount;
                break;
            case S2:
                item_num_s[1] = item_num_s[1] + choice_amount;
                break;
            case S3:
                item_num_s[2] = item_num_s[2] + choice_amount;
                break;
            case S4:
                item_num_s[3] = item_num_s[3] + choice_amount;
                break;
            case S5:
                item_num_s[4] = item_num_s[4] + choice_amount;
                break;
            case D:
                menu_detailed();
                choice_return_flag = 1;
                break;
            case fail:
                cout << "Choice cannot match the menu, please input again.\n";
                cout << "Press any key to order again.\n";
                choice_error_flag == 1;
                system("pause>nul");
                break;
            }//add items to order
            }
        }
    } while (choice_error_flag == 1 || choice_return_flag == 1);
    if (order_continue() == 1)
    {
        system("cls");
        recursion_level++;
        order_menu( item_code_a, item_code_b, item_code_c, item_code_s,
                    item_name_a, item_name_b, item_name_c, item_name_s,
                    item_price_a, item_price_b, item_price_c, item_price_s,
                    item_num_a, item_num_b, item_num_c, item_num_s);
    }//recurse the function to order more
    if (recursion_level == 0) 
    {
        check_out(  item_code_a, item_code_b, item_code_c, item_code_s,
            item_name_a, item_name_b, item_name_c, item_name_s,
            item_price_a, item_price_b, item_price_c, item_price_s,
            item_num_a, item_num_b, item_num_c, item_num_s);
    }
    else recursion_level --;//call checkout() when the recursion level reach 0
}
void exit_banner_success(string OIS)
{
    system("cls");
    cout << "====================================================================================================\n"
            "                                   Order Successfully Proceeded !                                   \n"
            "                    Customer: "<< setw(40) << OIS <<"                              \n"
            "                                           Please Wait...                                           \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "    ███████████ █████                           █████         █████ █████                     ███   \n"
            "   ░█░░░███░░░█░░███                           ░░███         ░░███ ░░███                     ░███   \n"
            "   ░   ░███  ░  ░███████    ██████   ████████   ░███ █████    ░░███ ███    ██████  █████ ████░███   \n"
            "       ░███     ░███░░███  ░░░░░███ ░░███░░███  ░███░░███      ░░█████    ███░░███░░███ ░███ ░███   \n"
            "       ░███     ░███ ░███   ███████  ░███ ░███  ░██████░        ░░███    ░███ ░███ ░███ ░███ ░███   \n"
            "       ░███     ░███ ░███  ███░░███  ░███ ░███  ░███░░███        ░███    ░███ ░███ ░███ ░███ ░░░    \n"
            "       █████    ████ █████░░████████ ████ █████ ████ █████       █████   ░░██████  ░░████████ ███   \n"
            "      ░░░░░    ░░░░ ░░░░░  ░░░░░░░░ ░░░░ ░░░░░ ░░░░ ░░░░░       ░░░░░     ░░░░░░    ░░░░░░░░ ░░░    \n"
            "                                                                                                    \n"
            "====================================================================================================\n"
            "                                                                                                    \n"
            "                                     Thanks For Your Patronage!                                     \n"
            "                                      Press any key to finish.                                      \n"
            "                                                                                                    \n"
            "====================================================================================================\n";
    system("pause>nul");
    system("cls");
}//print a exit banner with thank
int main()
{
    initial_banner();
    start_point://control by goto to start new order
    string item_code_a[] = {"A1", "A2", "A3"};
    string item_name_a[] = {"Cheese veggie sandwich", 
                            "Salmon & cheese sandwich", 
                            "Chicken Caesar Sandwich"};
    int item_price_a[] = {30, 34, 32};
    int item_num_a[] = {0, 0, 0};
    string item_code_b[] = {"B1", "B2", "B3"};
    string item_name_b[] = {"(Quebec homemade) Quiche", 
                            "Bagel with Cream Cheese", 
                            "(East Village Chicken) Pie"};
    int item_price_b[] = {28, 20, 28};
    int item_num_b[] = {0, 0, 0};
    string item_code_c[] = {"C1", "C2", "C3", "C4", "C5"};
    string item_name_c[] = {"Coffee", 
                            "Green Tea", 
                            "Hot Chocolate", 
                            "Milk", 
                            "Juice"};
    int item_price_c[] = {36, 28, 28, 26, 26};
    int item_num_c[] = {0, 0, 0, 0, 0};
    string item_code_s[] = {"S1", "S2", "S3", "S4", "S5"};
    string item_name_s[] = {"Refreshing Breakfast", 
                            "Best Value Breakfast", 
                            "Veggie Lunch", 
                            "Power Lunch", 
                            "Afternoon Tea Set"};
    string item_cont_s[] = {"Coffee + Bagel with Cream Cheese", 
                            "Milk + Chicken Caesar Sandwich + Bagel with Cream Cheese", 
                            "Juice + Cheese veggie sandwich", 
                            "Juice + Coffee + Salmon & cheese sandwich + Pie", 
                            "Coffee or Tea + Quiche or Pie"};
    int item_price_s[] = {48, 60, 50, 90, 50};
    int item_num_s[] = {0, 0, 0, 0, 0};
    string OIS;
    int start_order_flag;//initialization of variables
    start_order_flag = main_menu_1();
    if (start_order_flag == 0)
    {
        exit_no_order();
        system("pause>nul");
        return 0;
    }
    OIS = main_menu_OIS().substr(0,40);
    order_menu( item_code_a, item_code_b, item_code_c, item_code_s,
                item_name_a, item_name_b, item_name_c, item_name_s,
                item_price_a, item_price_b, item_price_c, item_price_s,
                item_num_a, item_num_b, item_num_c, item_num_s);
    exit_banner_success(OIS);
    if (new_order(OIS) == 1)
    {
        goto start_point;
    }//choose to end or start new order
    return 0;
}