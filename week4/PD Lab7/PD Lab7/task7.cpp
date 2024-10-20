#include<iostream>
using namespace std;

int main()
{
    int number,patient=0,checkPatient=0,unCheckPatient=0,doc = 7;
    cout << "Enter Number of days you visited Hospital: ";
    cin  >> number;
    for (int x=1;x<=number;x++)
    {
        if(x%3 == 0)
        {
            if(unCheckPatient > checkPatient)
            {
                doc=doc+1;
            }
        }       
        cout << "Number of patients who visited hospital on Day " << x << ": ";
        cin  >> patient;
        if(doc >= patient)
        {
            checkPatient = checkPatient + patient;
        }
        else
        {
            checkPatient = checkPatient + doc;
            unCheckPatient = unCheckPatient + (patient-doc);
        }
    }
    cout << "Treated Patients: " << checkPatient << endl;
    cout << "Untreated Patients: " << unCheckPatient;
}