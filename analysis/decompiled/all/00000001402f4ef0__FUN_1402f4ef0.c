// Function: FUN_1402f4ef0
// Addr: 1402f4ef0
// Size: 123 bytes


undefined8 FUN_1402f4ef0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 8) != 0)) {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x90) + 0x30);
    if (pcVar1 != (code *)0x0) {
      lVar2 = (*pcVar1)(*(longlong **)(param_1 + 0x90),"sfnt-table");
      if (lVar2 != 0) {
        uVar3 = (**(code **)(lVar2 + 0x10))(param_1,param_2,param_3,local_res8,param_4);
        return uVar3;
      }
    }
    return 7;
  }
  return 0x23;
}

