// Function: FUN_1401b5d80
// Addr: 1401b5d80
// Size: 743 bytes


undefined4 * FUN_1401b5d80(longlong param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 *****pppppuVar6;
  byte **ppbVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 ****local_res8;
  byte *local_res18 [2];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  byte **local_98;
  undefined8 ****local_90;
  longlong local_88;
  undefined8 ****local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 ****local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  puVar9 = auStack_b8;
  local_40 = 3;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = (undefined8 *****)0x0;
  uStack_70 = 0;
  local_78 = (undefined8 *)0x0;
  local_68 = 0;
  uStack_60 = 3;
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_res18[0] = param_3;
  FUN_1401b6070(&local_58,8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  do {
    if (local_res18[0] == param_4) {
      local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      *param_2 = (undefined4)local_78;
      param_2[1] = local_78._4_4_;
      param_2[2] = (undefined4)uStack_70;
      param_2[3] = uStack_70._4_4_;
      *(ulonglong *)(param_2 + 4) = local_68;
      *(ulonglong *)(param_2 + 6) = uStack_60;
LAB_1401b5f7f:
      local_68 = 0;
      uStack_60 = 3;
      local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffff00000000);
      if (3 < local_40) {
        uVar8 = local_40 * 4 + 4;
        pppppuVar6 = (undefined8 *****)local_58;
        if (0xfff < uVar8) {
          pppppuVar6 = (undefined8 *****)local_58[-1];
          if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppuVar6))) {
LAB_1401b6054:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar9 = auStack_b0;
LAB_1401b605b:
            *(undefined8 *)(puVar9 + -8) = 0x1401b6060;
            FUN_1401b80a0();
            pcVar2 = (code *)swi(3);
            puVar5 = (undefined4 *)(*pcVar2)();
            return puVar5;
          }
          uVar8 = local_40 * 4 + 0x2b;
        }
        thunk_FUN_14028af80(pppppuVar6,uVar8);
      }
      return param_2;
    }
    pppppuVar6 = &local_58;
    if (3 < local_40) {
      pppppuVar6 = (undefined8 *****)local_58;
    }
    local_88 = (longlong)pppppuVar6 + local_48 * 4;
    local_80 = &local_res8;
    local_98 = local_res18;
    local_90 = pppppuVar6;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),param_1 + 0x60,local_res18[0],param_4);
    if ((iVar3 == 0) || (iVar3 == 1)) {
      if (pppppuVar6 < local_res8) {
        ppbVar7 = (byte **)((longlong)local_res8 - (longlong)pppppuVar6 >> 2);
        if ((byte **)(uStack_60 - local_68) < ppbVar7) {
          local_98 = ppbVar7;
          FUN_1401b7880(&local_78,ppbVar7,uStack_60,pppppuVar6);
        }
        else {
          uVar8 = local_68 + (longlong)ppbVar7;
          puVar4 = &local_78;
          if (3 < uStack_60) {
            puVar4 = local_78;
          }
          lVar1 = local_68 * 4;
          local_68 = uVar8;
          FUN_1404210f0((longlong)puVar4 + lVar1,pppppuVar6,(longlong)ppbVar7 * 4);
          *(undefined4 *)((longlong)puVar4 + uVar8 * 4) = 0;
        }
      }
      else {
        if (0xf < local_48) {
          if (*(char *)(param_1 + 0x6a) == '\0') {
            FUN_1401b80a0();
            pcVar2 = (code *)swi(3);
            puVar5 = (undefined4 *)(*pcVar2)();
            return puVar5;
          }
          goto LAB_1401b5ff6;
        }
        FUN_1401b6070(&local_58,8);
      }
    }
    else {
      uVar8 = local_68;
      if (iVar3 != 3) {
        if (*(char *)(param_1 + 0x6a) == '\0') goto LAB_1401b605b;
LAB_1401b5ff6:
        FUN_1401b4f80(param_2,param_1 + 0x40);
        if (uStack_60 < 4) goto LAB_1401b5f7f;
        uVar8 = uStack_60 * 4 + 4;
        puVar4 = local_78;
        if (0xfff < uVar8) {
          puVar4 = (undefined8 *)local_78[-1];
          if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)puVar4))) goto LAB_1401b6054;
          uVar8 = uStack_60 * 4 + 0x2b;
        }
        thunk_FUN_14028af80(puVar4,uVar8);
        goto LAB_1401b5f7f;
      }
      for (; local_68 = uVar8, local_res18[0] != param_4; local_res18[0] = local_res18[0] + 1) {
        if (uVar8 < uStack_60) {
          local_68 = uVar8 + 1;
          puVar4 = &local_78;
          if (3 < uStack_60) {
            puVar4 = local_78;
          }
          *(uint *)((longlong)puVar4 + uVar8 * 4) = (uint)*local_res18[0];
          *(undefined4 *)((longlong)puVar4 + uVar8 * 4 + 4) = 0;
        }
        else {
          FUN_1401b8760(&local_78);
        }
        uVar8 = local_68;
      }
    }
    *(longlong *)(param_1 + 0x70) = (longlong)local_res18[0] - (longlong)param_3;
  } while( true );
}

