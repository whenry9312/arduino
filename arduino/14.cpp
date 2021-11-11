
#define a 38
#define b 39
#define c 40
#define d 41
#define e 42
#define f 43
#define g 44
#define com1 46
#define com2 47
#define com3 48
#define com4 49
#define DT 300

void setup() {
  int i; 
  for(i=a; i<=g; i++)
  {
    pinMode(i,OUTPUT);
    digitalWrite(i, 1);
  }
  pinMode(com1,OUTPUT);digitalWrite(com1,1);
  pinMode(com2,OUTPUT);digitalWrite(com2,1);
  pinMode(com3,OUTPUT);
  pinMode(com4,OUTPUT);
}

void loop() {
int i;
  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
     digitalWrite(a, 0); digitalWrite(f, 0); digitalWrite(b, 0);digitalWrite(g, 1); digitalWrite(e, 0); digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
    // 再亮個位數的0
    digitalWrite(com3, 1); digitalWrite(com4,0);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1); digitalWrite(e, 0); digitalWrite(c, 0);digitalWrite(d, 0);  
    delay(5);
  }

  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
                        digitalWrite(a, 0);
     digitalWrite(f, 0);                    digitalWrite(b, 0);
                        digitalWrite(g, 1);
     digitalWrite(e, 0);                    digitalWrite(c, 0);
                        digitalWrite(d, 0);
delay(5);
   
    // 再亮個位數的1
  digitalWrite(com3, 1); digitalWrite(com4,0);
//1  
                        digitalWrite(a, 1);
     digitalWrite(f, 1);                    digitalWrite(b, 0);
                        digitalWrite(g, 1);
     digitalWrite(e, 1);                    digitalWrite(c, 0);
                        digitalWrite(d, 1);
delay(5);
    
  }
 
  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的2
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 1);digitalWrite(b, 0);digitalWrite(g, 0); digitalWrite(e, 0);digitalWrite(c, 1);digitalWrite(d, 0);
    delay(5);
  }

  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的3
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 1);digitalWrite(b, 0);digitalWrite(g, 0); digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 0);
    delay(5);
  }

  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的4
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 1); digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 0); digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 1);
    delay(5);
  }

    for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的5
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 0);digitalWrite(b, 1);digitalWrite(g, 0); digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 0);
    delay(5);
  }

  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的6
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 0);digitalWrite(b, 1);digitalWrite(g, 0); digitalWrite(e, 0);digitalWrite(c, 0);digitalWrite(d, 0);
    delay(5);
  }

  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的7
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 1);digitalWrite(b, 0);digitalWrite(g, 1); digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 1);
    delay(5);
  }


  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的8
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 0); digitalWrite(e, 0);digitalWrite(c, 0);digitalWrite(d, 0);
    delay(5);
  }

  for( i=1; i<=50; i++)
  {
    // 我要先亮十位數的0
    digitalWrite(com3, 0); digitalWrite(com4,1);
//0  
    digitalWrite(a, 0);digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 1);digitalWrite(e, 0);  digitalWrite(c, 0);digitalWrite(d, 0);
   delay(5);
 // 再亮個位數的9
   digitalWrite(com3, 1); digitalWrite(com4,0);
// 2  
    digitalWrite(a, 0); digitalWrite(f, 0);digitalWrite(b, 0);digitalWrite(g, 0); digitalWrite(e, 1);digitalWrite(c, 0);digitalWrite(d, 0);
    delay(5);
  }

      
}
