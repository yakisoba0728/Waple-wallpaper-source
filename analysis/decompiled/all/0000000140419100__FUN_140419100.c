// Function: FUN_140419100
// Addr: 140419100
// Size: 533 bytes


ulonglong FUN_140419100(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                       undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar9 = *(uint *)(param_2 + 0x60);
  if (uVar9 == 0) {
    return 1;
  }
  *(undefined2 *)(param_2 + 0xd0) = 0;
  *(undefined4 *)(param_2 + 0xd8) = 0;
  if (uVar9 < 0xffffff) {
    uVar5 = 0x10000;
    if (0xffff < uVar9 << 8) {
      uVar5 = uVar9 << 8;
    }
    *(uint *)(param_2 + 0xdc) = uVar5;
  }
  if (uVar9 < 0xfffff) {
    uVar5 = 0x10000;
    if (0xffff < uVar9 << 0xc) {
      uVar5 = uVar9 << 0xc;
    }
    *(uint *)(param_2 + 0xe0) = uVar5;
  }
  piVar6 = (int *)0x0;
  if ((*(byte *)(param_2 + 0x18) & 0x20) != 0) {
    piVar6 = (int *)FUN_1404145c0();
    FUN_1404142d0(piVar6,param_2,0,0xffffffff);
  }
  piVar7 = (int *)FUN_140419550(*(undefined8 *)(param_1 + 0x20),param_2 + 0x38,param_3,param_4,
                                *(undefined8 *)(param_1 + 0x80),
                                CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x7c)),param_5);
  bVar3 = func_0x0001403a1940(piVar7,param_1,param_2,param_3,param_4);
  if ((bVar3 != 0) && (*(int *)(param_2 + 0x30) == 1)) {
    *(undefined4 *)(param_2 + 0x30) = 2;
  }
  uVar9 = (uint)bVar3;
  if ((piVar7 != (int *)0x0) && (*piVar7 != 0)) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar7 = -0xdead;
      lVar2 = *(longlong *)(piVar7 + 2);
      if (lVar2 != 0) {
        FUN_1403c32f0(lVar2);
        uVar8 = func_0x0001402bf8e0(lVar2);
        return uVar8;
      }
      uVar8 = func_0x0001402bf8e0(*(undefined8 *)(piVar7 + 0xe));
      return uVar8;
    }
  }
  if (piVar6 != (int *)0x0) {
    if (((bVar3 != 0) && (*(char *)(param_2 + 0x58) != '\0')) && ((char)piVar6[0x16] != '\0')) {
      cVar4 = func_0x00014040f3e0(param_2,piVar6,param_1,param_3,param_4,param_5);
      if (cVar4 == '\0') {
        uVar9 = 0;
      }
    }
    if (*piVar6 != 0) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        *piVar6 = -0xdead;
        lVar2 = *(longlong *)(piVar6 + 2);
        if (lVar2 != 0) {
          FUN_1403c32f0(lVar2);
          uVar8 = func_0x0001402bf8e0(lVar2);
          return uVar8;
        }
        FUN_140419b60(*(undefined8 *)(piVar6 + 4));
        uVar8 = func_0x0001402bf8e0(*(undefined8 *)(piVar6 + 0x1c));
        return uVar8;
      }
    }
  }
  *(undefined4 *)(param_2 + 0xdc) = 0x3fffffff;
  *(undefined4 *)(param_2 + 0xe0) = 0x1fffffff;
  *(undefined2 *)(param_2 + 0xd0) = 0;
  return (ulonglong)uVar9;
}

