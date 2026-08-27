// Function: FUN_1403426f0
// Addr: 1403426f0
// Size: 891 bytes


int FUN_1403426f0(longlong param_1,longlong param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  local_res20 = *(undefined8 *)(param_2 + 0x30);
  psVar1 = (short *)(param_1 + 0x1d8);
  *(longlong *)(param_1 + 0x200) = param_2;
  lVar5 = 0;
  puVar4 = (ushort *)0x0;
  local_res10[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x6e616d65,param_2,local_res18);
  if (local_res10[0] == 0) {
    iVar3 = FUN_1402f54a0(param_2);
    local_res10[0] = FUN_1402f5610(param_2,&DAT_140450e60,psVar1);
    if (local_res10[0] == 0) {
      uVar12 = local_res18[0] + iVar3;
      uVar13 = *(int *)(param_1 + 0x1dc) * 0xc + 6 + iVar3;
      if (uVar12 < uVar13) {
        local_res10[0] = 0x91;
      }
      else {
        if (*psVar1 == 1) {
          local_res10[0] = FUN_1402f5c50(param_2,uVar13);
          if (local_res10[0] != 0) goto LAB_140342a3a;
          uVar2 = FUN_1402f5ac0(param_2,local_res10);
          uVar7 = (uint)uVar2;
          *(uint *)(param_1 + 0x1f0) = uVar7;
          if (((local_res10[0] != 0) ||
              (puVar4 = (ushort *)FUN_1402f7ff0(local_res20,0x10,0,uVar7,0,local_res10),
              local_res10[0] != 0)) ||
             (local_res10[0] = FUN_1402f4fe0(param_2,*(int *)(param_1 + 0x1f0) << 2), lVar5 = 0,
             local_res10[0] != 0)) goto LAB_140342a3a;
          uVar13 = uVar13 + uVar7 * 4 + 2;
          local_res10[0] = 0;
          if (puVar4 != (ushort *)0x0) {
            uVar7 = *(uint *)(param_1 + 0x1f0);
            for (puVar8 = puVar4; puVar8 < puVar4 + (ulonglong)uVar7 * 8; puVar8 = puVar8 + 8) {
              local_res10[0] = FUN_1402f5610(param_2,&DAT_140450e98,puVar8);
              *(int *)(puVar8 + 2) = *(int *)(puVar8 + 2) + *(int *)(param_1 + 0x1e0) + iVar3;
              if ((*(uint *)(puVar8 + 2) < uVar13) ||
                 (uVar12 < (uint)*puVar8 + *(uint *)(puVar8 + 2))) {
                *puVar8 = 0;
              }
              puVar8[4] = 0;
              puVar8[5] = 0;
              puVar8[6] = 0;
              puVar8[7] = 0;
            }
          }
          *(ushort **)(param_1 + 0x1f8) = puVar4;
          FUN_1402f5100(param_2);
          local_res10[0] = FUN_1402f5c50(param_2,iVar3 + 6);
        }
        lVar5 = FUN_1402f7ff0(local_res20,0x18,0,*(undefined4 *)(param_1 + 0x1dc),0,local_res10);
        puVar4 = (ushort *)0x0;
        iVar10 = 0;
        if ((local_res10[0] == 0) &&
           (local_res10[0] = FUN_1402f4fe0(param_2,*(int *)(param_1 + 0x1dc) * 0xc),
           local_res10[0] == 0)) {
          lVar9 = lVar5;
          for (iVar11 = *(int *)(param_1 + 0x1dc); iVar11 != 0; iVar11 = iVar11 + -1) {
            local_res10[0] = FUN_1402f5610(param_2,&DAT_140450e78,lVar9);
            if ((local_res10[0] == 0) && (*(ushort *)(lVar9 + 8) != 0)) {
              *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + *(int *)(param_1 + 0x1e0) + iVar3;
              if (((uVar13 <= *(uint *)(lVar9 + 0xc)) &&
                  (*(uint *)(lVar9 + 0xc) + (uint)*(ushort *)(lVar9 + 8) <= uVar12)) &&
                 (((*psVar1 != 1 || (*(ushort *)(lVar9 + 4) < 0x8000)) ||
                  ((uVar7 = *(ushort *)(lVar9 + 4) - 0x8000, uVar7 < *(uint *)(param_1 + 0x1f0) &&
                   (*(short *)(*(longlong *)(param_1 + 0x1f8) + (ulonglong)uVar7 * 0x10) != 0))))))
              {
                iVar10 = iVar10 + 1;
                *(undefined8 *)(lVar9 + 0x10) = 0;
                lVar9 = lVar9 + 0x18;
              }
            }
          }
          uVar6 = FUN_1402f7ff0(local_res20,0x18,*(undefined4 *)(param_1 + 0x1dc),iVar10,lVar5,
                                local_res10);
          *(undefined8 *)(param_1 + 0x1e8) = uVar6;
          lVar5 = 0;
          *(int *)(param_1 + 0x1dc) = iVar10;
          FUN_1402f5100(param_2);
          puVar4 = (ushort *)0x0;
          *(undefined2 *)(param_1 + 0x1d0) = *(undefined2 *)(param_1 + 0x1dc);
        }
      }
    }
  }
LAB_140342a3a:
  FUN_1402f7f90(local_res20,lVar5);
  FUN_1402f7f90(local_res20,puVar4);
  return local_res10[0];
}

