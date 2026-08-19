// Function: FUN_1404b69d0
// Addr: 1404b69d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b69d0(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar16;
  int *in_RAX;
  byte *pbVar14;
  uint *puVar15;
  byte bVar17;
  char cVar18;
  uint uVar19;
  byte bVar21;
  char *pcVar20;
  byte unaff_BL;
  uint unaff_EBP;
  uint uVar22;
  longlong unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar13;
  
  *(uint *)(unaff_RSI + 0x68d4001b) = *(uint *)(unaff_RSI + 0x68d4001b) | (uint)param_1;
  bVar21 = *param_4;
  bVar6 = (byte)in_RAX;
  *param_4 = *param_4 + bVar6;
  *unaff_RDI = *unaff_RDI + bVar6 + CARRY1(bVar21,bVar6);
  *(char *)in_RAX = (char)*in_RAX + (char)param_2;
  uVar22 = (int)unaff_RSI + *in_RAX;
  pbVar14 = (byte *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + (char)*in_RAX);
  bVar16 = (byte)((ulonglong)in_RAX >> 8);
  bRam60047005c007f009 = bVar6;
  *param_1 = *param_1 + bVar16;
  *pbVar14 = *pbVar14 | bVar6;
  bVar17 = (byte)param_1;
  *(byte *)in_RAX = (char)*in_RAX + bVar17;
  uVar7 = in(0x12);
  pbVar13 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar7);
  bVar21 = *pbVar13;
  *pbVar13 = *pbVar13 + bVar16;
  uVar3 = unaff_EBP - *(uint *)(ulonglong)unaff_EBP;
  uVar9 = uVar3 - CARRY1(bVar21,bVar16);
  uVar19 = (int)pbVar14 + *(int *)(unaff_RDI + 0x6908001b) +
           (uint)(unaff_EBP < *(uint *)(ulonglong)unaff_EBP || uVar3 < CARRY1(bVar21,bVar16));
  *param_4 = *param_4;
  *(char *)(ulonglong)uVar19 = *(char *)(ulonglong)uVar19 + (char)uVar9;
  *(char *)(ulonglong)uVar9 = *(char *)(ulonglong)uVar9 + (char)uVar9;
  uVar7 = in(0x12);
  uVar5 = CONCAT31((int3)(uVar9 >> 8),uVar7);
  pbVar14 = (byte *)(ulonglong)uVar5;
  bVar21 = *pbVar14;
  bVar6 = (byte)(uVar9 >> 8);
  *pbVar14 = *pbVar14 + bVar6;
  uVar9 = (uint)CARRY1(bVar21,bVar6);
  uVar3 = *(uint *)((ulonglong)pbVar13 & 0xffffffff);
  uVar12 = (uint)pbVar13 - *(uint *)((ulonglong)pbVar13 & 0xffffffff);
  uVar10 = uVar12 - uVar9;
  pbVar14 = (byte *)(ulonglong)uVar10;
  iVar1 = *(int *)(unaff_RDI + 0x6908001b);
  *param_4 = *param_4;
  *pbVar14 = *pbVar14 + (char)uVar10;
  bVar21 = *pbVar14;
  bVar6 = (byte)(uVar10 >> 8);
  *pbVar14 = *pbVar14 + bVar6;
  uVar10 = (uint)CARRY1(bVar21,bVar6);
  uVar4 = uVar5 - *(uint *)(ulonglong)uVar5;
  uVar11 = uVar4 - uVar10;
  pbVar14 = (byte *)(ulonglong)uVar11;
  uVar9 = uVar19 + iVar1 + (uint)((uint)pbVar13 < uVar3 || uVar12 < uVar9) +
          *(int *)(unaff_RDI + 0x6908001b) +
          (uint)(uVar5 < *(uint *)(ulonglong)uVar5 || uVar4 < uVar10);
  *param_4 = *param_4;
  *(byte *)(ulonglong)uVar9 = *(byte *)(ulonglong)uVar9 | (byte)uVar11;
  bVar21 = *pbVar14;
  *pbVar14 = *pbVar14 + bVar17;
  pbVar14[in_FS_OFFSET] = pbVar14[in_FS_OFFSET] + (byte)uVar11 + CARRY1(bVar21,bVar17);
  param_1[-0x6691ffe5] = param_1[-0x6691ffe5] ^ unaff_BL;
  uVar11 = uVar11 - *(int *)pbVar14;
  puVar15 = (uint *)(ulonglong)uVar11;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1;
  *(byte *)puVar15 = (byte)*puVar15 + (char)uVar11;
  uVar3 = *puVar15;
  bVar21 = (byte)(uVar9 >> 8);
  *(byte *)puVar15 = (byte)*puVar15 + bVar21;
  uVar10 = (uint)CARRY1((byte)uVar3,bVar21);
  uVar3 = *puVar15;
  uVar9 = *puVar15;
  uVar12 = (uVar11 - uVar9) - uVar10;
  out(*(undefined1 *)(ulonglong)uVar22,(short)((int)uVar11 >> 0x1f));
  pcVar20 = (char *)(ulonglong)(uint)((int)uVar12 >> 0x1f);
  uVar2 = *(undefined4 *)(ulonglong)uVar12;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1 + (((char)uVar12 - (char)uVar2) - (uVar11 < uVar3 || uVar11 - uVar9 < uVar10))
  ;
  cVar18 = (char)((int)uVar12 >> 0x1f);
  *pcVar20 = *pcVar20 + cVar18;
  cVar8 = in(0x11);
  *pcVar20 = *pcVar20 + cVar18;
  if (*pcVar20 != '\0') {
    *pcVar20 = *pcVar20 + cVar18;
    puVar15 = (uint *)CONCAT71((uint7)(uint3)((int)uVar12 >> 0x1f),0xb);
    *puVar15 = *puVar15 & uVar22 + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001b04b79cd = cRam00000001b04b79cd + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

