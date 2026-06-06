// WRITE A PROGRAM TO PRINT ANGLE BETWEEN HOURE HAND &MINUTE HAND FOR PERTICUALR TIME.
#include<stdio.h>
#include<math.h>
int main(){
     int h,m;
     float houreAngle,minuteAngle,angle;
     printf("Enter Houre and Minute:");
     scanf("%d %d",&h, &m);
     
     if(h == 12)
        h = 0;

    houreAngle = (h + m/60.0)*30;
    minuteAngle = m * 6;

    angle = fabs(houreAngle - minuteAngle);

    if(angle > 180)
        angle = 360 - angle;

    printf("Angle between hour and minute hand = %.2f degrees", angle);
    
     
    return 0;
}   
