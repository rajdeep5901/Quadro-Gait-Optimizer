#include <Servo.h>
int l1= 12; 
int l2= 11;
int l3= 10;
int l4= 9;

int k1= 6;
int k2= 5;
int k3= 4;
int k4= 3;

Servo leg[4];
Servo kne[4];

void setup() {
  // put your setup code here, to run once:
  leg[0].attach(l1);
  leg[1].attach(l2);
  leg[2].attach(l3);
  leg[3].attach(l4);
  
  kne[0].attach(k1);
  kne[1].attach(k2);
  kne[2].attach(k3);
  kne[3].attach(k4);
  
  leg[0].write(70);
  leg[1].write(90);
  leg[2].write(0);
  leg[3].write(180);/*
  // knee move 1 3 inside
  // knee move 2 4 out
  kne[0].write(90);
  kne[1].write(90);
  kne[2].write(90);
  kne[3].write(0);
  */
}
// l3 = 0 to 45
// 2 = 90 to 0
// 1 90 to 0
// 0  90 to 45
void loop() {
  // put your main code here, to run repeatedly:
 moveFor();
 moveFor();
 moveRig();
 movLef();
 movebck();
 moveBck();
 
  
}
void moveFor(){
  for(int i=0; i< 10; i++){
    movel1(1);
    movel2(1);
    movel3(1);
    movel4(1);
    
  }
}
void moveBck(){
  for(int i=0; i< 10; i++){
    movel1(0);
    movel2(0);
    movel3(0);
    movel4(0);
    
  }
}

void moveRig(){
  for(int i=0; i< 10; i++){
    movel1(0);
    movel2(0);
    movel3(1);
    movel4(1);
    
  }
}
void moveLef(){
  for(int i=0; i< 10; i++){
    movel1(1);
    movel2(1);
    movel3(0);
    movel4(0);
    
  }
}

void movel1(int ca){
    if(ca==1){
      leg[0].write(160);
      delay(1000);
      kne[0].write(45);
      delay(1000);
      leg[0].write(70);
      delay(1000);
      kne[0].write(90);
      delay(1000);
    }
    else{
      kne[0].write(45);
      delay(1000);
      leg[0].write(160);
      delay(1000);
      kne[0].write(90);
      delay(1000);
      leg[0].write(70);
      delay(1000);  
    }
}
void movel2(int ca){
    if(ca==1){
      leg[1].write(0);
      delay(500);
      kne[1].write(135);
      delay(500);
      leg[1].write(90);
      delay(500);
      kne[1].write(90);
      delay(1000);
    }
    else{
      kne[1].write(135);
      delay(500);
      leg[1].write(0);
      delay(1000);
      kne[1].write(90);
      delay(1000);
      leg[1].write(90);
      delay(1000);  
    }
}

// l1 mean 90 moving 90 to 180
// l2 mean 0 moving 0 to 90
// l3 mean 90 moving 90 to 0  
// l4 mean 70 moving 70 to 160

void movel3(int ca){
    if(ca==1){
      leg[2].write(90);
      delay(1000);
      kne[2].write(45);
      delay(1000);
      leg[2].write(0);
      delay(1000);
      kne[2].write(90);
      delay(1000);
    }
    else{
      kne[2].write(45);
      delay(1000);
      leg[0].write(90);
      delay(1000);
      kne[2].write(90);
      delay(1000);
      leg[0].write(0);
      delay(1000);  
    }
}
void movel4(int ca){
    if(ca==1){
      leg[3].write(90);
      delay(1000);
      kne[3].write(45);
      delay(1000);
      leg[3].write(180);
      delay(1000);
      kne[3].write(0);
      delay(1000);
    }
    else{
      kne[3].write(45);
      delay(1000);
      leg[3].write(90);
      delay(1000);
      kne[3].write(0);
      delay(1000);
      leg[3].write(180);
      delay(1000);  
    }
}