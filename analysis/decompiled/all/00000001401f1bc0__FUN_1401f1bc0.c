// Function: FUN_1401f1bc0
// Addr: 1401f1bc0
// Size: 219 bytes


void FUN_1401f1bc0(undefined8 param_1,longlong param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_140086de0(param_1,&DAT_14048eef4,&DAT_14048eef6);
  lVar2 = FUN_140086de0(param_1,&DAT_14048eef8,&DAT_14048eefa);
  lVar3 = FUN_140086de0(param_1,&DAT_14048eefc,&DAT_14048eefe);
  if (*(char *)(lVar1 + 8) == '\x06') {
    FUN_1401a8ce0(lVar1,param_2);
    if (param_4 != '\0') {
      FUN_1401a98b0(param_3,param_2);
    }
  }
  if (*(char *)(lVar2 + 8) == '\x06') {
    FUN_1401a8ce0(lVar2,param_2 + 0x30);
    if (param_4 != '\0') {
      FUN_1401a98b0(param_3,param_2 + 0x30);
    }
  }
  if (*(char *)(lVar3 + 8) == '\x06') {
    FUN_1401a8ce0(lVar3,param_2 + 0x60);
    if (param_4 != '\0') {
      FUN_1401a98b0(param_3,param_2 + 0x60);
    }
  }
  return;
}

