// Function: FUN_1404a77b0
// Addr: 1404a77b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a77b0(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  undefined4 unaff_00000034;
  int *unaff_RDI;
  byte in_CF;
  
  *unaff_RDI = *unaff_RDI + unaff_ESI + (uint)in_CF;
  bVar2 = in_AL | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  bVar2 = bVar2 + in_AH | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2 + in_AH));
  *unaff_RDI = *unaff_RDI + unaff_ESI;
  *param_1 = *param_1 + (bVar2 | *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)));
  pcVar1 = (char *)(param_2 + CONCAT44(unaff_00000034,unaff_ESI) * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

