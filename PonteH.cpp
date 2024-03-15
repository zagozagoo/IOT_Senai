int IN1 = 8;
int IN2 = 9;
int IN3 = 11;
int IN4 = 10;
int ENA = 6; // Motor A
int ENB = 5; // Motor B
char letra;  // letra que sera lida pelo envio no terminal serial
// para ser utilizado no case 'F':

void setup()
{
    Serial.begin(9600);   // Inicializa a serial com velocidade de comunicação de 9600.
    pinMode(IN1, OUTPUT); // Configura IN1 porta/pino 8 como saida
    pinMode(IN2, OUTPUT); // Configura IN2 porta/pino 9 como saida
    pinMode(IN3, OUTPUT); // Configura IN3 porta/pino 11 como saida
    pinMode(IN4, OUTPUT); // Configura IN4 porta/pino 10 como saida
}

void loop()
{
    if (Serial.available() > 0)
    {                          // verifica se alguma mensagem foi enviada no monitor serial
        letra = Serial.read(); // armazena o valor enviado no monitor serial na variavel letra, para ser utilizada na estrutura de seleçao e verificaçao switch case, para tomar a decisado para que lado o motor ira girar

        switch (letra)
        { // captura a letra digitada no painel serial e faz a comparaçao para ver em que caso ira entrar

        case 'T':
            analogWrite(ENA, 255); // coloca o motor A para girar em velocidade maxima
            analogWrite(ENB, 255); // coloca o motor B para girar em velocidade maxima
                                   // Gira o Motor A no sentido horário
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            // Gira o Motor B no sentido horário
            digitalWrite(IN3, HIGH);
            digitalWrite(IN4, LOW);
            Serial.println("Motor Sentido Anti-Horario Tras");

            break;
        case 'F':
            analogWrite(ENA, 255); // coloca o motor A para girar em velocidade maxima
            analogWrite(ENB, 255); // coloca o motor B para girar em velocidade maxima
                                   // Gira o Motor A no sentido anti-horário
            digitalWrite(IN1, LOW);
            digitalWrite(IN2, HIGH);
            // Gira o Motor B no sentido anti-horário
            digitalWrite(IN3, LOW);
            digitalWrite(IN4, HIGH);
            Serial.println("Motor Sentido Horario Frente");
            break;
        case 'E':
            analogWrite(ENA, 255); // coloca o motor A para girar em velocidade maxima
            analogWrite(ENB, 255); // coloca o motor B para girar em velocidade maxima
                                   // Gira o Motor A no sentido horário
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
            // Gira o Motor B no sentido horário
            digitalWrite(IN3, LOW);
            digitalWrite(IN4, LOW);
            Serial.println("Virar a Esquerda");
            break;
        case 'D':
            analogWrite(ENA, 255); // coloca o motor A para girar em velocidade maxima
            analogWrite(ENB, 255); // coloca o motor B para girar em velocidade maxima
                                   // Gira o Motor A no sentido horário
            digitalWrite(IN1, LOW);
            digitalWrite(IN2, LOW);
            // Gira o Motor B no sentido horário
            digitalWrite(IN3, LOW);
            digitalWrite(IN4, HIGH);
            Serial.println("Virar a Direita");
            break;
        }
    }
}
