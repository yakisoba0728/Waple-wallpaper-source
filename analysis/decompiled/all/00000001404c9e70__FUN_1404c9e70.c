// Function: FUN_1404c9e70
// Addr: 1404c9e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9e70(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *in_RAX;
  undefined7 uVar6;
  char *pcVar5;
  char unaff_BL;
  longlong unaff_RSI;
  char unaff_R12B;
  byte *pbStackX_8;
  byte *pbVar4;
  
  *param_1 = *param_1 + unaff_R12B;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)(unaff_RSI + -0x43ffcda8) = *(char *)(unaff_RSI + -0x43ffcda8) + (char)in_RAX;
  uVar6 = (undefined7)((ulonglong)pbStackX_8 >> 8);
  bVar2 = ((byte)pbStackX_8 ^ *pbStackX_8) + 99;
  pbVar4 = (byte *)CONCAT71(uVar6,bVar2);
  *param_1 = *param_1 + unaff_R12B;
  *pbVar4 = *pbVar4 + bVar2;
  cVar3 = (char)((ulonglong)pbStackX_8 >> 8);
  pbVar4[0x58] = pbVar4[0x58] + cVar3;
  bVar1 = *pbVar4;
  pcVar5 = (char *)CONCAT71(uVar6,bVar2 ^ bVar1);
  LOCK();
  pcVar5[0x32] = unaff_BL;
  UNLOCK();
  *pcVar5 = *pcVar5 + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
  *pcVar5 = *pcVar5 + (bVar2 ^ bVar1);
  cVar3 = in(8);
  *(char *)CONCAT71(uVar6,cVar3) = *(char *)CONCAT71(uVar6,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

