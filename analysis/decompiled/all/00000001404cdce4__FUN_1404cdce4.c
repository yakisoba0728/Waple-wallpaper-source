// Function: FUN_1404cdce4
// Addr: 1404cdce4
// Size: 1 bytes


void FUN_1404cdce4(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(char *)(param_2 + 0x4a) = *(char *)(param_2 + 0x4a) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x7bffc13e);
  *pcVar1 = *pcVar1 + in_AL;
  return;
}

