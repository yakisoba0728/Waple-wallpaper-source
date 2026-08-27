// Function: FUN_1400e7880
// Addr: 1400e7880
// Size: 301 bytes


undefined1 FUN_1400e7880(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
  do {
    lVar3 = param_2;
    switch(*(undefined4 *)(param_2 + 8)) {
    default:
      return uVar5;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xe:
    case 0xf:
    case 0x14:
      break;
    case 10:
    case 0xb:
      cVar1 = FUN_1400e7880(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
      uVar5 = uVar4;
      if (cVar1 != '\0') {
        uVar5 = 1;
      }
      lVar3 = 0;
      uVar4 = uVar5;
      if (cVar1 == '\0') {
        lVar3 = param_2;
      }
      break;
    case 0xd:
      iVar2 = *(int *)(param_2 + 0x20) + -1;
LAB_1400e7985:
      *(int *)(param_3 + 0xc) = iVar2;
      return 1;
    case 0x10:
      do {
        cVar1 = FUN_1400e7880(param_1,*(undefined8 *)(lVar3 + 0x10),param_3);
        if (cVar1 != '\0') {
          return 1;
        }
        lVar3 = *(longlong *)(lVar3 + 0x28);
      } while (lVar3 != 0);
      lVar3 = *(longlong *)(param_2 + 0x20);
      break;
    case 0x12:
      lVar3 = *(longlong *)(param_1 + 0x78) + (ulonglong)*(uint *)(param_2 + 0x30) * 0x18;
      cVar1 = FUN_1400e7880(param_1,*(undefined8 *)(param_2 + 0x10),lVar3);
      if (cVar1 != '\0') {
        iVar2 = *(int *)(lVar3 + 0xc);
        goto LAB_1400e7985;
      }
      *(int *)(lVar3 + 0xc) =
           (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 4);
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
    if (lVar3 == 0) {
      return uVar5;
    }
    param_2 = *(longlong *)(lVar3 + 0x10);
    if (param_2 == 0) {
      return uVar5;
    }
  } while( true );
}

