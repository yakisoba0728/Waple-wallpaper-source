// Function: FUN_1404bf0fc
// Addr: 1404bf0fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf0fc(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  char unaff_BL;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  in(0xa9);
  uVar2 = in(param_2);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  in(param_2);
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

