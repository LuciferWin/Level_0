#include<iostream>
using namespace std;
int main(){
    
    int count,total=0;
    float avg = 0 ;
    cout<< "Enter Number of Month : ";
    cin>>count;

    int weather_info[count+2][4]; //weather_info[i][j];
    for (int i= 0; i <count; i++)
    {
        cout<<"Enter information for Month"<< i+1<<endl;
        for (int j = 0; j < 4; j++)
        {
         if (j==0)
         {
             weather_info[i][j] = i + 1;
         }else if (j==1)
         {
             cout<< "Enter rain : ";
             cin >> weather_info [i][j];
         }else if (j==2)
         {
             cout<<"Enter wind : ";
             cin >> weather_info[i][j];
         }else{
             cout<<"Enter temp : ";
             cin>>weather_info[i][j];
         }
         
         
            
        }
        
    }

    //calculate the process
    for (int j = 1; j <  4; j++)
    {
        int sum = 0;
        for (int i = 0; i < count; i++)
        {
            
            sum = weather_info[i][j] + sum;
            avg = sum*1.0/count;
            weather_info[count][j]= sum;
            weather_info[count+1][j]= avg;

        }
        
    }
    







    
    // out put the weather info
    cout << "\nWeather information for : " << count << " Months " << endl ;
    cout << "\nNo\tRain\tWind\tTemp" << endl ;



    for (int i = 0; i < count+2; i++)
    {
        for (int j = 0; j < 4; j++)
        {   
            if (i == count && j == 0)
            {
                cout<<"Total\t";
            }else if (i == count +1 && j == 0)
            {
                cout<<"Average\t";
            }else{
                 cout<<weather_info[i][j]<<"\t";
            }
            
            
           
        }
        cout<<endl;
    }
    
    
    
    
        
        
     
    
    
    return 0;
}