// Function: FUN_140416ab0
// Addr: 140416ab0
// Size: 443 bytes


void FUN_140416ab0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint *local_res8;
  
  if (*(code **)(param_1 + 0xa0) != FUN_14039d540) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if (*(char *)(param_1 + 4) != '\0') {
    iVar7 = (int)((longlong)*(int *)(*(longlong *)(lVar2 + 0x80) + 0x1c) *
                  (ulonglong)*(ushort *)(lVar2 + 0x68) + 0x8000 >> 0x10);
    iVar4 = (int)((longlong)*(int *)(*(longlong *)(lVar2 + 0x80) + 0x20) *
                  (ulonglong)*(ushort *)(lVar2 + 0x68) + 0x8000 >> 0x10);
    if ((*(int *)(param_1 + 0x28) != iVar7) || (*(int *)(param_1 + 0x2c) != iVar4)) {
      *(int *)(param_1 + 0x2c) = iVar4;
      *(int *)(param_1 + 0x28) = iVar7;
      FUN_1403b2f70(param_1);
    }
  }
  local_res8 = (uint *)0x0;
  iVar4 = FUN_1402fa6a0(lVar2,&local_res8);
  if (iVar4 != 0) goto LAB_140416c2a;
  lVar5 = _calloc_base(*local_res8,4);
  lVar6 = _calloc_base(*local_res8,4);
  if (((lVar6 != 0) && (lVar5 != 0)) && (iVar4 = FUN_1402fa770(lVar2), iVar4 == 0)) {
    bVar3 = false;
    uVar9 = 0;
    if (*local_res8 == 0) {
LAB_140416bf2:
      uVar11 = 0;
      lVar10 = 0;
    }
    else {
      do {
        iVar4 = *(int *)(lVar5 + uVar9 * 4) + 2 >> 2;
        *(int *)(lVar6 + uVar9 * 4) = iVar4;
        if ((bVar3) || (iVar4 != 0)) {
          bVar3 = true;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar11 = *local_res8;
      } while (uVar8 < uVar11);
      lVar10 = lVar6;
      if (!bVar3) goto LAB_140416bf2;
    }
    FUN_140416440(param_1,lVar10,uVar11);
  }
  thunk_FUN_1402d9040(lVar6);
  thunk_FUN_1402d9040(lVar5);
  FUN_1402fa670(**(undefined8 **)(lVar2 + 0x78),local_res8);
LAB_140416c2a:
  if (lVar1 + 0x3cU <= lVar1 + 0x43cU) {
    FUN_1404217a0(lVar1 + 0x3cU,0xffffffff,0x400);
  }
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_1 + 0x10);
  return;
}

