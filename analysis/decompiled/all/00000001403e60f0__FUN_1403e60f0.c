// Function: FUN_1403e60f0
// Addr: 1403e60f0
// Size: 667 bytes


longlong FUN_1403e60f0(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0;
  lVar3 = *param_1;
  uVar2 = *(int *)(lVar3 + 0x14) + 1;
  if (uVar2 <= *(uint *)(lVar3 + 0x10)) {
    do {
      uVar2 = *(uint *)(lVar3 + 0x14);
      uVar7 = uVar2 + 1;
      if (*(uint *)(lVar3 + 0x10) < uVar7) {
        lVar3 = *param_1;
        uVar6 = 0xffff;
        FUN_1403f4a60(0xffff,lVar3);
        pcVar4 = (char *)(lVar3 + 0x18);
LAB_1403e6262:
        if (*(int *)(lVar3 + 0x1c) == 0) goto LAB_1403e631c;
      }
      else {
        bVar1 = *(byte *)((ulonglong)uVar2 + *(longlong *)(lVar3 + 8));
        uVar6 = (uint)bVar1;
        *(uint *)(lVar3 + 0x14) = uVar7;
        if (bVar1 == 0xc) {
          if (*(uint *)(lVar3 + 0x10) < uVar2 + 2) {
            lVar3 = *param_1;
            uVar6 = 0xffff;
            FUN_1403f4a60(0xffff,lVar3);
            pcVar4 = (char *)(lVar3 + 0x18);
            goto LAB_1403e6262;
          }
          uVar6 = *(byte *)((ulonglong)uVar7 + *(longlong *)(lVar3 + 8)) + 0x100;
          *(uint *)(lVar3 + 0x14) = uVar2 + 2;
        }
        lVar3 = *param_1;
        if (uVar6 == 0x18) {
          if (*(int *)(lVar3 + 0x1c) == 0) {
            *(undefined1 *)(lVar3 + 0x18) = 1;
            pdVar5 = &DAT_1404e4f20;
            DAT_1404e4f20 = DAT_14045dd10;
          }
          else {
            uVar2 = *(int *)(lVar3 + 0x1c) - 1;
            *(uint *)(lVar3 + 0x1c) = uVar2;
            pdVar5 = (double *)((undefined1 *)(lVar3 + 0x18) + ((ulonglong)uVar2 + 1) * 8);
          }
          param_2[8] = (int)*pdVar5;
        }
        else if (uVar6 == 0x107) {
          local_48 = 0;
          uStack_40 = 0xffff;
          FUN_1403a3140(param_2,0x107,lVar3,&local_48);
        }
        else {
          if (uVar6 != 0x125) {
            if (uVar6 == 0x11) {
              if (*(int *)(lVar3 + 0x1c) == 0) {
                *(undefined1 *)(lVar3 + 0x18) = 1;
                pdVar5 = &DAT_1404e4f20;
                DAT_1404e4f20 = DAT_14045dd10;
              }
              else {
                uVar2 = *(int *)(lVar3 + 0x1c) - 1;
                *(uint *)(lVar3 + 0x1c) = uVar2;
                pdVar5 = (double *)((undefined1 *)(lVar3 + 0x18) + ((ulonglong)uVar2 + 1) * 8);
              }
              param_2[6] = (int)*pdVar5;
            }
            else if (uVar6 != 0x107) {
              if (uVar6 != 0x124) {
                FUN_1403f4a60(uVar6,lVar3);
                pcVar4 = (char *)(lVar3 + 0x18);
                goto LAB_1403e6262;
              }
              if (*(int *)(lVar3 + 0x1c) == 0) {
                *(undefined1 *)(lVar3 + 0x18) = 1;
                DAT_1404e4f20 = DAT_14045dd10;
                param_2[7] = (int)DAT_14045dd10;
              }
              else {
                uVar2 = *(int *)(lVar3 + 0x1c) - 1;
                *(uint *)(lVar3 + 0x1c) = uVar2;
                param_2[7] = (int)*(double *)
                                   ((undefined1 *)(lVar3 + 0x18) + ((ulonglong)uVar2 + 1) * 8);
              }
            }
            pcVar4 = (char *)(lVar3 + 0x18);
            *(undefined4 *)(lVar3 + 0x1c) = 0;
            goto LAB_1403e6262;
          }
          if (*(int *)(lVar3 + 0x1c) == 0) {
            *(undefined1 *)(lVar3 + 0x18) = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            param_2[9] = (int)DAT_14045dd10;
          }
          else {
            uVar2 = *(int *)(lVar3 + 0x1c) - 1;
            *(uint *)(lVar3 + 0x1c) = uVar2;
            param_2[9] = (int)*(double *)((undefined1 *)(lVar3 + 0x18) + ((ulonglong)uVar2 + 1) * 8)
            ;
          }
        }
        pcVar4 = (char *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x1c) = 0;
LAB_1403e631c:
        if ((*(uint *)(lVar3 + 0x14) <= *(uint *)(lVar3 + 0x10)) && (*pcVar4 == '\0')) {
          local_48 = 0;
          uStack_40 = 0xffff;
          FUN_1403a3140(param_2,uVar6,lVar3,&local_48);
        }
      }
      lVar3 = *param_1;
      uVar2 = *(uint *)(lVar3 + 0x14);
      if ((*(uint *)(lVar3 + 0x10) < uVar2) || (*(char *)(lVar3 + 0x18) != '\0')) {
        return (ulonglong)(uint3)(uVar2 >> 8) << 8;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(lVar3 + 0x10));
  }
  return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
}

