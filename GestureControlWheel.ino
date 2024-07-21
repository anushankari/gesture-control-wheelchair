// GESTURE CONTROL WHEEL CHAIR
Intx Pin=A0;	
Inty Pin=A1;		
Int out1=8; //output1 for HT12EIC	
Int out2=9;//output1	for HT12EIC	
Int out3=10;//output1 for HT12EIC	
Int out4=11;//output1for HT12EIC	
	
void	setup(){				
    pinMode(xPin,INPUT);		
    pinMode(yPin,INPUT);
	pinMode(out1,OUTPUT);			
    pinMode(out2,OUTPUT);			
    pinMode(out3,OUTPUT);			
    pinMode(out4,OUTPUT);	
}	
	
	
void	loop()		
{	
		Int xval=analogRead(xPin);	
		Int yval=analogRead(yPin);	
	
		if((xval>294&&xval<340)&&(yval>294&&yval<340))//stop	
		{	
		
            digitalWrite(out1,LOW);							
            digitalWrite(out2,LOW);								
            digitalWrite(out3,LOW);								
            digitalWrite(out4,LOW);	
		}		
	
		else		
		{		
			if((xval>340&&xval<380)&&(yval>294&&yval<340))//forward	
			{	
			    digitalWrite(out1,HIGH);										
                digitalWrite(out2,LOW);										
                digitalWrite(out3,HIGH);										
                digitalWrite(out4,LOW);	
			}					
        }	
		if((xval>345&&xval<294)&&(yval>294&&yval<340)) //backward	
			{	
		        digitalWrite(out1,LOW);										
                digitalWrite(out2,HIGH);						
                digitalWrite(out3,LOW);				
		        digitalWrite(out4,HIGH);	
							
			}				
	
		if((xval>294&&xval<340)&&(yval>340&&yval<380))//left	
			{	
		        digitalWrite(out1,HIGH);										
                digitalWrite(out2,LOW);										
                digitalWrite(out3,LOW);				
		        digitalWrite(out4,LOW);	
			}	
	
	
		if((xval>294&&xval<340)&&(yval>340&&yval<294))//right	
			{	
		        digitalWrite(out1,LOW);										
                digitalWrite(out2,LOW);										
                digitalWrite(out3,HIGH);				
			    digitalWrite(out4,LOW);	
							
			}	
}	


