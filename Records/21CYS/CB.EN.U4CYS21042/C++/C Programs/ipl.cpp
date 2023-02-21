#include<iostream>
using namespace std;
int main()
{
cout << "------- Indian Premier League Scheduler !---------\n\n";
cout << "1.View IPL Teams \n";
cout << "2.View Team Players \n";
cout << "3.View Match Scheduling \n";
cout << "4.View Details of your Favourite Team \n\n ";
cout << "5. View Stadiums "
int choice;
cout << "Enter your Choice : ";
cin >> choice;
if (choice == 1)
{
    cout << "1. Chennai Super Kings (CSK) \n";
    cout << "2. Mumbai Indians (MI) \n";
    cout << "3. Royal Challengers Bangalore (RCB) \n";
    cout << "4. Sunrisers Hyderbad (SRH) \n";
    cout << "5. Kolkata Knight Riders (KKR) \n" 
}
else if (choice == 2)
{
    char a[50];
    cout << "Enter the Team Name to View their Players : ";
    cin >> a;
    if (a == "Chennai Super Kings" or "CSK" or "Csk")
    {
        cout << "1.  MS Dhoni (Captain + Wicket Keeper)\n";
        cout << "2.  Ravindra Jadeja (All - Rounder)\n";
        cout << "3.  Ruturaj Gaikwad (Batter) \n";
        cout << "4.  Deepak Chahar (Bowler) \n";
        cout << "5.  Ambati Rayudu (Batter) \n";
        cout << "6.  Robin Uthappa (All Rounder + Wicket Keeper)\n";
        cout << "7.  Moeen Ali (All Rounder)\n";
        cout << "8.  Shivam Dube (Bowler) \n";
        cout << "9.  KM Asif (Bowler)\n";
        cout << "10. Devon Conway ( Batter)\n";
        cout << "11. Narayan Jagadeesan (Batter)\n";
    }
    else if (a == "Mumbai Indians" or "MI" or "Mi")
    {
        cout << "1.  Rohit Sharma (Captain + Batter )\n";
        cout << "2.  Suryakumar Yadav (Batter) \n";
        cout << "3.  Tim David (Batter) \n";
        cout << "4.  Tilak Varma (Batter) \n";
        cout << "5.  Ramandeep Singh (All Rounder) \n";
        cout << "6.  Rahul Buddhi (All Rounder) \n";
        cout << "7.  Daniel Sams (Bowler) \n";
        cout << "9.  Dewald Brevis (All ROunder) \n";
        cout << "10. Aryan Juyal (Wicket Keeper) \n";
        cout << "11. Ishan Kishan (Batter + Wicket Keeper) \n";
        cout << "12. Jasprit Bumrah (Bowler) \n";
    }
    else if(a == "Royal Challengers Bangalore" or "RCB" or "Rcb")
    {
        cout << "1.Virat Kolhi (Batter) \n";
        cout << "2.Harshal Patel (All-Rounder) \n";
        cout << "3.Dinesh Karthik (Wicket-Keeper) \n";
        cout << "4.Mohammed Siraj (Bowler) \n";
        cout << "5.Maxwell (Batter) \n";
        cout << "6.Faf Du Plessis (Batter) \n";
        cout << "7.Josh Hazelwood (Bowler) \n";
        cout << "8.Anuj Rawat (Wicket-Keeper, All- Rounder) \n";
        cout << "9.David Willey (Batter) \n";
        cout << "10.Siddharth Kaul (Bowler)\n"; 
        cout << "11.Finn Allen (Batter) \n";

    }
    else if(a == "Sunrisers Hyderbad" or "SRH" or "Srh")
    {
        cout << "1. Washington Sundar (Bowler + All Rounder) \n";
        cout << "2. Bhuvneshwar Kumar (Captain + Bowler) \n";
        cout << "3. Kartik Tyagi (Bowler) \n";
        cout << "4. T Natarajan (Bowler + All Rounder) \n";
        cout << "5. Umran Malik (Bowler) \n";
        cout << "6. Fazalhaq Farooqi (All Rounder) \n";
        cout << "7. Marco Jansen (Batter) \n";
        cout << "8. Abishek Sharma (Batter) \n";
        cout << "9. Glenn Phillips (All Rounder + Batter ) \n";
        cout << "10.Rahul Tripathi (Batter) \n";
        cout << "11.Aiden Markram (Batter) \n"
    }
    else if(a == "Kolkata Knight Riders" or "KKR" or "Kkr")
    {
        cout << "1. Shreyas Iyer (Batter + Captain) \n";
        cout << "1. Rinku Singh (Batter) \n";
        cout << "1. Nitish Rana (Batter) \n";
        cout << "1. Anukul Roy (Bowler) \n";
        cout << "1. Andre Russell (All Rounder) \n";
        cout << "1. Venkatesh Iyer (All Rounder) \n";
        cout << "1. Umesh Yadav (Batter) \n";
        cout << "1. Harshit Rana (Bowler) \n";
        cout << "1. Tim Southee (Bowler) \n";
        cout << "1. Varun Chakaravarthy (All Rounder) \n";
        cout << "1. Sunil Narine (Batter + All Rounder) \n";
    }

   else if (choice == 5)
{
    cout << "S No \t" "Stadium Name \t" "Location\t\n";
    cout << "1.\t" "Chidambaram Stadium\t" "Chennai\t\n";
    cout << "2.\t" "Eden Gardens\t" "Kolkata\t\n";
    cout << "3.\t" "Wankhede Stadium\t" "Mumbai\t\n";
    cout << "4.\t" "Chinnaswamy Stadium\t" "Bengaluru\t\n";
    cout << "5.\t" "Arun Jaitley Stadium\t" "Delhi\t\n";

}
else
{
    cout << "Enter a Valid Choice";
}
}
return 0;
}