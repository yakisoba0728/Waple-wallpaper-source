// Function: FUN_1404c9e5c
// Addr: 1404c9e5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9e5c(char *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  undefined7 uVar7;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  byte *pbStackX_10;
  char *pcVar5;
  byte *pbVar6;
  
  uVar4 = in_EAX + 0x58003259;
  pbVar6 = (byte *)(ulonglong)uVar4;
  *param_1 = *param_1 + unaff_R12B;
  *pbVar6 = *pbVar6 + (byte)uVar4;
  pbVar6[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2 + 0x58ea0032] =
       pbVar6[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2 + 0x58ea0032] + unaff_BH;
  bVar1 = (byte)uVar4 ^ *pbVar6;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar5 = *pcVar5 + bVar1;
  *(char *)(unaff_RSI + -0x43ffcda8) = *(char *)(unaff_RSI + -0x43ffcda8) + bVar1;
  uVar7 = (undefined7)((ulonglong)pbStackX_10 >> 8);
  bVar2 = ((byte)pbStackX_10 ^ *pbStackX_10) + 99;
  pbVar6 = (byte *)CONCAT71(uVar7,bVar2);
  *param_1 = *param_1 + unaff_R12B;
  *pbVar6 = *pbVar6 + bVar2;
  cVar3 = (char)((ulonglong)pbStackX_10 >> 8);
  pbVar6[0x58] = pbVar6[0x58] + cVar3;
  bVar1 = *pbVar6;
  pcVar5 = (char *)CONCAT71(uVar7,bVar2 ^ bVar1);
  LOCK();
  pcVar5[0x32] = unaff_BL;
  UNLOCK();
  *pcVar5 = *pcVar5 + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
  *pcVar5 = *pcVar5 + (bVar2 ^ bVar1);
  cVar3 = in(8);
  *(char *)CONCAT71(uVar7,cVar3) = *(char *)CONCAT71(uVar7,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

