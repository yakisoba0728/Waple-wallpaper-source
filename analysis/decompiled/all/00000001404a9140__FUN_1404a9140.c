// Function: FUN_1404a9140
// Addr: 1404a9140
// Size: 1 bytes


undefined1 FUN_1404a9140(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(char *)(param_2 + unaff_RDI) = *(char *)(param_2 + unaff_RDI) + in_AH;
  *(char *)(unaff_RBX + unaff_RDI) =
       *(char *)(unaff_RBX + unaff_RDI) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x57);
  *pcVar1 = *pcVar1 + in_AH;
  return in_AL;
}

