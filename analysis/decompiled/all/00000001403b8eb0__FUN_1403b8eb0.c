// Function: FUN_1403b8eb0
// Addr: 1403b8eb0
// Size: 710 bytes


int * FUN_1403b8eb0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int *local_38;
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_48 = 0;
  local_2b = 0;
  local_30 = *(int *)(param_1 + 0x18);
  if (local_30 == -1) {
    lVar3 = FUN_140398a10(param_1 + 0x80);
    local_30 = (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5);
    if (local_30 == 0) {
      local_30 = 0;
    }
    *(int *)(param_1 + 0x18) = local_30;
  }
  local_2c = 1;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar7 = (int *)&DAT_14045dd10;
  }
  else {
    piVar4 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x66656174,*(undefined8 *)(param_1 + 0x28));
    piVar7 = (int *)&DAT_14045dd10;
    if (piVar4 != (int *)0x0) {
      piVar7 = piVar4;
    }
  }
  if (*piVar7 != 0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_40 = 0;
  lVar3 = *(longlong *)(piVar7 + 4);
  local_58 = (ulonglong)(uint)piVar7[6] + lVar3;
  uVar6 = (int)local_58 - (int)lVar3;
  if (uVar6 < 0x3ffffff) {
    uVar5 = 0x4000;
    if (0x3fff < uVar6 * 0x40) {
      uVar5 = uVar6 * 0x40;
    }
    local_4c = 0x3fffffff;
    if (uVar5 < 0x40000000) {
      local_4c = uVar5;
    }
  }
  else {
    local_4c = 0x3fffffff;
  }
  local_68[0] = 0;
  local_44 = 0;
  iVar8 = 1;
  local_60 = lVar3;
  local_50 = uVar6;
  local_38 = piVar7;
  FUN_1402fc370("SANITIZE",lVar3,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar3,local_58,uVar6);
  if (lVar3 == 0) {
    iVar9 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar7 != 0) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + iVar9;
      UNLOCK();
      if (iVar1 == iVar8) {
        *piVar7 = -0xdead;
        lVar3 = *(longlong *)(piVar7 + 2);
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        if (*(code **)(piVar7 + 10) != (code *)0x0) {
          (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
          piVar7[8] = 0;
          piVar7[9] = 0;
          piVar7[10] = 0;
          piVar7[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar7);
      }
    }
    return piVar7;
  }
  cVar2 = FUN_1404069b0(lVar3,local_68);
  iVar9 = -1;
  iVar8 = 1;
  FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,local_58,uVar6);
  piVar4 = local_38;
  if ((local_38 != (int *)0x0) && (*local_38 != 0)) {
    LOCK();
    iVar1 = *local_38;
    *local_38 = *local_38 + iVar9;
    UNLOCK();
    if (iVar1 == iVar8) {
      *local_38 = -0xdead;
      lVar3 = *(longlong *)(local_38 + 2);
      if (lVar3 != 0) {
        FUN_1403c3220(lVar3);
        thunk_FUN_1402d9040(lVar3);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      if (*(code **)(piVar4 + 10) != (code *)0x0) {
        (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        piVar4[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar4);
    }
  }
  if (cVar2 != '\0') {
    if ((char)piVar7[1] != '\0') {
      *(undefined1 *)(piVar7 + 1) = 0;
    }
    return piVar7;
  }
  FUN_140414150(piVar7);
  return (int *)&DAT_14045dd10;
}

