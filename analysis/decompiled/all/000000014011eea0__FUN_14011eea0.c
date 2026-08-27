// Function: FUN_14011eea0
// Addr: 14011eea0
// Size: 987 bytes


undefined8 *
FUN_14011eea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [32];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 ***local_78 [3];
  ulonglong local_60;
  undefined1 local_58 [40];
  
  puVar9 = auStack_c8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  puVar4 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 2) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 3) = 0x3f000000;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x34) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_140489d68;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 7;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *puVar4 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 7;
  *(undefined2 *)puVar4 = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x2c688;
  *(undefined1 *)(param_1 + 0x22) = 0;
  FUN_140273d70(param_1 + 0x23);
  FUN_1400c0c80(param_1 + 0x54);
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  *(undefined2 *)(param_1 + 0x1c9) = 1;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  *(undefined4 *)(param_1 + 0x1d3) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ca) = 2;
  *(undefined8 *)((longlong)param_1 + 0xe9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xea4) = 1;
  *(undefined4 *)(param_1 + 0x1d5) = param_4;
  FUN_140005ee0(local_78);
  local_88 = 0;
  ppppuVar8 = local_78;
  if (7 < local_60) {
    ppppuVar8 = (undefined8 ****)local_78[0];
  }
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar2 = FUN_1402d6aa0(ppppuVar8);
  FUN_140016170(&local_98,ppppuVar8,uVar2);
  FUN_140276310(param_1 + 0x23,&local_98);
  if (local_80 < 8) {
LAB_14011f0e4:
    FUN_140016600(&local_98,local_78);
    puVar3 = (undefined8 *)FUN_140005d20(&local_98,"assets/scenes/videoplayer/scene.json");
    if (puVar4 != puVar3) {
      puVar6 = puVar3;
      if (7 < (ulonglong)puVar3[3]) {
        puVar6 = (undefined8 *)*puVar3;
      }
      FUN_140016ae0(puVar4,puVar6,puVar3[2]);
    }
    FUN_140016770(&local_98);
    FUN_140016600(local_58,puVar4);
    puVar4 = (undefined8 *)FUN_14003fe80(local_58);
    if (7 < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uVar2 = FUN_1402d6aa0(puVar4);
    FUN_140016170(&local_98,puVar4,uVar2);
    FUN_1402764d0(param_1 + 0x23,local_res8,&local_98);
    if (7 < local_80) {
      uVar7 = local_80 * 2 + 2;
      lVar5 = local_98;
      if (0xfff < uVar7) {
        lVar5 = *(longlong *)(local_98 + -8);
        if (0x1f < (local_98 - lVar5) - 8U) goto LAB_14011f261;
        uVar7 = local_80 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar5,uVar7);
    }
    FUN_140016770(local_58);
    LOCK();
    *(undefined1 *)(param_1 + 0x1c9) = 1;
    UNLOCK();
    puVar4 = (undefined8 *)FUN_14028af20(0x10);
    puVar4[1] = FUN_140120790;
    local_a0 = &uStack_90;
    *puVar4 = param_1;
    local_a8 = 0;
    local_98 = FUN_1402ca17c(0,0,FUN_140082eb0,puVar4);
    if (local_98 == 0) {
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (*(int *)(param_1 + 0x1c8) == 0) {
      *(undefined4 *)(param_1 + 0x1c8) = (undefined4)uStack_90;
      param_1[0x1c7] = local_98;
      *(uint *)((longlong)param_1 + 0xe44) = uStack_90._4_4_;
      FUN_140016770(local_78);
      return param_1;
    }
  }
  else {
    uVar7 = local_80 * 2 + 2;
    lVar5 = local_98;
    if (uVar7 < 0x1000) {
LAB_14011f0df:
      thunk_FUN_14028af80(lVar5,uVar7);
      goto LAB_14011f0e4;
    }
    lVar5 = *(longlong *)(local_98 + -8);
    if ((local_98 - lVar5) - 8U < 0x20) {
      uVar7 = local_80 * 2 + 0x29;
      goto LAB_14011f0df;
    }
LAB_14011f261:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar9 = auStack_c0;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -8) = &UNK_14011f26d;
  FUN_140015110();
}

