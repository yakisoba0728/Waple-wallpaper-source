// Function: FUN_1404bc3e4
// Addr: 1404bc3e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc3e4(char param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  int unaff_ESI;
  byte in_CF;
  
  iVar2 = *(int *)CONCAT44(unaff_00000024,unaff_ESP);
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *param_2 = *param_2 + unaff_ESP;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   (ulonglong)(unaff_ESI + iVar2 + (uint)in_CF) * 2);
  *pcVar1 = *pcVar1 + param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(uint *)((longlong)param_2 + 0x12) = *(uint *)((longlong)param_2 + 0x12) & unaff_ESP;
  *(char *)(param_2 + -2) = (char)param_2[-2] + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

