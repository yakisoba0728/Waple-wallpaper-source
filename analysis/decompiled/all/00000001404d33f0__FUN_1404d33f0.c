// Function: FUN_1404d33f0
// Addr: 1404d33f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d33f0(longlong param_1,int *param_2)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar1;
  int unaff_EBX;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + unaff_EBX;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)pcVar1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

