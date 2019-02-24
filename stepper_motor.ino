/*stepper motor actuation using drv8255 motor driver*/

int steps=5;                                  //setting up step pin of drv8255
int dir =2;                                   //setting up dir pin of drv8255
int stepTime=01;                              //used to change the occurence of step, less the step time more the speed

int button_1=3;                               //connecting push button
int button_2=4;





void setup() 
{
  Serial.begin(9600);
  pinMode(steps, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(button_1,INPUT);
  pinMode(button_2,INPUT);
 
  
}
  

void loop()
{
  /*if 1st button is pressed move in one direction*/
    if(digitalRead(button_1))                                  
    {
      digitalWrite(dir,HIGH);
      digitalWrite(steps, HIGH);   
      delay(stepTime);                      
      digitalWrite(steps, LOW);    
      delay(stepTime); 
      
    } 
    /*if second button is pressed move in other direction*/
    else if(digitalRead(button_2))
    {
      digitalWrite(dir,LOW);
      digitalWrite(steps, HIGH);   
      delay(stepTime);                      
      digitalWrite(steps, LOW);    
      delay(stepTime); 
      
    }
    /*if no button is pressed - then stop*/
    else
    {                     
      digitalWrite(steps, LOW); 
      digitalWrite(dir,LOW);
 
    }

}






