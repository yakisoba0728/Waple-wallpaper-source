// Function: FUN_1404b69f4
// Addr: 1404b69f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b69f4(byte *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  byte bVar15;
  uint uVar10;
  uint uVar11;
  byte bVar14;
  int *in_RAX;
  uint *puVar13;
  char cVar16;
  byte bVar18;
  char *pcVar17;
  byte unaff_BL;
  ulonglong unaff_RBP;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  byte *pbVar12;
  
  *(byte *)(unaff_RBP - 0x68ecffe5) = *(byte *)(unaff_RBP - 0x68ecffe5) & (byte)param_2;
  uVar4 = (int)in_RAX - *in_RAX;
  param_1[0x4b] = param_1[0x4b] | (byte)((ulonglong)param_1 >> 8);
  bVar14 = (byte)(uVar4 >> 8);
  *param_1 = *param_1 + bVar14;
  *param_2 = *param_2 + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar7 = in(0x12);
  uVar6 = CONCAT31((int3)(uVar4 >> 8),uVar7);
  pbVar12 = (byte *)(ulonglong)uVar6;
  bVar18 = *pbVar12;
  *pbVar12 = *pbVar12 + bVar14;
  uVar4 = *(uint *)(unaff_RBP & 0xffffffff);
  uVar5 = (uint)unaff_RBP - *(uint *)(unaff_RBP & 0xffffffff);
  uVar9 = uVar5 - CARRY1(bVar18,bVar14);
  pbVar12 = (byte *)(ulonglong)uVar9;
  iVar2 = *(int *)(unaff_RDI + 0x6908001b);
  *param_4 = *param_4;
  *pbVar12 = *pbVar12 + (char)uVar9;
  bVar1 = *pbVar12;
  bVar15 = (byte)(uVar9 >> 8);
  *pbVar12 = *pbVar12 + bVar15;
  uVar9 = (uint)CARRY1(bVar1,bVar15);
  uVar11 = uVar6 - *(uint *)(ulonglong)uVar6;
  uVar10 = uVar11 - uVar9;
  pbVar12 = (byte *)(ulonglong)uVar10;
  uVar9 = (int)param_2 + iVar2 + (uint)((uint)unaff_RBP < uVar4 || uVar5 < CARRY1(bVar18,bVar14)) +
          *(int *)(unaff_RDI + 0x6908001b) +
          (uint)(uVar6 < *(uint *)(ulonglong)uVar6 || uVar11 < uVar9);
  *param_4 = *param_4;
  *(byte *)(ulonglong)uVar9 = *(byte *)(ulonglong)uVar9 | (byte)uVar10;
  bVar18 = *pbVar12;
  *pbVar12 = *pbVar12 + (byte)param_1;
  pbVar12[in_FS_OFFSET] = pbVar12[in_FS_OFFSET] + (byte)uVar10 + CARRY1(bVar18,(byte)param_1);
  param_1[-0x6691ffe5] = param_1[-0x6691ffe5] ^ unaff_BL;
  uVar10 = uVar10 - *(int *)pbVar12;
  puVar13 = (uint *)(ulonglong)uVar10;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1;
  *(byte *)puVar13 = (byte)*puVar13 + (char)uVar10;
  uVar4 = *puVar13;
  bVar18 = (byte)(uVar9 >> 8);
  *(byte *)puVar13 = (byte)*puVar13 + bVar18;
  uVar5 = (uint)CARRY1((byte)uVar4,bVar18);
  uVar4 = *puVar13;
  uVar9 = *puVar13;
  uVar11 = (uVar10 - uVar9) - uVar5;
  out(*unaff_RSI,(short)((int)uVar10 >> 0x1f));
  pcVar17 = (char *)(ulonglong)(uint)((int)uVar11 >> 0x1f);
  uVar3 = *(undefined4 *)(ulonglong)uVar11;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1 + (((char)uVar11 - (char)uVar3) - (uVar10 < uVar4 || uVar10 - uVar9 < uVar5));
  cVar16 = (char)((int)uVar11 >> 0x1f);
  *pcVar17 = *pcVar17 + cVar16;
  cVar8 = in(0x11);
  *pcVar17 = *pcVar17 + cVar16;
  if (*pcVar17 != '\0') {
    *pcVar17 = *pcVar17 + cVar16;
    puVar13 = (uint *)CONCAT71((uint7)(uint3)((int)uVar11 >> 0x1f),0xb);
    *puVar13 = *puVar13 & (int)unaff_RSI + 1U;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001b04b79cd = cRam00000001b04b79cd + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

