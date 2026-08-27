// Function: FUN_140418f70
// Addr: 140418f70
// Size: 153 bytes


void FUN_140418f70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      puVar2 = &LAB_14038ab40;
      uVar3 = 0;
      uVar4 = 1;
      goto LAB_140418fcb;
    }
    puVar2 = &LAB_14038aa70;
    uVar3 = 1;
  }
  else {
    if (cVar1 != '\0') {
      uVar3 = 1;
      puVar2 = &LAB_14038ac00;
      uVar4 = 1;
      goto LAB_140418fcb;
    }
    puVar2 = &LAB_14038aa00;
    uVar3 = 0;
  }
  uVar4 = 0;
LAB_140418fcb:
  FUN_1403f1da0((char *)(param_1 + 0x10),puVar2,uVar3,uVar4,param_2 + 0x10);
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(char *)(param_1 + 0x40) != '\0') && (*(char *)(param_2 + 0x40) == '\0')) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

