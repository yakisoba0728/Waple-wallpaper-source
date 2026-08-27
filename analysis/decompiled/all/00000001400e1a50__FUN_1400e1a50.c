// Function: FUN_1400e1a50
// Addr: 1400e1a50
// Size: 121 bytes


void FUN_1400e1a50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 8) == 8) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xc;
    if (1 < *(int *)(param_2 + 8) - 10U) {
      uVar2 = 0xe;
    }
  }
  puVar1 = (undefined8 *)FUN_14028af20();
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_140486c20;
  *(undefined4 *)(puVar1 + 1) = uVar2;
  puVar1[4] = param_2;
  FUN_1400e5e40(param_1,puVar1);
  return;
}

