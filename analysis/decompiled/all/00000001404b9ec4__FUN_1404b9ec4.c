// Function: FUN_1404b9ec4
// Addr: 1404b9ec4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9ec4(longlong param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_ZF;
  char *pcVar4;
  
  param_1 = param_1 + -1;
  if (param_1 == 0 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = in(param_2);
  cVar2 = (char)uVar3;
  pcVar4 = (char *)(ulonglong)CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11(0x1f,cVar2));
  pcVar1 = (char *)(unaff_RBP + 0x21004a + (longlong)pcVar4 * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *pcVar4 = *pcVar4 + cVar2;
  if (param_1 == 1 || *pcVar4 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_SPL;
  *pcVar4 = *pcVar4 + cVar2;
  *(char *)(unaff_RSI + -0x54) = *(char *)(unaff_RSI + -0x54) + '\x1f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

