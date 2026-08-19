// Function: FUN_1404b3f8c
// Addr: 1404b3f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3f8c(undefined8 param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint in_EAX;
  byte *pbVar7;
  char cVar8;
  undefined1 unaff_BH;
  uint unaff_EBP;
  undefined4 *unaff_RSI;
  byte *unaff_RDI;
  char *pcVar6;
  byte bVar9;
  
  uVar2 = (undefined3)((in_EAX | unaff_EBP) >> 8);
  bVar5 = (char)(in_EAX | unaff_EBP) + 1;
  uVar3 = CONCAT31(uVar2,bVar5);
  pcVar6 = (char *)(ulonglong)uVar3;
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  cVar8 = bVar9 - *(byte *)(unaff_RSI + -0x14243ffa);
  *pcVar6 = (*pcVar6 - bVar5) - (bVar9 < *(byte *)(unaff_RSI + -0x14243ffa));
  *(undefined1 *)unaff_RSI = unaff_BH;
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + bVar5;
  *param_2 = *param_2 + cVar8;
  *pcVar6 = (*pcVar6 - bVar5) - (bVar5 < *unaff_RDI);
  out(*unaff_RSI,(short)param_2);
  *pcVar6 = (*pcVar6 - bVar5) - (uVar3 < *(uint *)(unaff_RDI + 1));
  *(undefined1 *)(unaff_RSI + 1) = unaff_BH;
  *param_4 = *param_4;
  *pcVar6 = *pcVar6 + bVar5;
  bVar4 = bVar5 * '\x02';
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  unaff_RDI[5] = bVar4;
  bVar9 = *pbVar7;
  bVar1 = *pbVar7 + bVar5 * -2;
  *pbVar7 = bVar1 - CARRY1(bVar5,bVar5);
  if (CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar8,(char)param_1)) == 1 ||
      *pbVar7 == 0) {
    *pbVar7 = (*pbVar7 + bVar5 * -2) - (bVar9 < bVar4 || bVar1 < CARRY1(bVar5,bVar5));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

