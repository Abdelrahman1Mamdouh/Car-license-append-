#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int t;
    string cm[999];
    string ch;
    string lp[999];
    string cmm[999];
    string lpp[999];
    string database;
    string req;
    int c=0;

    cout<<"how many cars do you want to add?"<<endl;
    cin>>t;
    
    for(int x=0; x<t ; x++){
    cout<<"enter the model of the "<<x+1<<" car:"<<endl;
    cin>>cm[x];

    cout<<"enter the License plate of the "<<x+1<<" car:"<<endl;
    cin>>lp[x];

}
    ofstream Carlicenseplates;
    Carlicenseplates.open("CL.txt");

    for (int x=0 ; x<t ; x++){
    Carlicenseplates<<cm[x]<<endl;
    Carlicenseplates<<lp[x]<<endl;
        }
    Carlicenseplates.close();
    t=0;


cout<<"Do you want to add more cars?"<<endl;
cout<<"Yes"<<endl;
cout<<"No"<<endl;
cin>>ch;

if(ch=="Yes"){
	Carlicenseplates.open("CL.txt",  ios::out | ios::app);
     cout<<"how many other cars you want to add?"<<endl;
     cin>>t;
     
     for(int x=0;x<t;x++){
	 
    
	
	
		cout<<"car model:"<<endl;
		cin>>cmm[x];
		
		cout<<"license plate:"<<endl;
		cin>>lpp[x];
		
		Carlicenseplates<<cm[x]<<" "<<lp[x]<<endl;
	
}
	
}

else if(ch=="No"){
	
	cout<<"Alright"<<endl;
}


     
    
   Carlicenseplates.close();

    cout<<"How many cars info do you wanna see?"<<endl;
    cin>>t;
    for(int x=0 ; x<t ; x++){
        cout<<"enter the model or the license plate of the required car:"<<endl;
        cin>>req;
        ifstream Carlicenseplates;
        Carlicenseplates.open("CL.txt");
        while (getline(Carlicenseplates,database)){
            if(req==cm[c]){
            cout<<lp[c]<<endl;

            }
            else if(req==lp[c]){
                cout<<cm[c]<<endl;
            }
            
            else if(req==lpp[c]){
            	cout<<cmm[c]<<endl;
            	
			}
			
			else if(req==cmm[c]){
				cout<<lpp[c]<<endl;
			}
            c++;
        }
    c=0;
    }
    Carlicenseplates.close();
    

   

   return 0; 
}