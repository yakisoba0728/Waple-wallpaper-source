// Function: FUN_1404c0368
// Addr: 1404c0368
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0368(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_2;
  pcVar1 = (char *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff28) +
                   0x24);
  *pcVar1 = *pcVar1 + (char)param_1;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff28) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffff28) -
       (in_AL & 0x28);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

