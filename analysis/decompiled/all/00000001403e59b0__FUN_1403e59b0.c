// Function: FUN_1403e59b0
// Addr: 1403e59b0
// Size: 396 bytes


longlong FUN_1403e59b0(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 **)(param_2 + 8) = &DAT_14045dd10;
  param_2[6] = 0;
  *param_2 = 0;
  lVar6 = *param_1;
  uVar2 = *(int *)(lVar6 + 0x14) + 1;
  if (uVar2 <= *(uint *)(lVar6 + 0x10)) {
    do {
      uVar2 = *(uint *)(lVar6 + 0x14);
      uVar4 = uVar2 + 1;
      if (*(uint *)(lVar6 + 0x10) < uVar4) {
LAB_1403e5a2e:
        lVar6 = *param_1;
        uVar5 = 0xffff;
switchD_1403e5af0_caseD_c:
        local_3c = 0;
        local_40 = 0xffff;
        local_48 = 0;
        FUN_1403f4a60(uVar5,lVar6);
        if (*(int *)(lVar6 + 0x1c) == 0) goto LAB_1403e5a53;
      }
      else {
        bVar1 = *(byte *)((ulonglong)uVar2 + *(longlong *)(lVar6 + 8));
        uVar5 = (uint)bVar1;
        *(uint *)(lVar6 + 0x14) = uVar4;
        if (bVar1 == 0xc) {
          if (*(uint *)(lVar6 + 0x10) < uVar2 + 2) goto LAB_1403e5a2e;
          uVar5 = *(byte *)((ulonglong)uVar4 + *(longlong *)(lVar6 + 8)) + 0x100;
          *(uint *)(lVar6 + 0x14) = uVar2 + 2;
        }
        lVar6 = *param_1;
        local_48 = 0;
        local_40 = 0xffff;
        local_3c = 0;
        if (0x109 < uVar5) {
          switch(uVar5) {
          case 0x10a:
          case 0x10b:
          case 0x10c:
          case 0x10d:
          case 0x10e:
          case 0x111:
          case 0x112:
          case 0x113:
            goto switchD_1403e5af0_caseD_6;
          default:
            goto switchD_1403e5af0_caseD_c;
          }
        }
        if (uVar5 != 0x109) {
          switch(uVar5) {
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0x14:
          case 0x15:
            break;
          default:
            goto switchD_1403e5af0_caseD_c;
          case 0x13:
            uVar3 = FUN_1403f0d00(lVar6 + 0x18);
            param_2[6] = uVar3;
            *(undefined4 *)(lVar6 + 0x1c) = 0;
            goto LAB_1403e5a53;
          }
        }
switchD_1403e5af0_caseD_6:
        *(undefined4 *)(lVar6 + 0x1c) = 0;
LAB_1403e5a53:
        if ((*(uint *)(lVar6 + 0x14) <= *(uint *)(lVar6 + 0x10)) &&
           (*(char *)(lVar6 + 0x18) == '\0')) {
          FUN_1403a3140(param_2,uVar5,lVar6,&local_48);
        }
      }
      lVar6 = *param_1;
      uVar2 = *(uint *)(lVar6 + 0x14);
      if ((*(uint *)(lVar6 + 0x10) < uVar2) || (*(char *)(lVar6 + 0x18) != '\0')) {
        return (ulonglong)(uint3)(uVar2 >> 8) << 8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(lVar6 + 0x10));
  }
  return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}

