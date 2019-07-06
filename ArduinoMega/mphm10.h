/*MultPrinter
 Direitos autorais (c) 2019  CDAS
 MultPrinter é um software livre
 Arquivo mphm10.h 
*/


#define MULTIPRINTER_VERSION "1.0"
#define MULTIPRINTER_VERSION_BUILD "20190629"

#include <SPI.h>
#include <Encoder.h>
#include <EEPROM.h>
#include <StepperDriver.h>
#include "mpuilang.h"

#define BAUDRATE 9600

#define  SD_CS_PIN  53

#define DATA_DIR "/DATA"

#define ECHO_PIN  49 // pin del ECHO
#define TRIGGER_PIN  48 // pin del TRIGGER

#define MOTOR_ELEVATOR_LIMIT_MAX  45
#define MOTOR_ELEVATOR_LIMIT_MIN  44
#define MOTOR_TREADMILL_LIMIT_MAX  43
#define MOTOR_TREADMILL_LIMIT_MIN  42

#define E_STOP 38 // Parada se Emergencia

#define EJECT  true //
#define PUTON  true// 
#define PAST true //automático de 2 passagen

#define MOTOR_ELEVATOR_DIR  27
#define MOTOR_ELEVATOR_STEP 26 
#define MOTOR_ELEVATOR_ENABLE 25
#define MOTOR_TREADMILL_DIR  24
#define MOTOR_TREADMILL_STEP 23
#define MOTOR_TREADMILL_ENABLE 22
#define ENCODER_B 21  // Entrada do codificador da impressora epson
#define ENCODER_A 20   //Entrada do codificador da impressora 
#define LED_INK 19 // led ink entrada interrupçao
#define LED_PAPER 18 // led paper entrada interrupçao

#define SENSOR_Pw 16
#define RX 15 // BLUETOOTH
#define TX 14 // BLUETOOTH 
#define POWER_LED 13 // Led 
#define COVER_OPEN 12 // sensor tampa aberta
#define TRASH_PRINTER 11 // rele lixeira impressora 
#define INK_PRINTER 10 // rele tinta impressora 
#define PAPER_PRINTER 9 // rele liga papel 
#define POWER_PRINTER 8 // rele liga desliga impressora
#define ASF_SIGNAL 7
#define BUZZER 6 // BUZZER
#define LASER_EMISSOR 5 // Laser emissor
#define LASER_RECEPTOR 4 // Laser receptor
#define PE_SIGNAL 3 
#define LED_POWER 2// led power impressora

#define MOTOR_TREADMILL_ENABLE_LEVEL LOW
#define MOTOR_TREADMILL_LIMIT_LEVEL  LOW
#define MOTOR_TREADMILL_STEP_ROUND    200
#define MOTOR_ELEVATOR_ENABLE_LEVEL LOW
#define MOTOR_ELEVATOR_LIMIT_LEVEL  LOW
#define MOTOR_ELEVATOR_STEP_ROUND    200
#define ELEVATOR_DISTANCE_MAX        300  
#define ELEVATOR_DISTANCE_MIN          3
#define ELEVATOR_DISTANCE_CURRENT      0 
