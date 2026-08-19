// Function: FUN_14049f6c8
// Addr: 14049f6c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f6c8(undefined8 param_1,uint param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_RAX;
  longlong unaff_RBX;
  char *unaff_RSI;
  char *unaff_retaddr;
  
  pcVar1 = (char *)((longlong)in_RAX + unaff_RBX * 2);
  *pcVar1 = *pcVar1 + (char)(param_2 >> 8);
  *(char *)((longlong)in_RAX + -0x6d) = *(char *)((longlong)in_RAX + -0x6d) + (char)param_2;
  iVar2 = *in_RAX;
  iVar3 = (int)in_RAX;
  *in_RAX = *in_RAX + iVar3;
  if (SCARRY4(iVar2,iVar3) == *in_RAX < 0) {
    *in_RAX = *in_RAX + iVar3;
    *param_4 = *param_4 + *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar4 = (int *)((ulonglong)in_RAX & 0xffffffff);
  *(int *)(ulonglong)param_2 = *(int *)(ulonglong)param_2 + param_2;
  *param_4 = *param_4 + '\b';
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr + (char)((ulonglong)unaff_retaddr >> 8);
  *piVar4 = *piVar4 + iVar3;
  piVar4 = (int *)((ulonglong)piVar4 ^ 0x92);
  *piVar4 = *piVar4 + (int)piVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

