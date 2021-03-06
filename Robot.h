//ROBOT MOVEMENT SPEEDS
#define TEST_SPEED 80
#define LIFT_DOWN_SPEED -25
#define MAIN_LIFT_IDLE_SPEED 15
#define SEC_LIFT_IDLE_SPEED 15
#define CLAW_PIVOT_SPEED 75

#define circumference 8/12 * 4 * PI

//ENCODER MACROS
#define mainArmSens nMotorEncoder[lMainArm]
#define secArmSens nMotorEncoder[lSecArm]
#define lDriveSens nMotorEncoder[lDrive]
