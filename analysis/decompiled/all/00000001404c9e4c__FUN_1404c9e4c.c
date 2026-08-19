// Function: FUN_1404c9e4c
// Addr: 1404c9e4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9e4c(char *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  undefined7 uVar7;
  char cVar8;
  undefined7 uVar9;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  byte *pbStackX_8;
  byte *pbStackX_20;
  char *pcVar5;
  byte *pbVar6;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  uVar4 = in_EAX + 0x58003259;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  cVar8 = (char)param_2 + (char)((ulonglong)param_1 >> 8);
  uVar4 = (int)CONCAT71((int7)((ulonglong)pbStackX_8 >> 8),(byte)pbStackX_8 ^ *pbStackX_8) +
          0x58003259;
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
  uVar7 = (undefined7)((ulonglong)pbStackX_20 >> 8);
  bVar2 = ((byte)pbStackX_20 ^ *pbStackX_20) + 99;
  pbVar6 = (byte *)CONCAT71(uVar7,bVar2);
  *param_1 = *param_1 + unaff_R12B;
  *pbVar6 = *pbVar6 + bVar2;
  cVar3 = (char)((ulonglong)pbStackX_20 >> 8);
  pbVar6[0x58] = pbVar6[0x58] + cVar3;
  bVar1 = *pbVar6;
  pcVar5 = (char *)CONCAT71(uVar7,bVar2 ^ bVar1);
  LOCK();
  pcVar5[0x32] = unaff_BL;
  UNLOCK();
  *pcVar5 = *pcVar5 + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(uVar9,cVar8) = *(char *)CONCAT71(uVar9,cVar8) + (char)param_1;
  *pcVar5 = *pcVar5 + (bVar2 ^ bVar1);
  cVar3 = in(8);
  *(char *)CONCAT71(uVar7,cVar3) = *(char *)CONCAT71(uVar7,cVar3) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

