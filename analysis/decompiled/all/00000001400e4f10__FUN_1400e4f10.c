// Function: FUN_1400e4f10
// Addr: 1400e4f10
// Size: 853 bytes


undefined8 FUN_1400e4f10(undefined1 param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong _Size;
  uint uVar15;
  undefined1 local_res8;
  undefined1 local_res9 [7];
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 ***local_a8 [2];
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 ***local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  
  uVar12 = 0;
  local_res10[0] = 0;
  local_res8 = param_1;
  local_res18 = param_3;
  FUN_1400e7200(param_3,local_a8,&local_res8,local_res9);
  if (*(int *)(param_2 + 4) != 0) {
    do {
      bVar3 = false;
      local_c8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_res10[0] =
           CONCAT31(local_res10[0]._1_3_,*(undefined1 *)(uVar12 + *(longlong *)(param_2 + 8)));
      local_res20[0] = *(undefined1 *)(*(longlong *)(param_2 + 8) + (ulonglong)((int)uVar12 + 1));
      FUN_140017480(&local_c8,local_res10,1);
      ppppuVar9 = &local_c8;
      if (0xf < local_b0) {
        ppppuVar9 = (undefined8 ****)local_c8;
      }
      ppppuVar8 = &local_c8;
      if (0xf < local_b0) {
        ppppuVar8 = (undefined8 ****)local_c8;
      }
      (**(code **)(*(longlong *)*param_3 + 0x20))
                ((longlong *)*param_3,local_68,ppppuVar8,local_b8 + (longlong)ppppuVar9);
      if (0xf < local_b0) {
        uVar10 = local_b0 + 1;
        ppppuVar9 = (undefined8 ****)local_c8;
        if (0xfff < uVar10) {
          ppppuVar9 = (undefined8 ****)local_c8[-1];
          if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar9)))
          goto LAB_1400e525d;
          uVar10 = local_b0 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar9,uVar10);
      }
      uVar4 = local_58;
      uVar10 = local_98;
      ppppuVar9 = local_a8;
      if (0xf < local_90) {
        ppppuVar9 = (undefined8 ****)local_a8[0];
      }
      ppppuVar8 = local_68;
      if (0xf < local_50) {
        ppppuVar8 = (undefined8 ****)local_68[0];
      }
      uVar14 = local_58;
      if (local_98 < local_58) {
        uVar14 = local_98;
      }
      iVar6 = memcmp(ppppuVar8,ppppuVar9,uVar14);
      if (iVar6 == 0) {
        if (uVar4 < uVar10) {
          cVar5 = -1;
          goto LAB_1400e505b;
        }
        if (uVar10 < uVar4) goto LAB_1400e5059;
LAB_1400e506f:
        local_b8 = 0;
        local_b0 = 0;
        local_c8 = (undefined8 ****)0x0;
        uStack_c0 = 0;
        FUN_140017480(&local_c8,local_res20,1);
        ppppuVar9 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar9 = (undefined8 ****)local_c8;
        }
        ppppuVar8 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar8 = (undefined8 ****)local_c8;
        }
        (**(code **)(*(longlong *)*param_3 + 0x20))
                  ((longlong *)*param_3,&local_88,ppppuVar8,local_b8 + (longlong)ppppuVar9);
        if (0xf < local_b0) {
          uVar10 = local_b0 + 1;
          ppppuVar9 = (undefined8 ****)local_c8;
          if (0xfff < uVar10) {
            ppppuVar9 = (undefined8 ****)local_c8[-1];
            if (0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)ppppuVar9)))
            goto LAB_1400e525d;
            uVar10 = local_b0 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar9,uVar10);
        }
        uVar14 = local_70;
        uVar4 = local_78;
        uVar10 = local_98;
        bVar3 = true;
        puVar13 = (undefined1 *)CONCAT71(uStack_87,local_88);
        puVar11 = &local_88;
        if (0xf < local_70) {
          puVar11 = puVar13;
        }
        ppppuVar9 = local_a8;
        if (0xf < local_90) {
          ppppuVar9 = (undefined8 ****)local_a8[0];
        }
        _Size = local_98;
        if (local_78 < local_98) {
          _Size = local_78;
        }
        iVar6 = memcmp(ppppuVar9,puVar11,_Size);
        if (iVar6 == 0) {
          if (uVar10 < uVar4) {
            cVar5 = -1;
            goto LAB_1400e5153;
          }
          if (uVar4 < uVar10) goto LAB_1400e5151;
        }
        else {
          if (iVar6 < 0) {
            cVar5 = -1;
          }
          else {
LAB_1400e5151:
            cVar5 = '\x01';
          }
LAB_1400e5153:
          if ('\0' < cVar5) {
            bVar2 = false;
            goto LAB_1400e515f;
          }
        }
        bVar2 = true;
      }
      else {
        if (iVar6 < 0) {
          cVar5 = -1;
        }
        else {
LAB_1400e5059:
          cVar5 = '\x01';
        }
LAB_1400e505b:
        if (cVar5 < '\x01') goto LAB_1400e506f;
        bVar2 = false;
        puVar13 = (undefined1 *)CONCAT71(uStack_87,local_88);
        uVar14 = local_70;
      }
LAB_1400e515f:
      if (bVar3) {
        if (0xf < uVar14) {
          uVar10 = uVar14 + 1;
          puVar11 = puVar13;
          if (0xfff < uVar10) {
            puVar11 = *(undefined1 **)(puVar13 + -8);
            if ((undefined1 *)0x1f < puVar13 + (-8 - (longlong)puVar11)) goto LAB_1400e525d;
            uVar10 = uVar14 + 0x28;
          }
          thunk_FUN_14028af80(puVar11,uVar10);
        }
        local_70 = 0xf;
        local_78 = 0;
        local_88 = 0;
      }
      if (0xf < local_50) {
        uVar10 = local_50 + 1;
        ppppuVar9 = (undefined8 ****)local_68[0];
        if (0xfff < uVar10) {
          ppppuVar9 = (undefined8 ****)local_68[0][-1];
          if (0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)ppppuVar9)))
          goto LAB_1400e525d;
          uVar10 = local_50 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar9,uVar10);
      }
      if (bVar2) {
        uVar7 = 1;
        goto LAB_1400e520b;
      }
      uVar15 = (int)uVar12 + 2;
      uVar12 = (ulonglong)uVar15;
      param_3 = local_res18;
    } while (uVar15 < *(uint *)(param_2 + 4));
  }
  uVar7 = 0;
LAB_1400e520b:
  if (0xf < local_90) {
    uVar12 = local_90 + 1;
    ppppuVar9 = (undefined8 ****)local_a8[0];
    if (0xfff < uVar12) {
      ppppuVar9 = (undefined8 ****)local_a8[0][-1];
      if (0x1f < (ulonglong)((longlong)local_a8[0] + (-8 - (longlong)ppppuVar9))) {
LAB_1400e525d:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      uVar12 = local_90 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar12);
  }
  return uVar7;
}

