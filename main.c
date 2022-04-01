#include <kipr/wombat.h>

int main()
{
    wait_for_light(0);
    shut_down_in(119);
    enable_servos();
    set_servo_position(0,150);
    set_servo_position(1,2047);
    msleep(10);
    motor(0,1500);
    motor(3,-1500);
    msleep(300);
    motor(0,0);
    motor(3,-1500);
    msleep(1000);
    motor(0,1500);
    motor(3,-1500);
    msleep(1200);
    motor(0,-1500);
    motor(3,-1500);
    msleep(130);
    motor(0,1500);
    motor(3,-1500);
    msleep(3900); //halfway across
    motor(0,0);
    motor(3,-1500);
    msleep(1250);
    motor(0,1500);
    motor(3,-1500);
    msleep(50);
    motor(0,-500);
    motor(3,-500);
    msleep(585);
    set_servo_position(0,1897);
    set_servo_position(1,1429);
    msleep(300);
    motor(0,1500);
    motor(3,-1500);
    msleep(2810);
   
    
    
    
    
    disable_servos();
    ao();
    return 0;
}
