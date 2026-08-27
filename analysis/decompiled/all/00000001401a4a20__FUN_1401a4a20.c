// Function: FUN_1401a4a20
// Addr: 1401a4a20
// Size: 167 bytes


void FUN_1401a4a20(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 4);
  lVar2 = param_1[1];
  if (*(char *)(param_3 + 8) == '\x05') {
    uVar3 = FUN_140086300(param_3);
    *(undefined1 *)(iVar1 + lVar2) = uVar3;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_140176f70(*param_1,param_1[1],param_2);
    if (*(char *)(param_3 + 8) == '\a') {
      lVar4 = FUN_140087490(param_3,"value","");
      if (lVar4 == 0) {
        lVar4 = FUN_140084ac0();
      }
      if (*(char *)(lVar4 + 8) == '\x05') {
        uVar3 = FUN_140086300(lVar4);
        *(undefined1 *)(iVar1 + lVar2) = uVar3;
      }
      FUN_1401a4db0(param_2,param_1,param_3);
    }
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
  }
  return;
}

