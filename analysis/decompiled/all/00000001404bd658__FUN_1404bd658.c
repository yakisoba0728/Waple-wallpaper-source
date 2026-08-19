// Function: FUN_1404bd658
// Addr: 1404bd658
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd658(char param_1,int param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  int *piVar2;
  uint *unaff_RDI;
  byte in_CF;
  
  piVar2 = (int *)(ulonglong)
                  (unaff_ESI + *(int *)(unaff_RBX + CONCAT71(in_register_00000001,in_AL)) +
                  (uint)in_CF);
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *piVar2 = *piVar2 + param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + (longlong)piVar2 * 2);
  *pcVar1 = *pcVar1 + param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = *unaff_RDI & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

