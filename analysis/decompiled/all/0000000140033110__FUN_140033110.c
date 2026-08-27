// Function: FUN_140033110
// Addr: 140033110
// Size: 526 bytes


undefined8 *
FUN_140033110(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  uVar6 = uVar3 - param_2;
  uVar4 = param_1[3];
  if (uVar6 < param_3) {
    param_3 = uVar6;
  }
  if (param_3 != param_5) {
    if (param_5 < param_3) {
      puVar5 = param_1;
      if (7 < uVar4) {
        puVar5 = (undefined8 *)*param_1;
      }
      lVar1 = (longlong)puVar5 + param_2 * 2;
      FUN_1404210f0(lVar1,param_4,param_5 * 2);
      FUN_1404210f0(param_5 * 2 + lVar1,(longlong)puVar5 + (param_3 + param_2) * 2,
                    (uVar6 - param_3) * 2 + 2);
      param_1[2] = (uVar3 - param_3) + param_5;
    }
    else {
      uVar7 = param_5 - param_3;
      if (uVar4 - uVar3 < uVar7) {
        param_1 = (undefined8 *)FUN_140035080(param_1,uVar7,uVar4,param_2,param_3,param_4,param_5);
      }
      else {
        param_1[2] = uVar3 + uVar7;
        puVar5 = param_1;
        if (7 < uVar4) {
          puVar5 = (undefined8 *)*param_1;
        }
        uVar4 = (longlong)puVar5 + (param_3 + param_2) * 2;
        uVar2 = (longlong)puVar5 + param_2 * 2;
        uVar8 = param_5;
        if ((uVar2 < param_5 * 2 + param_4) && (param_4 <= (longlong)puVar5 + uVar3 * 2)) {
          if (param_4 < uVar4) {
            uVar8 = (longlong)(uVar4 - param_4) >> 1;
          }
          else {
            uVar8 = 0;
          }
        }
        FUN_1404210f0(uVar4 + uVar7 * 2,uVar4,(uVar6 - param_3) * 2 + 2);
        FUN_1404210f0(uVar2,param_4,uVar8 * 2);
        FUN_1404210f0(uVar8 * 2 + uVar2,(uVar7 + uVar8) * 2 + param_4,(param_5 - uVar8) * 2);
      }
    }
    return param_1;
  }
  puVar5 = param_1;
  if (7 < uVar4) {
    puVar5 = (undefined8 *)*param_1;
  }
  FUN_1404210f0((longlong)puVar5 + param_2 * 2,param_4,param_5 * 2);
  return param_1;
}

