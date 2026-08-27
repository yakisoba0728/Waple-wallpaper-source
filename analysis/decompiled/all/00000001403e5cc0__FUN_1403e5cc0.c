// Function: FUN_1403e5cc0
// Addr: 1403e5cc0
// Size: 437 bytes


longlong FUN_1403e5cc0(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  double *pdVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[8] = 0;
  lVar7 = *param_1;
  uVar2 = *(int *)(lVar7 + 0x14) + 1;
  if (uVar2 <= *(uint *)(lVar7 + 0x10)) {
    do {
      uVar2 = *(uint *)(lVar7 + 0x14);
      uVar5 = uVar2 + 1;
      if (*(uint *)(lVar7 + 0x10) < uVar5) {
        lVar7 = *param_1;
        uVar8 = 0xffff;
LAB_1403e5d65:
        FUN_1403f4a60(uVar8,lVar7);
        if (*(int *)(lVar7 + 0x1c) == 0) {
          pcVar4 = (char *)(lVar7 + 0x18);
          goto LAB_1403e5e00;
        }
      }
      else {
        bVar1 = *(byte *)((ulonglong)uVar2 + *(longlong *)(lVar7 + 8));
        uVar8 = (uint)bVar1;
        *(uint *)(lVar7 + 0x14) = uVar5;
        if (bVar1 == 0xc) {
          if (*(uint *)(lVar7 + 0x10) < uVar2 + 2) {
            lVar7 = *param_1;
            uVar8 = 0xffff;
            goto LAB_1403e5d65;
          }
          uVar8 = *(byte *)((ulonglong)uVar5 + *(longlong *)(lVar7 + 8)) + 0x100;
          *(uint *)(lVar7 + 0x14) = uVar2 + 2;
        }
        lVar7 = *param_1;
        if (uVar8 != 0x12) goto LAB_1403e5d65;
        pcVar4 = (char *)(lVar7 + 0x18);
        if (*(int *)(lVar7 + 0x1c) == 0) {
          *pcVar4 = '\x01';
          pdVar6 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        else {
          uVar2 = *(int *)(lVar7 + 0x1c) - 1;
          *(uint *)(lVar7 + 0x1c) = uVar2;
          pdVar6 = (double *)(pcVar4 + ((ulonglong)uVar2 + 1) * 8);
        }
        iVar3 = (int)*pdVar6;
        if ((int)*pdVar6 < 0) {
          *pcVar4 = '\x01';
          iVar3 = 0;
        }
        param_2[6] = iVar3;
        if (*(int *)(lVar7 + 0x1c) == 0) {
          *pcVar4 = '\x01';
          pdVar6 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        else {
          uVar2 = *(int *)(lVar7 + 0x1c) - 1;
          *(uint *)(lVar7 + 0x1c) = uVar2;
          pdVar6 = (double *)(pcVar4 + ((ulonglong)uVar2 + 1) * 8);
        }
        iVar3 = (int)*pdVar6;
        if ((int)*pdVar6 < 0) {
          *pcVar4 = '\x01';
          iVar3 = 0;
        }
        param_2[7] = iVar3;
        *(undefined4 *)(lVar7 + 0x1c) = 0;
LAB_1403e5e00:
        if ((*(uint *)(lVar7 + 0x14) <= *(uint *)(lVar7 + 0x10)) && (*pcVar4 == '\0')) {
          local_48 = 0;
          uStack_40 = 0xffff;
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

