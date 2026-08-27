// Function: FUN_1403e57a0
// Addr: 1403e57a0
// Size: 518 bytes


longlong FUN_1403e57a0(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  iVar6 = 0;
  param_2[8] = 0;
  param_2[9] = 0xffffffff;
  *param_2 = 0;
  lVar5 = *param_1;
  uVar2 = *(int *)(lVar5 + 0x14) + 1;
  if (uVar2 <= *(uint *)(lVar5 + 0x10)) {
    do {
      uVar2 = *(uint *)(lVar5 + 0x14);
      uVar8 = uVar2 + 1;
      if (*(uint *)(lVar5 + 0x10) < uVar8) {
        lVar5 = *param_1;
        uVar7 = 0xffff;
LAB_1403e585f:
        FUN_1403f4a60(uVar7,lVar5);
        if (*(int *)(lVar5 + 0x1c) == 0) goto LAB_1403e5936;
      }
      else {
        bVar1 = *(byte *)((ulonglong)uVar2 + *(longlong *)(lVar5 + 8));
        uVar7 = (uint)bVar1;
        *(uint *)(lVar5 + 0x14) = uVar8;
        if (bVar1 == 0xc) {
          if (*(uint *)(lVar5 + 0x10) < uVar2 + 2) {
            lVar5 = *param_1;
            uVar7 = 0xffff;
            goto LAB_1403e585f;
          }
          uVar7 = *(byte *)((ulonglong)uVar8 + *(longlong *)(lVar5 + 8)) + 0x100;
          *(uint *)(lVar5 + 0x14) = uVar2 + 2;
        }
        lVar5 = *param_1;
        if (uVar7 == 0x12) {
          if (*(int *)(lVar5 + 0x1c) == 0) {
            *(undefined1 *)(lVar5 + 0x18) = 1;
            pdVar4 = (double *)&DAT_1404e4f20;
            DAT_1404e4f20 = DAT_14045dd10;
          }
          else {
            uVar2 = *(int *)(lVar5 + 0x1c) - 1;
            *(uint *)(lVar5 + 0x1c) = uVar2;
            pdVar4 = (double *)(lVar5 + ((ulonglong)uVar2 + 4) * 8);
          }
          iVar3 = (int)*pdVar4;
          if ((int)*pdVar4 < 0) {
            *(undefined1 *)(lVar5 + 0x18) = 1;
            iVar3 = iVar6;
          }
          param_2[6] = iVar3;
          if (*(int *)(lVar5 + 0x1c) == 0) {
            *(undefined1 *)(lVar5 + 0x18) = 1;
            pdVar4 = (double *)&DAT_1404e4f20;
            DAT_1404e4f20 = DAT_14045dd10;
          }
          else {
            uVar2 = *(int *)(lVar5 + 0x1c) - 1;
            *(uint *)(lVar5 + 0x1c) = uVar2;
            pdVar4 = (double *)(lVar5 + ((ulonglong)uVar2 + 4) * 8);
          }
          iVar3 = (int)*pdVar4;
          if ((int)*pdVar4 < 0) {
            *(undefined1 *)(lVar5 + 0x18) = 1;
            iVar3 = iVar6;
          }
          param_2[7] = iVar3;
        }
        else if ((uVar7 != 0x105) && (uVar7 != 0x107)) {
          if (uVar7 != 0x126) goto LAB_1403e585f;
          if (*(int *)(lVar5 + 0x1c) == 0) {
            *(undefined1 *)(lVar5 + 0x18) = 1;
            pdVar4 = (double *)&DAT_1404e4f20;
            DAT_1404e4f20 = DAT_14045dd10;
          }
          else {
            uVar2 = *(int *)(lVar5 + 0x1c) - 1;
            *(uint *)(lVar5 + 0x1c) = uVar2;
            pdVar4 = (double *)(lVar5 + ((ulonglong)uVar2 + 4) * 8);
          }
          iVar3 = (int)*pdVar4;
          if ((int)*pdVar4 < 0) {
            *(undefined1 *)(lVar5 + 0x18) = 1;
            iVar3 = iVar6;
          }
          param_2[9] = iVar3;
        }
        *(undefined4 *)(lVar5 + 0x1c) = 0;
LAB_1403e5936:
        if ((*(uint *)(lVar5 + 0x14) <= *(uint *)(lVar5 + 0x10)) &&
           (*(char *)(lVar5 + 0x18) == '\0')) {
          local_48 = 0;
          uStack_40 = 0xffff;
          FUN_1403a3140(param_2,uVar7,lVar5,&local_48);
        }
      }
      lVar5 = *param_1;
      uVar2 = *(uint *)(lVar5 + 0x14);
      if ((*(uint *)(lVar5 + 0x10) < uVar2) || (*(char *)(lVar5 + 0x18) != '\0')) {
        return (ulonglong)(uint3)(uVar2 >> 8) << 8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(lVar5 + 0x10));
  }
  return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}

