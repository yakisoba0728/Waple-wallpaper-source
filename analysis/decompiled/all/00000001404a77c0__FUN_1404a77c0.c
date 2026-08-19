// Function: FUN_1404a77c0
// Addr: 1404a77c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a77c0(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RDI + unaff_ESI + (uint)in_CF;
  *param_1 = *param_1 + (in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pcVar1 = (char *)(param_2 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

