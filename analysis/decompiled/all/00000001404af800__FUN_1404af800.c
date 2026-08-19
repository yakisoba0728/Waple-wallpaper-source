// Function: FUN_1404af800
// Addr: 1404af800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af800(undefined8 param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  int unaff_ESI;
  longlong unaff_RDI;
  byte in_CF;
  
  iVar2 = *(int *)(unaff_RDI + CONCAT44(unaff_0000001c,unaff_EBX));
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_EBX;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   (ulonglong)((unaff_ESI - iVar2) - (uint)in_CF) * 8);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

