void setup() {
  // put your setup code here, to run once:
int i = 0 ; // Inicializamos la variable i como un entero
         for ( i = 9 ; i < 12 ; i++)
               pinMode( i , OUTPUT) ;
}

 void loop() {
  int vel = 1000;
              int i = 0 ; // Inicializamos la variable i como un entero
              for ( i = 9 ; i < 12 ; i++)
                    {
                       digitalWrite( i , HIGH) ;
                       delay (vel+700) ;
                       digitalWrite( i , LOW);
                       delay (vel) ;

                       vel=vel-200;
                    }
                  
          }
