// Function: FUN_1400509f0
// Addr: 1400509f0
// Size: 810 bytes


ulonglong FUN_1400509f0(uint *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  bool bVar11;
  undefined1 local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  lVar3 = *(longlong *)(param_1 + 4);
  *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
  if (lVar3 == 0) {
    param_2[1] = local_48._4_4_;
    *param_2 = 3;
    return ((ulonglong)local_48 >> 0x28) << 8;
  }
  uVar7 = 0;
  uVar5 = 0;
  *param_2 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 7;
  local_48 = (undefined8 *)0x0;
  FUN_140050870(&local_48,*(undefined8 *)(param_1 + 4));
  puVar10 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar10 = *(uint **)param_1;
  }
  puVar2 = (uint *)((longlong)puVar10 + *(longlong *)(param_1 + 4) * 2);
  for (puVar6 = (uint *)FUN_140015e90(puVar10,puVar2);
      (puVar6 != puVar2 && (((short)*puVar6 == 0x5c || ((short)*puVar6 == 0x2f))));
      puVar6 = (uint *)((longlong)puVar6 + 2)) {
  }
  if ((((puVar6 != puVar10) && (5 < (longlong)puVar2 - (longlong)puVar6)) &&
      ((*puVar6 & 0xffffffdf) - 0x3a0041 < 0x1a)) &&
     (((short)puVar6[1] == 0x5c || ((short)puVar6[1] == 0x2f)))) {
    puVar6 = puVar6 + 1;
  }
  uVar9 = (longlong)puVar6 - (longlong)puVar10 >> 1;
  if (local_30 - local_38 < uVar9) {
    FUN_140016310(&local_48,uVar9,local_res8,puVar10,uVar9);
  }
  else {
    lVar3 = local_38 + uVar9;
    puVar8 = &local_48;
    if (7 < local_30) {
      puVar8 = local_48;
    }
    lVar1 = local_38 * 2;
    local_38 = lVar3;
    FUN_1404210f0((longlong)puVar8 + lVar1,puVar10,uVar9 * 2);
    *(undefined2 *)((longlong)puVar8 + lVar3 * 2) = 0;
  }
  puVar10 = puVar6;
  if (puVar6 == puVar2) {
    uVar9 = 0;
  }
  else {
LAB_140050b83:
    do {
      if (((short)*puVar6 == 0x5c) || ((short)*puVar6 == 0x2f)) {
        puVar6 = (uint *)((longlong)puVar6 + 2);
        if (puVar6 != puVar2) goto LAB_140050b83;
      }
      for (; ((puVar6 != puVar2 && ((short)*puVar6 != 0x5c)) && ((short)*puVar6 != 0x2f));
          puVar6 = (uint *)((longlong)puVar6 + 2)) {
      }
      uVar9 = (longlong)puVar6 - (longlong)puVar10 >> 1;
      if (local_30 - local_38 < uVar9) {
        FUN_140016310(&local_48,uVar9,local_res8,puVar10,uVar9);
      }
      else {
        lVar3 = local_38 + uVar9;
        puVar8 = &local_48;
        if (7 < local_30) {
          puVar8 = local_48;
        }
        lVar1 = local_38 * 2;
        local_38 = lVar3;
        FUN_1404210f0((longlong)puVar8 + lVar1,puVar10,uVar9 * 2);
        *(undefined2 *)((longlong)puVar8 + lVar3 * 2) = 0;
      }
      puVar8 = &local_48;
      if (7 < local_30) {
        puVar8 = local_48;
      }
      uVar9 = FUN_14028fc60(puVar8);
      uVar5 = (uint)(uVar9 >> 0x20);
      if (uVar5 != 0) {
        if (uVar5 < 0x41) {
          if (((uVar5 != 0x40) && (uVar5 != 2)) && (uVar5 != 3)) {
            bVar11 = uVar5 == 0x35;
LAB_140050c64:
            if (!bVar11) {
              uVar7 = uVar9 >> 0x20;
            }
          }
        }
        else if ((uVar5 != 0x7b) && (uVar5 != 0xa1)) {
          bVar11 = uVar5 == 0x10b;
          goto LAB_140050c64;
        }
      }
      puVar10 = puVar6;
    } while (puVar6 != puVar2);
    if ((uVar5 != 0) && ((uint)uVar7 != 0)) {
      uVar5 = (uint)uVar7;
    }
  }
  *param_2 = uVar5;
  param_2[1] = local_48._4_4_;
  *(undefined ***)(param_2 + 2) = &PTR_PTR_1404df530;
  if (7 < local_30) {
    uVar7 = local_30 * 2 + 2;
    puVar8 = local_48;
    if (0xfff < uVar7) {
      puVar8 = (undefined8 *)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)puVar8))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      uVar7 = local_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(puVar8,uVar7);
  }
  return uVar9 & 0xff;
}

