#ifndef __LED_H__
#define __LED_H__
enum led_id {
    LED_RED=0,
    LED_GREEN,
    LED_BLUE,
};

void led_init();
void led_state(enum led_id color, int state);
void led_toggle(enum led_id color);
#endif //__LED_H__
