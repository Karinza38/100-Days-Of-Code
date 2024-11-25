#define t   30

#define t1  20

#define t2  100

#define t3  50


void setup() {

  // set up pins 2 to 13 as outputscf

  for (int i = 2; i <= 13; i++) {

    pinMode(i, OUTPUT);

  }

}

void loop(){


effect_1();

effect_1();


 effect_2();

 effect_2();


 effect_3();

 effect_3();


 effect_4();

 effect_4();


 effect_5();

 effect_5();


 effect_6();

 effect_6();


 effect_7();

 effect_7();

  }

//left to right and right to left

void effect_1()

{

for(int i=2; i<14; i++){

digitalWrite(i, HIGH);

delay(t1);

digitalWrite(i+1, HIGH);

delay(t1);

digitalWrite(i+2, HIGH);

delay(t1);

digitalWrite(i, LOW);

delay(t1);

digitalWrite(i+1, LOW);

delay(t1);

}

for(int i=13; i>1; i--){

digitalWrite(i, HIGH);

delay(t1);

digitalWrite(i-1, HIGH);

delay(t1);

digitalWrite(i-2, HIGH);

delay(t1);

digitalWrite(i, LOW);

delay(t1);

digitalWrite(i-1, LOW);

delay(t1);

}

}

void effect_2()

{

int count = 13; // keeps track of second LED movement


  // move first LED from left to right and second from right to left

  for (int i = 2; i < 13; i++) {

    clear();

    digitalWrite(i, HIGH);      // chaser 1

    digitalWrite(count, HIGH); // chaser 2

    count--;

    // stop LEDs from appearing to stand still in the middle

    if (count != 7) {

      delay(t2);

    }

  }


  // move first LED from right to left and second LED from left to right

  for (int i = 13; i > 2; i--) {

    clear();

    digitalWrite(i, HIGH);      // chaser 1

    digitalWrite(count, HIGH); // chaser 2

    count++;

    // stop LEDs from appearing to stand still in the middle

    if (count != 8) {

      delay(t2);

    }

  }

}



void effect_3()

{

for(int i=2; i<14; i++){

  digitalWrite(i, HIGH);

  delay(t3);

}

for(int i=2; i<14; i++){

  digitalWrite(i, LOW);

  delay(t3);

}



for(int i = 14; i>=2; i--){

  digitalWrite(i, HIGH);

  delay(t3);

}

for(int i = 14; i>=2; i--){

  digitalWrite(i, LOW);

  delay(t3);

}

}

void effect_4()

{

for(int j = 2; j <= 13; j++){

  digitalWrite(j, HIGH);

  delay(t2);

  j=j+1;

  }

for(int j = 2; j <= 13; j++){

  digitalWrite(j, LOW);

  delay(t2);

  }


  for(int k = 15; k > 2; k--){

  digitalWrite(k, HIGH);

  delay(t2);

  k=k-1;

  }

for(int k = 15; k > 2; k--){

  digitalWrite(k, LOW);

  delay(t2);

  }

}

  void effect_5()

{

 for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin, HIGH);

  delay(t1);

  digitalWrite(pin+1, LOW);

  delay(t1);

  }

  for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+1, HIGH);

  delay(t1);

  digitalWrite(pin+2, LOW);

  delay(t1);

  }

  for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+2, HIGH);

  delay(t1);

  digitalWrite(pin+3, LOW);

  delay(t1);

  }

  for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+3, HIGH);

  delay(t1);

  digitalWrite(pin+4, LOW);

  delay(t1);

  }

    for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+4, HIGH);

  delay(t1);

  digitalWrite(pin+5, LOW);

  delay(t1);

  }

  for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+5, HIGH);

  delay(t1);

  digitalWrite(pin+6, LOW);

  delay(t1);

  }

  for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+6, HIGH);

  delay(t1);

  digitalWrite(pin+7, LOW);

  delay(t1);

  }

   for(int pin = 13; pin >= 2; pin--)

  {

  digitalWrite(pin+7, HIGH);

  delay(t1);

  digitalWrite(pin+8, LOW);

  delay(t1);

  }

  for(int pin = 9; pin >= 2; pin--)

  {

  digitalWrite(pin+8, HIGH);

  delay(t1);

  digitalWrite(pin+9, LOW);

  delay(t1);

  }

    for(int pin = 9; pin >= 2; pin--)

  {

  digitalWrite(pin+9, HIGH);

  delay(t1);

  digitalWrite(pin+10, LOW);

  delay(t1);

  }

  for(int pin = 9; pin >= 2; pin--)

  {

  digitalWrite(pin+10, HIGH);

  delay(t1);

  digitalWrite(pin+11, LOW);

  delay(t1);

  }

  for(int pin = 14; pin >= 2; pin--)

  {

  digitalWrite(pin+11, HIGH);

  delay(t1);

  }

  for(int pin = 13; pin >= 2; pin--)

  {

    digitalWrite(pin, LOW);

  delay(t1);

    }

  }

void effect_6()

{

for(int j=2; j<14; j++){


  digitalWrite(j, LOW);

  delay(t);

  digitalWrite(j, HIGH);

  delay(t);

  digitalWrite(j-2, LOW);

  delay(t);

  digitalWrite(j, HIGH);

}

for(int k = 15; k>2; k--){

  digitalWrite(k, LOW);

  delay(t);

  digitalWrite(k, HIGH);

  delay(t);

  digitalWrite(k+2, LOW);

  delay(t);

  digitalWrite(k, HIGH);

}

for(int k = 2; k<14; k++){

  digitalWrite(k, LOW);

  delay(t);

  digitalWrite(k, HIGH);

  delay(t);

  digitalWrite(k-2, LOW);

  delay(t);

  digitalWrite(k, HIGH);

}

for(int k = 15; k>2; k--){

  digitalWrite(k, LOW);

  delay(t);

  digitalWrite(k, HIGH);

  delay(t);

  digitalWrite(k+4, LOW);

  delay(t);

  digitalWrite(k, HIGH);

}

for(int k = 2; k<14; k++){

  digitalWrite(k, LOW);

  delay(t);

  digitalWrite(k, HIGH);

  delay(t);

  digitalWrite(k-4, LOW);

  delay(t);

  digitalWrite(k, HIGH);

} 

}

void effect_7()

{

for(int j=2; j<14; j++){

  digitalWrite(j, HIGH);

  delay(t);

  digitalWrite(j+2, LOW);

  delay(t);

}

for(int k = 15; k>2; k--){

  digitalWrite(k, HIGH);

  delay(t);

  digitalWrite(k+2, LOW);

  delay(t);

}

}


// function to switch all LEDs off

void clear(void)

{

  for (int i = 2; i <= 13; i++) {

    digitalWrite(i, LOW);

  }

}