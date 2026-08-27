// Function: FUN_140208670
// Addr: 140208670
// Size: 1540 bytes


void FUN_140208670(longlong param_1)

{
  float fVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  longlong local_res10;
  longlong local_res18;
  char *in_stack_ffffffffffffff78;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  
  if (((*(uint *)(param_1 + 0x304) & 0x820) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x498) + 0x1f8) & 4) == 0)) {
    lVar10 = *(longlong *)(param_1 + 200);
    fVar13 = DAT_140492704;
    if ((*(uint *)(lVar10 + 0x118) & 0x2000) != 0) {
      fVar13 = *(float *)(param_1 + 0x340);
    }
    fVar1 = *(float *)(param_1 + 0x338);
    *(ulonglong *)(lVar10 + 0x124) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x330) >> 0x20) * fVar13,
                  (float)*(undefined8 *)(param_1 + 0x330) * fVar13);
    *(float *)(lVar10 + 300) = fVar13 * fVar1;
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120) = *(undefined4 *)(param_1 + 0x33c);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 300) = 0x3f800000;
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x128) = 0x3f800000;
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x124) = 0x3f800000;
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120) = 0x3f800000;
  }
  lVar10 = *(longlong *)(param_1 + 0x4a8);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x498);
  }
  if (((*(byte *)(param_1 + 0x120) & 4) != 0) && (*(longlong *)(param_1 + 0x2c8) != 0)) {
    *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x20);
  }
  uVar2 = *(undefined1 *)(lVar10 + 0x1f0);
  if (*(int *)(param_1 + 0x32c) == 0x1f) {
    *(undefined1 *)(lVar10 + 0x1f0) = 2;
  }
  else if (((byte)*(undefined4 *)(param_1 + 0x304) & 0x60) == 0x20) {
    *(undefined1 *)(lVar10 + 0x1f0) = 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x4b8);
  local_res18 = lVar10;
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
     ((*(uint *)(*(longlong *)(lVar5 + 0x18) + 0x38) & 0x10000) != 0)) {
    FUN_14020cff0(param_1);
  }
  lVar5 = *(longlong *)(param_1 + 0x4b8);
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar3 = *(longlong *)(lVar5 + 0x18),
     *(longlong *)(lVar3 + 0xb0) == *(longlong *)(lVar3 + 0xb8))) {
    FUN_140155fc0(lVar10);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 8))();
    FUN_140157430(lVar10);
    *(undefined1 *)(lVar10 + 0x1f0) = uVar2;
    return;
  }
  local_50 = &local_res10;
  iVar9 = 0;
  iVar12 = 0;
  iVar11 = (int)(*(longlong *)(lVar5 + 0x438) - *(longlong *)(lVar5 + 0x430) >> 2);
  local_res10 = lVar10;
  local_58 = param_1;
  local_48 = lVar3;
  if (iVar11 < 1) {
    *(undefined1 *)(lVar10 + 0x1f0) = uVar2;
  }
  else {
    do {
      iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + (longlong)iVar9 * 4);
      if ((iVar6 - 1U < 2) &&
         (lVar10 = *(longlong *)(param_1 + 200), *(longlong *)(lVar10 + 0x1500) == 0)) {
        in_stack_ffffffffffffff78 = "_rt_FullAlphaMask";
        uVar4 = FUN_1401aadb0(lVar10 + 0x16c0,(int)*(float *)(lVar10 + 0x74),
                              (int)*(float *)(lVar10 + 0x78),2,"_rt_FullAlphaMask",9,0x1b,2,0);
        *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1500) = uVar4;
      }
      if (iVar6 == 0) {
        FUN_140155fc0(local_res10);
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0x40))
                  (*(longlong **)(param_1 + 0x490),iVar12);
        FUN_140157430(local_res10);
        iVar12 = iVar12 + 1;
      }
      else if (iVar6 == 1) {
        lVar10 = *(longlong *)(lVar3 + 0xb0);
        lVar5 = (longlong)iVar9;
        iVar9 = iVar9 + 1;
        uVar7 = (ulonglong)
                *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + 4 + lVar5 * 4);
        if (uVar7 < (ulonglong)((*(longlong *)(lVar3 + 0xb8) - lVar10 >> 4) * -0x3333333333333333))
        {
          in_stack_ffffffffffffff78 =
               (char *)((ulonglong)in_stack_ffffffffffffff78 & 0xffffffffffffff00);
          FUN_14020d6a0(&local_58,uVar7,iVar12,"S",in_stack_ffffffffffffff78);
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xd0) =
               *(undefined8 *)(local_res10 + 0xd0);
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xf8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x418);
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0x110) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x1500) + 0x20);
LAB_140208b7a:
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0x1f0) =
               *(undefined1 *)(lVar10 + 0x40 + uVar7 * 0x50);
          FUN_140155fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x428));
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0x40))
                    (*(longlong **)(param_1 + 0x490),iVar12 + 1);
          FUN_140157430(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x428));
        }
        iVar12 = iVar12 + 2;
      }
      else if (iVar6 == 2) {
        lVar10 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(lVar10 + 0x1508) == 0) {
          in_stack_ffffffffffffff78 = "_rt_FullAlphaMaskIntermediate";
          uVar4 = FUN_1401aadb0(lVar10 + 0x16c0,(int)*(float *)(lVar10 + 0x74),
                                (int)*(float *)(lVar10 + 0x78),2,"_rt_FullAlphaMaskIntermediate",9,
                                0x1b,2,0);
          *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1508) = uVar4;
        }
        iVar8 = iVar9 + 1;
        iVar6 = 0;
        iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + (longlong)iVar8 * 4
                        );
        if (0 < iVar9) {
          do {
            lVar5 = (longlong)iVar8;
            iVar8 = iVar8 + 2;
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430);
            in_stack_ffffffffffffff78 =
                 (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff78 >> 8),iVar6 != 0);
            FUN_14020d6a0(&local_58,*(undefined4 *)(lVar10 + 4 + lVar5 * 4),
                          *(undefined4 *)(lVar10 + (longlong)iVar8 * 4),iVar6 == 0,
                          in_stack_ffffffffffffff78);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar9);
        }
        lVar10 = *(longlong *)(lVar3 + 0xb0);
        iVar9 = iVar8 + 1;
        in_stack_ffffffffffffff78 =
             (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff78 >> 8),1);
        uVar7 = (ulonglong)
                *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + 4 +
                         (longlong)iVar8 * 4);
        FUN_14020d6a0(&local_58,uVar7,iVar12,0,in_stack_ffffffffffffff78);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xd0) =
             *(undefined8 *)(local_res10 + 0xd0);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xf8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x418);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0x110) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x1500) + 0x20);
        goto LAB_140208b7a;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
    *(undefined1 *)(local_res18 + 0x1f0) = uVar2;
  }
  return;
}

