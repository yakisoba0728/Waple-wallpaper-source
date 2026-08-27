// Function: FUN_1401511b0
// Addr: 1401511b0
// Size: 1022 bytes


void FUN_1401511b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *local_res8;
  undefined4 local_b8 [2];
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  lVar8 = param_1[0x10];
  local_78[0] = *(undefined4 *)(lVar8 + 0x1520);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_res8 = param_1;
  local_70 = (undefined8 *)FUN_14028af20(0x38);
  *local_70 = local_70;
  local_70[1] = local_70;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = *(undefined8 *)(lVar8 + 0x1550);
  local_40 = *(undefined8 *)(lVar8 + 0x1558);
  FUN_140037600(&local_60,*(longlong *)(lVar8 + 0x1540) - *(longlong *)(lVar8 + 0x1538) >> 3,
                local_70);
  FUN_140152a30(local_78,**(undefined8 **)(lVar8 + 0x1528),*(undefined8 **)(lVar8 + 0x1528));
  local_b8[0] = 0;
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_b0 = (longlong *)FUN_14028af20(0x18);
  *local_b0 = (longlong)local_b0;
  local_b0[1] = (longlong)local_b0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 7;
  local_80 = 8;
  local_b8[0] = 0x3f800000;
  FUN_14003e510(&local_a0,0x10,local_b0);
  puVar2 = local_70;
  for (puVar1 = (undefined8 *)*local_70; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
    lVar8 = puVar1[6];
    if (((lVar8 != 0) && ((*(byte *)(lVar8 + 0x10) & 1) == 0)) && (*(int *)(lVar8 + 0xd4) == 0)) {
      FUN_1401524b0(local_b8,local_38);
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)*puVar1;
  plVar6 = local_b0;
  lVar8 = local_a0;
  uVar9 = local_88;
  do {
    lVar11 = 0;
    if (puVar2 == puVar1) {
      for (plVar5 = (longlong *)*plVar6; plVar5 != plVar6; plVar5 = (longlong *)*plVar5) {
        local_res8 = (undefined8 *)plVar5[2];
        FUN_14014cc70(param_1[0x10] + 0x1520,&local_res8,0);
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      FUN_14000d9e0(&local_a0);
      FUN_140049340(&local_b0);
      FUN_14000d9e0(&local_60);
      FUN_140030c70(&local_70);
      return;
    }
    do {
      uVar3 = *(ulonglong *)(puVar2[6] + 0xd0 + lVar11 * 8);
      if (uVar3 != 0) {
        uVar10 = uVar9 & ((((((((uVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                               (longlong)uVar3 >> 8 & 0xffU) * 0x100000001b3 ^
                              (longlong)uVar3 >> 0x10 & 0xffU) * 0x100000001b3 ^
                             (longlong)uVar3 >> 0x18 & 0xffU) * 0x100000001b3 ^
                            (longlong)uVar3 >> 0x20 & 0xffU) * 0x100000001b3 ^
                           (longlong)uVar3 >> 0x28 & 0xffU) * 0x100000001b3 ^
                          (longlong)uVar3 >> 0x30 & 0xffU) * 0x100000001b3 ^
                         (longlong)uVar3 >> 0x38 & 0xffU) * 0x100000001b3;
        plVar5 = *(longlong **)(lVar8 + 8 + uVar10 * 0x10);
        if (plVar5 == plVar6) {
LAB_140151411:
          plVar5 = (longlong *)0x0;
        }
        else {
          uVar4 = plVar5[2];
          while (uVar3 != uVar4) {
            if (plVar5 == *(longlong **)(lVar8 + uVar10 * 0x10)) goto LAB_140151411;
            plVar5 = (longlong *)plVar5[1];
            uVar4 = plVar5[2];
          }
        }
        plVar7 = plVar6;
        if (plVar5 != (longlong *)0x0) {
          plVar7 = plVar5;
        }
        if (plVar7 != plVar6) {
          uVar9 = uVar9 & (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) *
                                 0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) *
                                0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) *
                               0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) *
                          0x100000001b3;
          plVar5 = *(longlong **)(lVar8 + uVar9 * 0x10);
          if (*(longlong **)(lVar8 + 8 + uVar9 * 0x10) == plVar7) {
            if (plVar5 == plVar7) {
              *(longlong **)(lVar8 + uVar9 * 0x10) = plVar6;
              *(longlong **)(lVar8 + 8 + uVar9 * 0x10) = plVar6;
            }
            else {
              *(longlong *)(lVar8 + 8 + uVar9 * 0x10) = plVar7[1];
            }
          }
          else if (plVar5 == plVar7) {
            *(longlong *)(lVar8 + uVar9 * 0x10) = *plVar7;
          }
          lVar8 = *plVar7;
          local_a8 = local_a8 + -1;
          *(longlong *)plVar7[1] = lVar8;
          *(longlong *)(lVar8 + 8) = plVar7[1];
          thunk_FUN_14028af80(plVar7,0x18);
          plVar6 = local_b0;
          lVar8 = local_a0;
          uVar9 = local_88;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 10);
    puVar2 = (undefined8 *)*puVar2;
    param_1 = local_res8;
  } while( true );
}

