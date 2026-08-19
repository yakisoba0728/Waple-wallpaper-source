// Function: FUN_1404ba9e0
// Addr: 1404ba9e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba9e0(char *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar6;
  uint *in_RAX;
  ulonglong uVar4;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar5;
  
  uVar2 = ((ulonglong)in_RAX & 0xffffffff) * (ulonglong)*in_RAX;
  uVar4 = uVar2 & 0xffffffff;
  bVar3 = (char)uVar4 + unaff_BL;
  pbVar5 = (byte *)CONCAT71((int7)(uVar4 >> 8),bVar3);
  cVar6 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar6;
  *pbVar5 = *pbVar5 + bVar3;
  pcVar1 = (char *)(unaff_RDI + 0x20 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)(uVar2 >> 0x20);
  *(char *)(unaff_RSI + -9) = *(char *)(unaff_RSI + -9) + cVar6;
  *pbVar5 = *pbVar5 & bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

