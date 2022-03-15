#include <iostream>
using namespace std;

int main(){
int nums[10],i,menor,media =0,somanum=0;

for(i=0; i<10 ;i++){
    cout << "digite o " << i+1 << " numero: ";
    cin >> nums[i]; 
    cout << "\n";
    somanum += nums[i]; 
    media = somanum/10; 
}
for(i=1;i<10;i++){
    if(nums[i] < menor && nums[i]>media){ 
    menor=nums[i];
    }
}
cout << "media = " << media << endl;
cout << "o menor numero maior que a media e: " << menor << "\n"; 

return 0;
}