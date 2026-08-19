// Function: FUN_1404a1224
// Addr: 1404a1224
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a122f) overlaps instruction at (ram,0x0001404a122e)
    */

void FUN_1404a1224(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char unaff_SPL;
  
  uVar1 = in_EAX + 0x30000664U + *(int *)(ulonglong)(in_EAX + 0x30000664U);
  uVar1 = uVar1 + *(int *)(ulonglong)uVar1;
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 == (char *)0x0 || uVar1 == 0) {
    while( true ) {
      piVar3 = (int *)(ulonglong)uVar1;
      *param_4 = *param_4 + unaff_SPL;
      *(char *)piVar3 = (char)*piVar3 + (char)uVar1;
      *(char *)piVar3 = (char)*piVar3 + (char)((ushort)param_2 >> 8);
      iVar2 = uVar1 + *piVar3 + *(int *)(ulonglong)(uVar1 + *piVar3);
      pcVar4 = pcVar4 + -1;
      if (pcVar4 == (char *)0x0 || iVar2 == 0) break;
      uVar1 = in(param_2);
    }
    *param_4 = *param_4 + (char)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

