#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    // Food itens Quntity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, QchikenRool = 0;

    // Food itens Sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, SchikenRool = 0;

    // Food itens Total Proce
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chikenRool = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Room avaliabel : ";
    cin >> Qrooms;
    cout << "\n Quintity of pasta : ";
    cin >> Qpasta;
    cout << "\n Quintity of burger: ";
    cin >> Qburger;
    cout << "\n Quintity of noodles : ";
    cin >> Qnoodles;
    cout << "\n Quintity of shake : ";
    cin >> Qshake;
    cout << "\n Quintity of ChikenRool : ";
    cin >> QchikenRool;
m:
    cout << "\n\t\t\t Please select form the menu options ";
    cout << "\n\n1) Rooms ";
    cout << "\n2) Pasta ";
    cout << "\n3) Burger ";
    cout << "\n4) Noodels ";
    cout << "\n5) shake ";
    cout << "\n6) Chiken-Rool ";
    cout << "\n7) Information regarding sales and Collections : ";
    cout << "\n8) Exit";

    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of Roomes you want : ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + (quant * 1200);
            cout << "\n\n\t\t " << quant << " room/rooms have been alloted to you! ";
        }
        else

            cout << "\n\tOnly  " << Qrooms - Srooms << "  Rooms remaining in hotel";
        break;

    case 2:
        cout << "\n\n Enter Enter Pasta Quantity : ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + (quant * 250);
            cout << "\n\n\t\t " << quant << " Pasta is orderd! ";
        }
        else

            cout << "\n\tOnly " << Qpasta - Spasta << " Pasta remaining in hotel";
        break;

    case 3:
        cout << "\n\n Enter Burger Quantity : ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + (quant * 150);
            cout << "\n\n\t\t " << quant << " Burger is orderd! ";
        }
        else

            cout << "\n\tOnly " << Qburger - Sburger << " Burger remaining in hotel";
        break;

    case 4:
        cout << "\n\n Enter Noodles Quantity : ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + (quant * 200);
            cout << "\n\n\t\t" << quant << "  Noodles is orderd! ";
        }
        else

            cout << "\n\tOnly " << Qnoodles - Snoodles << " Noodles remaining in hotel";
        break;

    case 5:
        cout << "\n\n Enter Shake Quantity : ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + (quant * 150);
            cout << "\n\n\t\t " << quant << " Shake is orderd! ";
        }
        else

            cout << "\n\tOnly " << Qshake - Sshake << " Shake remaining in hotel";
        break;

    case 6:
        cout << "\n\n Enter Chiken-Roll Quantity : ";
        cin >> quant;
        if (QchikenRool - SchikenRool >= quant)
        {
            SchikenRool = SchikenRool + quant;
            Total_chikenRool = Total_chikenRool + (quant * 220);
            cout << "\n\n\t\t " << quant << " chikenRool is orderd! ";
        }
        else

            cout << "\n\tOnly " << QchikenRool - SchikenRool << " ChikenRool remaining in hotel";
        break;

    case 7:

        cout << "\n\t\tDetails of sales and collections ";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent : " << Srooms;
        cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
        cout << "\n\n Toatla rooms collection for the day : " << Total_rooms;

        cout << "\n\n Number of pasta we had : " << Qpasta;
        cout << "\n\n Number of pasta we gave for sold : " << Spasta;
        cout << "\n\n Remaining pasta : " << Qpasta - Spasta;
        cout << "\n\n Totla pasta collection for the day : " << Total_pasta;

        cout << "\n\n Number of burger we had : " << Qburger;
        cout << "\n\n Number of burger we gave for sold : " << Sburger;
        cout << "\n\n Remaining burger : " << Qburger - Sburger;
        cout << "\n\n Totla burger collection for the day : " << Total_burger;

        cout << "\n\n Number of noodles we had : " << Qnoodles;
        cout << "\n\n Number of noodles we gave for sold : " << Snoodles;
        cout << "\n\n Remaining noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Totla noodles collection for the day : " << Total_noodles;

        cout << "\n\n Number of shake we had : " << Qshake;
        cout << "\n\n Number of shake we gave for sold : " << Sshake;
        cout << "\n\n Remaining shake : " << Qshake - Sshake;
        cout << "\n\n Totla shake collection for the day : " << Total_shake;

        cout << "\n\n Number of chikenRool we had : " << QchikenRool;
        cout << "\n\n Number of chikenRool we gave for sold : " << SchikenRool;
        cout << "\n\n Remaining chikenRool : " << QchikenRool - SchikenRool;
        cout << "\n\n Totla chikenRool collection for the day : " << Total_chikenRool;
        cout << "\n\n\n Total collection for the day : " << Total_burger + Total_chikenRool + Total_noodles + Total_pasta + Total_rooms + Total_shake;
        break;
    case 8:
        exit(0);
    default:
        cout << "\n Please select the number mentined above!";
    }
    char a;
    cout << "If you want to order something againg enter A which stands for Again else enter Q : ";
    cin >> a;
    if (a == 'A')
    {
        goto m;
    }
    else
        return 0;
}