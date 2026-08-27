// Function: FUN_1404152b0
// Addr: 1404152b0
// Size: 835 bytes


undefined * FUN_1404152b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  int *local_48;
  undefined4 local_40;
  undefined2 local_3c;
  
  piVar8 = (int *)&DAT_14045dd10;
  if (param_1 != (int *)0x0) {
    piVar8 = param_1;
  }
  if (*piVar8 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_40 = 0x10000;
  local_3c = 0;
  if (*piVar8 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_50 = 0;
  lVar10 = *(longlong *)(piVar8 + 4);
  local_68 = (ulonglong)(uint)piVar8[6] + lVar10;
  uVar7 = (int)local_68 - (int)lVar10;
  if (uVar7 < 0x3ffffff) {
    uVar6 = 0x4000;
    if (0x3fff < uVar7 * 0x40) {
      uVar6 = uVar7 * 0x40;
    }
    local_5c = 0x3fffffff;
    if (uVar6 < 0x40000000) {
      local_5c = uVar6;
    }
  }
  else {
    local_5c = 0x3fffffff;
  }
  local_78[0] = 0;
  local_54 = 0;
  iVar9 = 1;
  local_70 = lVar10;
  local_60 = uVar7;
  local_48 = piVar8;
  FUN_1402fc370("SANITIZE",lVar10,0,1,0,1,"start [%p..%p] (%lu bytes)",lVar10,local_68,uVar7);
  if (lVar10 == 0) {
    FUN_1402fc370("SANITIZE");
    if (*piVar8 != 0) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar1 == iVar9) {
        *piVar8 = -0xdead;
        lVar10 = *(longlong *)(piVar8 + 2);
        if (lVar10 != 0) {
          FUN_1403c3220(lVar10);
          thunk_FUN_1402d9040(lVar10);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
          piVar8[8] = 0;
          piVar8[9] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar8);
      }
    }
  }
  else {
    cVar3 = FUN_140404bb0(lVar10,local_78);
    iVar9 = 1;
    FUN_1402fc370("SANITIZE",local_70,0,1,0,0xffffffff,"end [%p..%p]",local_70,local_68,uVar7);
    piVar2 = local_48;
    if ((local_48 != (int *)0x0) && (*local_48 != 0)) {
      LOCK();
      iVar1 = *local_48;
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (iVar1 == iVar9) {
        *local_48 = -0xdead;
        lVar10 = *(longlong *)(local_48 + 2);
        if (lVar10 != 0) {
          FUN_1403c3220(lVar10);
          thunk_FUN_1402d9040(lVar10);
          piVar2[2] = 0;
          piVar2[3] = 0;
        }
        if (*(code **)(piVar2 + 10) != (code *)0x0) {
          (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          piVar2[8] = 0;
          piVar2[9] = 0;
          piVar2[10] = 0;
          piVar2[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar2);
      }
    }
    if (cVar3 == '\0') {
      FUN_140414150(piVar8);
      piVar8 = (int *)&DAT_14045dd10;
    }
    else if ((char)piVar8[1] != '\0') {
      *(undefined1 *)(piVar8 + 1) = 0;
    }
  }
  puVar4 = (undefined8 *)_calloc_base(1,0x10);
  if (puVar4 == (undefined8 *)0x0) {
    if (*piVar8 != 0) {
      LOCK();
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        *piVar8 = -0xdead;
        lVar10 = *(longlong *)(piVar8 + 2);
        if (lVar10 != 0) {
          FUN_1403c3220(lVar10);
          thunk_FUN_1402d9040(lVar10);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
          piVar8[8] = 0;
          piVar8[9] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar8);
      }
    }
    puVar5 = &DAT_1404def30;
  }
  else {
    *puVar4 = piVar8;
    *(short *)(puVar4 + 1) = (short)param_2;
    puVar5 = (undefined *)FUN_140415600(FUN_14039cd40,puVar4,FUN_14039cbb0);
    if (puVar5[4] != '\0') {
      if (*(code **)(puVar5 + 0x48) != (code *)0x0) {
        (**(code **)(puVar5 + 0x48))(*(undefined8 *)(puVar5 + 0x40));
      }
      *(code **)(puVar5 + 0x38) = FUN_14039cc50;
      *(undefined8 **)(puVar5 + 0x40) = puVar4;
      *(undefined8 *)(puVar5 + 0x48) = 0;
    }
    *(undefined4 *)(puVar5 + 0x10) = param_2;
  }
  return puVar5;
}

