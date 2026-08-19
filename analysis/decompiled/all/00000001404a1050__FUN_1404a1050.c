// Function: FUN_1404a1050
// Addr: 1404a1050
// Size: 1 bytes


void FUN_1404a1050(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int *in_RAX;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_DS;
  char cStackX_8;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(param_2 + -0x25fffc63) = *(char *)(param_2 + -0x25fffc63) + cVar4;
  uVar1 = (int)in_RAX + *in_RAX;
  if ((POPCOUNT(uVar1 & 0xff) & 1U) == 0) {
    uVar1 = *(uint *)(ulonglong)uVar1;
  }
  puVar2 = (uint *)(ulonglong)uVar1;
  *puVar2 = *puVar2 & uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
  *(undefined2 *)(unaff_RBP + -0x624dfffd) = in_DS;
  uVar1 = uVar1 + *puVar2;
  piVar3 = (int *)(ulonglong)uVar1;
  *param_1 = *param_1 + cStackX_8;
  *(char *)piVar3 = (char)*piVar3 + (char)uVar1;
  *(char *)((longlong)piVar3 + -99) = *(char *)((longlong)piVar3 + -99) + cVar4;
  uVar1 = uVar1 + *piVar3;
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4 + cStackX_8;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

