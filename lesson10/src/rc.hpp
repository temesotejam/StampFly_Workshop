#ifndef RC_HPP
#define RC_HPP

#include <stdio.h>
#include <stdint.h>

//#define MINIJOYC

#define CHANNEL 2

#define RUDDER 0
#define ELEVATOR 1
#define THROTTLE 2
#define AILERON 3
#define LOG 4
#define DPAD_UP 5
#define DPAD_DOWN 6
#define DPAD_LEFT 7
#define DPAD_RIGHT 8
#define BUTTON_ARM 9
#define BUTTON_FLIP 10
#define CONTROLMODE 11

#define RUDDER_MAX 511
#define RUDDER_MIN -512
#define ELEVATOR_MAX 127
#define ELEVATOR_MIN -128
#define THROTTLE_MAX 511
#define THROTTLE_MIN -512
#define AILERON_MAX 127
#define AILERON_MIN -128

#define LOG_MAX 1
#define LOG_MIN 0
#define CH6MAX 127
#define CH6MIN -128

#define RUDDER_MAX_JOYC 100 
#define ELEVATOR_MAX 127
#define THROTTLE_MAX_JOYC 100

void init_rc(void);
uint8_t send_telemetry(uint8_t* data, uint16_t datalen);
void send_peer_info(void);

extern volatile float Stick[16];

#endif