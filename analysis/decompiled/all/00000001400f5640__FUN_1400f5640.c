// Function: FUN_1400f5640
// Addr: 1400f5640
// Size: 49 bytes


void FUN_1400f5640(undefined8 param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = "struct PS_OUTPUT\n{\nfloat4 gl_FragColor : SV_TARGET;\n};\n";
  if (param_2 == '\0') {
    pcVar1 = "struct PS_OUTPUT {};\n";
  }
  uVar2 = 0x37;
  if (param_2 == '\0') {
    uVar2 = 0x15;
  }
  FUN_1400532a0(param_3,pcVar1,uVar2);
  return;
}

