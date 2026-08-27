// Function: FUN_1400eed30
// Addr: 1400eed30
// Size: 367 bytes


void FUN_1400eed30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  if (((*(longlong **)(param_1 + 0x140) != *(longlong **)(param_1 + 0x148)) &&
      (lVar4 = **(longlong **)(param_1 + 0x140), lVar4 != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8),
     iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,lVar4,0,4,0,&local_18), -1 < iVar2)) {
    if (local_18 != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        uVar3 = 0;
        lVar4 = local_18;
        if (*(int *)(param_1 + 0x24) != 0) {
          do {
            FUN_1404210f0(lVar4,(ulonglong)(*(int *)(param_1 + 0x20) * uVar3 * 4) + param_2,
                          *(int *)(param_1 + 0x20) * 4);
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + (uStack_10 & 0xffffffff);
          } while (uVar3 < *(uint *)(param_1 + 0x24));
        }
      }
      else if (iVar2 == 8) {
        uVar3 = 0;
        lVar4 = local_18;
        if (*(int *)(param_1 + 0x24) != 0) {
          do {
            FUN_1404210f0(lVar4,(ulonglong)(*(int *)(param_1 + 0x20) * uVar3 * 2) + param_2,
                          *(int *)(param_1 + 0x20) * 2);
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + (uStack_10 & 0xffffffff);
          } while (uVar3 < *(uint *)(param_1 + 0x24));
        }
      }
      else if ((iVar2 == 9) && (uVar3 = 0, lVar4 = local_18, *(int *)(param_1 + 0x24) != 0)) {
        do {
          FUN_1404210f0(lVar4,(ulonglong)(*(int *)(param_1 + 0x20) * uVar3) + param_2,
                        *(int *)(param_1 + 0x20));
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + (uStack_10 & 0xffffffff);
        } while (uVar3 < *(uint *)(param_1 + 0x24));
      }
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,**(undefined8 **)(param_1 + 0x140),0);
  }
  return;
}

