// Function: FUN_1403b8c20
// Addr: 1403b8c20
// Size: 655 bytes


int * FUN_1403b8c20(longlong param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  
  local_48 = 0;
  local_2c = 1;
  local_30 = 0;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar6 = (int *)&DAT_14045dd10;
  }
  else {
    piVar3 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x61766172,*(undefined8 *)(param_1 + 0x28));
    piVar6 = (int *)&DAT_14045dd10;
    if (piVar3 != (int *)0x0) {
      piVar6 = piVar3;
    }
  }
  if (*piVar6 != 0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_40 = 0;
  lVar9 = *(longlong *)(piVar6 + 4);
  local_58 = (ulonglong)(uint)piVar6[6] + lVar9;
  uVar5 = (int)local_58 - (int)lVar9;
  if (uVar5 < 0x3ffffff) {
    uVar4 = 0x4000;
    if (0x3fff < uVar5 * 0x40) {
      uVar4 = uVar5 * 0x40;
    }
    local_4c = 0x3fffffff;
    if (uVar4 < 0x40000000) {
      local_4c = uVar4;
    }
  }
  else {
    local_4c = 0x3fffffff;
  }
  local_68[0] = 0;
  local_44 = 0;
  iVar7 = 1;
  local_60 = lVar9;
  local_50 = uVar5;
  local_38 = piVar6;
  FUN_1402fc370("SANITIZE",lVar9,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar9,local_58,uVar5);
  if (lVar9 == 0) {
    iVar8 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar6 != 0) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + iVar8;
      UNLOCK();
      if (iVar1 == iVar7) {
        *piVar6 = -0xdead;
        lVar9 = *(longlong *)(piVar6 + 2);
        if (lVar9 != 0) {
          FUN_1403c3220(lVar9);
          thunk_FUN_1402d9040(lVar9);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          piVar6[8] = 0;
          piVar6[9] = 0;
          piVar6[10] = 0;
          piVar6[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar6);
      }
    }
    return piVar6;
  }
  cVar2 = FUN_1404065d0(lVar9,local_68);
  iVar8 = -1;
  iVar7 = 1;
  FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,local_58,uVar5);
  piVar3 = local_38;
  if ((local_38 != (int *)0x0) && (*local_38 != 0)) {
    LOCK();
    iVar1 = *local_38;
    *local_38 = *local_38 + iVar8;
    UNLOCK();
    if (iVar1 == iVar7) {
      *local_38 = -0xdead;
      lVar9 = *(longlong *)(local_38 + 2);
      if (lVar9 != 0) {
        FUN_1403c3220(lVar9);
        thunk_FUN_1402d9040(lVar9);
        piVar3[2] = 0;
        piVar3[3] = 0;
      }
      if (*(code **)(piVar3 + 10) != (code *)0x0) {
        (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
        piVar3[8] = 0;
        piVar3[9] = 0;
        piVar3[10] = 0;
        piVar3[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar3);
    }
  }
  if (cVar2 != '\0') {
    if ((char)piVar6[1] != '\0') {
      *(undefined1 *)(piVar6 + 1) = 0;
    }
    return piVar6;
  }
  FUN_140414150(piVar6);
  return (int *)&DAT_14045dd10;
}

