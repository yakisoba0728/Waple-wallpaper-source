// Function: FUN_1404bac00
// Addr: 1404bac00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bac00(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  short in_AX;
  uint uVar1;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = (char)in_AX;
  *param_4 = *param_4 + unaff_SPL;
  uVar1 = (int)in_AX + 0x505d002;
  *(char *)(unaff_RBX + 1) = *(char *)(unaff_RBX + 1) + (char)((ulonglong)param_1 >> 8);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

