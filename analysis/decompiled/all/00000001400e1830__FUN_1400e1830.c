// Function: FUN_1400e1830
// Addr: 1400e1830
// Size: 480 bytes


void FUN_1400e1830(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_2 != param_3) {
    do {
      if (param_2 == 0) {
        return;
      }
      lVar3 = param_4;
      switch(*(undefined4 *)(param_2 + 8)) {
      case 7:
        if ((param_4 != 0) &&
           ((((*(longlong *)(param_2 + 0x20) != 0 &&
              ((((*(longlong *)(param_2 + 0x28) != 0 || (*(longlong *)(param_2 + 0x30) != 0)) ||
                (*(longlong *)(param_2 + 0x38) != 0)) ||
               ((*(short *)(param_2 + 0x40) != 0 ||
                (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18) != 0)))))) ||
             (*(longlong *)(param_2 + 0x48) != 0)) ||
            (((*(uint *)(param_1 + 0x68) & 0x800) != 0 &&
             ((*(longlong *)(param_2 + 0x38) != 0 || ((*(byte *)(param_2 + 0xc) & 1) != 0)))))))) {
          *(undefined4 *)(param_4 + 0x34) = 0;
LAB_1400e19de:
          *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) & 0xffffefff;
        }
        break;
      case 10:
        if (param_4 != 0) {
          *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) & 0xffffefff;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
      case 0xb:
        FUN_1400e1830(param_1,*(undefined8 *)(param_2 + 0x20),0,0,1);
        break;
      case 0xf:
        if ((param_4 != 0) && (param_5 == '\0')) goto LAB_1400e19de;
        break;
      case 0x10:
        if (param_4 != 0) {
          *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) & 0xffffefff;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        for (lVar1 = *(longlong *)(param_2 + 0x28); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28))
        {
          FUN_1400e1830(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),param_4,
                        param_5);
        }
        break;
      case 0x12:
        if (param_4 == 0) {
          *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x1000;
          lVar3 = param_2;
        }
        else {
          *(uint *)(param_4 + 0xc) = *(uint *)(param_4 + 0xc) & 0xffffefff;
          *(undefined4 *)(param_4 + 0x34) = 0;
          *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x1000;
          if ((*(uint *)(param_4 + 0x24) < 2) && (param_5 != '\0')) {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
            *(undefined4 *)(param_2 + 0x34) = 0;
          }
          FUN_1400e1830(param_1,*(undefined8 *)(param_2 + 0x10),
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),param_2,uVar2);
          param_2 = *(longlong *)(param_2 + 0x28);
        }
        break;
      case 0x13:
        if ((param_4 == *(longlong *)(param_2 + 0x20)) &&
           (lVar3 = 0, *(int *)(param_4 + 0x34) == -1)) {
          *(undefined4 *)(param_4 + 0x34) = 1;
        }
      }
      param_2 = *(longlong *)(param_2 + 0x10);
      param_4 = lVar3;
    } while (param_2 != param_3);
  }
  return;
}

