// Function: FUN_14038e240
// Addr: 14038e240
// Size: 295 bytes


undefined8
FUN_14038e240(longlong param_1,int *param_2,uint param_3,undefined4 *param_4,char param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     ((*(uint *)(param_1 + 0x1c) <= (*(uint *)(param_1 + 0x18) >> 1) + *(int *)(param_1 + 0x18) &&
      (cVar7 = FUN_1403a3a10(), cVar7 == '\0')))) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar11 = 0;
  uVar9 = 0xffffffff;
  uVar8 = (ulonglong)(param_3 & 0x3fffffff) % (ulonglong)*(uint *)(param_1 + 0x20);
  if ((*(uint *)(lVar2 + 4 + uVar8 * 0x18) >> 1 & 1) != 0) {
    do {
      if (*(int *)(lVar2 + uVar8 * 0x18) == *param_2) {
        if (param_5 == '\0') {
          return 0;
        }
        break;
      }
      if (((*(byte *)(lVar2 + 4 + uVar8 * 0x18) & 1) == 0) && (uVar9 == 0xffffffff)) {
        uVar9 = (uint)uVar8;
      }
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)((uint)uVar8 + uVar11 & *(uint *)(param_1 + 0x1c));
    } while ((*(uint *)(lVar2 + 4 + uVar8 * 0x18) >> 1 & 1) != 0);
  }
  uVar10 = (ulonglong)uVar9;
  if (uVar9 == 0xffffffff) {
    uVar10 = uVar8;
  }
  if ((*(uint *)(lVar2 + 4 + uVar10 * 0x18) >> 1 & 1) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (*(byte *)(lVar2 + 4 + uVar10 * 0x18) & 1)
    ;
  }
  *(int *)(lVar2 + uVar10 * 0x18) = *param_2;
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *(uint *)(lVar2 + 4 + uVar10 * 0x18) = param_3 * 4 | 3;
  puVar1 = (undefined4 *)(lVar2 + 8 + uVar10 * 0x18);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if ((*(ushort *)(param_1 + 0x12) < uVar11) &&
     (*(uint *)(param_1 + 0x1c) < (uint)(*(int *)(param_1 + 0x18) * 8))) {
    FUN_1403a3a10(param_1,*(uint *)(param_1 + 0x1c) - 8);
  }
  return 1;
}

