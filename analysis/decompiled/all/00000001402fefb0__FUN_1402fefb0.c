// Function: FUN_1402fefb0
// Addr: 1402fefb0
// Size: 219 bytes


void FUN_1402fefb0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = 0;
    uVar1 = *(undefined8 *)(*param_1 + 0x98);
    do {
      if (param_1[lVar2 + 9] != 0) {
        if (*(code **)((&PTR_DAT_140438ac0)[*(int *)((&PTR_DAT_140439e60)[lVar2] + 4)] + 0x20) !=
            (code *)0x0) {
          (**(code **)((&PTR_DAT_140438ac0)[*(int *)((&PTR_DAT_140439e60)[lVar2] + 4)] + 0x20))();
        }
        FUN_1402f7f90(uVar1,param_1[lVar2 + 9]);
        param_1[lVar2 + 9] = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x57);
    FUN_140415ec0(param_1[3]);
    FUN_1404145e0(param_1[4]);
    FUN_1402f7f90(uVar1,param_1[5]);
    param_1[5] = 0;
    FUN_1402f7f90(uVar1,param_1[7]);
    param_1[7] = 0;
    FUN_1402f7f90(uVar1,param_1);
  }
  return;
}

