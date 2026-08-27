// Function: FUN_1402fc9a0
// Addr: 1402fc9a0
// Size: 316 bytes


undefined8
FUN_1402fc9a0(int param_1,ulonglong param_2,undefined4 param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_4 + 8);
  uVar6 = param_2 & 0xffff;
  uVar2 = FUN_1402f7700(uVar6,param_3,param_4,param_6);
  if (((int)uVar2 == 0) &&
     (((*(uint *)(param_4 + 8) <= uVar5 ||
       (puVar3 = (undefined8 *)FUN_1402f7790(uVar6,param_5), puVar3 == (undefined8 *)0x0)) ||
      (uVar2 = FUN_1402fc9a0(uVar6,*puVar3,param_3,param_4,param_5,param_6), (int)uVar2 == 0)))) {
    if ((param_2 & 0xffff0000) != 0) {
      uVar5 = 1;
      uVar7 = (uint)(param_2 >> 0x10);
      if (uVar7 != 0) {
        do {
          puVar4 = (undefined4 *)FUN_1402f7790(uVar5 * 0x10000 + param_1,param_5);
          uVar1 = *(uint *)(param_4 + 8);
          uVar2 = FUN_1402f7700(*puVar4,param_3,param_4,param_6);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (((uVar1 < *(uint *)(param_4 + 8)) &&
              (puVar3 = (undefined8 *)FUN_1402f7790(*puVar4,param_5), puVar3 != (undefined8 *)0x0))
             && (uVar2 = FUN_1402fc9a0(*puVar4,*puVar3,param_3,param_4,param_5,param_6),
                (int)uVar2 != 0)) {
            return uVar2;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar7);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

