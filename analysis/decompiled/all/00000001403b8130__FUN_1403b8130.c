// Function: FUN_1403b8130
// Addr: 1403b8130
// Size: 632 bytes


int * FUN_1403b8130(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
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
    piVar7 = (int *)&DAT_14045dd10;
  }
  else {
    piVar4 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x4f532f32,*(undefined8 *)(param_1 + 0x28));
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
  lVar2 = *(longlong *)(piVar7 + 4);
  lVar8 = (ulonglong)(uint)piVar7[6] + lVar2;
  uVar6 = (int)lVar8 - (int)lVar2;
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
  iVar9 = 1;
  local_60 = lVar2;
  local_58 = lVar8;
  local_50 = uVar6;
  local_38 = piVar7;
  FUN_1402fc370("SANITIZE",lVar2,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar2,lVar8,uVar6);
  if (lVar2 == 0) {
    iVar10 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar7 != 0) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + iVar10;
      UNLOCK();
      if (iVar1 == iVar9) {
        *piVar7 = -0xdead;
        lVar2 = *(longlong *)(piVar7 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
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
  cVar3 = FUN_1404049a0(lVar2,local_68);
  iVar10 = -1;
  iVar9 = 1;
  FUN_1402fc370("SANITIZE",lVar2,0,1,0,0xffffffff,"end [%p..%p]",lVar2,lVar8,uVar6);
  if (*piVar7 != 0) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + iVar10;
    UNLOCK();
    if (iVar1 == iVar9) {
      *piVar7 = -0xdead;
      lVar2 = *(longlong *)(piVar7 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
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
  if (cVar3 != '\0') {
    if ((char)piVar7[1] != '\0') {
      *(undefined1 *)(piVar7 + 1) = 0;
    }
    return piVar7;
  }
  FUN_140414150(piVar7);
  return (int *)&DAT_14045dd10;
}

