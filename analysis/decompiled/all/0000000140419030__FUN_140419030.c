// Function: FUN_140419030
// Addr: 140419030
// Size: 650 bytes


char FUN_140419030(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar2 = *(uint *)(param_2 + 0x60);
  if (uVar2 == 0) {
    return '\x01';
  }
  *(undefined2 *)(param_2 + 0xd0) = 0;
  *(undefined4 *)(param_2 + 0xd8) = 0;
  if (uVar2 < 0xffffff) {
    uVar6 = 0x10000;
    if (0xffff < uVar2 << 8) {
      uVar6 = uVar2 << 8;
    }
    *(uint *)(param_2 + 0xdc) = uVar6;
  }
  if (uVar2 < 0xfffff) {
    uVar6 = 0x10000;
    if (0xffff < uVar2 << 0xc) {
      uVar6 = uVar2 << 0xc;
    }
    *(uint *)(param_2 + 0xe0) = uVar6;
  }
  piVar7 = (int *)0x0;
  if ((*(byte *)(param_2 + 0x18) & 0x20) != 0) {
    piVar7 = (int *)FUN_1404144f0();
    FUN_140414200(piVar7,param_2,0,0xffffffff);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  piVar8 = (int *)FUN_140419480(*(undefined8 *)(param_1 + 0x20),param_2 + 0x38,param_3,param_4,uVar9
                                ,CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x7c)),param_5);
  uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),param_4);
  cVar4 = FUN_1403a1870(piVar8,param_1,param_2,param_3,uVar9);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((cVar4 != '\0') && (*(int *)(param_2 + 0x30) == 1)) {
    *(undefined4 *)(param_2 + 0x30) = 2;
  }
  if ((piVar8 != (int *)0x0) && (*piVar8 != 0)) {
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar8 = -0xdead;
      lVar3 = *(longlong *)(piVar8 + 2);
      if (lVar3 != 0) {
        FUN_1403c3220(lVar3);
        thunk_FUN_1402d9040(lVar3);
        piVar8[2] = 0;
        piVar8[3] = 0;
      }
      thunk_FUN_1402d9040(*(undefined8 *)(piVar8 + 0xe));
      piVar8[0xe] = 0;
      piVar8[0xf] = 0;
      FUN_140397460(piVar8 + 0x18);
      thunk_FUN_1402d9040(piVar8);
    }
  }
  if (piVar7 != (int *)0x0) {
    if (((cVar4 != '\0') && (*(char *)(param_2 + 0x58) != '\0')) && ((char)piVar7[0x16] != '\0')) {
      cVar5 = FUN_14040f310(param_2,piVar7,param_1,param_3,CONCAT44(uVar10,param_4),param_5);
      if (cVar5 == '\0') {
        cVar4 = '\0';
      }
    }
    if (*piVar7 != 0) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        *piVar7 = -0xdead;
        lVar3 = *(longlong *)(piVar7 + 2);
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        FUN_140419a90(*(undefined8 *)(piVar7 + 4));
        thunk_FUN_1402d9040(*(undefined8 *)(piVar7 + 0x1c));
        thunk_FUN_1402d9040(*(undefined8 *)(piVar7 + 0x20));
        if (*(code **)(piVar7 + 0x3e) != (code *)0x0) {
          (**(code **)(piVar7 + 0x3e))(*(undefined8 *)(piVar7 + 0x3c));
        }
        thunk_FUN_1402d9040(piVar7);
      }
    }
  }
  *(undefined4 *)(param_2 + 0xdc) = 0x3fffffff;
  *(undefined4 *)(param_2 + 0xe0) = 0x1fffffff;
  *(undefined2 *)(param_2 + 0xd0) = 0;
  return cVar4;
}

