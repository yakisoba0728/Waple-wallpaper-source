// Function: FUN_1400f5750
// Addr: 1400f5750
// Size: 319 bytes


void FUN_1400f5750(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_53 [3];
  undefined1 local_50 [40];
  
  uVar5 = 0;
  uVar7 = (int)(param_1[1] - *param_1 >> 3) * -0x49249249;
  if (uVar7 != 0) {
    do {
      lVar1 = *param_1;
      lVar6 = uVar5 * 0x38;
      uVar2 = *(uint *)(lVar6 + 0x28 + lVar1);
      if ((uVar2 != 0) && (*(char *)(lVar6 + 0x2c + lVar1) != '\0')) {
        if (*(int *)(lVar6 + lVar1) == 1) {
          uVar2 = uVar2 * 2;
        }
        uVar7 = uVar2;
        if ((int)uVar2 < 0) {
          uVar7 = uVar2 + 3;
        }
        uVar2 = uVar2 & 0x80000003;
        if ((int)uVar2 < 0) {
          uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
        }
        uVar5 = (longlong)(int)((-(uint)(uVar2 != 0) & 4) + ((int)uVar7 >> 2) * 4) /
                (longlong)(int)((*(int *)(lVar6 + lVar1) == 1) + 1);
        iVar3 = (int)uVar5;
        if (iVar3 < 0) {
          lVar4 = FUN_140053d80(local_53,-iVar3);
          *(undefined1 *)(lVar4 + -1) = 0x2d;
          lVar4 = lVar4 + -1;
        }
        else {
          lVar4 = FUN_140053d80(local_53,uVar5 & 0xffffffff);
        }
        FUN_140053de0(local_50,lVar4,local_53);
        func_0x000140421ed0((&PTR_PTR_140482f88)[(longlong)*(int *)(lVar6 + lVar1) * 2]);
        return;
      }
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (uVar2 < uVar7);
  }
  return;
}

