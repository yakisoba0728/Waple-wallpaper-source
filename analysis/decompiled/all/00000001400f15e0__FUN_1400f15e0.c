// Function: FUN_1400f15e0
// Addr: 1400f15e0
// Size: 149 bytes


undefined8 FUN_1400f15e0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  if (((((*param_2 != DAT_140426ee8) || (param_2[1] != DAT_140426ef0)) &&
       ((*param_2 != DAT_1404872c8 || (param_2[1] != DAT_1404872d0)))) &&
      ((*param_2 != DAT_1404872e8 || (param_2[1] != DAT_1404872f0)))) &&
     ((*param_2 != DAT_1404872d8 || (param_2[1] != DAT_1404872e0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001400f1672. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined8 **)param_1[2])();
    return uVar1;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}

