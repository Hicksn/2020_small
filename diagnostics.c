#include <kipr/botball.h> 
#include <main_functions.h>
#include <threads.h>
#include <variables.h>
#include <run_sections.h>

/*

int diagnostics()
{
    //motor check
    cmpc(right_motor);
    cmpc(left_motor);
    mav(right_motor,100);
    mav(left_motor,100);
    gmpc(right_motor);
    gmpc(left_motor);
    if(gmpc(right_motor) && gmpc(left_motor)<20)
    {
        printf ( "motor is good");
    }
    if (gmpc(right_motor) && gmpc(left_motor)>20)
    {
        printf( "motors are both broke");
    }
    if(gmpc(right_motor)>20)
    {
        printf("motor left is bad");
    }
    if (gmpc(left_motor)>20)
    {
        printf("motor right is bad");
    }


    //claw diagnostics


    enable_servos(claw);
    set_servo_position(claw, 300);
    set_servo_position(claw, 500);
    //arm dianostics
    enable_servos(lift_arm);
    set_servo_position(lift_arm, 300);
    set_servo_position(lift_arm, 500);
    //check if squared up

    square_up(black,800);




    //color sensor check
    //square up on black
    if (analog(left_IR)>analog_white)
    {
        printf("all good");
    }
    if(analog(right_IR)<analog_white)
    {
        printf("color sensor not working");
    }
    //sensor diagnostics
    {
        printf("move over black");
        while(1){

            if(left_button() == 0 && right_button() == 0){
                move(1000,1000);
                msleep(5);
            }
            if(left_button() == 1 && right_button() == 0){
                move(1000,0);
                msleep(5);
            }
            if(right_button() == 1 && left_button() == 0){
                move(0,1000);
                msleep(5);
            }
            if(left_button() == 1 && right_button() == 1){
                move(0,0);
                msleep(1);
                if(analog(0) == white[enter white number here]){ put your stuff here
                    printf("error not over black");
                }
                if(analog(0) == black){
                    printf("over black");
                }
            }





        }
        return 0;
    }

}
*/