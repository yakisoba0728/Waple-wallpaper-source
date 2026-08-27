// Function: FUN_1400cb630
// Addr: 1400cb630
// Size: 564 bytes


void FUN_1400cb630(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  lVar8 = (longlong)(param_3 - 1) >> 1;
  lVar7 = param_2;
  do {
    if (lVar8 <= lVar7) {
      if ((lVar7 == lVar8) && ((param_3 & 1) == 0)) {
        FUN_1400c9320(lVar7 * 0x90 + param_1,param_3 * 0x90 + -0x90 + param_1);
        lVar7 = param_3 - 1;
      }
      FUN_1400cd2f0(param_1,lVar7,param_2,param_4);
      return;
    }
    lVar6 = lVar7 * 0x120;
    plVar3 = (longlong *)FUN_1400ca6c0(param_5,local_50,param_1 + 0x120 + lVar6);
    plVar4 = (longlong *)FUN_1400ca6c0(param_5,local_48,param_1 + lVar6 + 0x90);
    if (*plVar3 == *plVar4) {
      if (*(char *)(param_5 + 0x40) == '\0') {
        iVar1 = *(int *)(param_1 + 0x94 + lVar6);
        iVar2 = *(int *)(param_1 + 0x124 + lVar6);
        if (iVar2 != iVar1) {
          uVar5 = (ulonglong)(iVar1 <= iVar2);
          goto LAB_1400cb728;
        }
      }
      uVar5 = (ulonglong)(*(int *)(param_1 + 0x128 + lVar6) <= *(int *)(param_1 + 0x98 + lVar6));
    }
    else {
      plVar3 = (longlong *)FUN_1400ca6c0(param_5,local_40,param_1 + lVar6 + 0x90);
      uVar5 = (ulonglong)(*plVar3 != *(longlong *)(param_5 + 8));
    }
LAB_1400cb728:
    lVar10 = lVar7 * 2 + 1 + uVar5;
    lVar6 = lVar7 * 0x90;
    lVar9 = lVar10 * 0x90;
    *(undefined4 *)(param_1 + lVar6) = *(undefined4 *)(lVar9 + param_1);
    *(undefined4 *)(param_1 + 4 + lVar6) = *(undefined4 *)(lVar9 + 4 + param_1);
    *(undefined4 *)(param_1 + 8 + lVar6) = *(undefined4 *)(lVar9 + 8 + param_1);
    *(undefined4 *)(param_1 + 0xc + lVar6) = *(undefined4 *)(lVar9 + 0xc + param_1);
    lVar7 = lVar10;
    if (lVar6 != lVar9) {
      plVar3 = *(longlong **)(param_1 + 0x48 + lVar6);
      plVar4 = (longlong *)(param_1 + 0x10 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
        *(undefined8 *)(param_1 + 0x48 + lVar6) = 0;
      }
      FUN_140037830(plVar4,param_1 + 0x10 + lVar9);
      plVar3 = *(longlong **)(param_1 + 0x88 + lVar6);
      plVar4 = (longlong *)(param_1 + 0x50 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
        *(undefined8 *)(param_1 + 0x88 + lVar6) = 0;
      }
      FUN_140037830(plVar4,param_1 + 0x50 + lVar9);
    }
  } while( true );
}

