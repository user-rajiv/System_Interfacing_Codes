
// Arduino code used for electromagnet interfacing


int Electromagnet = 5;    //this line defines the digital port used for interfacing electromagnet in this case it is port 5


void setup()  

{        
  
pinMode(Electromagnet, OUTPUT);  //this line is used to set electromagnet as an output

}


 void loop()
                     
{

  digitalWrite(Electromagnet, HIGH); // This line turn on the electromagnet for the defined time duration
  delay(300); // This line define the time duration for which the electromagnet is turn-on in this case five minutes

  digitalWrite(Electromagnet, LOW);  // This line defines that the electromagnet is turned off 
  delay(300);  //This line define the time duration for which the electromagnet is turned-off  in this case five minutes   
 
}