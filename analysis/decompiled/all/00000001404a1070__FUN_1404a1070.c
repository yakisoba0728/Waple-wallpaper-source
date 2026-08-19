// Function: FUN_1404a1070
// Addr: 1404a1070
// Size: 1 bytes


void FUN_1404a1070(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int *in_RAX;
  char unaff_SPL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_DS;
  int *piVar2;
  
  uVar1 = (int)in_RAX + *in_RAX;
  piVar2 = (int *)(ulonglong)uVar1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)piVar2 = (char)*piVar2 + (char)uVar1;
  *(char *)((longlong)piVar2 + -99) =
       *(char *)((longlong)piVar2 + -99) + (char)((ulonglong)param_2 >> 8);
  uVar1 = uVar1 + *piVar2;
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

