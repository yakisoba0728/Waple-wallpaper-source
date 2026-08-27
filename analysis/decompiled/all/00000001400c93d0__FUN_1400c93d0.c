// Function: FUN_1400c93d0
// Addr: 1400c93d0
// Size: 873 bytes


void FUN_1400c93d0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8 [7];
  longlong *local_90;
  longlong local_88 [7];
  longlong *local_50;
  
  lVar5 = param_2 - param_1 >> 4;
  uVar6 = lVar5 * -0x71c71c71c71c71c7;
  lVar8 = (longlong)uVar6 >> 1;
  if (0 < lVar8) {
    lVar12 = (longlong)(uVar6 - 1) >> 1;
    lVar10 = lVar8 * 0x90;
    do {
      local_d8 = *(undefined4 *)(param_1 + -0x90 + lVar10);
      local_d4 = *(undefined4 *)(param_1 + -0x8c + lVar10);
      lVar8 = lVar8 + -1;
      local_d0 = *(undefined4 *)(param_1 + -0x88 + lVar10);
      local_cc = *(undefined4 *)(param_1 + -0x84 + lVar10);
      local_90 = (longlong *)0x0;
      FUN_140037830(local_c8,param_1 + -0x80 + lVar10);
      local_50 = (longlong *)0x0;
      FUN_140037830(local_88,param_1 + -0x40 + lVar10);
      lVar14 = lVar8;
      while (lVar14 < lVar12) {
        lVar9 = lVar14 * 0x120;
        plVar3 = (longlong *)FUN_1400ca6c0(param_3,local_f0,param_1 + 0x120 + lVar9);
        plVar4 = (longlong *)FUN_1400ca6c0(param_3,local_e8,param_1 + lVar9 + 0x90);
        if (*plVar3 == *plVar4) {
          if (*(char *)(param_3 + 0x40) == '\0') {
            iVar1 = *(int *)(param_1 + 0x94 + lVar9);
            iVar2 = *(int *)(param_1 + 0x124 + lVar9);
            if (iVar2 != iVar1) {
              uVar7 = (ulonglong)(iVar1 <= iVar2);
              goto LAB_1400c9589;
            }
          }
          uVar7 = (ulonglong)(*(int *)(param_1 + 0x128 + lVar9) <= *(int *)(param_1 + 0x98 + lVar9))
          ;
        }
        else {
          plVar3 = (longlong *)FUN_1400ca6c0(param_3,local_e0,param_1 + lVar9 + 0x90);
          uVar7 = (ulonglong)(*plVar3 != *(longlong *)(param_3 + 8));
        }
LAB_1400c9589:
        lVar13 = lVar14 * 2 + 1 + uVar7;
        lVar11 = lVar14 * 0x90;
        lVar9 = lVar13 * 0x90;
        *(undefined4 *)(param_1 + lVar11) = *(undefined4 *)(lVar9 + param_1);
        *(undefined4 *)(param_1 + 4 + lVar11) = *(undefined4 *)(lVar9 + 4 + param_1);
        *(undefined4 *)(param_1 + 8 + lVar11) = *(undefined4 *)(lVar9 + 8 + param_1);
        *(undefined4 *)(param_1 + 0xc + lVar11) = *(undefined4 *)(lVar9 + 0xc + param_1);
        lVar14 = lVar13;
        if (lVar11 != lVar9) {
          plVar3 = *(longlong **)(param_1 + 0x48 + lVar11);
          plVar4 = (longlong *)(param_1 + 0x10 + lVar11);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
            *(undefined8 *)(param_1 + 0x48 + lVar11) = 0;
          }
          FUN_140037830(plVar4,param_1 + 0x10 + lVar9);
          plVar3 = *(longlong **)(param_1 + 0x88 + lVar11);
          plVar4 = (longlong *)(param_1 + 0x50 + lVar11);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar4);
            *(undefined8 *)(param_1 + 0x88 + lVar11) = 0;
          }
          FUN_140037830(plVar4,param_1 + 0x50 + lVar9);
        }
      }
      if ((lVar14 == lVar12) && ((uVar6 & 1) == 0)) {
        FUN_1400c9320(lVar14 * 0x90 + param_1,lVar5 * 0x10 + -0x90 + param_1);
        lVar14 = uVar6 - 1;
      }
      FUN_1400cd2f0(param_1,lVar14,lVar8,&local_d8,param_3);
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x20))(local_50,local_50 != local_88);
        local_50 = (longlong *)0x0;
      }
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x20))(local_90,local_90 != local_c8);
      }
      lVar10 = lVar10 + -0x90;
    } while (0 < lVar8);
  }
  FUN_14000d9e0(param_3 + 0x18);
  FUN_140049340(param_3 + 8);
  return;
}

