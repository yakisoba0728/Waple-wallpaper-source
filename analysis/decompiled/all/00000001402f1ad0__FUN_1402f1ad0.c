// Function: FUN_1402f1ad0
// Addr: 1402f1ad0
// Size: 115 bytes


undefined8 FUN_1402f1ad0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 8) != 0)) {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (pcVar1 != (code *)0x0) {
      puVar2 = (undefined8 *)(*pcVar1)(*(longlong **)(param_1 + 0x90),"sfnt-table");
      if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f1b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3,param_4);
        return uVar3;
      }
    }
    return 7;
  }
  return 0x23;
}

