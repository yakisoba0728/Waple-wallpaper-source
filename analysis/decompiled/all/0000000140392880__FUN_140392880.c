// Function: FUN_140392880
// Addr: 140392880
// Size: 467 bytes


undefined8 * FUN_140392880(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  int local_30;
  undefined2 local_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (int *)0x0;
  local_30 = 0x10000;
  local_2c = 0;
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 == -1) {
    lVar3 = FUN_140398a10(param_2 + 0x80);
    iVar5 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar5;
  }
  local_2c = CONCAT11(local_2c._1_1_,1);
  local_30 = iVar5;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar6 = (int *)&DAT_14045dd10;
  }
  else {
    piVar4 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x434f4c52,*(undefined8 *)(param_2 + 0x28));
    piVar6 = (int *)&DAT_14045dd10;
    if (piVar4 != (int *)0x0) {
      piVar6 = piVar4;
    }
  }
  if (*piVar6 != 0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_40 = 0;
  local_38 = piVar6;
  FUN_14040c230(local_68,0,0);
  if (local_60 == 0) {
    FUN_1403beff0(local_68);
  }
  else {
    cVar2 = FUN_140401950(local_60,local_68);
    FUN_1403beff0(local_68);
    if (cVar2 == '\0') {
      FUN_140414150(piVar6);
      piVar6 = (int *)&DAT_14045dd10;
    }
    else if ((char)piVar6[1] != '\0') {
      *(undefined1 *)(piVar6 + 1) = 0;
    }
  }
  *param_1 = piVar6;
  if (local_38 != (int *)0x0) {
    iVar7 = -1;
    iVar5 = 1;
    FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,uStack_58);
    piVar6 = local_38;
    if ((local_38 != (int *)0x0) && (*local_38 != 0)) {
      LOCK();
      iVar1 = *local_38;
      *local_38 = *local_38 + iVar7;
      UNLOCK();
      if (iVar1 == iVar5) {
        *local_38 = -0xdead;
        lVar3 = *(longlong *)(local_38 + 2);
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
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
  }
  return param_1;
}

