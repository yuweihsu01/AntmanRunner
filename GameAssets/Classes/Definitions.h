#ifndef __DEFINITIONS_H__
#define __DEFINITIONS_H__

#define DISPLAY_TIME_SPLASH_SCENE 2
#define TRANSITION_TIME 0.5

// #define PIPE_SPAWN_FREQUENCY 0.005
#define PIPE_SPAWN_FREQUENCY 0.007

#define PIPE_GAP 10
#define UPPER_SCREEN_PIPE_THRESHOLD 0.65
#define LOWER_SCREEN_PIPE_THRESHOLD 0.35

#define PIPE_MOVEMENT_SPEED 0.01

#define BIRD_COLLISION_BITMASK 0x000001
#define OBSTACLE_COLLISION_BITMASK 0x000002
#define POINT_COLLISION_BITMASK 0x000003

// #define BIRD_FALLING_SPEED 0.0025
#define BIRD_FALLING_SPEED 0.003
#define BIRD_FLYING_SPEED 0.00475
#define BIRD_FLY_DURATION 0.25

// lower means generate more faster
#define GROUND_SPAWN_FREQUENCY 0.003
// lower means move faster
#define GROUND_MOVEMENT_SPEED 0.005
#define GROUND_COLLISION_BITMASK 0x000004

#define GROUND_SPEED 3

#endif // __DEFINITIONS_H__
