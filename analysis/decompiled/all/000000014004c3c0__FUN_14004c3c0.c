// Function: FUN_14004c3c0
// Addr: 14004c3c0
// Size: 248 bytes


longlong FUN_14004c3c0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      lVar4 = *(longlong *)(param_1 + 0x88);
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar4;
      **(longlong **)(param_1 + 0x38) = lVar4;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar4;
    }
    cVar2 = FUN_14004c220(param_1);
    lVar4 = 0;
    if (cVar2 != '\0') {
      lVar4 = param_1;
    }
    iVar3 = FUN_1402c9cf8(*(undefined8 *)(param_1 + 0x80));
    if (iVar3 == 0) goto LAB_14004c442;
  }
  lVar4 = 0;
LAB_14004c442:
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 **)(param_1 + 0x58) = (undefined4 *)(param_1 + 0x4c);
  *(longlong *)(param_1 + 0x18) = param_1 + 8;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(longlong *)(param_1 + 0x38) = param_1 + 0x28;
  *(undefined8 **)(param_1 + 0x20) = (undefined8 *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x50) = param_1 + 0x48;
  *(undefined8 **)(param_1 + 0x40) = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x74) = DAT_1404e8f40;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar4;
}

