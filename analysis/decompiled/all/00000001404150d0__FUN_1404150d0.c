// Function: FUN_1404150d0
// Addr: 1404150d0
// Size: 468 bytes


undefined4 FUN_1404150d0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
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
  
  if (param_1 != (int *)0x0) {
    uVar5 = 0;
    local_48 = 0;
    local_30 = 0x10000;
    local_2c = 0;
    if (*param_1 != 0) {
      LOCK();
      *param_1 = *param_1 + 1;
      UNLOCK();
    }
    local_40 = 0;
    local_60 = *(longlong *)(param_1 + 4);
    local_58 = (ulonglong)(uint)param_1[6] + local_60;
    uVar7 = (int)local_58 - (int)local_60;
    if (uVar7 < 0x3ffffff) {
      uVar6 = 0x4000;
      if (0x3fff < uVar7 * 0x40) {
        uVar6 = uVar7 * 0x40;
      }
      local_4c = 0x3fffffff;
      if (uVar6 < 0x40000000) {
        local_4c = uVar6;
      }
    }
    else {
      local_4c = 0x3fffffff;
    }
    local_68[0] = 0;
    local_44 = 0;
    local_50 = uVar7;
    local_38 = param_1;
    FUN_1402fc370("SANITIZE",local_60,0,1,0,1,"start [%p..%p] (%lu bytes)",local_60,local_58,uVar7);
    puVar8 = &DAT_14045dd10;
    if (3 < (uint)param_1[6]) {
      puVar8 = *(undefined8 **)(param_1 + 4);
    }
    cVar4 = FUN_140404bb0(puVar8,local_68);
    if (cVar4 != '\0') {
      uVar5 = FUN_1403c8b00(puVar8);
    }
    piVar3 = local_38;
    if (local_38 != (int *)0x0) {
      iVar10 = -1;
      iVar9 = 1;
      FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,local_58,uVar7);
      if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + iVar10;
        UNLOCK();
        if (iVar1 == iVar9) {
          *piVar3 = -0xdead;
          lVar2 = *(longlong *)(piVar3 + 2);
          if (lVar2 != 0) {
            FUN_1403c3220(lVar2);
            thunk_FUN_1402d9040(lVar2);
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
    }
    return uVar5;
  }
  return 0;
}

