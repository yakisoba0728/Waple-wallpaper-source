// Function: FUN_1403f8980
// Addr: 1403f8980
// Size: 221 bytes


undefined8 FUN_1403f8980(uint *param_1,uint param_2,char param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  
  uVar1 = *param_1;
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  if (-1 < (int)uVar1) {
    if (param_4 == '\0') {
      uVar5 = uVar1;
      if (param_2 <= uVar1) goto LAB_1403f8a2e;
      do {
        uVar5 = uVar5 + 8 + (uVar5 >> 1);
      } while (uVar5 < param_2);
    }
    else {
      uVar5 = param_1[1];
      if (param_1[1] <= param_2) {
        uVar5 = param_2;
      }
      if ((uVar5 <= uVar1) && (uVar1 >> 2 <= uVar5)) goto LAB_1403f8a2e;
    }
    if (uVar5 < 0x6bca1a) {
      lVar2 = FUN_1403a2370(param_1);
      if ((uVar5 == 0) || (lVar2 != 0)) {
        *(longlong *)(param_1 + 2) = lVar2;
        *param_1 = uVar5;
      }
      else if (*param_1 < uVar5) {
        *param_1 = -*param_1 - 1;
        return 0;
      }
LAB_1403f8a2e:
      uVar1 = param_1[1];
      if (uVar1 < param_2) {
        if (param_3 != '\0') {
          do {
            lVar3 = (ulonglong)uVar1 * 0x260;
            lVar2 = *(longlong *)(param_1 + 2);
            *(undefined2 *)(lVar3 + 1 + lVar2) = 0;
            *(undefined1 *)(lVar3 + 3 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 8 + lVar2) = 0;
            *(undefined2 *)(lVar3 + 0x31 + lVar2) = 0;
            *(undefined1 *)(lVar3 + 0x33 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x38 + lVar2) = 0;
            puVar4 = (undefined2 *)(lVar2 + 0x60 + lVar3);
            *(undefined1 *)(lVar3 + lVar2) = 1;
            *(undefined4 *)(lVar3 + 4 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x20 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x28 + lVar2) = 0;
            *(undefined1 *)(lVar3 + 0x30 + lVar2) = 1;
            *(undefined4 *)(lVar3 + 0x34 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x40 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x48 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x50 + lVar2) = 0;
            *(undefined8 *)(lVar3 + 0x58 + lVar2) = 0;
            puVar6 = puVar4;
            for (lVar2 = 0x100; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            puVar6 = puVar4 + 0x100;
            for (; puVar4 != puVar6; puVar4 = puVar4 + 1) {
              *puVar4 = 0xffff;
            }
            uVar1 = param_1[1] + 1;
            param_1[1] = uVar1;
          } while (uVar1 < param_2);
          param_1[1] = param_2;
          return 1;
        }
      }
      else if ((param_2 < uVar1) && (param_3 != '\0')) {
        func_0x00014040c0a0(param_1,param_2);
      }
      param_1[1] = param_2;
      return 1;
    }
    *param_1 = ~uVar1;
  }
  return 0;
}

