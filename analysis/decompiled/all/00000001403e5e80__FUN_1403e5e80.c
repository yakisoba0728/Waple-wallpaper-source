// Function: FUN_1403e5e80
// Addr: 1403e5e80
// Size: 507 bytes


longlong FUN_1403e5e80(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 **)(param_2 + 8) = &DAT_14045dd10;
  param_2[6] = 0;
  param_2[10] = 0;
  *param_2 = 0;
  lVar7 = *param_1;
  uVar2 = *(int *)(lVar7 + 0x14) + 1;
  if (uVar2 <= *(uint *)(lVar7 + 0x10)) {
    do {
      uVar2 = *(uint *)(lVar7 + 0x14);
      uVar6 = uVar2 + 1;
      if (*(uint *)(lVar7 + 0x10) < uVar6) {
LAB_1403e5efe:
        lVar7 = *param_1;
        uVar8 = 0xffff;
switchD_1403e5fc8_caseD_c:
        local_3c = 0;
        local_40 = 0xffff;
        local_48 = 0;
        FUN_1403f4a60(uVar8,lVar7);
        if (*(int *)(lVar7 + 0x1c) == 0) goto switchD_1403e5fc8_caseD_17;
      }
      else {
        bVar1 = *(byte *)((ulonglong)uVar2 + *(longlong *)(lVar7 + 8));
        uVar8 = (uint)bVar1;
        *(uint *)(lVar7 + 0x14) = uVar6;
        if (bVar1 == 0xc) {
          if (*(uint *)(lVar7 + 0x10) < uVar2 + 2) goto LAB_1403e5efe;
          uVar8 = *(byte *)((ulonglong)uVar6 + *(longlong *)(lVar7 + 8)) + 0x100;
          *(uint *)(lVar7 + 0x14) = uVar2 + 2;
        }
        lVar7 = *param_1;
        local_48 = 0;
        local_40 = 0xffff;
        local_3c = 0;
        if (0x109 < uVar8) {
          switch(uVar8) {
          case 0x10a:
          case 0x10b:
          case 0x10c:
          case 0x10d:
          case 0x111:
          case 0x112:
            goto switchD_1403e5fc8_caseD_6;
          default:
            goto switchD_1403e5fc8_caseD_c;
          }
        }
        if (uVar8 == 0x109) {
switchD_1403e5fc8_caseD_6:
          *(undefined4 *)(lVar7 + 0x1c) = 0;
        }
        else {
          switch(uVar8) {
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
            goto switchD_1403e5fc8_caseD_6;
          default:
            goto switchD_1403e5fc8_caseD_c;
          case 0x13:
            uVar3 = FUN_1403f0d00(lVar7 + 0x18);
            param_2[6] = uVar3;
            *(undefined4 *)(lVar7 + 0x1c) = 0;
            break;
          case 0x16:
            if (*(char *)(lVar7 + 0x102c) == '\0') {
              if (*(int *)(lVar7 + 0x1c) == 0) {
                *(undefined1 *)(lVar7 + 0x18) = 1;
                pdVar5 = (double *)&DAT_1404e4f20;
                DAT_1404e4f20 = DAT_14045dd10;
              }
              else {
                uVar2 = *(int *)(lVar7 + 0x1c) - 1;
                *(uint *)(lVar7 + 0x1c) = uVar2;
                pdVar5 = (double *)(lVar7 + ((ulonglong)uVar2 + 4) * 8);
              }
              iVar4 = (int)*pdVar5;
              if ((int)*pdVar5 < 0) {
                *(undefined1 *)(lVar7 + 0x18) = 1;
                iVar4 = 0;
              }
              *(int *)(lVar7 + 0x1028) = iVar4;
            }
            *(undefined1 *)(lVar7 + 0x102c) = 1;
            param_2[10] = *(undefined4 *)(lVar7 + 0x1028);
            *(undefined4 *)(lVar7 + 0x1c) = 0;
            break;
          case 0x17:
            break;
          }
        }
switchD_1403e5fc8_caseD_17:
        if ((*(uint *)(lVar7 + 0x14) <= *(uint *)(lVar7 + 0x10)) &&
           (*(char *)(lVar7 + 0x18) == '\0')) {
          FUN_1403a3140(param_2,uVar8,lVar7,&local_48);
        }
      }
      lVar7 = *param_1;
      uVar2 = *(uint *)(lVar7 + 0x14);
      if ((*(uint *)(lVar7 + 0x10) < uVar2) || (*(char *)(lVar7 + 0x18) != '\0')) {
        return (ulonglong)(uint3)(uVar2 >> 8) << 8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(lVar7 + 0x10));
  }
  return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}

