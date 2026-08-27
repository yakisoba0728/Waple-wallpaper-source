// Function: FUN_1403d8af0
// Addr: 1403d8af0
// Size: 1002 bytes


void FUN_1403d8af0(longlong *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong uVar17;
  uint local_38 [3];
  undefined8 local_2c;
  
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_1[3] + 0x38);
  pbVar1 = (byte *)(param_1[3] + 0xd0);
  *pbVar1 = *pbVar1 | 0x30;
  lVar4 = param_1[3];
  uVar13 = 0;
  uVar2 = *(undefined4 *)(*param_1 + 0x34);
  uVar9 = uVar13;
  if (*(int *)(lVar4 + 0x60) != 0) {
    do {
      uVar11 = (int)uVar9 + 1;
      *(undefined4 *)(*(longlong *)(lVar4 + 0x70) + 4 + uVar9 * 0x14) = uVar2;
      uVar9 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)(lVar4 + 0x60));
  }
  FUN_1403dd8e0(param_1[3]);
  lVar4 = param_1[3];
  if ((((((byte)*(undefined4 *)(lVar4 + 0x18) & 0x11) == 1) && (*(int *)(lVar4 + 0xb0) == 0)) &&
      ((*(ushort *)(*(longlong *)(lVar4 + 0x70) + 0x10) & 0x1f) - 10 < 3)) &&
     (cVar8 = FUN_1403d0d90(param_1[1],0x25cc), cVar8 != '\0')) {
    local_38[1] = 0;
    local_38[2] = 0;
    local_2c = 0;
    local_38[0] = 0x25cc;
    FUN_14039ee40(local_38,lVar4);
    lVar5 = *(longlong *)(lVar4 + 0x70);
    *(undefined2 *)(lVar4 + 0x59) = 1;
    *(undefined4 *)(lVar4 + 100) = 0;
    *(longlong *)(lVar4 + 0x78) = lVar5;
    *(undefined4 *)(lVar4 + 0x5c) = 0;
    uVar2 = *(undefined4 *)(lVar5 + 8);
    uVar3 = *(undefined4 *)(lVar5 + 4);
    cVar8 = FUN_1403eaf70(lVar4,0);
    if (cVar8 != '\0') {
      uVar9 = (ulonglong)*(uint *)(lVar4 + 100);
      lVar5 = *(longlong *)(lVar4 + 0x78);
      *(uint *)(lVar5 + uVar9 * 0x14) = local_38[0];
      *(undefined4 *)(lVar5 + 4 + uVar9 * 0x14) = uVar3;
      *(undefined4 *)(lVar5 + 8 + uVar9 * 0x14) = uVar2;
      *(undefined8 *)(lVar5 + uVar9 * 0x14 + 0xc) = local_2c;
      *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
    }
    FUN_14040c900(lVar4);
  }
  lVar4 = param_1[3];
  if (((*(byte *)(lVar4 + 0xd8) & 0x80) != 0) &&
     (uVar11 = *(uint *)(lVar4 + 0x60), uVar9 = uVar13, uVar11 != 0)) {
    do {
      uVar14 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar14;
      if (uVar11 <= uVar14) break;
    } while (*(char *)(*(longlong *)(lVar4 + 0x70) + 0x10 + uVar9 * 0x14) < '\0');
    uVar17 = uVar13;
    if (uVar11 != 0) {
      do {
        uVar15 = uVar9;
        if (1 < (uint)uVar15 - (int)uVar17) {
          if ((1 << ((byte)*(undefined4 *)(lVar4 + 0x1c) & 0x1f) & 9U) == 0) {
            FUN_14040eef0();
          }
          else {
            FUN_1403ec280(lVar4,uVar17,uVar15);
          }
        }
        uVar9 = uVar15;
        do {
          uVar14 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar14;
          if (*(uint *)(lVar4 + 0x60) <= uVar14) break;
        } while (*(char *)(*(longlong *)(lVar4 + 0x70) + 0x10 + uVar9 * 0x14) < '\0');
        uVar17 = uVar15;
      } while ((uint)uVar15 < uVar11);
    }
  }
  lVar4 = param_1[3];
  uVar11 = *(uint *)(lVar4 + 0x38);
  uVar14 = FUN_140418c60(*(undefined4 *)(lVar4 + 0x3c));
  if ((uVar14 == 5) && (uVar11 == 4)) {
    bVar6 = false;
    bVar16 = false;
    if (*(uint *)(lVar4 + 0x60) != 0) {
      do {
        uVar10 = *(ushort *)(*(longlong *)(lVar4 + 0x70) + 0x10 + uVar13 * 0x14) & 0x1f;
        if (uVar10 - 5 < 5) {
          bVar7 = true;
          goto LAB_1403d8d47;
        }
        if (uVar10 == 0xd) {
          bVar6 = true;
        }
        else if (*(int *)(*(longlong *)(lVar4 + 0x70) + uVar13 * 0x14) - 0x1f1e6U < 0x1a) {
          bVar16 = true;
        }
        uVar10 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(lVar4 + 0x60));
      bVar7 = false;
LAB_1403d8d47:
      if (((bVar6) || (bVar16)) && (!bVar7)) goto LAB_1403d8d93;
    }
  }
  if ((uVar11 & 0xfffffffe) == 4) {
    if ((uVar11 == uVar14) || ((uVar14 & 0xfffffffc) != 4)) goto LAB_1403d8d93;
  }
  else if (((uVar11 & 0xfffffffe) != 6) || (uVar11 == 6)) goto LAB_1403d8d93;
  FUN_14038b870(lVar4,&LAB_14039efa0,*(int *)(lVar4 + 0x1c) == 1);
  *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) ^ 1;
