// Function: FUN_140392dc0
// Addr: 140392dc0
// Size: 389 bytes


undefined8 * FUN_140392dc0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  int local_30;
  undefined2 local_2c;
  
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
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
    lVar3 = FUN_140398ae0(param_2 + 0x80);
    iVar5 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar5;
  }
  local_2c = CONCAT11(local_2c._1_1_,1);
  local_30 = iVar5;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar9 = (int *)&DAT_14045dde0;
  }
  else {
    piVar4 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x53564720,*(undefined8 *)(param_2 + 0x28));
    piVar9 = (int *)&DAT_14045dde0;
    if (piVar4 != (int *)0x0) {
      piVar9 = piVar4;
    }
  }
  puVar10 = &DAT_14045dde0;
  if (*piVar9 != 0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_40 = 0;
  local_38 = piVar9;
  FUN_14040c300(local_68,0,0);
  if (local_60 == 0) {
    FUN_1403bf0c0(local_68);
  }
  else {
    cVar1 = FUN_1404058f0(local_60,local_68);
    FUN_1403bf0c0(local_68);
    if (cVar1 == '\0') {
      func_0x000140414220(piVar9);
      piVar9 = (int *)&DAT_14045dde0;
    }
    else if ((char)piVar9[1] != '\0') {
      *(undefined1 *)(piVar9 + 1) = 0;
    }
  }
  *param_1 = piVar9;
  if (local_38 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,uStack_58);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  puVar6 = &DAT_14045dde0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*param_1;
  }
  if (9 < *(uint *)(puVar6 + 3)) {
    puVar10 = (undefined8 *)puVar6[2];
  }
  uVar7 = (uint)*(byte *)((longlong)puVar10 + 3) * 0x10000 +
          (uint)*(byte *)((longlong)puVar10 + 4) * 0x100 +
          (uint)*(byte *)((longlong)puVar10 + 2) * 0x1000000 +
          (uint)*(byte *)((longlong)puVar10 + 5);
  if ((uVar7 != 0) &&
     (uVar7 = (uint)*(byte *)((ulonglong)uVar7 + 1 + (longlong)puVar10) +
              (uint)*(byte *)((ulonglong)uVar7 + (longlong)puVar10) * 0x100, uVar7 != 0)) {
    cVar1 = FUN_1403a4890(param_1 + 1,uVar7,0);
    if (cVar1 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      while (uVar2 < uVar7) {
        *(undefined8 *)(param_1[2] + (ulonglong)uVar2 * 8) = 0;
        uVar2 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(uint *)((longlong)param_1 + 0xc) = uVar2;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar7;
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      *(undefined8 *)(param_1[2] + uVar8 * 8) = 0;
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)((longlong)param_1 + 0xc));
  }
  return param_1;
}

