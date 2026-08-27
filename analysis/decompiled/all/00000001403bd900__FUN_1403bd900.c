// Function: FUN_1403bd900
// Addr: 1403bd900
// Size: 573 bytes


void FUN_1403bd900(char *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  uint local_28;
  uint local_24;
  longlong local_20;
  
  if (param_3 < param_2) {
    return;
  }
  uVar11 = 0;
  uVar8 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x24);
  if ((int)*(uint *)(param_1 + 0x24) < 0) {
    uVar6 = uVar11;
  }
  uVar4 = (uint)uVar6;
  if (uVar4 != 0) {
    if ((0x3ffffffe < uVar4) || (local_20 = _realloc_base(0,uVar6 << 2), local_20 == 0)) {
      *param_1 = '\0';
      return;
    }
    local_28 = uVar4;
    if (uVar4 * 4 != 0) {
      FUN_1404217a0(local_20,0,uVar4 * 4);
    }
  }
  uVar6 = uVar11;
  uVar5 = uVar11;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar1 = *(int *)(lVar2 + uVar6 * 8);
      if ((iVar1 < param_2) || (uVar9 = uVar5, param_3 < iVar1)) {
        uVar9 = (ulonglong)((int)uVar5 + 1);
        *(undefined8 *)(lVar2 + uVar5 * 8) = *(undefined8 *)(lVar2 + uVar6 * 8);
      }
      uVar8 = (uint)uVar9;
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
      uVar5 = uVar9;
    } while (uVar7 < *(uint *)(param_1 + 0x14));
  }
  local_24 = uVar4;
  FUN_1403b48c0(param_1,&local_28,uVar8);
  if (*param_1 != '\0') {
    uVar10 = 0;
    if ((*(uint *)(param_1 + 0x24) < uVar8) && (*(uint *)(param_1 + 0x20) < uVar8)) {
      uVar10 = 0;
      if (uVar8 < 3) {
        uVar10 = 1;
      }
    }
    uVar6 = (ulonglong)uVar8;
    if ((int)uVar8 < 0) {
      uVar6 = uVar11;
    }
    uVar8 = (uint)uVar6;
    cVar3 = FUN_1403a5120(param_1 + 0x20,uVar6,uVar10);
    if (cVar3 != '\0') {
      uVar4 = *(uint *)(param_1 + 0x24);
      while (uVar4 < uVar8) {
        uVar5 = (ulonglong)uVar4;
        lVar2 = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(lVar2 + 8 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x18 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x20 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x28 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x30 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x38 + uVar5 * 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x40 + uVar5 * 0x48) = 0;
        *(undefined4 *)(lVar2 + uVar5 * 0x48) = 0;
        uVar4 = *(int *)(param_1 + 0x24) + 1;
        *(uint *)(param_1 + 0x24) = uVar4;
      }
      *(uint *)(param_1 + 0x24) = uVar8;
      cVar3 = FUN_1403a46a0(param_1 + 0x10,uVar6,0);
      if (cVar3 != '\0') {
        uVar4 = *(uint *)(param_1 + 0x14);
        if ((uVar4 < uVar8) && ((uVar8 - uVar4 & 0x1fffffff) != 0)) {
          FUN_1404217a0(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar4 * 8,0,(uVar8 - uVar4) * 8);
        }
        *(uint *)(param_1 + 0x14) = uVar8;
        goto LAB_1403bdb16;
      }
    }
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x14);
    if ((int)*(uint *)(param_1 + 0x14) < 0) {
      uVar6 = uVar11;
    }
    uVar8 = (uint)uVar6;
    cVar3 = FUN_1403a5120(param_1 + 0x20,uVar6,uVar10);
    if (cVar3 != '\0') {
      uVar4 = *(uint *)(param_1 + 0x24);
      if (uVar4 < uVar8) {
        do {
          uVar6 = (ulonglong)uVar4;
          lVar2 = *(longlong *)(param_1 + 0x28);
          *(undefined8 *)(lVar2 + 8 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x10 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x18 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x20 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x28 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x30 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x38 + uVar6 * 0x48) = 0;
          *(undefined8 *)(lVar2 + 0x40 + uVar6 * 0x48) = 0;
          *(undefined4 *)(lVar2 + uVar6 * 0x48) = 0;
          uVar4 = *(int *)(param_1 + 0x24) + 1;
          *(uint *)(param_1 + 0x24) = uVar4;
        } while (uVar4 < uVar8);
        *(uint *)(param_1 + 0x24) = uVar8;
        *param_1 = '\0';
        goto LAB_1403bdb16;
      }
      if (uVar8 < uVar4) {
        *(uint *)(param_1 + 0x24) = uVar8;
      }
      *(uint *)(param_1 + 0x24) = uVar8;
    }
    *param_1 = '\0';
  }
LAB_1403bdb16:
  if (1 < local_28 + 1) {
    thunk_FUN_1402d9040(local_20);
  }
  return;
}

