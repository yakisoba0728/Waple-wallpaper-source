// Function: FUN_140196ac0
// Addr: 140196ac0
// Size: 383 bytes


undefined4 * FUN_140196ac0(longlong *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0x200) {
    puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,param_3);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = FUN_1402c0e80(param_3,0,10);
      puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,uVar2);
    }
  }
  else if (param_2 == 8) {
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,*param_3);
  }
  else {
    puVar1 = (undefined4 *)0x0;
    if ((param_2 == 0x800) &&
       (lVar3 = thunk_FUN_14028d250(param_1[0x21],param_1[0x22]), puVar1 = param_3,
       lVar3 == param_1[0x22])) {
      puVar1 = (undefined4 *)0x0;
    }
  }
  lVar3 = param_1[0x39];
  uVar5 = param_1[0x3e] &
          (((((((((ulonglong)puVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)puVar1 >> 8 & 0xff) * 0x100000001b3 ^ (ulonglong)puVar1 >> 0x10 & 0xff) *
               0x100000001b3 ^ (ulonglong)puVar1 >> 0x18 & 0xff) * 0x100000001b3 ^
             (ulonglong)puVar1 >> 0x20 & 0xff) * 0x100000001b3 ^ (ulonglong)puVar1 >> 0x28 & 0xff) *
            0x100000001b3 ^ (ulonglong)puVar1 >> 0x30 & 0xff) * 0x100000001b3 ^
          (ulonglong)puVar1 >> 0x38) * 0x100000001b3;
  lVar4 = *(longlong *)(param_1[0x3b] + 8 + uVar5 * 0x10);
  if (lVar4 == lVar3) {
LAB_140196c21:
    lVar4 = 0;
  }
  else {
    puVar6 = *(undefined4 **)(lVar4 + 0x10);
    while (puVar1 != puVar6) {
      if (lVar4 == *(longlong *)(param_1[0x3b] + uVar5 * 0x10)) goto LAB_140196c21;
      lVar4 = *(longlong *)(lVar4 + 8);
      puVar6 = *(undefined4 **)(lVar4 + 0x10);
    }
  }
  if (lVar4 == 0) {
    lVar4 = lVar3;
  }
  puVar6 = (undefined4 *)0x0;
  if (lVar4 == lVar3) {
    puVar6 = puVar1;
  }
  return puVar6;
}

