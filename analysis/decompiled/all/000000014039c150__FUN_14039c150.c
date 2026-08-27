// Function: FUN_14039c150
// Addr: 14039c150
// Size: 420 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14039c150(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined *puStack_80;
  undefined1 local_78 [64];
  
  puVar5 = (undefined4 *)FUN_1403e6c40(param_1,local_78);
  local_f8 = *puVar5;
  uStack_f4 = puVar5[1];
  uStack_f0 = puVar5[2];
  uStack_ec = puVar5[3];
  local_e8 = puVar5[4];
  uStack_e4 = puVar5[5];
  iStack_e0 = puVar5[6];
  uStack_dc = puVar5[7];
  local_d8 = *(undefined8 *)(puVar5 + 8);
  uStack_d0 = *(undefined8 *)(puVar5 + 10);
  local_88 = &LAB_1403cfd20;
  puStack_80 = &DAT_14047054d;
  local_c8 = 0x403cfd20;
  uStack_c4 = 1;
  uStack_c0 = 0x4047054d;
  uStack_bc = 1;
  local_b8 = local_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  local_a8 = local_e8;
  uStack_a4 = uStack_e4;
  iStack_a0 = iStack_e0;
  uStack_9c = uStack_dc;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  lVar6 = FUN_14039a9c0(&local_b8,local_78);
  puVar3 = *(undefined8 **)(lVar6 + 0x10);
  iVar2 = *(int *)(lVar6 + 0x18);
  while( true ) {
    puVar7 = (undefined8 *)CONCAT44(uStack_e4,local_e8);
    if ((puVar7 == puVar3) && (iStack_e0 == iVar2)) break;
    if (iStack_e0 == 0) {
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f2c = DAT_14045dd18._4_4_;
      _DAT_1404e4f30 = DAT_14045dd20;
      puVar7 = &DAT_1404e4f20;
    }
    puVar7 = (undefined8 *)(*(code *)CONCAT44(uStack_c4,local_c8))(puVar7);
    piVar4 = (int *)*puVar7;
    if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        *piVar4 = -0xdead;
        lVar6 = *(longlong *)(piVar4 + 2);
        if (lVar6 != 0) {
          FUN_1403c3220(lVar6);
          thunk_FUN_1402d9040(lVar6);
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
    FUN_140398d80(&local_f8);
  }
  *param_1 = 0xffff2153;
  lVar6 = *(longlong *)(param_1 + 2);
  if (lVar6 != 0) {
    FUN_1403c3220(lVar6);
    thunk_FUN_1402d9040(lVar6);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (*(longlong *)(param_1 + 10) != 0) {
    thunk_FUN_1402d9040();
    *(undefined8 *)(param_1 + 10) = 0;
  }
  *(undefined8 *)(param_1 + 5) = 0;
  thunk_FUN_1402d9040(param_1);
  return;
}

