// Function: FUN_140368db0
// Addr: 140368db0
// Size: 479 bytes


void FUN_140368db0(undefined4 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  uVar6 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)(uVar6 & 0xfffffffffffffff0) < 0x201) {
      FUN_140362e70(param_1,param_2,param_4);
LAB_140368f33:
      func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_88);
      return;
    }
    uVar6 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) {
      FUN_140363800(param_1,param_2,param_4);
      while (0x1f < (longlong)(uVar6 & 0xfffffffffffffff0)) {
        puVar1 = (undefined8 *)((longlong)param_2 + -0x10);
        if (0x1f < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U)) {
          local_50 = (undefined4 *)*puVar1;
          puStack_48 = *(undefined4 **)((longlong)param_2 + -8);
          uVar2 = param_1[1];
          uVar3 = param_1[2];
          uVar4 = param_1[3];
          *(undefined4 *)puVar1 = *param_1;
          *(undefined4 *)((longlong)param_2 + -0xc) = uVar2;
          *(undefined4 *)((longlong)param_2 + -8) = uVar3;
          *(undefined4 *)((longlong)param_2 + -4) = uVar4;
          local_68 = param_4;
          FUN_140367b40(param_1,0,(longlong)puVar1 - (longlong)param_1 >> 4,&local_50);
        }
        param_2 = puVar1;
        uVar6 = (longlong)puVar1 - (longlong)param_1;
      }
      goto LAB_140368f33;
    }
    local_58 = param_1 + ((longlong)uVar6 >> 5) * 4;
    puVar8 = (undefined4 *)((longlong)param_2 + -0x10);
    lVar9 = (longlong)puVar8 - (longlong)param_1 >> 4;
    puVar7 = param_1;
    if (0x28 < lVar9) {
      lVar9 = lVar9 + 1 >> 3;
      puVar7 = param_1 + lVar9 * 4;
      FUN_140364a40(param_1,puVar7,param_1 + lVar9 * 8,param_4);
      FUN_140364a40(local_58 + lVar9 * -4,local_58,local_58 + lVar9 * 4,param_4);
      puVar8 = puVar8 + lVar9 * -4;
      FUN_140364a40((undefined4 *)((longlong)param_2 + -0x10) + lVar9 * -8,puVar8,
                    (undefined4 *)((longlong)param_2 + -0x10),param_4);
    }
    puVar5 = local_58;
    FUN_140364a40(puVar7,local_58,puVar8,param_4);
    local_68 = param_4;
    FUN_1403659f0(&local_50,param_1,puVar5,param_2);
    puVar7 = puStack_48;
    puVar8 = local_50;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_50 - (longlong)param_1 & 0xfffffffffffffff0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_48 & 0xfffffffffffffff0U)) {
      FUN_140368db0(param_1,local_50,param_3,param_4);
      puVar8 = (undefined4 *)param_2;
      param_1 = puVar7;
    }
    else {
      FUN_140368db0(puStack_48,param_2,param_3,param_4);
    }
    uVar6 = (longlong)puVar8 - (longlong)param_1;
    param_2 = (undefined8 *)puVar8;
  } while( true );
}

