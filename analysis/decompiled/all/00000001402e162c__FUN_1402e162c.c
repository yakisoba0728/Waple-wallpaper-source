// Function: FUN_1402e162c
// Addr: 1402e162c
// Size: 47 bytes


undefined8 FUN_1402e162c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1404e4d98;
    uVar2 = 0;
  }
  return uVar2;
}

