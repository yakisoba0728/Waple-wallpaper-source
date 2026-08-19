// Function: FUN_1404ca89c
// Addr: 1404ca89c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca8f1) overlaps instruction at (ram,0x0001404ca8f0)
    */

void FUN_1404ca89c(char *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar11;
  int in_EAX;
  uint uVar8;
  char *pcVar10;
  char *pcVar12;
  char cVar14;
  char unaff_BL;
  uint unaff_ESI;
  undefined1 *puVar15;
  longlong unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  undefined1 auStack_8 [8];
  int iVar3;
  byte *pbVar9;
  char cVar13;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  uVar8 = in_EAX + 0xa0000934;
  bVar5 = (byte)uVar8 ^ *(byte *)(ulonglong)uVar8;
  puVar15 = (undefined1 *)(ulonglong)(unaff_ESI & (uint)unaff_RDI);
  bVar5 = bVar5 ^ *(byte *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar5);
  uVar8 = CONCAT22((short)(uVar8 >> 0x10),CONCAT11(0xa7,bVar5));
  pcVar10 = (char *)(ulonglong)uVar8;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar10 = *pcVar10 + bVar5;
  pcVar10[0x210032fd] = pcVar10[0x210032fd] + -0x59;
  *param_2 = *param_2 + 1;
  *(char *)(unaff_RDI + 0x21004c) = *(char *)(unaff_RDI + 0x21004c) + cVar14;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar5 + *pcVar10);
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + cVar14;
  pcVar10 = (char *)((ulonglong)uVar8 + 0x210032fd);
  *pcVar10 = *pcVar10 + -0x59;
  *param_2 = *param_2 + 1;
  *(char *)(unaff_RDI + 0x1001004c) = *(char *)(unaff_RDI + 0x1001004c) + cVar14;
  uVar8 = uVar8 + 0xca21000;
  pbVar9 = (byte *)(ulonglong)uVar8;
  param_1 = param_1 + -1;
  bVar5 = (byte)param_1;
  cVar13 = (char)((ulonglong)param_1 >> 8);
  if (param_1 != (char *)0x0 && uVar8 != 0) {
    cRam00000001554cb3dd = cRam00000001554cb3dd + (char)(uVar8 >> 8);
    if (cRam00000001554cb3dd == '\0') goto code_r0x0001404ca8fd;
    *pbVar9 = *pbVar9 + bVar5;
  }
  *pbVar9 = *pbVar9 >> 1 | *pbVar9 << 7;
  *puVar15 = *puVar15;
  *pbVar9 = *pbVar9 + (byte)uVar8;
  uRam000000013471a8ec = uRam000000013471a8ec & (uint)&stack0x00000000;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),(byte)uVar8 | *pbVar9);
  uVar4 = uVar8 + 0x8001274;
  pbVar9 = (byte *)(ulonglong)uVar4;
  pbVar1 = pbVar9 + in_FS_OFFSET;
  uVar8 = (uint)(0xf7ffed8b < uVar8);
  iVar2 = *(int *)pbVar1;
  iVar3 = *(int *)pbVar1;
  *(uint *)pbVar1 = iVar3 + uVar4 + uVar8;
  if (SCARRY4(iVar2,uVar4) == SCARRY4(iVar3 + uVar4,uVar8)) {
    bVar6 = (byte)uVar4 ^ *pbVar9;
    pbVar9 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar6);
    unaff_RDI = unaff_RDI + -4;
    *pbVar9 = *pbVar9 + bVar6;
  }
  else {
    *(char *)(unaff_RDI + 0x32ff) = *(char *)(unaff_RDI + 0x32ff) + cVar13;
  }
  register0x00000020 = (BADSPACEBASE *)auStack_8;
  *param_1 = *param_1 + (char)((ulonglong)pbVar9 >> 8);
code_r0x0001404ca8fd:
  bVar7 = (byte)pbVar9;
  *param_2 = *param_2 | bVar7;
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  *pbVar9 = *pbVar9 + bVar7 + CARRY1(bVar6,bVar5);
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)param_2;
  cVar13 = cVar13 + cVar14;
  pcVar12 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar13,bVar5));
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = *(undefined8 *)param_2;
  *pbVar9 = *pbVar9 + (char)param_2;
  cVar11 = (char)((ulonglong)pbVar9 >> 8);
  *pcVar12 = *pcVar12 + cVar11;
  *pbVar9 = *pbVar9 + bVar7;
  *(char *)(unaff_RDI + -0xaffcd05) = *(char *)(unaff_RDI + -0xaffcd05) + cVar13;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = *(undefined8 *)param_2;
  *pbVar9 = *pbVar9 + (char)param_2;
  *pcVar12 = *pcVar12 + cVar11;
  *pbVar9 = *pbVar9 + bVar7;
  pbVar9[-1] = pbVar9[-1] + cVar14;
  bVar5 = *pbVar9;
  pcVar10 = (char *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),bVar7 ^ bVar5);
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = *(undefined8 *)param_2;
  *pcVar10 = *pcVar10 + (bVar7 ^ bVar5);
  *pcVar12 = *pcVar12 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

