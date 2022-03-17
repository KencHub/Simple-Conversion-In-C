//a calculation of boxes dimension with a standard scale of 165 and Equivalent_SCALE of 1000
//This shows the weight and volume conervsion to give the amount of weight of a box
// you can change the standard and Equivalent scale to the way you want

#include<stdio.h>

//define
#define H 0
#define W 0
#define L 0
#define EQUIVALENT_SCALE 166
#define STANDARD_SCALE 1000


int main(void)  
{
    //Declaring
    int weight,length, height, width, volume;
    
    printf("Enter Width ");
    scanf("%d", &width);
    printf("Enter length ");
    scanf("%d", &length);
    printf("Enter Heigth ");
    scanf("%d", &height);

    //Assigning
    width=(width+W);
    height=(height+H);
    length=(length+L);
    volume=width*length*height;

    printf("Volume(Cubic meter): %d\n", volume);

    weight= (volume+STANDARD_SCALE)/EQUIVALENT_SCALE; //volume computed + 1000+165
    printf("Weight(Pounds): %d\n", weight);



    return 0;
}
