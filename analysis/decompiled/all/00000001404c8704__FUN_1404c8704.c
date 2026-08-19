// Function: FUN_1404c8704
// Addr: 1404c8704
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c86b9) */
/* WARNING: Removing unreachable block (ram,0x0001404c86ab) */
/* WARNING: Removing unreachable block (ram,0x0001404c86be) */
/* WARNING: Removing unreachable block (ram,0x0001404c86c7) */
/* WARNING: Removing unreachable block (ram,0x0001404c86c9) */

void FUN_1404c8704(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined3 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char cVar9;
  undefined8 in_RAX;
  byte *pbVar7;
  byte bVar10;
  byte *pbVar8;
  char *pcVar11;
  char cVar12;
  undefined1 uVar13;
  undefined6 uVar14;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  bVar4 = bRam21004c85fc0030a3;
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar13 = (undefined1)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  pbVar7 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam21004c85fc0030a3);
  *pbVar7 = *pbVar7 + bRam21004c85fc0030a3;
  cVar9 = (char)((ulonglong)in_RAX >> 8);
  pbVar7[-0x5d] = pbVar7[-0x5d] + cVar9;
  *pbVar7 = *pbVar7 ^ bVar4;
  *pbVar7 = *pbVar7 ^ bVar4;
  *(byte *)(unaff_RDI + 0x4b) = *(byte *)(unaff_RDI + 0x4b) & (byte)param_1;
  *param_1 = *param_1 + cVar9;
  iVar5 = (int)pbVar7 + -0xbfafffe;
  *(undefined1 *)(unaff_RBP + -0x5a32ffd0) = 0;
  bVar4 = (char)iVar5 + cVar12;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),bVar4);
  uRam0000000174518738 = uRam0000000174518738 & uVar6;
  *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 | bVar4;
  pcVar2 = (code *)swi(0xa5);
  pbVar7 = (byte *)(*pcVar2)();
  *pbVar7 = *pbVar7 ^ (byte)pbVar7;
  *param_1 = *param_1 + unaff_R12B;
  bVar4 = (byte)pbVar7 | *(byte *)((longlong)pbVar7 * 2);
  pbVar7 = (byte *)CONCAT62((int6)((ulonglong)pbVar7 >> 0x10),
                            CONCAT11((char)((ulonglong)pbVar7 >> 8),bVar4));
  uVar6 = (int)CONCAT71((int7)((ulonglong)pbVar7 >> 8),bVar4 | *pbVar7) + 0x3000964;
  pbVar7 = (byte *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  *pbVar7 = *pbVar7 ^ bVar4;
  bVar10 = (byte)(uVar6 >> 8);
  *(byte *)(unaff_RSI + -0x799fffcf) = *(byte *)(unaff_RSI + -0x799fffcf) | bVar10;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(uVar14,CONCAT11(uVar13,cVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(uVar13,cVar12)) + bVar4;
  *pbVar7 = *pbVar7 + bVar4;
  uVar3 = (undefined3)(uVar6 >> 8);
  bVar4 = in(10);
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar4;
  *pbVar7 = *pbVar7 ^ bVar4;
  *(byte *)(unaff_RSI + -0x799fffce) = *(byte *)(unaff_RSI + -0x799fffce) | bVar10;
  *param_1 = *param_1 + unaff_R12B;
  *pbVar7 = *pbVar7 + bVar4;
  pcVar11 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((char)((ulonglong)param_1 >> 8) + (char)param_1,(char)param_1)
                            );
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 2);
  *pbVar7 = *pbVar7 ^ bVar4;
  *pcVar11 = *pcVar11 + unaff_R12B;
  *pbVar7 = *pbVar7 + bVar4;
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4 * '\x02');
  puVar1 = (uint *)(unaff_RSI + 10);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *pbVar7 = *pbVar7 ^ bVar4 * '\x02';
  pcVar2 = (code *)swi(0xa5);
  pbVar8 = (byte *)(*pcVar2)();
  bVar4 = (byte)pbVar8;
  *pbVar8 = *pbVar8 ^ bVar4;
  pbVar7 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3070100 +
                   (longlong)pcVar11 * 2);
  *pbVar7 = *pbVar7 << 1 | (char)*pbVar7 < '\0';
  *(char *)(unaff_RDI + 10) = *(char *)(unaff_RDI + 10) + bVar4;
  if (pcVar11 != (char *)0x1) {
    *pbVar8 = *pbVar8 + bVar4;
    *puVar1 = *puVar1 & (uint)puVar1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

