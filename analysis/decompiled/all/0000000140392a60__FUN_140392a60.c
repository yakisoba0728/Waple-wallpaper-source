// Function: FUN_140392a60
// Addr: 140392a60
// Size: 648 bytes


undefined8 * FUN_140392a60(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar11 = param_1 + 3;
  puVar6 = puVar11;
  for (lVar7 = 0x100; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined2 *)puVar6 = 0;
    puVar6 = (undefined8 *)((longlong)puVar6 + 2);
  }
  for (; puVar11 != param_1 + 0x43; puVar11 = (undefined8 *)((longlong)puVar11 + 2)) {
    *(undefined2 *)puVar11 = 0xffff;
  }
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (int *)0x0;
  local_30 = 0x10000;
  local_2c = 0;
  uVar5 = FUN_14038b2a0(local_68,param_2,0x47444546);
  piVar2 = local_38;
  *param_1 = uVar5;
  if (local_38 != (int *)0x0) {
    iVar12 = 1;
    FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,uStack_58);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == iVar12) {
        *piVar2 = -0xdead;
        lVar7 = *(longlong *)(piVar2 + 2);
        if (lVar7 != 0) {
          FUN_1403c3220(lVar7);
          thunk_FUN_1402d9040(lVar7);
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
  }
  puVar11 = (undefined8 *)*param_1;
  pbVar10 = (byte *)&DAT_14045dd10;
  puVar6 = &DAT_14045dd10;
  if (puVar11 != (undefined8 *)0x0) {
    puVar6 = puVar11;
  }
  puVar8 = &DAT_14045dd10;
  if (3 < *(uint *)(puVar6 + 3)) {
    puVar8 = (undefined8 *)puVar6[2];
  }
  cVar3 = FUN_1403e65a0(puVar8,puVar11,param_2);
  if (cVar3 != '\0') {
    piVar2 = (int *)*param_1;
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      LOCK();
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        *piVar2 = -0xdead;
        lVar7 = *(longlong *)(piVar2 + 2);
        if (lVar7 != 0) {
          FUN_1403c3220(lVar7);
          thunk_FUN_1402d9040(lVar7);
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
    *param_1 = &DAT_14045dd10;
  }
  puVar11 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*param_1;
  }
  if (*(uint *)(puVar11 + 3) < 4) {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar9 = (byte *)puVar11[2];
  }
  if ((((uint)*pbVar9 * 0x100 + (uint)pbVar9[1] == 1) &&
      (0x10001 < (pbVar9[2] + 0x100) * 0x100 + (uint)pbVar9[3])) &&
     (uVar4 = (uint)pbVar9[0xc] * 0x100 + (uint)pbVar9[0xd], uVar4 != 0)) {
    pbVar10 = pbVar9 + uVar4;
  }
  if ((uint)pbVar10[1] + (uint)*pbVar10 * 0x100 == 1) {
    FUN_14036f640(pbVar10,param_1 + 1);
  }
  return param_1;
}

