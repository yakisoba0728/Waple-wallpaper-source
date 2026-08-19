// Function: FUN_140419040
// Addr: 140419040
// Size: 153 bytes


void FUN_140419040(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      puVar2 = &LAB_14038ac10;
      uVar3 = 0;
      uVar4 = 1;
      goto LAB_14041909b;
    }
    puVar2 = &LAB_14038ab40;
    uVar3 = 1;
  }
  else {
    if (cVar1 != '\0') {
      uVar3 = 1;
      puVar2 = &LAB_14038acd0;
      uVar4 = 1;
      goto LAB_14041909b;
    }
    puVar2 = &LAB_14038aad0;
    uVar3 = 0;
  }
  uVar4 = 0;
LAB_14041909b:
  FUN_1403f1e70((char *)(param_1 + 0x10),puVar2,uVar3,uVar4,param_2 + 0x10);
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(char *)(param_1 + 0x40) != '\0') && (*(char *)(param_2 + 0x40) == '\0')) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}

