// Function: FUN_140072050
// Addr: 140072050
// Size: 312 bytes


undefined8 * FUN_140072050(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  uVar6 = 0;
  uVar7 = 0;
  local_58 = 0;
  uStack_50 = 0xf;
  uStack_60 = 0;
  local_68 = 0;
  uVar5 = 0;
  if ((-1 < DAT_1404e6408) &&
     (uVar5 = 0,
     (ulonglong)(longlong)DAT_1404e6408 <
     (ulonglong)((DAT_1404e5448 - DAT_1404e5440 >> 3) * -0x71c71c71c71c71c7))) {
    puVar2 = (undefined8 *)
             FUN_140005790(local_48,DAT_1404e5440 + (longlong)DAT_1404e6408 * 0x48 + 8);
    if (&local_68 == puVar2) {
      uVar6 = (undefined4)local_68;
      uVar8 = local_68._4_4_;
      uVar9 = (undefined4)uStack_60;
      uVar10 = uStack_60._4_4_;
      uVar7 = (undefined4)local_58;
      uVar11 = local_58._4_4_;
      uVar12 = (undefined4)uStack_50;
      uVar13 = uStack_50._4_4_;
    }
    else {
      uVar6 = *(undefined4 *)puVar2;
      uVar7 = *(undefined4 *)(puVar2 + 2);
      uVar12 = *(undefined4 *)(puVar2 + 3);
      puVar2[2] = 0;
      puVar2[3] = 0xf;
      *(undefined1 *)puVar2 = 0;
      uVar8 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar9 = *(undefined4 *)(puVar2 + 1);
      uVar10 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar11 = *(undefined4 *)((longlong)puVar2 + 0x14);
      uVar13 = *(undefined4 *)((longlong)puVar2 + 0x1c);
    }
    if (0xf < local_30) {
      uVar4 = local_30 + 1;
      lVar3 = local_48[0];
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar3) - 8U) {
          pcVar1 = (code *)swi(0x29);
          uVar5 = (*pcVar1)(5);
          uVar6 = extraout_XMM0_Dc;
          uVar7 = extraout_XMM0_Dd;
          goto LAB_140072166;
        }
        uVar4 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(lVar3,uVar4);
    }
    *(undefined4 *)param_2 = uVar6;
    *(undefined4 *)((longlong)param_2 + 4) = uVar8;
    *(undefined4 *)(param_2 + 1) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
    *(undefined4 *)(param_2 + 2) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar11;
    *(undefined4 *)(param_2 + 3) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar13;
    return param_2;
  }
LAB_140072166:
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return param_2;
}

