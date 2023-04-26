
  // Stephanie add code below 
/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/
int C4 = 262;
int D4 = 294;
int Eb4 = 311;
int E4 = 330;
int F4 = 349;
int G4 = 392;
int A4 = 440;
int Bb4 = 466;
int B4 = 494;

int tempo = 100;
int dotquarter = (tempo*15);
int quarter = (tempo*10);
int sixteenth = (tempo*2.5);
int dothalf = (tempo*30);
int half = (tempo*20);
int eighth = (tempo*5);
int whole = (tempo*40);

 

  // Lyna add code below
void setup() 
{ 
for (int i = 0; i < 3; i++){
    // Measure 1, 2 seconds
  // put your setup code here, to run once:
  // Bb4
  tone(output, Bb4);   // tone(outputPin,frequency)
      delay(sixteenth);  //  delay(milliseconds)  
  // C4
  tone(output, C4);
      delay(quarter);
  // C4       
  tone(output, C4);
      delay(quarter);
  // C4
 tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
 tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);    
      delay(eighth); 
      // A4
  tone(output, A4);    
      delay(quarter); 
      // A4
  tone(output, A4);    
      delay(quarter); 
      // A4
  tone(output, A4);    
      delay(eighth);  
            // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);    
      delay(eighth);     
      // C4
  tone(output, C4);    
      delay(eighth);   
      // D4
  tone(output, D4);
      delay(eighth);
    noTone(output);
      delay(100); 
     // A4
  tone(output, A4);    
      delay(eighth); 
     // C4
  tone(output, C4);
      delay(quarter);
      // C4       
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);    
      delay(eighth); 
      // A4
  tone(output, A4);    
      delay(quarter); 
      // A4
  tone(output, A4);    
      delay(quarter); 
      // A4
  tone(output, A4);    
      delay(eighth);  
            // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);    
      delay(eighth);     
      // C4
  tone(output, C4);    
      delay(eighth);   
           // D4
  tone(output, D4);    
      delay(eighth); 
    noTone(output);
      delay(100);
          // D4
  tone(output, D4);    
      delay(eighth); 
          // A4
  tone(output, A4);    
      delay(eighth);
      // G4
  tone(output, G4);
      delay(quarter);
      // F4
  tone(output, F4);
      delay(quarter);
     // E4
  tone(output, E4);
      delay(quarter);
      // D4
  tone(output, D4);
      delay(quarter);
      //A4
  tone(output, A4);
      delay(quarter);
      // A4
  tone(output, A4);
      delay(quarter);  
      // C4
  tone(output, C4);
      delay(quarter);
      // G4
  tone(output, G4);
      delay(quarter);
     // F4
  tone(output, F4);
      delay(quarter);
      // E4
  tone(output, E4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(half);
    noTone(output);
      delay(100);
      // A4
  tone(output, A4);
      delay(eighth);
      // G4
  tone(output, G4);
      delay(quarter);
      // F4
  tone(output, F4);
      delay(quarter);
      // E4
  tone(output, E4);
      delay(quarter);
      // D4
  tone(output, D4);
      delay(quarter);
      // A4
  tone(output, A4);
      delay(quarter);
      // A4
  tone(output, A4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // G4
  tone(output, G4);
      delay(quarter);
      // F4
  tone(output, F4);
      delay(quarter);
      // E4
  tone(output, E4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(quarter);
      // C4
  tone(output, C4);
      delay(half);      
       }

  // Tristan add code below
 // C4
    tone(output, C4);    // tone(outputPin,frequency)
      delay(quarter);  //  delay(milliseconds) 
    noTone(output);
      delay(100);
    // C4
    tone(output, C4);   
      delay(quarter);   
    // C4
    tone(output, C4);    
      delay(quarter);  
    // C4
    tone(output, C4);    
      delay(quarter);  
    // C4
    tone(output, C4);    
      delay(quarter);   
    // C4
    tone(output, C4);    
      delay(dotquarter); 
    // A4 
    tone(output, A4);  
      delay(quarter); 
    // A4
    tone(output, A4);    
      delay(eighth); 
    // C4
    tone(output, C4);    
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(quarter); 
          // C4
    tone(output, C4);   
      delay(eighth);   
    // D4
    tone(output, D4);    
      delay(eighth);  
    // C4
    tone(output, C4);    
      delay(dotquarter);  
    // A4
    tone(output, A4);    
      delay(eighth);   
    // C4
    tone(output, C4);    
      delay(quarter); 
    // C4 
    tone(output, C4);  
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(quarter); 
    // A4
    tone(output, A4);    
      delay(quarter); 
    // A4
    tone(output, A4);    
      delay(quarter); 
    // Bb4
    tone(output, Bb4);    
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(eigth);
    // C4
    tone(output, C4);    
      delay(eigth); 
    // D4
    tone(output, D4);    
      delay(eigth); 
    // C4
    tone(output, C4);    
      delay(dotquarter); 
    // D4
    tone(output, D4);    
      delay(eighth); 
    // A4
    tone(output, A4);    
      delay(eighth); 
    // G4
    tone(output, G4);    
      delay(quarter); 
    // F4
    tone(output, F4);    
      delay(quarter);
    // E4
    tone(output, E4);    
      delay(quarter);
    // A4
    tone(output, A4);    
      delay(quarter); 
    // A4
    tone(output, A4);    
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(quarter); 
    // G4
    tone(output, G4);    
      delay(quarter); 
    // F4
    tone(output, F4);    
      delay(quarter); 
    // E4
    tone(output, E4);    
      delay(quarter); 
    // C4
    tone(output, C4);    
      delay(quarter);       
      // C4
    tone(output, C4);    
      delay(half);
    // A4
    tone(output, A4);    
      delay(eighth); 
    // G4
    tone(output, G4);    
      delay(quarter); 
    // F4
    tone(output, F4);    
      delay(quarter); 
    // E4
    tone(output, E4);    
      delay(quarter); 
    // D4
    tone(output, D4);    
      delay(quarter); 
    // A4
    tone(output, A4);    
      delay(quarter); 
    // A4
    tone(output, A4);    
      delay(quarter);
  // Galilea add code below


  // Stephanie add code below
tone(output,E4);
delay(half);
noTone(output);

tone(output,E4);
delay(half);
noTone(output);

tone(output,E4);
delay(half);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,F4);
delay(half);
noTone(output);

tone(output,F4);
delay(half);
noTone(output);

tone(output,F4);
delay(half);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(half);
noTone(output);

tone(output,E4);
delay(half);
noTone(output);

tone(output,E4);
delay(half);
noTone(output);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);

