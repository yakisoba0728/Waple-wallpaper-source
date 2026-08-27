// Function: FUN_14011fbb0
// Addr: 14011fbb0
// Size: 354 bytes


undefined8
FUN_14011fbb0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar4 = FUN_140290d80(param_1 + 0xe50);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0xe9c) != 0x7fffffff) {
    if ((((*(longlong *)(param_1 + 0xe30) == 0) ||
         (lVar5 = FUN_14014ff70(*(longlong *)(param_1 + 0xe30) + 0x1640,"materials/background.json")
         , lVar5 == 0)) || (*(longlong *)(lVar5 + 0xd0) == 0)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0xd0) + 0xd8) == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      lVar5 = *(longlong *)(param_1 + 0xe30);
      uVar1 = *(int *)(lVar5 + 0x90) * *(int *)(lVar5 + 0x8c) * 4;
      if (2 < uVar1) {
        uVar2 = *(undefined8 *)(lVar5 + 0x1528);
        uVar6 = thunk_FUN_14028af20(uVar1);
        *param_3 = uVar6;
        *param_4 = *(undefined4 *)(lVar5 + 0x8c);
        *param_5 = *(undefined4 *)(lVar5 + 0x90);
        cVar3 = FUN_14009b7b0(uVar2,*param_3,uVar1,1);
        if (cVar3 == '\0') {
          thunk_FUN_14028af80();
        }
        else {
          uVar7 = 1;
          *param_2 = *param_3;
        }
      }
    }
    FUN_140290ea0(param_1 + 0xe50);
    return uVar7;
  }
  *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

