// Function: FUN_1400f9c00
// Addr: 1400f9c00
// Size: 940 bytes


undefined8 *
FUN_1400f9c00(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,char *param_6)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 local_res18 [2];
  uint uStack0000000000000038;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  char *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  longlong lStack_90;
  longlong local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (longlong *)0x0;
  lStack_90 = 0;
  local_88 = 0;
  puStack_80 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack0000000000000038 = 0;
  local_b8 = (char *)((ulonglong)local_b8 & 0xffffffff00000000);
  local_b0 = param_3;
  cVar2 = FUN_1400deb10(param_3,param_4,&local_a8,&DAT_1404e9218);
  uVar6 = uStack0000000000000038;
  puVar7 = puStack_80;
  puVar8 = local_78;
  while (puStack_80 = puVar7, local_78 = puVar8, uStack0000000000000038 = uVar6, cVar2 != '\0') {
    for (; uStack0000000000000038 = uVar6, puVar7 != puVar8; puVar7 = puVar7 + 1) {
      FUN_1400534d0(param_2,*puVar7);
      uVar6 = uStack0000000000000038;
    }
    pcVar11 = param_6;
    if (0xf < *(ulonglong *)(param_6 + 0x18)) {
      pcVar11 = *(char **)param_6;
    }
    pcVar12 = pcVar11 + *(longlong *)(param_6 + 0x10);
    if ((uVar6 >> 10 & 1) == 0) {
      local_b8 = pcVar12;
      FUN_1400fa150(local_res18,&local_a8,param_2,pcVar11);
      param_2 = local_res18[0];
    }
    else {
      for (; uStack0000000000000038 = uVar6, pcVar11 != pcVar12; pcVar11 = pcVar11 + lVar4) {
        if (*pcVar11 == '&') {
          lVar4 = lStack_90 - (longlong)local_98 >> 0x3f;
          if ((lStack_90 - (longlong)local_98) / 0x18 + lVar4 != lVar4) {
            puVar7 = (undefined1 *)local_98[1];
            for (puVar8 = (undefined1 *)*local_98; puVar8 != puVar7; puVar8 = puVar8 + 1) {
              FUN_1400534d0(param_2,*puVar8);
            }
          }
          lVar4 = 1;
        }
        else if (*pcVar11 == '\\') {
          if (pcVar11 + 1 == pcVar12) break;
          cVar2 = pcVar11[1];
          if ((byte)(cVar2 - 0x30U) < 10) {
            uVar9 = (ulonglong)((int)cVar2 - 0x30);
            if (uVar9 < (ulonglong)((lStack_90 - (longlong)local_98) / 0x18)) {
              puVar7 = (undefined1 *)local_98[uVar9 * 3 + 1];
              for (puVar8 = (undefined1 *)local_98[uVar9 * 3]; puVar8 != puVar7; puVar8 = puVar8 + 1
                  ) {
                FUN_1400534d0(param_2,*puVar8);
              }
            }
          }
          else {
            FUN_1400534d0(param_2);
          }
          lVar4 = 2;
        }
        else {
          FUN_1400534d0(param_2);
          lVar4 = 1;
        }
        uVar6 = uStack0000000000000038;
      }
    }
    local_res18[0] = param_2;
    param_2 = local_res18[0];
    lVar4 = lStack_90 - (longlong)local_98 >> 0x3f;
    plVar5 = &local_50;
    if ((lStack_90 - (longlong)local_98) / 0x18 + lVar4 != lVar4) {
      plVar5 = local_98;
    }
    param_3 = (undefined1 *)plVar5[1];
    if (param_3 == param_4) break;
    lVar4 = lStack_90 - (longlong)local_98 >> 0x3f;
    plVar5 = local_98;
    if ((lStack_90 - (longlong)local_98) / 0x18 + lVar4 == lVar4) {
      plVar5 = &local_50;
    }
    uStack0000000000000038 = uVar6;
    if (*plVar5 != plVar5[1]) {
      uStack0000000000000038 = uVar6 | 0x100;
    }
    uVar3 = 0x2000;
    if (*plVar5 != plVar5[1]) {
      uVar3 = 0x100;
    }
    local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar6 | uVar3);
    local_b0 = param_3;
    cVar2 = FUN_1400deb10(param_3,param_4,&local_a8,&DAT_1404e9218);
    uVar6 = uStack0000000000000038;
    puVar7 = puStack_80;
    puVar8 = local_78;
  }
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    FUN_1400534d0(param_2,*param_3);
  }
  *param_1 = param_2;
  if (local_98 != (longlong *)0x0) {
    plVar5 = local_98;
    puVar7 = auStack_d8;
    if (0xfff < (ulonglong)(((local_88 - (longlong)local_98) / 0x18) * 0x18)) {
      plVar5 = (longlong *)local_98[-1];
      plVar10 = (longlong *)((longlong)local_98 + (-8 - (longlong)plVar5));
      puVar7 = auStack_d8;
      if ((longlong *)0x1f < plVar10) {
        pcVar1 = (code *)swi(0x29);
        plVar5 = plVar10;
        (*pcVar1)(5);
        puVar7 = auStack_d0;
      }
    }
    *(undefined8 *)(puVar7 + -8) = 0x1400f9f9d;
    thunk_FUN_14028af80(plVar5);
  }
  return param_1;
}