tone(output,Z4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,D4);
delay(whole);
noTone(output);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);

tone(output,Z4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,D4);
delay(quarter);
noTone(output);

tone(output,C4);
delay(whole);
noTone(output);

tone(output,C4);
delay(quarter);
noTone(output);

tone(output,C4);
delay(eighth);
noTone(output);

tone(output,D4);
delay(eighth);
noTone(output);

tone(output,C4);
delay(half);
noTone(output);
delay(half);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);

tone(output,Z4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,D4);
delay(whole);
noTone(output);
delay(whole);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);

tone(output,Z4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,D4);
delay(quarter);
noTone(output);

tone(output,C4);
delay(half);
noTone(output);

tone(output,C4);
delay(quarter);
noTone(output);

tone(output,C4);
delay(eighth);
noTone(output);

tone(output,D4);
delay(eighth);
noTone(output);

tone(output,C4);
delay(half);
noTone(output);
delay(half);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);

tone(output,Z4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,D4);
delay(whole);
noTone(output);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);

tone(output,Z4);
delay(quarter);
noTone(output);

tone(output,G4);
delay(quarter);
noTone(output);

tone(output,F4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,E4);
delay(quarter);
noTone(output);

tone(output,D4);
delay(whole);
noTone(output);

tone(output,F4);
delay(eighth);
noTone(output);

