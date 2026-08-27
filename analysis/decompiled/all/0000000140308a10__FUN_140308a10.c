// Function: FUN_140308a10
// Addr: 140308a10
// Size: 612 bytes


void FUN_140308a10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x408);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = **(uint **)(lVar2 + 0x18);
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 8));
    *(undefined8 *)(lVar2 + 8) = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x10) = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x28) = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x18));
    *(undefined8 *)(lVar2 + 0x18) = 0;
    if (*(longlong **)(lVar2 + 0x38) != (longlong *)0x0) {
      if (**(longlong **)(lVar2 + 0x38) != 0) {
        uVar7 = 0;
        if (uVar1 != 0) {
          do {
            FUN_1402f7f90(uVar3,*(undefined8 *)(**(longlong **)(lVar2 + 0x38) + 8 + uVar7 * 0x10));
            uVar6 = (int)uVar7 + 1;
            *(undefined8 *)(**(longlong **)(lVar2 + 0x38) + 8 + uVar7 * 0x10) = 0;
            uVar7 = (ulonglong)uVar6;
          } while (uVar6 < uVar1);
        }
        FUN_1402f7f90(uVar3,**(undefined8 **)(lVar2 + 0x38));
        **(undefined8 **)(lVar2 + 0x38) = 0;
      }
      FUN_140308860(param_1,*(longlong *)(lVar2 + 0x38) + 8);
      lVar4 = *(longlong *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x38));
      *(undefined8 *)(lVar4 + 0x38) = 0;
      FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x30));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      FUN_140308860(param_1);
      lVar4 = *(longlong *)(lVar2 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x30));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x28));
      *(undefined8 *)(lVar4 + 0x28) = 0;
      FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
    }
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_140308860(param_1);
      lVar4 = *(longlong *)(lVar2 + 0x58);
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x30));
      *(undefined8 *)(lVar4 + 0x30) = 0;
      FUN_1402f7f90(uVar5,*(undefined8 *)(lVar4 + 0x28));
      *(undefined8 *)(lVar4 + 0x28) = 0;
      FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x58));
      *(undefined8 *)(lVar2 + 0x58) = 0;
    }
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      FUN_140308860(param_1,*(longlong *)(lVar2 + 0x60) + 8);
      FUN_1402f7f90(uVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28));
      *(undefined8 *)(*(longlong *)(lVar2 + 0x60) + 0x28) = 0;
      FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x60));
      *(undefined8 *)(lVar2 + 0x60) = 0;
    }
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x78));
    *(undefined8 *)(lVar2 + 0x78) = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x70));
    *(undefined8 *)(lVar2 + 0x70) = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(lVar2 + 0x88));
    *(undefined8 *)(lVar2 + 0x88) = 0;
    FUN_1402f7f90(uVar3,lVar2);
  }
  return;
}

