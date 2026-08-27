// Function: FUN_1402787c0
// Addr: 1402787c0
// Size: 536 bytes


ulonglong FUN_1402787c0(undefined8 param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *****pppppuVar5;
  ulonglong uVar6;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  ulonglong local_b8 [8];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  uVar3 = FUN_1402d6aa0();
  FUN_140016170(local_b8 + 4,param_1,uVar3);
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = (undefined8 *****)0x0;
  uStack_d0 = 0;
  uVar3 = FUN_1402d6aa0(param_1);
  FUN_140016170(&local_d8,param_1,uVar3);
  FUN_140277ef0(&local_d8,&DAT_140486ff8);
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  uVar3 = FUN_1402d6aa0(param_1);
  FUN_140016170(local_b8,param_1,uVar3);
  FUN_140277ef0(local_b8,".tex-json");
  FUN_140016600(local_68,local_b8 + 4);
  FUN_140016600(local_48,local_b8);
  local_78 = local_68;
  local_70 = local_28;
  uVar3 = FUN_14027afb0(local_28,&local_78);
  pppppuVar5 = &local_d8;
  if (7 < local_c0) {
    pppppuVar5 = (undefined8 *****)local_d8;
  }
  bVar2 = FUN_1402782c0(pppppuVar5,uVar3,"TEXV0005");
  FUN_140016770(local_48);
  FUN_140016770(local_68);
  if (7 < local_b8[3]) {
    uVar4 = local_b8[3] * 2 + 2;
    uVar6 = local_b8[0];
    if (0xfff < uVar4) {
      uVar6 = *(ulonglong *)(local_b8[0] - 8);
      if (0x1f < (local_b8[0] - uVar6) - 8) goto LAB_1402789d0;
      uVar4 = local_b8[3] * 2 + 0x29;
    }
    thunk_FUN_14028af80(uVar6,uVar4);
  }
  local_b8[2] = 0;
  local_b8[3] = 7;
  local_b8[0] = local_b8[0] & 0xffffffffffff0000;
  if (7 < local_c0) {
    uVar4 = local_c0 * 2 + 2;
    pppppuVar5 = (undefined8 *****)local_d8;
    if (0xfff < uVar4) {
      pppppuVar5 = (undefined8 *****)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar5))) goto LAB_1402789d0;
      uVar4 = local_c0 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppuVar5,uVar4);
  }
  local_c8 = 0;
  local_c0 = 7;
  local_d8 = (undefined8 ****)((ulonglong)local_d8 & 0xffffffffffff0000);
  if (7 < local_b8[7]) {
    uVar4 = local_b8[7] * 2 + 2;
    uVar6 = local_b8[4];
    if (0xfff < uVar4) {
      uVar6 = *(longlong *)(local_b8[4] + -8);
      if (0x1f < (local_b8[4] - uVar6) - 8) {
LAB_1402789d0:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = local_b8[7] * 2 + 0x29;
    }
    thunk_FUN_14028af80(uVar6,uVar4);
  }
  return (ulonglong)bVar2;
}