tone(output,G4);
delay(eighth);
noTone(output);
  // Jesse add code below
    tone(output, A4);
     delay(quarter);
    tone(output, A4);
     delay(quarter);   
      // C4
    tone(output, C4);   
      delay(quarter);       
    // C4
    tone(output, C4);    
      delay(eighth);  
    // D4
    tone(output, D4);    
      delay(eighth);  
    // C4
    tone(output, C4);    
      delay(half);   
    noTone(output);
      delay(100);
    // A4
    tone(output, A4);    
      delay(quarter);
      tone(output, A4);    
      delay(quarter); 
    // C4 
    tone(output, C4);  
      delay(quarter); 
    // E4
    tone(output, E4);    
      delay(quarter); 
    // D4
    tone(output, D4);    
      delay(half); 
      noTone(output);
      delay(100);
    // A4
    tone(output, A4);    
      delay(quarter);
      tone(output, A4);    
      delay(quarter);
    // C4
    tone(output, C4);   
      delay(quarter);       
    // C4
    tone(output, C4);    
      delay(eighth);  
    // D4
    tone(output, D4);    
      delay(eighth);  
    // C4
    tone(output, C4);    
      delay(whole);    
    // F4
    tone(output, F4);    
      delay(quarter); 
    // G4
    tone(output, G4);
      delay(quarter);
    // A4
    tone(output, A4);
    delay(quarter);
    // E4
     tone(output, E4);    
    delay(quarter); 
    tone(output, E4);    
    delay(quarter); 
    // D4 new push needed
    tone(output, D4);
    delay(quarter);
    // C4 
    tone(output, C4);
    delay(quarter);
    // A4 
    tone(output, A4);
    delay(half)    
    // A4 
    tone(output, A4);
     delay(quarter);
    tone(output, A4);
     delay(quarter); 
    // C4
    tone(output, C4);   
      delay(quarter);       
    // C4
    tone(output, C4);    
      delay(eighth);  
    // D4
    tone(output, D4);    
      delay(eighth);  
    // C4
     tone(output, C4);    
     delay(half);
     notone(output);
     delay(100);  
    // A4
    tone(output, A4);    
      delay(quarter);
      tone(output, A4);    
      delay(quarter); 
    // C4 
    tone(output, C4);  
      delay(quarter); 
    // E4
    tone(output, E4);    
      delay(quarter); 
    // D4
    tone(output, D4);    
      delay(half); 
      noTone(output);
      delay(100);
    // A4
    tone(output, A4);    
      delay(quarter);
      tone(output, A4);    
      delay(quarter);
    // C4
    tone(output, C4);   
      delay(quarter);       
    // C4
    tone(output, C4);    
      delay(eighth);  
    // D4
    tone(output, D4);    
      delay(eighth);  
    // C4
    tone(output, C4);    
      delay(whole);    
    // F4
    tone(output, F4);    
      delay(quarter); 
    // G4
    tone(output, G4);
      delay(quarter);
    // A4
    tone(output, A4);
    delay(quarter);
    // E4
     tone(output, E4);    
    delay(quarter); 
    tone(output, E4);    
    delay(quarter); 
    // D4
    tone(output, D4);
    delay(quarter);
    // C4 
    tone(output, C4);
    delay(quarter);
  // last push
  // F4
   tone(output, F4);
   delay(quarter);
  // E4 
   tone(output, F4);
   delay(quarter);
  // F4
   tone(output, F4);
   delay(half);
   tone(output, F4);
   delay(half);
   tone(output, F4);
   delay(half);
  // F4
   tone(output, F4);
   delay(quarter);
  // G4 
   tone(output, G4);
   delay(quarter);
  // E4
   tone(output, E4);
   delay(qourter half);
   tone(output, E4);
   delay(quarter half);   
   tone(output, E4);
   delay(quarter half);
  // F4
   tone(output, F4);
   delay(quarter);
  // E4 
   tone(output, E4);
   delay(quarter);
  // F4
   tone(output, F4);
   delay(half);   
   tone(output, F4);
   delay(half);
   tone(output, F4);
   delay(half);
  // F4 
   tone(output, F4);
   delay(quarter);
  // G4
   tone(output, G4);
   delay(quarter);
  // E4
   tone(output, E4);
   delay(quarter half);
   tone(output, E4);
   delay(quarter half);   
   tone(output, E4);
   delay(quarter half);
  // F4
   tone(output, F4);
   delay(quarter);
  // E4 
   tone(output, E4);
   delay(quarter);
  // F4
   tone(output, F4);
   delay(half);   
   tone(output, F4);
   delay(half);
   tone(output, F4);
   delay(half);
  // F4 
   tone(output, F4);
   delay(quarter);
  // G4
   tone(output, G4);
   delay(quarter);
  // E4
   tone(output, E4);
   delay(quarter half);
   tone(output, E4);
   delay(quarter half);   
   tone(output, E4);
   delay(quarter half);
  // F4
   tone(output, F4);
   delay(quarter);
  // E4 
   tone(output, E4);
   delay(quarter);
  // F4
   tone(output, F4);
   delay(half);   
   tone(output, F4);
   delay(half);
   tone(output, F4);
   delay(half);
  // F4 
   tone(output, F4);
   delay(quarter);
  // G4
   tone(output, G4);
   delay(quarter);
  // E4 
   tone(output, E4);
   delay(quarter half);
   tone(output, E4);
   delay(quarter half);
  //E4
   tone(output, E4);
   delay(quarter);

}
