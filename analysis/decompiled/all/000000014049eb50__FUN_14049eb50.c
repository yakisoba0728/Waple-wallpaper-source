// Function: FUN_14049eb50
// Addr: 14049eb50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eb50(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char cVar3;
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  longlong unaff_RBP;
  
  uVar1 = in_EAX | 0xea4c0001;
  *param_4 = *param_4 + -8;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  cVar3 = (char)(in_EAX >> 8);
  cRam000000019449ec6e = cRam000000019449ec6e + cVar3;
  uVar1 = in_EAX | 0xea4c0001;
  *param_4 = *param_4 + -8;
  *(char *)((ulonglong)uVar1 * 2) = *(char *)((ulonglong)uVar1 * 2) + (char)uVar1;
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + (char)((ulonglong)param_2 >> 8);
  piVar2 = (int *)CONCAT71((uint7)CONCAT21((short)(uVar1 >> 0x10),cVar3 + (char)uVar1),0xc);
  *piVar2 = *piVar2 + (int)piVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

