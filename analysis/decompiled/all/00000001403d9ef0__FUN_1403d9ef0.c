// Function: FUN_1403d9ef0
// Addr: 1403d9ef0
// Size: 512 bytes


void FUN_1403d9ef0(longlong *param_1)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  if (((*(byte *)(*param_1 + 0xb5) & 0x11) == 0x10) &&
     ((*(uint *)(param_1[3] + 0xd8) & 0x1000000) != 0)) {
    FUN_1403bdd10(param_1[3],&LAB_1403e6a20);
  }
  lVar5 = param_1[3];
  uVar13 = 0;
  if (((*(byte *)(lVar5 + 0xd8) & 0x40) != 0) && (*(int *)(lVar5 + 0x2c) != -1)) {
    uVar4 = *(uint *)(lVar5 + 0x60);
    lVar6 = *(longlong *)(lVar5 + 0x70);
    lVar7 = *(longlong *)(lVar5 + 0x80);
    uVar10 = uVar13;
    uVar12 = uVar13;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar12 * 0x14;
        uVar3 = *(ushort *)(lVar1 + 0x10 + lVar6);
        if ((((byte)uVar3 & 0x1f) == 1) && ((uVar3 >> 10 & 1) != 0)) {
          *(undefined4 *)(lVar1 + lVar6) = *(undefined4 *)(lVar5 + 0x2c);
          *(undefined8 *)(lVar1 + 8 + lVar7) = 0;
          *(undefined8 *)(lVar1 + lVar7) = 0;
          puVar2 = (ushort *)(lVar1 + 0x10 + lVar6);
          *puVar2 = *puVar2 & 0xe0;
          puVar2 = (ushort *)(lVar1 + 0x10 + lVar6);
          *puVar2 = *puVar2 | 0xc;
        }
        uVar11 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar11;
        uVar12 = uVar12 + 1;
      } while (uVar11 < uVar4);
    }
  }
  lVar5 = param_1[3];
  if (((*(byte *)(lVar5 + 0xd8) & 2) == 0) || ((*(uint *)(lVar5 + 0x18) & 4) != 0))
  goto LAB_1403da085;
  local_res8[0] = *(int *)(lVar5 + 0x24);
  if ((*(uint *)(lVar5 + 0x18) & 8) == 0) {
    uVar4 = *(uint *)(lVar5 + 0x60);
    lVar6 = *(longlong *)(lVar5 + 0x70);
    if (local_res8[0] == 0) {
      lVar7 = param_1[1];
      local_res8[0] = 0;
      lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0x90) + 0x10);
      uVar10 = uVar13;
      if (lVar1 != 0) {
        uVar10 = *(ulonglong *)(lVar1 + 0x10);
      }
      iVar9 = (**(code **)(*(longlong *)(lVar7 + 0x90) + 0x30))
                        (lVar7,*(undefined8 *)(lVar7 + 0x98),0x20,local_res8,uVar10);
      if (iVar9 == 0) goto LAB_1403da076;
    }
    if (uVar4 != 0) {
      do {
        if (((*(byte *)(lVar6 + 0x10 + uVar13 * 0x14) & 0x20) != 0) &&
           ((*(byte *)(lVar6 + 0xc + uVar13 * 0x14) & 0x10) == 0)) {
          *(int *)(lVar6 + uVar13 * 0x14) = local_res8[0];
        }
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar11;
      } while (uVar11 < uVar4);
    }
  }
  else {
LAB_1403da076:
    FUN_1403bdd10(lVar5,&LAB_14039ee20);
  }
LAB_1403da085:
  if ((*(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x28) != 0) &&
     (cVar8 = FUN_1403ec530(param_1[3],param_1[1],"start postprocess-glyphs"), cVar8 != '\0')) {
    (**(code **)(*(longlong *)(*param_1 + 0x20) + 0x28))(*param_1,param_1[3],param_1[1]);
    FUN_1403ec530(param_1[3],param_1[1],"end postprocess-glyphs");
    return;
  }
  return;
}

