#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
    int Qrooms=0, Qpasta=0, Qmaggi=0, Qpizza=0, Qshakes=0;
    int Srooms=0, Spasta=0, Smaggi=0, Spizza=0, Sshakes=0;
    int Trooms=0, Tpasta=0, Tmaggi=0, Tpizza=0, Tshakes=0;
    cout<<"\n\t Quantity of items we have ";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>> Qpasta;
    cout<<"\nQuantity of maggi: ";
    cin>> Qmaggi;
    cout<<"\n Quantity of pizza: ";
    cin>> Qpizza;
    cout<<"\n Quantity of shakes: ";
    cin>> Qshakes;
    
   m: cout<<"\n\t\t\t Please select from the menu";
    cout<<"\n\n1) Rooms ";
        cout<<"\n\n2) pasta ";
            cout<<"\n\n3) maggi ";
                cout<<"\n\n4) pizza ";
                    cout<<"\n\n5) shakes ";
                        cout<<"\n6) Information on sales and collection ";
                        cout<<"\n7) Exit menu ";

                        cout<<"\n\n Please enter your choice ";
                        cin>>choice;

                        switch(choice)
                        {
                            case 1:
                            cout<<"\n\n Enter the number of rooms you want: ";
                            cin>> quant;
                            if(Qrooms-Srooms >= quant)
                            {
                                Srooms= Srooms + quant;
                                Trooms = Trooms + quant*1200 ;
                                cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you ";

                            }        
                            else
                            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms available";
                            break;
                            case 2:
                            cout<<"\n\n Enter pasta quantity: " ;
                            cin>> quant;
                            if(Qpasta-Spasta>=quant)
                            {
                                Spasta=Spasta+quant;
                                Tpasta= Tpasta+quant*250;
                                   cout<<"\n\n\t\t"<<quant<<"pasta ordered  ";

                            }        
                            else
                            cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta available";
                            break;
                             case 3:
                            cout<<"\n\n Enter maggi quantity: " ;
                            cin>> quant;
                            if(Qmaggi-Smaggi>=quant)
                            {
                                Smaggi=Smaggi+quant;
                                Tmaggi= Tmaggi+quant*100;
                                   cout<<"\n\n\t\t"<<quant<<"maggi ordered ";

                            }        
                            else
                            cout<<"\n\tOnly"<<Qmaggi-Smaggi<<"maggi available";
                            break;
                            case 4:
                            cout<<"\n\n Enter pizza quantity: " ;
                            cin>> quant;
                            if(Qpizza-Spizza>=quant)
                            {
                                Spizza=Spizza+quant;
                                Tpizza= Tpizza+quant*500;
                                   cout<<"\n\n\t\t"<<quant<<"pizza ordered ";

                            }        
                            else
                            cout<<"\n\tOnly"<<Qpizza-Spizza<<"pizza available";
                            break;
                            case 5:
                            cout<<"\n\n Enter shakes quantity: " ;
                            cin>> quant;
                            if(Qshakes-Sshakes>=quant)
                            {
                                Sshakes=Sshakes+quant;
                                Tshakes= Tshakes+quant*175;
                                   cout<<"\n\n\t\t"<<quant<<"shake ordered ";

                            }        
                            else
                            cout<<"\n\tOnly"<<Qshakes-Sshakes<<"shakes available";
                            break;
                            case 6:
                            cout<<"\n\t\t Details of sales and collection ";
                            cout<<"\n\n Number of rooms we had : "<<Qrooms;
                            cout<<"\n\n Number of rooms given for rent: "<<Srooms;
                            cout<<"\n\n Reamaining rooms: "<<Qrooms-Srooms;
                            cout<<"\n\n Total rooms collection for the day: "<<Trooms;
                               
                            cout<<"\n\n Number of pasta we had : "<<Qpasta;
                            cout<<"\n\n Number of pasta sold: "<<Spasta;
                            cout<<"\n\n Reamaining pasta: "<<Qpasta-Spasta;
                            cout<<"\n\n Total pasta collection for the day: "<<Tpasta;
                               
                            cout<<"\n\n Number of pizza we had : "<<Qpizza;
                            cout<<"\n\n Number of pizza sold: "<<Spizza;
                            cout<<"\n\n Reamaining pizza: "<<Qpizza-Spizza;
                            cout<<"\n\n Total pizza collection for the day: "<<Tpizza;
                               
                            cout<<"\n\n Number of maggi we had : "<<Qmaggi;
                            cout<<"\n\n Number of maggi sold: "<<Smaggi;
                            cout<<"\n\n Reamaining maggi: "<<Qmaggi-Smaggi;
                            cout<<"\n\n Total maggi collection for the day: "<<Tmaggi;
                               
                            cout<<"\n\n Number of shakes we had : "<<Qshakes;
                            cout<<"\n\n Number of shakes sold: "<<Sshakes;
                            cout<<"\n\n Reamaining shakes: "<<Qshakes-Sshakes;
                            cout<<"\n\n Total shakes collection for the day: "<<Tshakes;
                            cout<<"\n\n Total collection for the day: "<<Tpasta+Tshakes+Trooms+Tpizza+Tmaggi;

                            case 7:
                            exit(0);
                            default:
                            cout<<"\n\n Please select from the given menu ";

                            }
                            goto m ;
                            
                        return 0;
}
