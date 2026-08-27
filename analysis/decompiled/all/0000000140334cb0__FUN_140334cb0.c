// Function: FUN_140334cb0
// Addr: 140334cb0
// Size: 874 bytes


void FUN_140334cb0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 local_res8 [2];
  undefined8 local_res20;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar17;
  undefined4 uVar18;
  
  lVar2 = *(longlong *)(param_1 + 0xf0);
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  iVar9 = *(int *)(param_1 + 0xa4);
  local_res8[0] = 0;
  local_res20 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = *(longlong *)(lVar2 + 0x328);
  bVar16 = *(longlong *)(param_1 + 0xf8) != lVar3;
  if (bVar16) {
    *(longlong *)(param_1 + 0xf8) = lVar3;
  }
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(*(longlong *)(lVar2 + 800) + 0x1110) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x288);
    in_stack_ffffffffffffffa8 = 0;
    iVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x2e0) + 0x88))
                      (*(longlong *)(lVar2 + 8),local_res8,0,&local_res20,0);
    *(int *)(param_1 + 8) = iVar7;
    if (iVar7 != 0) {
      return;
    }
    cVar5 = (**(code **)(lVar4 + 0x18))
                      (lVar3 + 0x230,*(undefined4 *)(lVar3 + 0x220),local_res8[0],local_res20);
    if (cVar5 != '\0') {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar2 + 800),lVar3,local_res8[0],local_res20);
    }
    bVar16 = cVar5 != '\0' || bVar16;
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar3 + 0x238);
    *(undefined1 *)(param_1 + 0x61) = 0;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar3 + 0x220);
    *(undefined4 *)(param_1 + 0x94) = local_res8[0];
    *(undefined8 *)(param_1 + 0x98) = local_res20;
  }
  iVar7 = *(int *)(param_1 + 0x5c);
  iVar12 = (uint)*(ushort *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x80) + 0x1a) << 0x10;
  if (iVar7 != iVar12) {
    *(int *)(param_1 + 0x5c) = iVar12;
    bVar16 = true;
    iVar7 = iVar12;
  }
  *(byte *)(param_1 + 0x100) = (byte)*(uint *)(param_1 + 0x10) & 1;
  if ((*param_2 != *(longlong *)(param_1 + 0x14)) || (param_2[1] != *(longlong *)(param_1 + 0x1c)))
  {
    lVar3 = param_2[1];
    bVar16 = true;
    *(longlong *)(param_1 + 0x14) = *param_2;
    *(longlong *)(param_1 + 0x1c) = lVar3;
    *(undefined8 *)(param_1 + 0x24) = 0;
    uVar18 = *(undefined4 *)((longlong)param_2 + 4);
    lVar3 = param_2[1];
    uVar10 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 0x2c) = (int)*param_2;
    *(undefined4 *)(param_1 + 0x30) = uVar18;
    *(int *)(param_1 + 0x34) = (int)lVar3;
    *(undefined4 *)(param_1 + 0x38) = uVar10;
    *(longlong *)(param_1 + 0x3c) = param_2[2];
    *(undefined4 *)(param_1 + 0x50) = 0x10000;
    *(undefined8 *)(param_1 + 0x44) = 0x10000;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  uVar11 = *(uint *)(param_1 + 0x10) & 2;
  if (*(byte *)(param_1 + 0x102) == uVar11) {
    if (!bVar16) {
      return;
    }
  }
  else {
    *(bool *)(param_1 + 0x102) = uVar11 != 0;
  }
  uVar14 = 0x4b0000;
  iVar12 = *(int *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar12 = 1000;
  }
  iVar8 = *(int *)(*(longlong *)(lVar2 + 0x328) + 0x18c);
  if (iVar7 < 0x40000) {
    iVar7 = 0x40000;
  }
  iVar13 = iVar8 << 0x10;
  uVar17 = 0x3e80000 / (longlong)iVar12;
  *(int *)(param_1 + 0x124) = iVar13;
  uVar15 = uVar17 & 0xffffffff;
  if (iVar8 << 0x10 < 1) {
    iVar13 = FUN_1402efa10(0x4b0000,uVar17 & 0xffffffff);
    *(int *)(param_1 + 0x124) = iVar13;
  }
  uVar18 = (undefined4)(in_stack_ffffffffffffffa8 >> 0x20);
  if (iVar9 < 1) {
    uVar17 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
    FUN_140334280(uVar15,iVar7,iVar13,param_1 + 300,uVar17,*(undefined1 *)(param_1 + 0x102),
                  param_1 + 0x104);
    uVar18 = (undefined4)(uVar17 >> 0x20);
  }
  else {
    iVar8 = FUN_1402efa10(iVar12 << 0x10);
    if (iVar9 <= iVar8) {
      iVar9 = FUN_1402efa10(iVar12 << 0x10,iVar7);
    }
    *(int *)(param_1 + 300) = 0;
    if ((iVar9 != 0) && (0x28e < (int)uVar17)) {
      *(int *)(param_1 + 300) = iVar9 / 2;
    }
  }
  iVar9 = *(int *)(*(longlong *)(lVar2 + 0x328) + 0x188);
  if ((iVar9 << 0x10 < 1) || (*(int *)(param_1 + 0x124) <= iVar9 * 0x20000)) {
    uVar14 = 0x6e0000;
  }
  uVar10 = FUN_1402efa10(uVar14,uVar15);
  *(undefined4 *)(param_1 + 0x128) = uVar10;
  FUN_140334280(uVar15,iVar7,uVar10,param_1 + 0x130,CONCAT44(uVar18,uVar1),
                *(undefined1 *)(param_1 + 0x102),param_1 + 0x104);
  if ((*(int *)(param_1 + 300) == 0) && (*(int *)(param_1 + 0x130) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 0x101) = uVar6;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_140333bc0(param_1 + 0x138,param_1);
  return;
}

