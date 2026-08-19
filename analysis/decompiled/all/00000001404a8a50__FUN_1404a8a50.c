// Function: FUN_1404a8a50
// Addr: 1404a8a50
// Size: 1 bytes


void FUN_1404a8a50(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char cVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + cVar2;
  *(char *)(param_2 + unaff_RBX) = *(char *)(param_2 + unaff_RBX) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,
                             CONCAT11(in_AH + in_AL,in_AL + CARRY1(in_AH,in_AL))) + -0x33fff431);
  *pcVar1 = *pcVar1 + in_AH + in_AL;
  return;
}

