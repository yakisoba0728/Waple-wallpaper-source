// Function: FUN_1403b3230
// Addr: 1403b3230
// Size: 120 bytes


void FUN_1403b3230(undefined4 param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (*(char *)(param_2 + 0x11d0) != '\0') {
    return;
  }
  switch(param_1) {
  case 1:
  case 3:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
    uVar1 = *(uint *)(param_2 + 0x1c);
    bVar2 = (bool)((byte)uVar1 & 1);
    goto LAB_1403b327a;
  default:
    goto switchD_1403b325c_caseD_2;
  case 4:
  case 0x16:
    uVar1 = *(uint *)(param_2 + 0x1c);
    bVar2 = uVar1 == 0;
    bVar3 = uVar1 == 1;
    break;
  case 0x15:
    uVar1 = *(uint *)(param_2 + 0x1c);
    bVar2 = uVar1 < 2;
    bVar3 = uVar1 == 2;
  }
  bVar2 = !bVar2 && !bVar3;
LAB_1403b327a:
  if ((uVar1 != 0) && (bVar2 != false)) {
    *(undefined8 *)(param_2 + 0x11d8) = *(undefined8 *)(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x11d1) = 1;
    *(undefined4 *)(param_2 + 0x11d4) = 1;
  }
  *(undefined1 *)(param_2 + 0x11d0) = 1;
switchD_1403b325c_caseD_2:
  return;
}

