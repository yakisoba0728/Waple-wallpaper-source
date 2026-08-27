// Function: FUN_14016c990
// Addr: 14016c990
// Size: 1222 bytes


undefined8
FUN_14016c990(undefined8 param_1,undefined4 param_2,char *param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 *******pppppppuVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [2];
  undefined1 uStackX_12;
  undefined1 uStackX_13;
  undefined4 local_res14;
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [64];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 ******local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 ******local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_a8 = 0x67452301;
  local_f8 = 0;
  local_f0 = 0;
  local_78 = 0;
  local_88 = (undefined8 *******)0x0;
  uStack_80 = 0;
  local_70 = 0;
  local_a4 = 0xefcdab89;
  local_a0 = 0x98badcfe;
  local_9c = 0x10325476;
  local_98 = 0xc3d2e1f0;
  _local_res10 = param_2;
  sVar5 = strlen(param_3);
  FUN_140017480(&local_88,param_3,sVar5);
  puVar8 = (undefined4 *)local_res10;
  lVar11 = 4;
  if (local_f0 - 1 < 0x3f) {
    local_e8[local_f0] = local_res10[0];
    if (local_f0 + 1 < 0x40) {
      local_e8[local_f0 + 1] = local_res10[1];
      if (local_f0 + 2 < 0x40) {
        local_e8[local_f0 + 2] = uStackX_12;
        if (local_f0 + 3 < 0x40) {
          puVar8 = &local_res14;
          local_e8[local_f0 + 3] = uStackX_13;
          lVar11 = 0;
          local_f0 = local_f0 + 4;
        }
        else {
          lVar11 = 1;
          puVar8 = (undefined4 *)(local_res10 + 3);
          local_f0 = local_f0 + 3;
        }
      }
      else {
        lVar11 = 2;
        puVar8 = (undefined4 *)(local_res10 + 2);
        local_f0 = local_f0 + 2;
      }
    }
    else {
      lVar11 = 3;
      puVar8 = (undefined4 *)(local_res10 + 1);
      local_f0 = local_f0 + 1;
    }
  }
  uVar12 = local_78;
  if (local_f0 == 0x40) {
    FUN_1400802f0(&local_f8,local_e8);
    local_f8 = local_f8 + 0x40;
    local_f0 = 0;
    uVar12 = local_78;
  }
  for (; local_78 = uVar12, lVar11 != 0; lVar11 = lVar11 + -1) {
    uVar1 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((longlong)puVar8 + 1);
    local_e8[local_f0] = uVar1;
    local_f0 = local_f0 + 1;
    uVar12 = local_78;
  }
  pppppppuVar9 = &local_88;
  if (0xf < local_70) {
    pppppppuVar9 = (undefined8 *******)local_88;
  }
  if (local_f0 != 0) {
    for (; (uVar12 != 0 && (local_f0 < 0x40)); local_f0 = local_f0 + 1) {
      uVar1 = *(undefined1 *)pppppppuVar9;
      pppppppuVar9 = (undefined8 *******)((longlong)pppppppuVar9 + 1);
      local_e8[local_f0] = uVar1;
      uVar12 = uVar12 - 1;
    }
  }
  if (local_f0 == 0x40) {
    FUN_1400802f0(&local_f8,local_e8);
    local_f8 = local_f8 + 0x40;
    local_f0 = 0;
  }
  if (uVar12 != 0) {
    for (; 0x3f < uVar12; uVar12 = uVar12 - 0x40) {
      FUN_1400802f0(&local_f8,pppppppuVar9);
      local_f8 = local_f8 + 0x40;
      pppppppuVar9 = pppppppuVar9 + 8;
    }
    for (; uVar12 != 0; uVar12 = uVar12 - 1) {
      uVar1 = *(undefined1 *)pppppppuVar9;
      pppppppuVar9 = (undefined8 *******)((longlong)pppppppuVar9 + 1);
      local_e8[local_f0] = uVar1;
      local_f0 = local_f0 + 1;
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    FUN_14016e270(&local_68,*param_4);
    for (puVar13 = local_68; puVar13 != local_60; puVar13 = puVar13 + 1) {
      plVar2 = (longlong *)*puVar13;
      plVar10 = plVar2 + 4;
      if ((int)plVar2[4] != 0) {
        plVar7 = plVar2;
        if (0xf < (ulonglong)plVar2[3]) {
          plVar7 = (longlong *)*plVar2;
        }
        FUN_1400810f0(&local_f8,plVar7,plVar2[2]);
        lVar11 = 4;
        if (local_f0 - 1 < 0x3f) {
          local_e8[local_f0] = (char)*plVar10;
          if (local_f0 + 1 < 0x40) {
            plVar10 = (longlong *)((longlong)plVar2 + 0x22);
            local_e8[local_f0 + 1] = *(undefined1 *)((longlong)plVar2 + 0x21);
            if (local_f0 + 2 < 0x40) {
              local_e8[local_f0 + 2] = *(undefined1 *)plVar10;
              if (local_f0 + 3 < 0x40) {
                plVar10 = (longlong *)((longlong)plVar2 + 0x24);
                local_e8[local_f0 + 3] = *(undefined1 *)((longlong)plVar2 + 0x23);
                lVar11 = 0;
                local_f0 = local_f0 + 4;
              }
              else {
                lVar11 = 1;
                plVar10 = (longlong *)((longlong)plVar2 + 0x23);
                local_f0 = local_f0 + 3;
              }
            }
            else {
              lVar11 = 2;
              local_f0 = local_f0 + 2;
            }
          }
          else {
            lVar11 = 3;
            plVar10 = (longlong *)((longlong)plVar2 + 0x21);
            local_f0 = local_f0 + 1;
          }
        }
        if (local_f0 == 0x40) {
          FUN_1400802f0(&local_f8,local_e8);
          local_f8 = local_f8 + 0x40;
          local_f0 = 0;
        }
        for (; lVar11 != 0; lVar11 = lVar11 + -1) {
          lVar4 = *plVar10;
          plVar10 = (longlong *)((longlong)plVar10 + 1);
          local_e8[local_f0] = (char)lVar4;
          local_f0 = local_f0 + 1;
        }
      }
    }
    if ((param_4[1] != 0) && (param_5 != 0)) {
      FUN_14016c800(local_50,param_4);
      pppppppuVar9 = local_50;
      if (0xf < local_38) {
        pppppppuVar9 = (undefined8 *******)local_50[0];
      }
      FUN_1400810f0(&local_f8,pppppppuVar9,local_40);
      if (0xf < local_38) {
        uVar12 = local_38 + 1;
        pppppppuVar9 = (undefined8 *******)local_50[0];
        if (0xfff < uVar12) {
          pppppppuVar9 = (undefined8 *******)local_50[0][-1];
          if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)pppppppuVar9)))
          goto LAB_14016ce4e;
          uVar12 = local_38 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar9,uVar12);
      }
    }
    if (local_68 != (undefined8 *)0x0) {
      uVar12 = (local_58 - (longlong)local_68 >> 3) * 8;
      puVar13 = local_68;
      if (0xfff < uVar12) {
        puVar13 = (undefined8 *)local_68[-1];
        if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)puVar13))) goto LAB_14016ce4e;
        uVar12 = uVar12 + 0x27;
      }
      thunk_FUN_14028af80(puVar13,uVar12);
    }
  }
  FUN_1400811d0(&local_f8,param_1);
  if (0xf < local_70) {
    uVar12 = local_70 + 1;
    pppppppuVar9 = (undefined8 *******)local_88;
    if (0xfff < uVar12) {
      pppppppuVar9 = (undefined8 *******)local_88[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppppuVar9))) {
LAB_14016ce4e:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      uVar12 = local_70 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar9,uVar12);
  }
  return param_1;
}

