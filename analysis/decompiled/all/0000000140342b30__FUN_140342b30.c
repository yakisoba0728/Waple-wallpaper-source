// Function: FUN_140342b30
// Addr: 140342b30
// Size: 131 bytes


ulonglong FUN_140342b30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,param_2,0);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1402f5610(param_2,&DAT_1404513f8,param_1 + 0x270);
    if ((int)uVar2 == 0) {
      iVar1 = *(int *)(param_1 + 0x270);
      if (((iVar1 != 0x30000) && (iVar1 != 0x25000)) && (iVar1 != 0x20000)) {
        uVar2 = uVar2 & 0xffffffff;
        if (iVar1 != 0x10000) {
          uVar2 = 0x9a;
        }
        return uVar2;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

