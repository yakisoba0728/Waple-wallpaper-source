// Function: FUN_1402f7b10
// Addr: 1402f7b10
// Size: 896 bytes


uint FUN_1402f7b10(longlong *param_1,int param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  uint local_res8 [2];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
    return 0x55;
  }
  if ((code *)param_1[4] == (code *)0x0) {
    puVar5 = (undefined1 *)(*param_1 + (ulonglong)uVar6);
    iVar2 = 0;
    if (puVar5 == (undefined1 *)0x0) goto LAB_1402f7bab;
  }
  else {
    iVar2 = (*(code *)param_1[4])(param_1,uVar6,local_38,4);
    if (iVar2 != 4) {
      return 0x55;
    }
    uVar6 = *(uint *)((longlong)param_1 + 0xc);
    puVar5 = local_38;
  }
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
LAB_1402f7bab:
  local_res8[0] = 0;
  *(uint *)((longlong)param_1 + 0xc) = uVar6 + 4;
  if (iVar2 != 0x74797031) {
    return 2;
  }
  uVar1 = FUN_1402f5ac0(param_1,local_res8);
  if (local_res8[0] == 0) {
    uVar6 = *(int *)((longlong)param_1 + 0xc) + 6;
    if ((code *)param_1[4] == (code *)0x0) {
      bVar10 = *(uint *)(param_1 + 1) < uVar6;
    }
    else {
      iVar2 = (*(code *)param_1[4])(param_1,uVar6,0,0);
      bVar10 = iVar2 != 0;
    }
    local_res8[0] = -(uint)bVar10 & 0x55;
    if (local_res8[0] == 0) {
      *(uint *)((longlong)param_1 + 0xc) = uVar6;
      *param_5 = 0;
      iVar9 = 0;
      iVar2 = -1;
      local_res8[0] = (uint)uVar1;
      if (local_res8[0] != 0) {
        do {
          uVar6 = *(uint *)((longlong)param_1 + 0xc);
          if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
            return 0x55;
          }
          if ((code *)param_1[4] == (code *)0x0) {
            puVar5 = (undefined1 *)(*param_1 + (ulonglong)uVar6);
            pcVar8 = (code *)0x0;
            if (puVar5 != (undefined1 *)0x0) goto LAB_1402f7c9d;
            iVar3 = 0;
          }
          else {
            iVar3 = (*(code *)param_1[4])(param_1,uVar6,local_34,4);
            if (iVar3 != 4) {
              return 0x55;
            }
            uVar6 = *(uint *)((longlong)param_1 + 0xc);
            puVar5 = local_34;
            pcVar8 = (code *)param_1[4];
LAB_1402f7c9d:
            iVar3 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          }
          *(uint *)((longlong)param_1 + 0xc) = uVar6 + 4;
          uVar7 = uVar6 + 8;
          if (pcVar8 == (code *)0x0) {
            bVar10 = *(uint *)(param_1 + 1) < uVar7;
          }
          else {
            iVar4 = (*pcVar8)(param_1,uVar7,0,0);
            bVar10 = iVar4 != 0;
          }
          if ((-(uint)bVar10 & 0x55) != 0) {
            return -(uint)bVar10 & 0x55;
          }
          *(uint *)((longlong)param_1 + 0xc) = uVar7;
          if (*(uint *)(param_1 + 1) <= uVar6 + 0xb) {
LAB_1402f7e6c:
            *param_3 = 0;
            return 0x55;
          }
          if ((code *)param_1[4] == (code *)0x0) {
            iVar4 = 0;
            puVar5 = (undefined1 *)(*param_1 + (ulonglong)uVar7);
            if (puVar5 != (undefined1 *)0x0) goto LAB_1402f7d3a;
          }
          else {
            iVar4 = (*(code *)param_1[4])(param_1,uVar7,local_30);
            if (iVar4 != 4) goto LAB_1402f7e6c;
            uVar7 = *(uint *)((longlong)param_1 + 0xc);
            puVar5 = local_30;
LAB_1402f7d3a:
            iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          }
          *(uint *)((longlong)param_1 + 0xc) = uVar7 + 4;
          *param_3 = iVar4;
          uVar6 = *(uint *)((longlong)param_1 + 0xc);
          if (*(uint *)(param_1 + 1) <= uVar6 + 3) {
LAB_1402f7e5e:
            *param_4 = 0;
            return 0x55;
          }
          if ((code *)param_1[4] == (code *)0x0) {
            puVar5 = (undefined1 *)(*param_1 + (ulonglong)uVar6);
            iVar4 = 0;
            if (puVar5 != (undefined1 *)0x0) goto LAB_1402f7db0;
          }
          else {
            iVar4 = (*(code *)param_1[4])(param_1,uVar6,local_2c);
            if (iVar4 != 4) goto LAB_1402f7e5e;
            uVar6 = *(uint *)((longlong)param_1 + 0xc);
            puVar5 = local_2c;
LAB_1402f7db0:
            iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          }
          *(uint *)((longlong)param_1 + 0xc) = uVar6 + 4;
          *param_4 = iVar4;
          if (iVar3 == 0x43494420) {
            *param_3 = *param_3 + 0x16;
            *param_4 = *param_4 + -0x16;
            *param_5 = 1;
            if (param_2 < 0) {
              return 0;
            }
            iVar2 = iVar2 + 1;
LAB_1402f7e25:
            if (iVar2 == param_2) {
              return 0;
            }
          }
          else {
            if (iVar3 == 0x54595031) {
              *param_3 = *param_3 + 0x18;
              *param_4 = *param_4 + -0x18;
              *param_5 = 0;
              if (param_2 < 0) {
                return 0;
              }
              iVar2 = iVar2 + 1;
              goto LAB_1402f7e25;
            }
            if (-1 < param_2) goto LAB_1402f7e25;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
      }
      local_res8[0] = 0x8e;
    }
  }
  return local_res8[0];
}

