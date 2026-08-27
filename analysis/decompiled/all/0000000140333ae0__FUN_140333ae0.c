// Function: FUN_140333ae0
// Addr: 140333ae0
// Size: 218 bytes


undefined8 FUN_140333ae0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulonglong uVar4;
  int local_res8 [2];
  
  local_res8[0] = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1[2];
  if (param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffff)) / auVar2,0)) {
    uVar4 = param_1[2] * param_2;
    uVar3 = FUN_1402f7ff0(*param_1,1,*(undefined4 *)(param_1 + 5),uVar4 & 0xffffffff,param_1[6],
                          local_res8);
    param_1[6] = uVar3;
    if (local_res8[0] == 0) {
      param_1[3] = param_2;
      param_1[5] = uVar4;
      if (param_2 < (ulonglong)param_1[4]) {
        piVar1 = (int *)param_1[1];
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
          *piVar1 = 0x82;
        }
        param_1[4] = param_2;
        return 0;
      }
      return 1;
    }
  }
  piVar1 = (int *)param_1[1];
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    *piVar1 = 0x40;
  }
  return 0;
}

