#include "libTimer.h"
#include "buzzer.h"
#include <msp430.h>


void buzzer_init(){
  /*
    Direct timer A output "TA0.1" to P2.6.
    According to table 21 from data sheet:
    P2SEL2.6, P2SEL2.7, and P2SEL.7 must be zero
    P2SEL.6 must be 1
    Also: P2.6 direction must be output
  */
  timerAUpmode();
  P2SEL2 &= ~(BIT6 | BIT7);
  P2SEL &= ~BIT7;
  P2SEL |= BIT6;
  P2DIR = BIT6; //enable output to speaker (P2.6)
}

/*
Duration of tone
*/
void tone(int tone, int duration){
  int i;
  for(i = 0; i<duration; i++){
    buzzer_set_period(tone);
    for(i = 0; i<10000; i++);
  }
}


  /*
  Delay for sound
  */
    void delay(unsigned int time){
      unsigned int i;
      for(i = 0; i<= time; i++)
	for(i = 0; i< 50000; i++);
    }

/*
  music method contains the tones that will be played when a player wins.
*/
void music(){
  tone(660, 100);
  delay(150);
  tone(660,100);
  delay(300);
  tone(510,100);
  delay(100);
  tone(660,100);
  delay(300);
  tone(770,100);
  delay(150);
  tone(380,100);
  delay(575);
}

void buzzer_set_period(short cycles){
  CCR0 = cycles;
  CCR1 = cycles >> 1; //one half cycle
}
