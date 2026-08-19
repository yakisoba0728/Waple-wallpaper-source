// Function: FUN_1404a6dd0
// Addr: 1404a6dd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6dd0(byte *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  undefined3 uVar3;
  char cVar4;
  byte bVar5;
  uint in_EAX;
  uint uVar6;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar12;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint *unaff_RSI;
  longlong unaff_RDI;
  char acStack_10 [16];
  char *pcVar7;
  uint *puVar11;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = in_EAX ^ 0x9d2;
  pcVar7 = (char *)(ulonglong)uVar6;
  acStack_10[8] = 'J';
  acStack_10[9] = '\0';
  acStack_10[10] = '\0';
  acStack_10[0xb] = '\0';
  acStack_10[0xc] = '\0';
  acStack_10[0xd] = '\0';
  acStack_10[0xe] = '\0';
  acStack_10[0xf] = '\0';
  bVar5 = (byte)(uVar6 >> 8);
  *param_1 = *param_1 + bVar5;
  *pcVar7 = *pcVar7 + (char)uVar6;
  *pcVar7 = *pcVar7 + (char)uVar6;
  bVar2 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar2 | *param_1 << 8 - bVar2;
  UNK_1404a77b7 = UNK_1404a77b7 + bVar12;
  acStack_10[0] = 'J';
  acStack_10[1] = '\0';
  acStack_10[2] = '\0';
  acStack_10[3] = '\0';
  acStack_10[4] = '\0';
  acStack_10[5] = '\0';
  acStack_10[6] = '\0';
  acStack_10[7] = '\0';
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar5;
  uVar6 = uVar6 + CARRY1(bVar2,bVar5) + 0xf8f90a06;
  pcVar7 = (char *)(ulonglong)uVar6;
  cVar4 = (char)uVar6;
  cRam00000000d04a712d = cRam00000000d04a712d + cVar4;
  bVar2 = (byte)param_1 & 7;
  *param_1 = *param_1 >> bVar2 | *param_1 << 8 - bVar2;
  *(char *)(unaff_RDI + -0x37fff62e) = *(char *)(unaff_RDI + -0x37fff62e) + unaff_BH;
  iVar1 = *param_2;
  pbVar10 = (byte *)(ulonglong)(uint)(iVar1 * 0x21);
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7[-0x40fff62e] = pcVar7[-0x40fff62e] + (char)param_2;
  bVar5 = (byte)(iVar1 * 0x21);
  bVar2 = bVar5 & 7;
  *pbVar10 = *pbVar10 >> bVar2 | *pbVar10 << 8 - bVar2;
  uVar3 = (undefined3)(uVar6 >> 8);
  bVar5 = cVar4 + bVar5;
  uVar9 = *param_2 * 0x21;
  puVar11 = (uint *)(ulonglong)uVar9;
  uVar6 = CONCAT31(uVar3,bVar5 | *(byte *)((ulonglong)CONCAT31(uVar3,bVar5) * 2));
  bVar2 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)uVar6);
  uVar6 = uVar6 + 0xd0000234;
  puVar8 = (uint *)(ulonglong)uVar6;
  bVar5 = (byte)uVar9 & 0x1f;
  *puVar11 = *puVar11 >> bVar5 | *puVar11 << 0x20 - bVar5;
  cVar4 = (char)uVar6;
  acStack_10
  [CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar12 | bVar2,(char)param_2)) * 8] =
       acStack_10
       [CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar12 | bVar2,(char)param_2)) * 8] +
       cVar4;
  *puVar8 = *puVar8 | uVar6;
  *puVar8 = *puVar8 & uVar6;
  *(char *)puVar8 = (char)*puVar8 + cVar4;
  *puVar8 = *puVar8 | uVar6;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar4 + -0x2c);
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  *unaff_RSI = *unaff_RSI & uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

