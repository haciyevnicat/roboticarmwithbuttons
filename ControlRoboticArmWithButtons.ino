#include <Servo.h>
Servo tutqac;
Servo dirsek;
Servo ciyin;
Servo govde;

int dirsekdeyeri=90;
int ciyindeyeri=130;
int tutqaciac=12;
int tutqacibagla=120;
int govdedeyeri=80;

void setup() {
  pinMode(2,INPUT); //dirsekyuxari
  pinMode(3,INPUT); //dirsekasagi
  pinMode(4,INPUT); //tutqac acil
  pinMode(5,INPUT); //tutqac bagla
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);

  tutqac.attach(6);
  dirsek.attach(9);
  ciyin.attach(10);
  govde.attach(11);
  Serial.begin(9600);

  tutqac.write(tutqaciac);
  dirsek.write(dirsekdeyeri);
  ciyin.write(ciyindeyeri);
  govde.write(govdedeyeri);

}

void loop() {
  //tutqac.write(120); //bagla
  //delay(1000);
  //tutqac.write(12); //ac
  //delay(1000);

  
  while(1){
    tutqac.write(tutqaciac);
    
    dirsek.write(70);
    delay(500);
    ciyin.write(180);
    govde.write(110);

    delay(2000);

    tutqac.write(tutqacibagla);
    delay(500);
    ciyin.write(130);
    delay(500);
    dirsek.write(130);
    govde.write(110);

    delay(2000);

    govde.write(80);

    delay(2000);

    dirsek.write(70);
    delay(500);
    ciyin.write(180);
    delay(1000);
    tutqac.write(tutqaciac);
    delay(2000);
    ciyin.write(130);
    
  }
  /*
  if(digitalRead(2)==1){ //dirsek qaldir
    dirsekdeyeri = dirsekdeyeri+10;
    dirsek.write(dirsekdeyeri);
    Serial.print("dirsek: ");
    Serial.println(dirsekdeyeri);
    delay(200);
  }
  if(digitalRead(3)==1){ //dirsek sal
    dirsekdeyeri = dirsekdeyeri-10;
    dirsek.write(dirsekdeyeri);
    Serial.print("dirsek: ");
    Serial.println(dirsekdeyeri);
    delay(200);
  }
  if(digitalRead(4)==1){ //tutqac ac
    tutqacdeyeri = 0;
    tutqac.write(dirsekdeyeri);
    Serial.print("tutqac: ");
    Serial.println(tutqacdeyeri);
    delay(200);
  }
  if(digitalRead(5)==1){ //tutqac bagla
    tutqacdeyeri = 10;
    tutqac.write(tutqacdeyeri);
    Serial.print("tutqac: ");
    Serial.println(tutqacdeyeri);
    delay(200);
  }
  if(digitalRead(7)==1){ //ciyin yuxari
    ciyindeyeri = ciyindeyeri+10;
    ciyin.write(ciyindeyeri);
    Serial.print("ciyin: ");
    Serial.println(ciyindeyeri);
    delay(200);
  }
  if(digitalRead(8)==1){ //ciyin asagi
    ciyindeyeri = ciyindeyeri-10;
    ciyin.write(ciyindeyeri);
    Serial.print("ciyin: ");
    Serial.println(ciyindeyeri);
    delay(200);
  }
  if(digitalRead(12)==1){ //govde sola
    govdedeyeri = govdedeyeri+10;
    govde.write(govdedeyeri);
    Serial.print("govde: ");
    Serial.println(govdedeyeri);
    delay(200);
  }
  if(digitalRead(13)==1){ //govde saga
    govdedeyeri = govdedeyeri-10;
    govde.write(govdedeyeri);
    Serial.print("govde: ");
    Serial.println(govdedeyeri);
    delay(200);
  } */
}
