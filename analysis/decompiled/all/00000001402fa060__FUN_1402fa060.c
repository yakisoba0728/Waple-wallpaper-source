// Function: FUN_1402fa060
// Addr: 1402fa060
// Size: 691 bytes


ulonglong FUN_1402fa060(undefined8 param_1,longlong *param_2,ulonglong param_3,int param_4,
                       undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 local_res18;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [8];
  
  uVar6 = *(uint *)((longlong)param_2 + 0xc);
  if (*(uint *)(param_2 + 1) <= uVar6 + 3) {
    return 0x55;
  }
  local_res18 = param_3;
  if ((code *)param_2[4] == (code *)0x0) {
    puVar5 = (undefined1 *)(*param_2 + (ulonglong)uVar6);
    iVar2 = 0;
    if (puVar5 == (undefined1 *)0x0) goto LAB_1402fa0e1;
  }
  else {
    iVar2 = (*(code *)param_2[4])(param_2,uVar6,local_18,4);
    if (iVar2 != 4) {
      return 0x55;
    }
    uVar6 = *(uint *)((longlong)param_2 + 0xc);
    puVar5 = local_18;
  }
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
LAB_1402fa0e1:
  *(uint *)((longlong)param_2 + 0xc) = uVar6 + 4;
  local_res18 = local_res18 & 0xffffffff00000000;
  if (iVar2 == param_4) {
    FUN_1402f58c0(param_2,&local_res18);
    if ((int)local_res18 != 0) {
      return local_res18 & 0xffffffff;
    }
    uVar6 = *(int *)((longlong)param_2 + 0xc) + 0x10;
    if ((code *)param_2[4] == (code *)0x0) {
      bVar9 = *(uint *)(param_2 + 1) < uVar6;
    }
    else {
      iVar2 = (*(code *)param_2[4])(param_2,uVar6,0,0);
      bVar9 = iVar2 != 0;
    }
    uVar3 = -(uint)bVar9 & 0x55;
    local_res18 = CONCAT44(local_res18._4_4_,-(uint)bVar9) & 0xffffffff00000055;
    if (uVar3 != 0) {
      return (ulonglong)uVar3;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar6;
    uVar1 = FUN_1402f5ac0(param_2,&local_res18);
    if ((int)local_res18 != 0) {
      return local_res18 & 0xffffffff;
    }
    if (uVar1 != 0) {
      iVar2 = 0;
      if (uVar1 != 0) {
        do {
          uVar6 = *(uint *)((longlong)param_2 + 0xc);
          if (*(uint *)(param_2 + 1) <= uVar6 + 3) {
            return 0x55;
          }
          if ((code *)param_2[4] == (code *)0x0) {
            iVar4 = 0;
            puVar5 = (undefined1 *)((ulonglong)uVar6 + *param_2);
            if (puVar5 != (undefined1 *)0x0) goto LAB_1402fa1d5;
          }
          else {
            iVar4 = (*(code *)param_2[4])(param_2,(ulonglong)uVar6,local_14,4);
            if (iVar4 != 4) {
              return 0x55;
            }
            uVar6 = *(uint *)((longlong)param_2 + 0xc);
            puVar5 = local_14;
LAB_1402fa1d5:
            iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          }
          uVar3 = uVar6 + 4;
          *(uint *)((longlong)param_2 + 0xc) = uVar3;
          if (iVar4 == 2) {
            uVar8 = *(uint *)(param_2 + 1);
            if (uVar6 + 7 < uVar8) {
              if ((code *)param_2[4] == (code *)0x0) {
                puVar5 = (undefined1 *)((ulonglong)uVar3 + *param_2);
                if (puVar5 != (undefined1 *)0x0) goto LAB_1402fa24d;
                uVar7 = 0;
              }
              else {
                iVar4 = (*(code *)param_2[4])(param_2,uVar3,local_10);
                if (iVar4 != 4) goto LAB_1402fa2c9;
                uVar3 = *(uint *)((longlong)param_2 + 0xc);
                puVar5 = local_10;
                uVar8 = *(uint *)(param_2 + 1);
LAB_1402fa24d:
                uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
              }
              *(uint *)((longlong)param_2 + 0xc) = uVar3 + 4;
              if ((uVar3 + 7 < uVar8) &&
                 (((code *)param_2[4] == (code *)0x0 ||
                  (iVar4 = (*(code *)param_2[4])(param_2,uVar3 + 4,&local_res18), iVar4 == 4)))) {
                *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 4;
                *param_5 = uVar7;
                return 0;
              }
            }
          }
          else {
            uVar6 = uVar6 + 0xc;
            if ((code *)param_2[4] == (code *)0x0) {
              bVar9 = *(uint *)(param_2 + 1) < uVar6;
            }
            else {
              iVar4 = (*(code *)param_2[4])(param_2,uVar6,0,0);
              bVar9 = iVar4 != 0;
            }
            if ((-(uint)bVar9 & 0x55) != 0) {
              return (ulonglong)(-(uint)bVar9 & 0x55);
            }
            *(uint *)((longlong)param_2 + 0xc) = uVar6;
          }
LAB_1402fa2c9:
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)uVar1);
      }
    }
  }
  return 2;
}

