// Function: FUN_1404d7f98
// Addr: 1404d7f98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7fac) overlaps instruction at (ram,0x0001404d7fa7)
    */

void FUN_1404d7f98(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar5;
  uint in_EAX;
  int *piVar6;
  ulonglong unaff_RBX;
  int *piVar7;
  char *unaff_RSI;
  bool in_ZF;
  byte in_SF;
  byte in_OF;
  char cVar3;
  char cVar4;
  
  piVar6 = (int *)(unaff_RBX & 0xffffffff);
  *param_1 = *param_1;
  if (in_ZF || (in_OF & 1) != in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((ulonglong)piVar6 >> 8);
  *param_2 = *param_2 + (char)piVar6;
  *(char *)piVar6 = (char)*piVar6 + (char)piVar6;
  piVar7 = (int *)(ulonglong)in_EAX;
  if ((char)*piVar6 < '\0') {
    piVar7 = (int *)(unaff_RBX & 0xffffffff);
    piVar6 = (int *)(ulonglong)in_EAX;
  }
  pcVar1 = (char *)((longlong)piVar6 + -0x6cffbe41);
  cVar5 = (char)piVar6;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar5;
  cVar3 = *pcVar1;
  cVar4 = *pcVar1;
  *param_1 = *param_1;
  if (cVar4 != '\0' && SCARRY1(cVar2,cVar5) == cVar3 < '\0') {
    *param_1 = *param_1 + (char)((ulonglong)piVar6 >> 8);
    *unaff_RSI = *unaff_RSI + cVar5 + '\x02';
    return;
  }
  *piVar7 = *piVar7 + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

