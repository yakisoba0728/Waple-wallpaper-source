// Function: FUN_1400f16b0
// Addr: 1400f16b0
// Size: 56 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f16b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  if (((((*param_2 != DAT_140426fb8) || (param_2[1] != DAT_140426fc0)) &&
       ((*param_2 != DAT_140487398 || (param_2[1] != _UNK_1404873a0)))) &&
      ((*param_2 != _DAT_1404873b8 || (param_2[1] != _UNK_1404873c0)))) &&
     ((*param_2 != _UNK_1404873a8 || (param_2[1] != _UNK_1404873b0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001400f1742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)**(undefined8 **)param_1[2])();
    return uVar1;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}

