
#define BUTTON1 2
#define MODEBUTTON 2
#define BUTTON2 3
#define SETBUTTON 3

#define IN_MESSAGE_SIZE 64

//#define THE_MESSAGE "It Works!!"
#define THE_MESSAGE "BE WELL - STAY SAFE"


#define blinkTime  500                                   // was 1000



// Constants
// DS1337+ Address locations
#define		RTCDS1337	B01101000               // was B11010000  
#define		RTCCONT		B00001110		//; Control
#define		RTCSTATUS       B00001111		//; Status

//#define		RTC_HSEC	B00000001		//; Hundredth of a secound
#define		RTC_SEC		B00000000		//; Seconds
#define		RTC_MIN		B00000001		//; Minuites
#define		RTC_HOUR	B00000010		//; Hours

#define		RTC_DAY  	B00000011		//; Day
#define		RTC_DATE	B00000100		//; Date
#define		RTC_MONTH	B00000101		//; Month
#define		RTC_YEAR	B00000110		//; Year

#define		RTC_ALARM1SEC	B00000111		//; Seconds
#define		RTC_ALARM1MIN	B00001000		//; Minuites
#define		RTC_ALARM1HOUR	B00001001		//; Hours
#define         RTC_ALARM1DATE  B00001010               //; Date




extern boolean  bval;

void EnableAlarm1(boolean onoff);
void SetAlarmTime();
void SetStartTime();
void clearmatrix();
void displayString(const char *);
void displayStringDay(int day);
void lamptest();

void displayMonth(int code);

void checktime(void);
void checkDate(void);
void displayDate(void);

void settimeNEW(uint8_t setselect);

void writeTime(uint8_t dig1, uint8_t dig2, uint8_t dig3, uint8_t dig4);

void TwelveTwentyFourConvert();
void setAlarm(uint8_t);
void displayGraphic(int, int, int);
void LEDupdateTWO();
void LEDupdate();
void CheckAlarm();

void GETFROMEEPROM();
void FILLEEPROM();

void UltraPowerDown(boolean onoff);


void ResetScrollMessage();
void UltraPowerDown(boolean onoff);

void MinuteUP();

void DisplayTimeSub();
void setTimeSub();
void setAlarmSub();
void StopWatch();
void DisplaySerialData();
void graphican();
void GoToSleep();

void I2C_TX(byte device, byte regadd, byte tx_data);
void I2C_RX(byte devicerx, byte regaddrx);

// Worm animation
extern int c;
extern int y;
extern int target;
extern int targdist;
extern boolean targdir;
extern int wormlenght;
extern boolean soundeffect;

extern uint8_t i2cData;

extern uint8_t TEXT;
extern int scrollCounter;
extern int ROWBITINDEX;
extern int ScrollLoops;
extern int scrollSpeed;
extern int blinkCounter;

extern uint8_t HourTens;
extern uint8_t HourOnes;
extern uint8_t MinTens;
extern uint8_t MinOnes;
extern uint8_t SecTens;
extern uint8_t SecOnes;

extern uint8_t Days;
extern uint8_t DateOnes;
extern uint8_t DateTens;
extern uint8_t MonthOnes;
extern uint8_t MonthTens;
extern uint8_t YearsOnes;
extern uint8_t YearsTens;
extern uint8_t AMPMALARMDOTS;

// Alarm
extern uint8_t AHourTens ;
extern uint8_t AHourOnes;
extern uint8_t AMinTens;
extern uint8_t AMinOnes;

extern uint8_t DayCode;
extern uint8_t MonthCode;


extern boolean TH_Not24_flag;
extern boolean A_TH_Not24_flag;
extern boolean PM_NotAM_flag;
extern boolean A_PM_NotAM_flag;

extern int OldTime;
extern int CurrentTime;
extern int TotalTime;

extern uint8_t SWDigit4;  
extern uint8_t SWDigit3;   
extern uint8_t SWDigit2; 
extern uint8_t SWDigit1; 
extern int SWMINUTES;
extern int SWSECONDS;

extern boolean NewTimeFormate;
extern int STATE;
extern int SUBSTATE;
extern int MAXSTATE;
extern boolean NextStateRequest;
extern boolean NextSUBStateRequest;
extern boolean JustWokeUpFlag;
extern boolean JustWokeUpFlag2;
extern boolean OptionModeFlag;

extern boolean blinkFlag;
extern boolean blinkON;
extern boolean blinkHour;
extern boolean blinkMin;
extern unsigned long SleepTimer;
extern unsigned long currentMillis;
extern unsigned long SleepLimit;

extern boolean SleepEnable;
extern int UpdateTime;

extern boolean ALARMON;
extern boolean ALARM1FLAG;

extern const byte LETTERS[106][5];
extern const byte GRAPHIC[5][5];

extern volatile uint8_t Mcolumn;
extern volatile uint8_t LEDMAT[20];

extern volatile boolean MINUP;

extern const int digitoffset;

extern char IncomingMessage[IN_MESSAGE_SIZE];
extern char MessageRead;
extern uint8_t Message[275];
extern int IncomingIndex;
extern int IncomingMessIndex;
extern int IncomingMax;
extern int MessagePointer;
extern int StartWindow;
extern int IncomingLoaded;

extern boolean NextStateFlag;
extern boolean SetTimeFlag;

extern char days[7][4];
extern char months[12][4];
