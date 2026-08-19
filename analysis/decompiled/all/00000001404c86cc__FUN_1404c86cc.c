// Function: FUN_1404c86cc
// Addr: 1404c86cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c86cd) overlaps instruction at (ram,0x0001404c86cc)
    */
/* WARNING: Removing unreachable block (ram,0x0001404c86b9) */
/* WARNING: Removing unreachable block (ram,0x0001404c86ab) */
/* WARNING: Removing unreachable block (ram,0x0001404c86be) */
/* WARNING: Removing unreachable block (ram,0x0001404c86c7) */
/* WARNING: Removing unreachable block (ram,0x0001404c86c9) */

void FUN_1404c86cc(char *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  code *pcVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar10;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar11;
  byte *pbVar9;
  char *pcVar12;
  char cVar13;
  char cVar14;
  undefined6 uVar15;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar14 = (char)((ulonglong)param_2 >> 8);
  cVar13 = (char)param_2;
  uRam00000001345986d6 = uRam00000001345986d6 & (uint)param_1;
  uVar5 = in_EAX + 0x60000834;
  uRam4f200030a3720030 = uVar5;
  *param_4 = *param_4;
  uVar6 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11((byte)(uVar5 >> 8) | *(byte *)((longlong)param_1 * 2),
                            (byte)uVar5 | *(byte *)((ulonglong)uVar5 * 2))) + 0x72000a74;
  pbVar8 = (byte *)(ulonglong)uVar6;
  uRam85fc0030a3a00030 = uVar6;
  *param_1 = *param_1 + unaff_R12B;
  *pbVar8 = *pbVar8 + (byte)uVar6;
  *(char *)(param_2 + -0x5d) = *(char *)(param_2 + -0x5d) + cVar14;
  *pbVar8 = *pbVar8 ^ (byte)uVar6;
  bVar4 = bRam21004c85fc0030a3;
  uVar5 = CONCAT31((int3)(uVar6 >> 8),bRam21004c85fc0030a3);
  pbVar8 = (byte *)(ulonglong)uVar5;
  *pbVar8 = *pbVar8 + bRam21004c85fc0030a3;
  cVar10 = (char)(uVar6 >> 8);
  pbVar8[-0x5d] = pbVar8[-0x5d] + cVar10;
  *pbVar8 = *pbVar8 ^ bVar4;
  *pbVar8 = *pbVar8 ^ bVar4;
  *(byte *)(unaff_RDI + 0x4b) = *(byte *)(unaff_RDI + 0x4b) & (byte)param_1;
  *param_1 = *param_1 + cVar10;
  iVar7 = uVar5 + 0xf4050002;
  *(undefined1 *)(unaff_RBP + -0x5a32ffd0) = 0;
  bVar4 = (char)iVar7 + cVar13;
  uVar5 = CONCAT31((int3)((uint)iVar7 >> 8),bVar4);
  uRam0000000174518738 = uRam0000000174518738 & uVar5;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | bVar4;
  pcVar2 = (code *)swi(0xa5);
  pbVar8 = (byte *)(*pcVar2)();
  *pbVar8 = *pbVar8 ^ (byte)pbVar8;
  *param_1 = *param_1 + unaff_R12B;
  bVar4 = (byte)pbVar8 | *(byte *)((longlong)pbVar8 * 2);
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)pbVar8 >> 0x10),
                            CONCAT11((char)((ulonglong)pbVar8 >> 8),bVar4));
  uVar5 = (int)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar4 | *pbVar8) + 0x3000964;
  pbVar8 = (byte *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  *pbVar8 = *pbVar8 ^ bVar4;
  bVar11 = (byte)(uVar5 >> 8);
  *(byte *)(unaff_RSI + -0x799fffcf) = *(byte *)(unaff_RSI + -0x799fffcf) | bVar11;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT62(uVar15,CONCAT11(cVar14,cVar13)) =
       *(char *)CONCAT62(uVar15,CONCAT11(cVar14,cVar13)) + bVar4;
  *pbVar8 = *pbVar8 + bVar4;
  uVar3 = (undefined3)(uVar5 >> 8);
  bVar4 = in(10);
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar4;
  *pbVar8 = *pbVar8 ^ bVar4;
  *(byte *)(unaff_RSI + -0x799fffce) = *(byte *)(unaff_RSI + -0x799fffce) | bVar11;
  *param_1 = *param_1 + unaff_R12B;
  *pbVar8 = *pbVar8 + bVar4;
  pcVar12 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11((char)((ulonglong)param_1 >> 8) + (char)param_1,(char)param_1)
                            );
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 2);
  *pbVar8 = *pbVar8 ^ bVar4;
  *pcVar12 = *pcVar12 + unaff_R12B;
  *pbVar8 = *pbVar8 + bVar4;
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4 * '\x02');
  puVar1 = (uint *)(unaff_RSI + 10);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *pbVar8 = *pbVar8 ^ bVar4 * '\x02';
  pcVar2 = (code *)swi(0xa5);
  pbVar9 = (byte *)(*pcVar2)();
  bVar4 = (byte)pbVar9;
  *pbVar9 = *pbVar9 ^ bVar4;
  pbVar8 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3070100 +
                   (longlong)pcVar12 * 2);
  *pbVar8 = *pbVar8 << 1 | (char)*pbVar8 < '\0';
  *(char *)(unaff_RDI + 10) = *(char *)(unaff_RDI + 10) + bVar4;
  if (pcVar12 != (char *)0x1) {
    *pbVar9 = *pbVar9 + bVar4;
    *puVar1 = *puVar1 & (uint)puVar1;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

