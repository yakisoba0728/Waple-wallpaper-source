// Function: FUN_1404cd3c4
// Addr: 1404cd3c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd3c4(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  int *piVar3;
  char cVar5;
  char cVar6;
  undefined6 uVar7;
  longlong unaff_RBX;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  char *pcVar4;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar5 = (char)param_2;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + '\x01' + in_CF);
  uVar2 = (int)piVar3 - *piVar3 | 0x9e00bf0;
  pcVar4 = (char *)(ulonglong)uVar2;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar6 = (char)((ulonglong)param_2 >> 8) + *pcVar4;
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  pcVar1 = (char *)(unaff_RBX + CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) * 8);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(CONCAT62(uVar7,CONCAT11(cVar6,cVar5)) + 1);
  *pcVar1 = *pcVar1 + param_3;
  *pcVar4 = *pcVar4 + (char)uVar2;
  *param_1 = *param_1 - cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

