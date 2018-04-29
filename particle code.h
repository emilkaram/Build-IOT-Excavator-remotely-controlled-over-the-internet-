particle photon arduino code
/*
* created by Emil Ibrahim
* Control MiniGolf ROBOT with Smartphone via bluetooth
*/

void setup() {


 //move FWD function
    Particle.function("MovFwd",MovFwd);

//stop fuction for all motors
 Particle.function("StopAll",StopAll);

//move back fuction    
    Particle.function("MovBk",MovBk);

//move fwd right and left functions    
    Particle.function("MovFwdR",MovFwdR);
    Particle.function("MovFwdL",MovFwdL);
    
//move fwd sharp turn left and right functions    
    Particle.function("MovFwdSR",MovFwdSR);
    Particle.function("MovFwdSL",MovFwdSL);
    

//pivt right and left  function   
    Particle.function("PivtR",PivtR);
    Particle.function("PivtL",PivtL);
    
//basearm push and pull function
    Particle.function("BaseArmPull",BaseArmPull);
    Particle.function("BaseArmPush",BaseArmPush);
    
//middle arm push and pull function
   Particle.function("MidArmPull",MidArmPull);
   Particle.function("MidArmPush",MidArmPush);
                       

//last arm push and pull function
    Particle.function("LastArmPull",LastArmPull);
    Particle.function("LastArmPull",LastArmPull);
    
    
    pinMode(D0,OUTPUT);
    pinMode(D1,OUTPUT);
    pinMode(D2,OUTPUT);
    pinMode(D3,OUTPUT);
    pinMode(D4,OUTPUT);
    pinMode(D5,OUTPUT);
    pinMode(D6,OUTPUT);
    pinMode(D7,OUTPUT);
    
    pinMode(A0,OUTPUT);
    pinMode(A1,OUTPUT);
    pinMode(A2,OUTPUT);
    pinMode(A3,OUTPUT);
 

}



void loop() {

}



// Move fwd command
int MovFwd (String command)
{
  digitalWrite(D7,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D5,HIGH);
  digitalWrite(D4,LOW);
    
}


//Stop all motors command
int StopAll (String command)
{
 
  digitalWrite(D0,LOW);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
 
  digitalWrite(A0,LOW);
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,LOW);
 
 }

// Move Back command
int MovBk (String command)
{
  digitalWrite (D7,LOW);
  digitalWrite(D6,HIGH);
  digitalWrite(D5,LOW);
  digitalWrite(D4,HIGH);
}

// Move fwd right command
int MovFwdR (String command)
{
  digitalWrite (D7,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D5,LOW);
  digitalWrite(D4,LOW);
    
}

// Move fwd left command
int MovFwdL (String command)
{
  digitalWrite (D7,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D5,HIGH);
  digitalWrite(D4,LOW);
    
}


// Move fwd shap right command
int MovFwdSR (String command)
{
  digitalWrite (D7,HIGH);
  digitalWrite(D6,LOW);
  digitalWrite(D4,LOW);
  digitalWrite(D4,HIGH);
    
}

// Move fwd command
int MovFwdSL (String command)
{
  digitalWrite(D7,LOW);
  digitalWrite(D6,HIGH);
  digitalWrite(D5,HIGH);
  digitalWrite(D4,LOW);
    
}


// Pivt R command
int PivtR (String command)
{
  digitalWrite(D2,LOW);
  digitalWrite(D3,HIGH);
  
}

//pivit L command
int PivtL (String command)
{
   digitalWrite(D3,LOW);
  digitalWrite(D2,HIGH);
}


//base arm pull command
int BaseArmPull (String command)
{
   digitalWrite(D0,LOW);
  digitalWrite(D1,HIGH);
    
}

//base arm push command
int BaseArmPush (String command)
{
  digitalWrite(D1,LOW);
  digitalWrite(D0,HIGH);
    
}




//middel arm pull command
int MidArmPull (String command)
{
   digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
    
}

//middel arm push command
int MidArmPush (String command)
{
   digitalWrite(A1,LOW);
  digitalWrite(A0,HIGH);
    
}









//last arm pull command
int LastArmPull (String command)
{
   digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
    
}

//last arm push command
int LastArmPush (String command)
{
   digitalWrite(A3,LOW);
  digitalWrite(A2,HIGH);
    
}





