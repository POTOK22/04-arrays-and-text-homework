/*
04 - Arrays and text
Homework
by Grzegorz Potocki
*/

#include <iostream>
#include <limits>

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
        case 51:{ //the hardest one of all
            char text[256];
            int visited[256];
            int counter;
            std::cout<<"Enter text: "<<std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.getline(text, 100);
            std::cout<<"statistics: "<<std::endl;
            for(int i=0; i<text[i]; i++){
                if(visited[i]==1){
                    continue;
                }
                else {
                    counter=0;
                    for(int j=0; j<text[i]; j++){
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
            break;
        }
        case 53:{
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
