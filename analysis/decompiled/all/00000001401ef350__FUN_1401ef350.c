// Function: FUN_1401ef350
// Addr: 1401ef350
// Size: 206 bytes


void FUN_1401ef350(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*(int *)(param_2 + 4);
  lVar2 = param_1[1];
  uVar1 = *(uint *)(lVar6 + lVar2);
  if (*(char *)(param_3 + 8) == '\x05') {
    cVar3 = FUN_140086300(param_3);
    uVar5 = uVar1 | 0x40;
    if (cVar3 == '\0') {
      uVar5 = uVar1 & 0xffffffbf;
    }
    *(uint *)(lVar6 + lVar2) = uVar5;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_140176f70(*param_1,param_1[1],param_2);
    if (*(char *)(param_3 + 8) == '\a') {
      lVar4 = FUN_140087490(param_3,"value","");
      if (lVar4 == 0) {
        lVar4 = FUN_140084ac0();
      }
      if (*(char *)(lVar4 + 8) == '\x05') {
        cVar3 = FUN_140086300(lVar4);
        uVar5 = uVar1 | 0x40;
        if (cVar3 == '\0') {
          uVar5 = uVar1 & 0xffffffbf;
        }
        *(uint *)(lVar6 + lVar2) = uVar5;
      }
      FUN_1401a4db0(param_2,param_1,param_3);
    }
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
  }
  return;
}

