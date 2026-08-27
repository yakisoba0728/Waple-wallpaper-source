// Function: FUN_140332370
// Addr: 140332370
// Size: 1046 bytes


/* WARNING: Removing unreachable block (ram,0x000140332416) */

undefined8 FUN_140332370(undefined8 *param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int local_res8 [2];
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [6];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  cVar2 = *(char *)((longlong)param_1 + 0x5c);
  if ((cVar2 != '\0') && (param_1[0x65] == 0)) {
    return 8;
  }
  puVar17 = *(undefined8 **)param_1[0x66];
  if (puVar17 == (undefined8 *)0x0) {
    uVar8 = *param_1;
    ((longlong *)param_1[0x66])[1] = (longlong)FUN_140335020;
    puVar17 = (undefined8 *)param_1[0x66];
    uVar16 = FUN_1402f7e90(uVar8,0x290);
    *puVar17 = uVar16;
    puVar17 = *(undefined8 **)param_1[0x66];
    *puVar17 = uVar8;
    if (cVar2 == '\0') {
      puVar17[0x51] = *(undefined8 *)(param_1[100] + 0x10e0);
    }
    puVar17[0x18] = 0;
    puVar17[0x1a] = 0;
    puVar17[0x1c] = puVar17 + 1;
    puVar17[0x16] = FUN_140334260;
    puVar17[0x17] = FUN_140334200;
    puVar17[0x19] = FUN_1403340c0;
    puVar17[0x1b] = uVar8;
  }
  puVar17[0x1e] = param_1;
  puVar17[0x1d] = param_1;
  lVar9 = param_1[1];
  local_58 = 0;
  lVar10 = *(longlong *)(lVar9 + 0x90);
  cVar3 = *(char *)(lVar10 + 0x3c);
  cVar4 = *(char *)(*(longlong *)(lVar9 + 0xd0) + 0x58);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,cVar3);
  if (param_2 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = (ulonglong)param_3 + param_2;
  }
  lVar11 = param_1[2];
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  cVar5 = *(char *)(lVar11 + 0xf8);
  cVar6 = *(char *)(lVar11 + 0xf9);
  if (cVar5 == '\0') {
    local_70[0] = 0x400;
    local_70[3] = 0x400;
  }
  else {
    iVar14 = *(int *)(lVar11 + 0xfc) + 0x20;
    local_70[0] = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fU)) >> 6;
    iVar14 = *(int *)(lVar11 + 0x100) + 0x20;
    local_70[3] = (int)(iVar14 + (iVar14 >> 0x1f & 0x3fU)) >> 6;
  }
  iVar12 = local_70[3];
  iVar14 = local_70[0];
  if (cVar2 == '\0') {
    uVar13 = *(undefined1 *)(lVar9 + 0x400);
  }
  else {
    uVar13 = 0;
  }
  *(undefined1 *)((longlong)puVar17 + 0xd) = uVar13;
  *(char *)((longlong)puVar17 + 0xc) = cVar2;
  *(undefined4 *)(puVar17 + 2) = 0;
  if (cVar5 != '\0') {
    *(undefined4 *)(puVar17 + 2) = 1;
  }
  if ((cVar6 != '\0') && ((cVar4 == '\0' || ((cVar4 < '\0' && (cVar3 == '\0')))))) {
    *(uint *)(puVar17 + 2) = cVar5 != '\0' | 2;
  }
  *(undefined4 *)((longlong)puVar17 + 0x104) = *(undefined4 *)(lVar10 + 0x40);
  *(undefined4 *)(puVar17 + 0x21) = *(undefined4 *)(lVar10 + 0x44);
  *(undefined4 *)((longlong)puVar17 + 0x10c) = *(undefined4 *)(lVar10 + 0x48);
  *(undefined4 *)(puVar17 + 0x22) = *(undefined4 *)(lVar10 + 0x4c);
  *(undefined4 *)((longlong)puVar17 + 0x114) = *(undefined4 *)(lVar10 + 0x50);
  *(undefined4 *)(puVar17 + 0x23) = *(undefined4 *)(lVar10 + 0x54);
  *(undefined4 *)((longlong)puVar17 + 0x11c) = *(undefined4 *)(lVar10 + 0x58);
  *(undefined4 *)(puVar17 + 0x24) = *(undefined4 *)(lVar10 + 0x5c);
  uVar7 = *(ushort *)(param_1[1] + 0x68);
  *(uint *)(puVar17 + 0x14) = (uint)uVar7;
  local_50 = param_2;
  local_40 = param_2;
  if (cVar6 != '\0') {
    if ((local_70[0] < 1) || (local_70[3] < 1)) {
      return 0x24;
    }
    if (((0x7fff < uVar7) ||
        (iVar15 = FUN_1402efa10(0x7d00000,(ulonglong)uVar7 << 0x10), iVar15 < iVar14)) ||
       (iVar15 < iVar12)) {
      return 0xa4;
    }
  }
  local_78 = local_70[4];
  local_74 = local_70[5];
  local_res8[0] = 0;
  FUN_140334cb0(puVar17,local_70);
  iVar14 = *(int *)(puVar17 + 1);
  piVar1 = (int *)(puVar17 + 1);
  if (iVar14 == 0) {
    cVar2 = *(char *)((longlong)puVar17 + 0x101);
    *(undefined1 *)((longlong)puVar17 + 0x134) = 0;
    *(undefined4 *)(puVar17 + 0x1a) = 0;
    FUN_1402f1060(*(undefined8 *)(puVar17[0x1d] + 0x18));
    FUN_140336e40(puVar17,&local_58,puVar17 + 0x16,&local_78,0,0,0,local_res8);
    iVar14 = *piVar1;
    if (iVar14 == 0) {
      if ((cVar2 != '\0') && (*(int *)(puVar17 + 0x1a) < 0)) {
        *(undefined1 *)((longlong)puVar17 + 0x134) = 1;
        *(undefined4 *)(puVar17 + 0x1a) = 0;
        FUN_1402f1060(*(undefined8 *)(puVar17[0x1d] + 0x18));
        FUN_140336e40(puVar17,&local_58,puVar17 + 0x16,&local_78,0,0,0,local_res8);
        iVar14 = *piVar1;
        if (iVar14 != 0) goto LAB_140332721;
      }
      lVar9 = puVar17[0x1d];
      FUN_1403312d0(lVar9);
      FUN_1402f0740(*(undefined8 *)(lVar9 + 0x18));
      iVar14 = *piVar1;
    }
  }
LAB_140332721:
  if (piVar1 == (int *)0x0) {
    if (iVar14 != 0) {
      return 3;
    }
  }
  else {
    if (iVar14 != 0) {
      return 3;
    }
    *piVar1 = 0;
  }
  if (*(char *)(puVar17[0x1d] + 0x5c) == '\0') {
    **(int **)(puVar17[0x1d] + 0x338) = (int)(short)((uint)(local_res8[0] + 0x8000) >> 0x10);
  }
  return 0;
}

