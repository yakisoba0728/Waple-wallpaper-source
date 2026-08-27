// Function: FUN_140208c80
// Addr: 140208c80
// Size: 1187 bytes


void FUN_140208c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong local_res8;
  char *in_stack_ffffffffffffff88;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  
  lVar8 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 8) == 0)) {
    FUN_140155fc0(param_2);
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 8))();
    FUN_140157430(param_2);
    return;
  }
  lVar1 = *(longlong *)(lVar8 + 0x18);
  if (*(longlong *)(lVar1 + 0xb0) == *(longlong *)(lVar1 + 0xb8)) {
    FUN_140155fc0(param_2);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 8))();
    FUN_140157430(param_2);
    return;
  }
  local_40 = &local_res8;
  iVar10 = 0;
  iVar9 = (int)(*(longlong *)(lVar8 + 0x438) - *(longlong *)(lVar8 + 0x430) >> 2);
  local_res8 = param_2;
  local_48 = param_1;
  local_38 = lVar1;
  iVar7 = iVar10;
  iVar11 = iVar10;
  if (0 < iVar9) {
    do {
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + (longlong)iVar7 * 4);
      if ((iVar4 - 1U < 2) &&
         (lVar8 = *(longlong *)(param_1 + 200), *(longlong *)(lVar8 + 0x1500) == 0)) {
        in_stack_ffffffffffffff88 = "_rt_FullAlphaMask";
        uVar2 = FUN_1401aadb0(lVar8 + 0x16c0,(int)*(float *)(lVar8 + 0x74),
                              (int)*(float *)(lVar8 + 0x78),2,"_rt_FullAlphaMask",9,0x1b,2,0);
        *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1500) = uVar2;
      }
      if (iVar4 == 0) {
        FUN_140155fc0(local_res8);
        (**(code **)(**(longlong **)(param_1 + 0x490) + 0x40))
                  (*(longlong **)(param_1 + 0x490),iVar11);
        FUN_140157430(local_res8);
        iVar11 = iVar11 + 1;
      }
      else if (iVar4 == 1) {
        lVar8 = *(longlong *)(lVar1 + 0xb0);
        lVar3 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        uVar5 = (ulonglong)
                *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + 4 + lVar3 * 4);
        if (uVar5 < (ulonglong)((*(longlong *)(lVar1 + 0xb8) - lVar8 >> 4) * -0x3333333333333333)) {
          in_stack_ffffffffffffff88 =
               (char *)((ulonglong)in_stack_ffffffffffffff88 & 0xffffffffffffff00);
          FUN_14020d6a0(&local_48,uVar5,iVar11,1,in_stack_ffffffffffffff88);
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xd0) =
               *(undefined8 *)(local_res8 + 0xd0);
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xf8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x418);
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0x110) =
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x1500) + 0x20);
LAB_14020904b:
          *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0x1f0) =
               *(undefined1 *)(lVar8 + 0x40 + uVar5 * 0x50);
          FUN_140155fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x428));
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0x40))
                    (*(longlong **)(param_1 + 0x490),iVar11 + 1);
          FUN_140157430(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x428));
        }
        iVar11 = iVar11 + 2;
      }
      else if (iVar4 == 2) {
        lVar8 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(lVar8 + 0x1508) == 0) {
          in_stack_ffffffffffffff88 = "_rt_FullAlphaMaskIntermediate";
          uVar2 = FUN_1401aadb0(lVar8 + 0x16c0,(int)*(float *)(lVar8 + 0x74),
                                (int)*(float *)(lVar8 + 0x78),2,"_rt_FullAlphaMaskIntermediate",9,
                                0x1b,2,0);
          *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1508) = uVar2;
        }
        iVar6 = iVar7 + 1;
        iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + (longlong)iVar6 * 4
                        );
        iVar4 = iVar10;
        if (0 < iVar7) {
          do {
            lVar3 = (longlong)iVar6;
            iVar6 = iVar6 + 2;
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430);
            in_stack_ffffffffffffff88 =
                 (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),iVar4 != 0);
            FUN_14020d6a0(&local_48,*(undefined4 *)(lVar8 + 4 + lVar3 * 4),
                          *(undefined4 *)(lVar8 + (longlong)iVar6 * 4),iVar4 == 0,
                          in_stack_ffffffffffffff88);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar7);
        }
        lVar8 = *(longlong *)(lVar1 + 0xb0);
        iVar7 = iVar6 + 1;
        in_stack_ffffffffffffff88 =
             (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),1);
        uVar5 = (ulonglong)
                *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x430) + 4 +
                         (longlong)iVar6 * 4);
        FUN_14020d6a0(&local_48,uVar5,iVar11,0,in_stack_ffffffffffffff88);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xd0) =
             *(undefined8 *)(local_res8 + 0xd0);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0xf8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x418);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x428) + 0x110) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x1500) + 0x20);
        goto LAB_14020904b;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar9);
  }
  return;
}

