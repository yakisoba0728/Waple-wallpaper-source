// Function: FUN_1404ca8c8
// Addr: 1404ca8c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca8f1) overlaps instruction at (ram,0x0001404ca8f0)
    */

void FUN_1404ca8c8(byte *param_1,byte *param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  char cVar10;
  byte *in_RAX;
  byte *pbVar8;
  char *pcVar9;
  byte bVar11;
  char *pcVar12;
  char cVar14;
  char unaff_BL;
  uint unaff_ESI;
  undefined1 *puVar15;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 auStack_8 [8];
  int iVar3;
  char cVar13;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  puVar15 = (undefined1 *)(ulonglong)(unaff_ESI & (uint)unaff_RDI);
  bVar5 = (byte)in_RAX ^ *in_RAX;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0xa7,bVar5));
  bVar11 = *param_1;
  *param_1 = *param_1 + param_3;
  cRam000000014ceeb8d7 = cRam000000014ceeb8d7 + bVar5 + CARRY1(bVar11,param_3);
  param_1 = param_1 + -1;
  bVar11 = (byte)param_1;
  cVar13 = (char)((ulonglong)param_1 >> 8);
  if (param_1 != (byte *)0x0 && cRam000000014ceeb8d7 != '\0') {
    cRam00000001554cb3dd = cRam00000001554cb3dd + -0x59;
    if (cRam00000001554cb3dd == '\0') goto code_r0x0001404ca8fd;
    *pbVar8 = *pbVar8 + bVar11;
  }
  *pbVar8 = *pbVar8 >> 1 | *pbVar8 << 7;
  *puVar15 = *puVar15;
  *pbVar8 = *pbVar8 + bVar5;
  uRam000000013471a8ec = uRam000000013471a8ec & (uint)&stack0x00000000;
  uVar7 = (uint)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar5 | *pbVar8);
  uVar4 = uVar7 + 0x8001274;
  pbVar8 = (byte *)(ulonglong)uVar4;
  pbVar1 = pbVar8 + in_FS_OFFSET;
  uVar7 = (uint)(0xf7ffed8b < uVar7);
  iVar2 = *(int *)pbVar1;
  iVar3 = *(int *)pbVar1;
  *(uint *)pbVar1 = iVar3 + uVar4 + uVar7;
  if (SCARRY4(iVar2,uVar4) == SCARRY4(iVar3 + uVar4,uVar7)) {
    bVar5 = (byte)uVar4 ^ *pbVar8;
    pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar5);
    unaff_RDI = unaff_RDI + 4;
    *pbVar8 = *pbVar8 + bVar5;
  }
  else {
    *(char *)(unaff_RDI + 0x32ff) = *(char *)(unaff_RDI + 0x32ff) + cVar13;
  }
  register0x00000020 = (BADSPACEBASE *)auStack_8;
  *param_1 = *param_1 + (char)((ulonglong)pbVar8 >> 8);
code_r0x0001404ca8fd:
  bVar6 = (byte)pbVar8;
  *param_2 = *param_2 | bVar6;
  bVar5 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar11;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  *pbVar8 = *pbVar8 + bVar6 + CARRY1(bVar5,bVar11);
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)param_2;
  cVar13 = cVar13 + cVar14;
  pcVar12 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar13,bVar11));
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = *(undefined8 *)param_2;
  *pbVar8 = *pbVar8 + (char)param_2;
  cVar10 = (char)((ulonglong)pbVar8 >> 8);
  *pcVar12 = *pcVar12 + cVar10;
  *pbVar8 = *pbVar8 + bVar6;
  *(char *)(unaff_RDI + -0xaffccfd) = *(char *)(unaff_RDI + -0xaffccfd) + cVar13;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = *(undefined8 *)param_2;
  *pbVar8 = *pbVar8 + (char)param_2;
  *pcVar12 = *pcVar12 + cVar10;
  *pbVar8 = *pbVar8 + bVar6;
  pbVar8[-1] = pbVar8[-1] + cVar14;
  bVar11 = *pbVar8;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),bVar6 ^ bVar11);
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = *(undefined8 *)param_2;
  *pcVar9 = *pcVar9 + (bVar6 ^ bVar11);
  *pcVar12 = *pcVar12 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

