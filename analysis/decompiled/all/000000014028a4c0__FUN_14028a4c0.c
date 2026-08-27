// Function: FUN_14028a4c0
// Addr: 14028a4c0
// Size: 419 bytes


undefined8 FUN_14028a4c0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_a8 = 0.0;
  uStack_a0 = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar5 = (**(code **)(*param_1 + 0x10))();
  local_res8[0] = iVar5;
  iVar6 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((iVar5 - 1U < 3) && (iVar6 - 1U < 3)) {
    iVar10 = 0;
    local_res10[0] = iVar6;
    if (-1 < iVar5) {
      do {
        lVar9 = (longlong)iVar10;
        lVar7 = (**(code **)(*param_1 + 0x18))(param_1);
        iVar10 = iVar10 + 1;
        puVar1 = (undefined4 *)(lVar7 + lVar9 * 0x10);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)(&local_68 + lVar9 * 2) = *puVar1;
        *(undefined4 *)((longlong)&local_68 + lVar9 * 0x10 + 4) = uVar2;
        *(undefined4 *)(&uStack_60 + lVar9 * 2) = uVar3;
        *(undefined4 *)((longlong)&uStack_60 + lVar9 * 0x10 + 4) = uVar4;
      } while (iVar10 <= iVar5);
    }
    iVar10 = 0;
    if (-1 < iVar6) {
      do {
        lVar9 = (longlong)iVar10;
        lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
        iVar10 = iVar10 + 1;
        puVar1 = (undefined4 *)(lVar7 + lVar9 * 0x10);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)(&local_a8 + lVar9 * 2) = *puVar1;
        *(undefined4 *)((longlong)&local_a8 + lVar9 * 0x10 + 4) = uVar2;
        *(undefined4 *)(&uStack_a0 + lVar9 * 2) = uVar3;
        *(undefined4 *)((longlong)&uStack_a0 + lVar9 * 0x10 + 4) = uVar4;
      } while (iVar10 <= iVar6);
    }
    if (((double)(&local_68)[(longlong)iVar5 * 2] == local_a8) &&
       ((double)(&uStack_60)[(longlong)iVar5 * 2] == uStack_a0)) {
      FUN_140289d00(&local_68,local_res8);
      FUN_140289d00(&local_a8,local_res10);
      iVar5 = 0;
      if (0 < local_res8[0]) {
        do {
          lVar9 = (longlong)iVar5;
          lVar7 = (longlong)(iVar5 - local_res8[0]);
          iVar5 = iVar5 + 1;
          uVar2 = *(undefined4 *)((longlong)&local_68 + lVar9 * 0x10 + 4);
          uVar3 = *(undefined4 *)(&uStack_60 + lVar9 * 2);
          uVar4 = *(undefined4 *)((longlong)&uStack_60 + lVar9 * 0x10 + 4);
          *(undefined4 *)(&local_a8 + lVar7 * 2) = *(undefined4 *)(&local_68 + lVar9 * 2);
          *(undefined4 *)((longlong)&local_a8 + lVar7 * 0x10 + 4) = uVar2;
          *(undefined4 *)(&uStack_a0 + lVar7 * 2) = uVar3;
          *(undefined4 *)((longlong)&uStack_a0 + lVar7 * 0x10 + 4) = uVar4;
        } while (iVar5 < local_res8[0]);
      }
      uVar8 = FUN_140289df0(&local_a8,local_res8[0],local_res10[0]);
      return uVar8;
    }
  }
  return 0;
}

