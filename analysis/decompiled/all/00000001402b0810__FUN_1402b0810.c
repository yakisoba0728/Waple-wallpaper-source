// Function: FUN_1402b0810
// Addr: 1402b0810
// Size: 513 bytes


void FUN_1402b0810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  longlong param_5,undefined8 param_6,short *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  short *psVar4;
  undefined8 ***pppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_118 [80];
  undefined1 local_c8;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined8 **local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined2 local_58 [10];
  short local_44;
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_118;
  uVar1 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
  local_c8 = param_4;
  local_b0 = uVar1;
  local_a8 = param_3;
  local_a0 = param_1;
  (*(code *)PTR_FUN_140426bb8)(uVar1);
  uVar2 = FUN_14000f520(local_b8);
  lVar3 = (*(code *)PTR_FUN_140426bb8)(uVar1);
  if (lVar3 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar3,1);
  }
  (*(code *)PTR_FUN_140426bb8)(uVar2,"0123456789-",&DAT_14042bf6c,local_58);
  uVar8 = 0;
  uVar6 = *(ulonglong *)(param_7 + 8);
  uVar7 = uVar8;
  if (uVar6 != 0) {
    psVar4 = param_7;
    if (7 < *(ulonglong *)(param_7 + 0xc)) {
      psVar4 = *(short **)param_7;
    }
    if (*psVar4 == local_44) {
      uVar8 = 1;
      uVar7 = uVar8;
    }
  }
  for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
    psVar4 = param_7;
    if (7 < *(ulonglong *)(param_7 + 0xc)) {
      psVar4 = *(short **)param_7;
    }
    lVar3 = func_0x00014028f010(local_58,local_42,psVar4[uVar8]);
    if (9 < (ulonglong)(lVar3 - (longlong)local_58 >> 1)) break;
  }
  if (7 < *(ulonglong *)(param_7 + 0xc)) {
    param_7 = *(short **)param_7;
  }
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_140016240(&local_78,param_7 + uVar7,uVar8 - uVar7);
  if (local_68 == 0) {
    if (local_60 == 0) {
      FUN_140016060(&local_78,1,local_c8,local_58[0]);
    }
    else {
      if ((7 < local_60) && (DAT_140472300 != '\0')) {
        uVar8 = local_60 * 2 + 9 + (longlong)local_78 & 0xfffffffffffffff8;
        uVar6 = uVar8;
        if ((longlong)local_78 + 2U <= uVar8) {
          uVar6 = (longlong)local_78 + 2U;
        }
        uVar7 = (longlong)local_78 + 4U;
        if (uVar8 < (longlong)local_78 + 4U) {
          uVar7 = uVar8;
        }
        func_0x00014000ed00(local_78,uVar8,uVar6,uVar7);
      }
      local_68 = 1;
      pppuVar5 = &local_78;
      if (7 < local_60) {
        pppuVar5 = (undefined8 ***)local_78;
      }
      *(undefined2 *)pppuVar5 = local_58[0];
      *(undefined2 *)((longlong)pppuVar5 + 2) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(local_98,&local_78);
}

