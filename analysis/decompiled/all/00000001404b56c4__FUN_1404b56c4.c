// Function: FUN_1404b56c4
// Addr: 1404b56c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b56df) overlaps instruction at (ram,0x0001404b56dc)
    */

void FUN_1404b56c4(longlong param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  int unaff_EBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  byte in_CF;
  int *piVar4;
  
  uVar3 = in_EAX + 0x15001d34 + (uint)in_CF;
  piVar4 = (int *)(ulonglong)uVar3;
  *piVar4 = *piVar4 + unaff_EBX;
  cVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  if (param_1 == 1 || *unaff_RSI == '\0') {
    if (!SCARRY1(cVar2,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    pcVar1 = (char *)((longlong)piVar4 + unaff_RBP * 8 + 3);
    *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
    *(char *)(unaff_RBP + -0x28) = *(char *)(unaff_RBP + -0x28) + param_2;
  }
  func_0x000118a056e5();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

