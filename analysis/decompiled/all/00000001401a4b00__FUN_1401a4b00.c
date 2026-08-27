// Function: FUN_1401a4b00
// Addr: 1401a4b00
// Size: 184 bytes


void FUN_1401a4b00(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_2 + 4);
  lVar2 = param_1[1];
  if (*(byte *)(param_3 + 8) - 1 < 3) {
    uVar4 = FUN_140086220(param_3);
    *(undefined4 *)(lVar2 + iVar1) = uVar4;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_140176f70(*param_1,param_1[1],param_2);
    if (*(char *)(param_3 + 8) == '\a') {
      lVar3 = FUN_140087490(param_3,"value","");
      if (lVar3 == 0) {
        lVar3 = FUN_140084ac0();
      }
      if (*(byte *)(lVar3 + 8) - 1 < 3) {
        uVar4 = FUN_140086220();
        *(undefined4 *)(lVar2 + iVar1) = uVar4;
      }
      FUN_1401a4db0(param_2,param_1,param_3);
    }
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
  }
  return;
}

