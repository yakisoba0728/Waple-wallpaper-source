// Function: FUN_14004bb30
// Addr: 14004bb30
// Size: 421 bytes


undefined8 *
FUN_14004bb30(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  uVar6 = param_1[3];
  uVar4 = uVar3 - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  if (param_3 == param_5) {
    puVar5 = param_1;
    if (0xf < uVar6) {
      puVar5 = (undefined8 *)*param_1;
    }
    FUN_1404210f0((longlong)puVar5 + param_2,param_4,param_5);
  }
  else {
    lVar1 = (uVar4 - param_3) + 1;
    if (param_5 < param_3) {
      puVar5 = param_1;
      if (0xf < uVar6) {
        puVar5 = (undefined8 *)*param_1;
      }
      lVar2 = (longlong)puVar5 + param_2;
      FUN_1404210f0(lVar2,param_4,param_5);
      FUN_1404210f0(lVar2 + param_5,param_3 + lVar2,lVar1);
      param_1[2] = (uVar3 - param_3) + param_5;
    }
    else {
      uVar4 = param_5 - param_3;
      if (uVar6 - uVar3 < uVar4) {
        param_1 = (undefined8 *)FUN_14004eda0(param_1,uVar4,lVar1,param_2,param_3,param_4,param_5);
      }
      else {
        param_1[2] = uVar3 + uVar4;
        puVar5 = param_1;
        if (0xf < uVar6) {
          puVar5 = (undefined8 *)*param_1;
        }
        param_2 = (longlong)puVar5 + param_2;
        param_3 = param_3 + param_2;
        uVar6 = param_5;
        if ((param_2 < param_4 + param_5) && (param_4 <= uVar3 + (longlong)puVar5)) {
          if (param_4 < param_3) {
            uVar6 = param_3 - param_4;
          }
          else {
            uVar6 = 0;
          }
        }
        FUN_1404210f0(param_3 + uVar4);
        FUN_1404210f0(param_2,param_4,uVar6);
        FUN_1404210f0(uVar6 + param_2,uVar6 + uVar4 + param_4,param_5 - uVar6);
      }
    }
  }
  return param_1;
}

