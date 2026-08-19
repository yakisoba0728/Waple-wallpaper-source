// Function: FUN_1404cacd0
// Addr: 1404cacd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cacd0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char cVar5;
  uint *in_RAX;
  char cVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_retaddr;
  ulonglong uVar4;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + (longlong)in_RAX) = *(char *)(unaff_RSI + (longlong)in_RAX) + cVar6;
  *(char *)((longlong)in_RAX + 0x2a) = *(char *)((longlong)in_RAX + 0x2a) + (char)in_RAX;
  uVar3 = (uint)in_RAX ^ *in_RAX;
  uVar4 = (ulonglong)uVar3;
  cVar2 = *(char *)CONCAT71(unaff_00000019,unaff_BL);
  param_1[0x4c] = param_1[0x4c] + (char)param_1;
  cVar5 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar5;
  *(char *)(uVar4 * 2) = *(char *)(uVar4 * 2) + (char)uVar3;
  param_1[uVar4] = param_1[uVar4] + (cVar6 - cVar2);
  *(char *)(unaff_RDI + uVar4) = *(char *)(unaff_RDI + uVar4) + cVar5;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),
                             (char)unaff_retaddr - *(char *)CONCAT71(unaff_00000019,unaff_BL)) +
                   0x2a);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

