#include <iostream>

using namespace std;

struct elev
{
    char nume[10],prenume[12];
    float teza,note;
}E[30];
int n;

void citire()
{
    int i;
    for(i=1;i<=n;i++)
        {
            cout<<"Numele elevului: ";cin>>E[i].nume;
            cout<<endl;
            cout<<"Prenumele elevului: ";cin>>E[i].prenume;
            cout<<endl;
            cout<<"Media elevului: ";cin>>E[i].note;
            cout<<endl;
            cout<<"Nota teza elev: ";cin>>E[i].teza;
            cout<<endl;
        }
}

void medielainfo()
{
    cout<<"Media la informatica a elevului:"<<endl;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        float medie;
        medie=(E[i].note*3+E[i].teza)/4;
        cout<<E[i].nume<<" "<<E[i].prenume<<" este "<<medie<<" "<<endl;
    }

}

void mediemaimicadecat5()
{
    cout<<"Elevii: "<<endl;
    cout<<endl;
    for(int i=1;i<=n;i++)
        if(E[i].note<5)
            cout<<E[i].nume<<" "<<E[i].prenume<<endl;
    cout<<endl;
    cout<<"Au media mai mica decat 5"<<endl;
}

void notepeste7lateza()
{
    cout<<"Elevii: "<<endl;
    for(int i=1;i<=n;i++)
        if(E[i].teza>7)
            cout<<E[i].nume<<" "<<E[i].prenume<<endl;
    cout<<endl;
    cout<<"Au nota la teza la info mai mare decat 7"<<endl;
}

void mediaclasei()
{
    float mediepeclasa;
    int nrc=0;
    float suma=0;
    float medie;
    cout<<" | Media clasei este: | "<<endl;
    for(int i=1;i<=n;i++)
    {
        medie=(E[i].note*3+E[i].teza)/4;
        suma=suma+medie;
        nrc++;
    }
    mediepeclasa=suma/nrc;
    cout<<" | "<<mediepeclasa;
    cout<<endl;
}

int main()
{
    cout<<"Numar de elevi: ";
    cin>>n;
    citire();
    cout<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    medielainfo();
    cout<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    mediemaimicadecat5();
    cout<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    notepeste7lateza();
    cout<<endl;
    cout<<"-------------------------"<<endl;
    cout<<endl;
    mediaclasei();
    cout<<endl;
    cout<<"-------------------------"<<endl;
    return 0;
}
