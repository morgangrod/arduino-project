int i = 0; 
int led = 13; 

void setup() {
  Serial.begin(9600);    // hello
  pinMode(led, OUTPUT);  // nice here
}
void loop() {
  i = i + 1; 
  String stringOne = "Info from Arduino ";
  stringOne += i;  
  Serial.println(stringOne);  // arduino robot

  char incomingChar;


  bool ArduinoPortFound = false;

            try
            {
                string[] ports = SerialPort.GetPortNames();
                foreach (string port in ports)
                {
                    currentPort = new SerialPort(port, 9600);
                    if (ArduinoDetected())
                    {
                        ArduinoPortFound = true;
                        break;
                    }
                    else
                    {
                        ArduinoPortFound = false;
                    }
                }
            }
            catch { }
