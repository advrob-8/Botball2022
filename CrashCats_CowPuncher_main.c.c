#include <kipr/wombat.h>

int main()
{
    
    enable_servos();
    set_servo_position(0,772);
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
    msleep(125);
    motor(0,1500);
    motor(3,-1500);
    msleep(3500); //halfway across
    set_servo_position(0,1918);
    set_servo_position(1,1429);
    msleep(290);
    motor(0,-800);
    motor(3,1500);
    msleep(5100);
    
    
    disable_servos();
    ao();
    return 0;
}