LAB_1403d8d93:
  if ((*(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x20) != 0) &&
     (cVar8 = FUN_1403ec530(param_1[3],param_1[1],"start preprocess-text"), cVar8 != '\0')) {
    (**(code **)(*(longlong *)(*param_1 + 0x20) + 0x20))(*param_1,param_1[3],param_1[1]);
    FUN_1403ec530(param_1[3],param_1[1],"end preprocess-text");
  }
  FUN_1403d9920(param_1);
  *(byte *)(param_1[3] + 0xd0) = *(byte *)(param_1[3] + 0xd0) | 7;
  FUN_1403d9c20(param_1);
  if (((*(byte *)(*param_1 + 0xb5) & 0x11) == 0x11) &&
     ((*(uint *)(param_1[3] + 0xd8) & 0x1000000) != 0)) {
    FUN_1403bdd10(param_1[3],&LAB_1403e6a20);
  }
  lVar4 = param_1[3];
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar4 + 0x70);
  *(undefined4 *)(lVar4 + 100) = 0;
  *(undefined2 *)(lVar4 + 0x59) = 0x100;
  iVar12 = *(int *)(lVar4 + 0x60) * 0x14;
  if (iVar12 != 0) {
    FUN_1404217a0(*(undefined8 *)(lVar4 + 0x80),0,iVar12);
  }
  FUN_1403d7710(param_1);
  FUN_1403d7930(param_1);
  lVar4 = param_1[3];
  if ((*(uint *)(lVar4 + 0x38) & 0xfffffffd) == 5) {
    FUN_1403f8e70(lVar4,0,*(undefined4 *)(lVar4 + 0x60));
  }
  *(byte *)(param_1[3] + 0xd0) = *(byte *)(param_1[3] + 0xd0) & 0xf8;
  FUN_1403d9ef0(param_1);
  FUN_1403dd530(param_1[3]);
  *(byte *)(param_1[3] + 0xd0) = *(byte *)(param_1[3] + 0xd0) & 0xcf;
  *(undefined4 *)(param_1[3] + 0x38) = *(undefined4 *)((longlong)param_1 + 0x2c);
  return;
}

