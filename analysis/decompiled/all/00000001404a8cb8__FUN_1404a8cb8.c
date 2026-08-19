// Function: FUN_1404a8cb8
// Addr: 1404a8cb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8cb8(uint param_1,uint *param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char *unaff_RBX;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  longlong unaff_RDI;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & param_1;
  *(byte *)(unaff_RDI + (longlong)param_2) =
       *(byte *)(unaff_RDI + (longlong)param_2) | (byte)((ulonglong)param_2 >> 8);
  *unaff_RBX = *unaff_RBX + -1;
  pcVar1 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + -0x23fff401);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(uint *)((longlong)param_2 + (ulonglong)*param_2) =
       *(uint *)((longlong)param_2 + (ulonglong)*param_2) & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

