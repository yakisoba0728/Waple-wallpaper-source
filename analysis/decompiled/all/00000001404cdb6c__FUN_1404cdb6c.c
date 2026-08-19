// Function: FUN_1404cdb6c
// Addr: 1404cdb6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdb6c(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar10;
  char *in_RAX;
  char *pcVar8;
  byte bVar11;
  char cVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  undefined1 auStack_8 [8];
  byte bVar3;
  byte *pbVar9;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)param_2;
  bVar11 = (byte)param_1;
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  *(byte *)(unaff_RDI * 2) = *(byte *)(unaff_RDI * 2) | bVar10;
  cRam00000001761f9177 = cRam00000001761f9177 << (bVar11 & 0x1f);
  pbVar9 = (byte *)(in_RAX + 0x21004cda);
  bVar6 = *pbVar9;
  bVar5 = (byte)in_RAX;
  *pbVar9 = *pbVar9 + bVar5;
  pbVar9 = (byte *)((longlong)in_RAX * 2);
  bVar2 = *pbVar9;
  bVar3 = *pbVar9;
  *pbVar9 = bVar3 + bVar5 + CARRY1(bVar6,bVar5);
  in_RAX[0x1d] = in_RAX[0x1d] + unaff_BH +
                 (CARRY1(bVar2,bVar5) || CARRY1(bVar3 + bVar5,CARRY1(bVar6,bVar5)));
  *in_RAX = *in_RAX + bVar11;
  pcVar8 = (char *)(ulonglong)((uint)in_RAX ^ 0x35d74100);
  pcVar1 = (char *)(param_2 + 0x21004c + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pcVar1 = *pcVar1 + cVar12;
  *pcVar8 = *pcVar8 + bVar5;
  pcVar8 = (char *)((ulonglong)in_RAX & 0xffffffff);
  pcVar1 = (char *)(CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(0xd2,cVar12))) + 0x21004c +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pcVar1 = *pcVar1 + cVar12;
  *pcVar8 = *pcVar8 + bVar5;
  cRam00000001761f91af = cRam00000001761f91af << (bVar11 & 0x1f);
  pcVar8[0x21004cda] = pcVar8[0x21004cda] + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  *pcVar8 = *pcVar8 + bVar5;
  cRam00000001761f89bf = cRam00000001761f89bf << (bVar11 & 0x1f);
  pcVar1 = (char *)(CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(0xd2,cVar12))) + 0x4c +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pcVar1 = *pcVar1 + bVar10;
  *param_1 = *param_1 + bVar5;
  uVar7 = (uint)in_RAX | *(uint *)CONCAT44(uVar14,CONCAT22(uVar13,CONCAT11(0xd2,cVar12)));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar11;
  uVar4 = (undefined3)(uVar7 >> 8);
  bVar6 = (char)uVar7 + 0x50;
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar4,bVar6);
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) &
       CONCAT22(uVar13,CONCAT11(0xd2,cVar12));
  *pbVar9 = *pbVar9 | bVar6;
  pcVar1 = (char *)((ulonglong)(CONCAT31(uVar4,bVar6 | *pbVar9) | (uint)auStack_8 | 0xf640400) -
                   0x24);
  *pcVar1 = *pcVar1 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

