// Function: FUN_1404d71dc
// Addr: 1404d71dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d71dc(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar8;
  uint in_EAX;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar9;
  char cVar10;
  byte bVar11;
  undefined6 uVar12;
  longlong unaff_RBX;
  byte *unaff_RSI;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)param_2;
  uVar6 = in_EAX | 0xb500c60;
  pbVar9 = (byte *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  *pbVar9 = *pbVar9 ^ bVar4;
  bVar11 = *param_1;
  bVar8 = (byte)(uVar6 >> 8);
  *param_1 = *param_1 + bVar8;
  bVar2 = bVar4 + *(byte *)((longlong)pbVar9 * 2);
  uVar3 = (undefined3)(uVar6 >> 8);
  bVar5 = bVar2 + CARRY1(bVar11,bVar8);
  bVar11 = (char)((ulonglong)param_2 >> 8) + bVar8 +
           (CARRY1(bVar4,*(byte *)((longlong)pbVar9 * 2)) || CARRY1(bVar2,CARRY1(bVar11,bVar8)));
  bVar5 = bVar5 | *(byte *)(ulonglong)CONCAT31(uVar3,bVar5);
  uVar6 = CONCAT31(uVar3,bVar5);
  pbVar7 = (byte *)(ulonglong)uVar6;
  pbVar9 = (byte *)(unaff_RBX + CONCAT62(uVar12,CONCAT11(bVar11,cVar10)));
  *pbVar9 = *pbVar9 | bVar11;
  if (param_1 == (byte *)0x1 || *pbVar9 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)pbVar7 = *(int *)pbVar7 + uVar6;
  pcVar1 = (char *)(CONCAT62(uVar12,CONCAT11(bVar11,cVar10)) +
                   CONCAT62(uVar12,CONCAT11(bVar11,cVar10)));
  *pcVar1 = *pcVar1 + bVar8;
  pcVar1 = (char *)(unaff_RBX + CONCAT62(uVar12,CONCAT11(bVar11,cVar10)));
  *pcVar1 = *pcVar1 + cVar10;
  pbVar9 = param_1 + -2;
  if (pbVar9 == (byte *)0x0 || *pcVar1 == '\0') {
    *pbVar7 = *pbVar7 + 1;
  }
  else {
    *pbVar7 = *pbVar7 + bVar5;
    pbVar9 = param_1 + -3;
    if (pbVar9 == (byte *)0x0 || *pbVar7 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((char)*pbVar7 < (char)bVar5) {
    *pbVar9 = *pbVar9 + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar7 = *pbVar7 ^ bVar5;
  *pbVar7 = *pbVar7 + bVar8;
  *unaff_RSI = *unaff_RSI >> 1;
  pbVar7[0x21000000] = pbVar7[0x21000000] + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

