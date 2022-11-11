/*
04 - Arrays and text
Homework
by Grzegorz Potocki
*/

#include <iostream>
#include <limits>
#include <cstdlib>
#include <time.h>
#include <math.h>

int main ()
{
    char choice;
    std::cout<<"Choose an option:\n1 - Exercise 1\n2 - Exercise 2\n3 - Exercise 3\n"<<std::endl;
    std::cout<<"4 - Homework 1\n5 - Homework 2\n6 - Homework 3\nx - exit"<<std::endl;
    std::cin>>choice;
    int choice_int=static_cast<int>(choice);
    while (choice=='x' || choice=='X'){
        return 0;
    }
    switch(choice_int) {
        case 49:{
            char text[100];
            std::cout<<"Enter text: "<<std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(text, 100);
            for (int i=0; i<100; ++i){
                text[i]=toupper(text[i]);
            }
            std::cout<<text<<std::endl;
            break;
        }
        case 50:{
            int arr[4], maxi=0, mini;
            float mean;
            for(int i=0; i<4; i++){
                std::cout<<"Enter int value: "<<std::endl;
                std::cin>>arr[i];
            }
            for(int i=0; i<4; i++){
                std::cout<<arr[i]<<" ";
            }
            std::cout<<std::endl;
            for (int i=0; i<4; i++){
                if(arr[i]>maxi){
                    maxi=arr[i];
                }
            }
            std::cout<<"The maximal value of the array is: "<<maxi<<std::endl;
            for (int i=0; i<4; i++){
                if(arr[i]<mini){
                    mini=arr[i];
                }
            }
            std::cout<<"The minimal value of the array is: "<<mini<<std::endl;
            mean=(arr[0]+arr[1]+arr[2]+arr[3])/4.0;
            std::cout<<"The mean value of the array is: "<<mean;
            break;
        }
        case 51:{
            int n, counter;
            std::cout<<"Enter value which is size of a text: "<<std::endl;
            std::cin>>n;
            int visited[n];
            char text[n];
            std::cout<<"Enter text: "<<std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(text, n);
            for(int i=0; i<n; i++){   //bubble sort; PROBLEM WHY FIRST ELEMENT OF AN ARRAY IS EMPTY
                for(int j=1; j<n-i; j++){
                    if(text[j-1]>text[j]){
                        std::swap(text[j-1], text[j]);
                    }
                }
            }
            for(int i=0; i<n; i++){
                std::cout<<text[i]<<" ";
            }
            std::cout<<std::endl;
            std::cout<<"statistics: "<<std::endl;
            for(int i=0; i<n; i++){     //occurrence for each character
                if(visited[i]==1){
                    continue;
                }
                else {
                    counter=0;
                    for(int j=0; j<n; j++){
                        if(text[i]==text[j]){
                            visited[j]=1;
                            counter++;
                        }
                    }
                }
                std::cout<<text[i]<<": "<<counter<<std::endl;
            }
            break;
        }
        case 52:{
            srand(time(NULL));
            float arr_rand[20];
            for(int i=0; i<20; i++){
                arr_rand[i]=static_cast<float>(static_cast<int>((((float)rand())/((float)RAND_MAX)*(100-10)+10)*10.))/10;
            }
            int j;
            float h;
            for (int i=1; i<20; i++){   //inserion sort
                h=arr_rand[i];
                j=i-1;
                while(j>=0 && arr_rand[j]>h){
                    arr_rand[j+1]=arr_rand[j];
                    j--;
                }
                arr_rand[j+1]=h;
            }
            for(int i=0; i<20; i++){
                std::cout<<arr_rand[i]<<std::endl;
            }
            break;
        }
        case 53:{
            srand(time(NULL));
            int arr[20], a, sr;
            for(int i=0; i<20; i++){
                arr[i]=rand()%20+1;
            }
            for(int i=0; i<20; i++){
                for(int j=1; j<20-i; j++){
                    if(arr[j-1]>arr[j]){
                        std::swap(arr[j-1], arr[j]);
                    }
                }
            }
            for(int i=0; i<20; i++){
                std::cout<<arr[i]<<std::endl;
            }
            std::cout<<"Enter the value: "<<std::endl;
            std::cin>>a;
            break;
        }
        case 54:{
            break;
        }
        default:{
            std::cout<<"Value of expression is out of scope";
            break;
        }
    }
    return 0;
}
