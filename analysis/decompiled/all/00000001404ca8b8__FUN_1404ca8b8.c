// Function: FUN_1404ca8b8
// Addr: 1404ca8b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca8f1) overlaps instruction at (ram,0x0001404ca8f0)
    */

void FUN_1404ca8b8(char *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  char cVar11;
  undefined8 in_RAX;
  ulonglong uVar8;
  char *pcVar10;
  byte bVar12;
  char *pcVar13;
  char cVar15;
  char unaff_BL;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  undefined1 auStack_8 [8];
  int iVar3;
  byte *pbVar9;
  char cVar14;
  
  cVar15 = (char)((ulonglong)param_2 >> 8);
  cVar14 = (char)in_RAX;
  pcVar10 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0xa7,cVar14));
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + cVar14;
  *pcVar10 = *pcVar10 + cVar14;
  uVar8 = CONCAT71((int7)((ulonglong)pcVar10 >> 8),cVar14) ^ 9;
  pcVar10 = (char *)(uVar8 + 0x210032fd);
  *pcVar10 = *pcVar10 + -0x59;
  *param_2 = *param_2 + 1;
  *(char *)(unaff_RDI + 0x1001004c) = *(char *)(unaff_RDI + 0x1001004c) + cVar15;
  uVar7 = (int)uVar8 + 0xca21000;
  pbVar9 = (byte *)(ulonglong)uVar7;
  param_1 = param_1 + -1;
  bVar12 = (byte)param_1;
  cVar14 = (char)((ulonglong)param_1 >> 8);
  if (param_1 != (char *)0x0 && uVar7 != 0) {
    cRam00000001554cb3dd = cRam00000001554cb3dd + (char)(uVar7 >> 8);
    if (cRam00000001554cb3dd == '\0') goto code_r0x0001404ca8fd;
    *pbVar9 = *pbVar9 + bVar12;
  }
  *pbVar9 = *pbVar9 >> 1 | *pbVar9 << 7;
  *unaff_RSI = *unaff_RSI;
  *pbVar9 = *pbVar9 + (byte)uVar7;
  uRam000000013471a8ec = uRam000000013471a8ec & (uint)&stack0x00000000;
  uVar7 = CONCAT31((int3)(uVar7 >> 8),(byte)uVar7 | *pbVar9);
  uVar4 = uVar7 + 0x8001274;
  pbVar9 = (byte *)(ulonglong)uVar4;
  pbVar1 = pbVar9 + in_FS_OFFSET;
  uVar7 = (uint)(0xf7ffed8b < uVar7);
  iVar2 = *(int *)pbVar1;
  iVar3 = *(int *)pbVar1;
  *(uint *)pbVar1 = iVar3 + uVar4 + uVar7;
  if (SCARRY4(iVar2,uVar4) == SCARRY4(iVar3 + uVar4,uVar7)) {
    bVar5 = (byte)uVar4 ^ *pbVar9;
    pbVar9 = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar5);
    unaff_RDI = unaff_RDI + 4;
    *pbVar9 = *pbVar9 + bVar5;
  }
  else {
    *(char *)(unaff_RDI + 0x32ff) = *(char *)(unaff_RDI + 0x32ff) + cVar14;
  }
  register0x00000020 = (BADSPACEBASE *)auStack_8;
  *param_1 = *param_1 + (char)((ulonglong)pbVar9 >> 8);
code_r0x0001404ca8fd:
  bVar6 = (byte)pbVar9;
  *param_2 = *param_2 | bVar6;
  bVar5 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar12;
  *(BADSPACEBASE **)((longlong)register0x00000020 + -8) = register0x00000020;
  *pbVar9 = *pbVar9 + bVar6 + CARRY1(bVar5,bVar12);
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = *(undefined8 *)param_2;
  cVar14 = cVar14 + cVar15;
  pcVar13 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar14,bVar12));
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = *(undefined8 *)param_2;
  *pbVar9 = *pbVar9 + (char)param_2;
  cVar11 = (char)((ulonglong)pbVar9 >> 8);
  *pcVar13 = *pcVar13 + cVar11;
  *pbVar9 = *pbVar9 + bVar6;
  *(char *)(unaff_RDI + -0xaffccfd) = *(char *)(unaff_RDI + -0xaffccfd) + cVar14;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = *(undefined8 *)param_2;
  *pbVar9 = *pbVar9 + (char)param_2;
  *pcVar13 = *pcVar13 + cVar11;
  *pbVar9 = *pbVar9 + bVar6;
  pbVar9[-1] = pbVar9[-1] + cVar15;
  bVar12 = *pbVar9;
  pcVar10 = (char *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),bVar6 ^ bVar12);
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = *(undefined8 *)param_2;
  *pcVar10 = *pcVar10 + (bVar6 ^ bVar12);
  *pcVar13 = *pcVar13 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

