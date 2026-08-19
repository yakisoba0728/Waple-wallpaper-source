// Function: FUN_14049ff90
// Addr: 14049ff90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ff90(longlong param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *in_RAX;
  int *piVar3;
  uint *unaff_RBX;
  char unaff_SPL;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *param_2 = *param_2 ^ (byte)param_2;
  uVar1 = (uint)in_RAX + *in_RAX;
  if (param_1 + -1 == 0) {
    in(0xf1);
    *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = (int *)((ulonglong)(uVar1 + *(int *)(ulonglong)uVar1) ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)piVar3 = (char)*piVar3 + (char)piVar3;
  *(char *)((longlong)piVar3 + 0x13) = *(char *)((longlong)piVar3 + 0x13) + (char)piVar3;
  uVar2 = (int)piVar3 + *piVar3;
  uVar1 = *unaff_RBX;
  *param_4 = *param_4 + ((char)uVar2 + (char)*(undefined4 *)(ulonglong)uVar2 ^ 0xe6U);
  *(char *)((ulonglong)uVar1 * 3) = *(char *)((ulonglong)uVar1 * 3) + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

