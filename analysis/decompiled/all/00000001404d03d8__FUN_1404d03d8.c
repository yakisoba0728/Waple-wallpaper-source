// Function: FUN_1404d03d8
// Addr: 1404d03d8
// Size: 1 bytes


void FUN_1404d03d8(undefined8 param_1,char param_2)

{
  code *pcVar1;
  char unaff_DIL;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)(param_1,param_2 + unaff_DIL);
  return;
}

