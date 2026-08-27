// Function: FUN_1400eebb0
// Addr: 1400eebb0
// Size: 370 bytes


undefined8 FUN_1400eebb0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  if ((**(longlong **)(param_1 + 0x140) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8),
     iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,**(longlong **)(param_1 + 0x140),0,1,0,&local_18),
     lVar5 = local_18, -1 < iVar2)) {
    if (local_18 != 0) {
      if (param_3 == 0) {
        uVar9 = 0;
        if (*(int *)(param_1 + 0x24) != 0) {
          do {
            FUN_1404210f0((ulonglong)(*(int *)(param_1 + 0x20) * uVar9 * 4) + param_2,
                          (ulonglong)(uVar9 * (int)uStack_10) + lVar5,*(int *)(param_1 + 0x20) * 4);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x24));
        }
      }
      else if ((param_3 == 1) && (uVar9 = 0, *(int *)(param_1 + 0x24) != 0)) {
        do {
          uVar3 = *(uint *)(param_1 + 0x20);
          if (uVar3 != 0) {
            uVar8 = 0;
            do {
              iVar2 = uVar8 * 3;
              uVar7 = (ulonglong)((int)uStack_10 * uVar9);
              lVar6 = (int)(uVar8 * 4) + local_18;
              uVar8 = uVar8 + 1;
              lVar5 = iVar2 + param_2;
              uVar4 = (ulonglong)(uVar3 * uVar9 * 3);
              *(undefined1 *)(lVar5 + uVar4) = *(undefined1 *)(lVar6 + uVar7);
              *(undefined1 *)(lVar5 + 1 + uVar4) = *(undefined1 *)(lVar6 + 1 + uVar7);
              *(undefined1 *)(lVar5 + 2 + uVar4) = *(undefined1 *)(lVar6 + 2 + uVar7);
              uVar3 = *(uint *)(param_1 + 0x20);
            } while (uVar8 < uVar3);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1 + 0x24));
      }
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,**(undefined8 **)(param_1 + 0x140),0);
    return 1;
  }
  return 0;
}

