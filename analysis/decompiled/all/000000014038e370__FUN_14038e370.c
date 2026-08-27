// Function: FUN_14038e370
// Addr: 14038e370
// Size: 306 bytes


undefined8
FUN_14038e370(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,char param_5)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((*(char *)(param_1 + 0x10) == '\0') ||
     ((*(uint *)(param_1 + 0x1c) <= (*(uint *)(param_1 + 0x18) >> 1) + *(int *)(param_1 + 0x18) &&
      (cVar2 = FUN_1403a4200(), cVar2 == '\0')))) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar6 = 0;
  uVar4 = 0xffffffff;
  uVar3 = (ulonglong)(param_3 & 0x3fffffff) % (ulonglong)*(uint *)(param_1 + 0x20);
  if ((*(uint *)(lVar1 + 8 + uVar3 * 0x18) >> 1 & 1) != 0) {
    do {
      if (*(longlong *)(lVar1 + uVar3 * 0x18) == *param_2) {
        if (param_5 == '\0') {
          return 0;
        }
        break;
      }
      if (((*(byte *)(lVar1 + 8 + uVar3 * 0x18) & 1) == 0) && (uVar4 == 0xffffffff)) {
        uVar4 = (uint)uVar3;
      }
      uVar6 = uVar6 + 1;
      uVar3 = (ulonglong)((uint)uVar3 + uVar6 & *(uint *)(param_1 + 0x1c));
    } while ((*(uint *)(lVar1 + 8 + uVar3 * 0x18) >> 1 & 1) != 0);
  }
  uVar5 = (ulonglong)uVar4;
  if (uVar4 == 0xffffffff) {
    uVar5 = uVar3;
  }
  if ((*(uint *)(lVar1 + 8 + uVar5 * 0x18) >> 1 & 1) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - (*(byte *)(lVar1 + 8 + uVar5 * 0x18) & 1);
  }
  *(longlong *)(lVar1 + uVar5 * 0x18) = *param_2;
  *(undefined8 *)(lVar1 + 0x10 + uVar5 * 0x18) = *param_4;
  *(uint *)(lVar1 + 8 + uVar5 * 0x18) = param_3 * 4 | 3;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if ((*(ushort *)(param_1 + 0x12) < uVar6) &&
     (*(uint *)(param_1 + 0x1c) < (uint)(*(int *)(param_1 + 0x18) * 8))) {
    FUN_1403a4200(param_1,*(uint *)(param_1 + 0x1c) - 8);
  }
  return 1;
}

