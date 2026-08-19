// Function: FUN_1400f53b0
// Addr: 1400f53b0
// Size: 86 bytes


void FUN_1400f53b0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  
  pcVar1 = "struct PS_INPUT\n{\n";
  if (param_3 != 2) {
    pcVar1 = "struct VS_OUTPUT\n{\n";
  }
  func_0x000140053370(param_4,pcVar1,(param_3 != 2) + '\x12');
  return;
}

