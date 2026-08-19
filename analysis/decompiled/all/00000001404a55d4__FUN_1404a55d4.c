// Function: FUN_1404a55d4
// Addr: 1404a55d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a55d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  short in_AX;
  uint uVar2;
  ulonglong uVar3;
  char *unaff_RSI;
  
  uVar2 = (int)in_AX + 0x19cbfff8;
  *param_4 = *param_4 + (char)uVar2;
  uVar3 = (ulonglong)(uVar2 | *(uint *)(ulonglong)uVar2) ^ 0x8c;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_1 >> 8);
  piVar1 = (int *)(uVar3 * 2 + -0x1fe20fe1);
  *piVar1 = *piVar1 + (int)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

