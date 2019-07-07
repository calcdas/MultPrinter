/*MultPrinter
Arquivo mpsettings.h
*/
// Parametros
// Set variables - Essas variáveis ​​afetam a operação da base da impressora. Faça alterações para compensar os diferentes tipos de construção.
// configuracao de passos por milimetro  stepPerMm
// configuracao de passos por volta  stepPerRound
// configuracao de micropasso  stepConfig
// configuracao do movimento (aceleracao, velocidade maxima, velocidade minima)  motionConfig
// MULT_PRINTER_PE_MAXIMUM_ENCODER MAX:

const int ASF_INTERVAL = 50;  // Atraso de tempo para o sinal ASF
float TREADMILL_FACTOR = 8.53; // Epson L1800
const int EJECT_SPEED = 250;  // Atraso de passo que controla a velocidade de ejeção da esteira. Mais baixo é mais rápido
const int HOME_SPEED = 250;   // Retardo de etapa que controla a velocidade da esteira ao retornar na inicialização. Mais baixo é mais rápido

const int SLOW_SPEED = 750;   // Diminui o passo quando perto de uma das extremidades
const int BOOT_SPEED = 250;   // Velocidade da esteira durante a inicialização
const int ALIGN_SPEED = 12500;  // Passo a velocidade do interruptor de limite traseiro
unsigned int MAXIMUM_STEP = 19500; // Máximo de passos que o motor leva para ir da parte de trás para a frente. Controla onde a esteira pára ao ejetar.
// NOTA: Este passo máximo está em uma base com 26,5 polegadas de curso, 30 dentes polia e 800 passos por revolução do motor de passo.
#define TREADMILL_ENCODER 130000L // For Epson l1800 - shared by randyb123 
const int PE_MINIMUM_ENCODER = 950; // MIN: Define o intervalo para acionar o sinal PE (entrada de papel). NOTA: Essas configurações padrão foram testadas no Epson R3000 / P600. Pode ser diferente em outros modelos.
const int PE_MAXIMUM_ENCODER = 1050; // MAX:
const int DISTANCE_MIDIA = 3 ;  //Distancia da cabeça em relação a midia a ser impressa, deve ser altura da midia mais 3mm  
unsigned long VELOCITY_MAXIMUM_MOTOR_TREADMILL = 1500;
unsigned long VELOCITY_MINIIMUM_MOTOR_TREADMILL = 5000;
unsigned int ACCELERATION_MOTOR_TREADMILL = 20;
unsigned int MICRO_STEP_MOTOR_TREADMILL = 1;
unsigned int STEP_MILLIMETER_MOTOR_TREADMILL = 25;
unsigned int STEP_BACK_MOTOR_TREADMILL = 200;

unsigned long VELOCITY_MAXIMUM_MOTOR_ELEVATOR = 1500;
unsigned long VELOCITY_MINIIMUM_MOTOR_ELEVATOR = 5000;
unsigned int ACCELERATION_MOTOR_ELEVATOR = 20;
unsigned int MICRO_STEP_MOTOR_ELEVATOR = 1;
unsigned int STEP_MILLIMETER_MOTOR_ELEVATOR = 25;
unsigned int STEP_BACK_MOTOR_ELEVATOR = 200;

int TREADMILL_POSITION; // Posição atual do motor de passo
int TREADMILL_COUNT;    // Onde o motor de passo deve estar
int TREADMILL_STATE;     // Armazena o que A ESTEIRA ROLANTE está fazendo atualmente.

