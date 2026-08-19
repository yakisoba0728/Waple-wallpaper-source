// Function: FUN_14028fe40
// Addr: 14028fe40
// Size: 81 bytes


undefined8 FUN_14028fe40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (*DAT_1404265d0)(param_1,param_2,2);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = (*DAT_1404266a8)();
  if ((int)uVar2 == 0x57) {
    cVar1 = (*DAT_1404265d0)(param_1,param_2,0);
    if (cVar1 != '\0') {
      return 0;
    }
    uVar2 = (*DAT_1404266a8)();
  }
  return uVar2;
}

