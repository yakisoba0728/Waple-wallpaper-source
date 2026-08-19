// Function: FUN_1404a3608
// Addr: 1404a3608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3608(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int *in_RAX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  
  piVar1 = (int *)(CONCAT44(unaff_00000034,unaff_ESI) + param_1);
  *piVar1 = *piVar1 + unaff_ESI;
  pcVar2 = (char *)((longlong)in_RAX + unaff_RDI * 2);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  uVar3 = (int)in_RAX - *in_RAX;
  piVar1 = (int *)((ulonglong)uVar3 + 0x2c);
  *piVar1 = *piVar1 - unaff_EBP;
  cRam00000001574a911a = cRam00000001574a911a + (char)(uVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

