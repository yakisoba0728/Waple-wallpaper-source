// Function: FUN_1400674d0
// Addr: 1400674d0
// Size: 587 bytes


void FUN_1400674d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong local_res8;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  longlong *local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  undefined8 local_60 [4];
  undefined4 local_40;
  longlong local_28 [4];
  
  puVar8 = auStack_d8;
  local_res8 = param_1;
  lVar3 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  if (*(char *)(lVar3 + 8) == '\a') {
    uVar4 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
    FUN_140085090(&local_b8,uVar4);
  }
  else {
    local_b0 = CONCAT31(local_b0._1_3_,7);
    local_b0 = local_b0 & 0xfffffeff;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    plVar5 = (longlong *)FUN_14028af20(0x10);
    *plVar5 = 0;
    plVar5[1] = 0;
    lVar3 = FUN_14028af20(0x58);
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(lVar3 + 8) = lVar3;
    *(longlong *)(lVar3 + 0x10) = lVar3;
    *(undefined2 *)(lVar3 + 0x18) = 0x101;
    *plVar5 = lVar3;
    local_b8 = plVar5;
  }
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  local_88 = "playlist";
  local_80 = 8;
  uVar4 = FUN_140086de0(&local_b8,puVar7,param_2[2] + (longlong)puVar7);
  FUN_1400878f0(uVar4,&local_88);
  uVar4 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  FUN_140085520(uVar4,&local_b8);
  FUN_140030de0(&DAT_1404e5328,&local_res8,param_2);
  lVar3 = local_res8;
  puVar9 = auStack_d8;
  if (local_res8 != DAT_1404e5330) {
    puVar7 = (undefined8 *)(local_res8 + 0x38);
    if (puVar7 != local_78) {
      FUN_140031170(puVar7);
      *puVar7 = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
    }
    puVar7 = (undefined8 *)(lVar3 + 0x50);
    if (puVar7 != local_60) {
      FUN_140031170(puVar7);
      *puVar7 = 0;
      *(undefined8 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
    }
    plVar5 = (longlong *)(lVar3 + 0x88);
    *(undefined4 *)(lVar3 + 0x70) = local_40;
    *(undefined8 *)(lVar3 + 0x68) = 0x42700000;
    *(undefined8 *)(lVar3 + 0x74) = 0;
    *(undefined4 *)(lVar3 + 0x7c) = 0;
    *(undefined4 *)(lVar3 + 0x80) = 0xfffffffe;
    *(undefined4 *)(lVar3 + 0x84) = 0;
    puVar9 = auStack_d8;
    if (plVar5 != local_28) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        lVar6 = lVar1;
        puVar8 = auStack_d8;
        if ((0xfff < (ulonglong)((*(longlong *)(lVar3 + 0x98) - lVar1 >> 2) * 4)) &&
           (lVar6 = *(longlong *)(lVar1 + -8), puVar8 = auStack_d8, 0x1f < (lVar1 - lVar6) - 8U)) {
          lVar6 = 5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar8 = auStack_d0;
        }
        *(undefined8 *)(puVar8 + -8) = 0x1400676df;
        thunk_FUN_14028af80(lVar6);
      }
      *plVar5 = 0;
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
      puVar9 = puVar8;
    }
  }
  if (DAT_1404e6468 != (longlong *)0x0) {
    pcVar2 = *(code **)(*DAT_1404e6468 + 0x10);
    *(undefined8 *)(puVar9 + -8) = 0x1400676fc;
    (*pcVar2)();
  }
  *(undefined8 *)(puVar9 + -8) = 0x140067706;
  FUN_140085440(puVar9 + 0x20);
  return;
}

