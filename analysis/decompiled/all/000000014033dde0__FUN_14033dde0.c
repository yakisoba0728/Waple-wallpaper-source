// Function: FUN_14033dde0
// Addr: 14033dde0
// Size: 503 bytes


void FUN_14033dde0(undefined8 *param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 uVar15;
  uint uVar16;
  int local_58 [2];
  uint *local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar8 = 1;
    if (param_2 < 2) {
      uVar8 = (ulonglong)param_2;
    }
    for (; 0 < param_3; param_3 = param_3 + -1) {
      local_48 = *param_1;
      iVar7 = param_4[1];
      iVar2 = *param_4;
      if (iVar7 < 0) {
        iVar13 = 0;
        iVar5 = iVar2 + iVar7;
        if (iVar7 != -0x15) {
          iVar5 = iVar2;
        }
        uVar15 = 3;
        if (iVar7 != -0x15) {
          uVar15 = 1;
        }
      }
      else {
        uVar15 = 0;
        iVar5 = iVar2;
        iVar13 = iVar7;
      }
      uVar16 = *(uint *)(param_1 + uVar8 * 6 + 3);
      uVar11 = 0;
      piVar9 = (int *)param_1[uVar8 * 6 + 4];
      if (uVar16 != 0) {
        do {
          if ((*piVar9 == iVar5) && (piVar9[1] == iVar13)) goto LAB_14033df09;
          uVar11 = uVar11 + 1;
          piVar9 = piVar9 + 3;
        } while (uVar11 < uVar16);
      }
      uVar3 = *(uint *)((longlong)param_1 + uVar8 * 0x30 + 0x1c);
      uVar1 = uVar16 + 1;
      uVar12 = (ulonglong)uVar1;
      if (uVar3 < uVar1) {
        uVar16 = uVar16 + 8 & 0xfffffff8;
        uVar10 = FUN_1402f7ff0(local_48,0xc,uVar3,uVar16,(int *)param_1[uVar8 * 6 + 4],local_58);
        param_1[uVar8 * 6 + 4] = uVar10;
        iVar7 = local_58[0];
        if (local_58[0] != 0) goto LAB_14033dfa3;
        *(uint *)((longlong)param_1 + uVar8 * 0x30 + 0x1c) = uVar16;
      }
      lVar4 = param_1[uVar8 * 6 + 4];
      *(uint *)(param_1 + uVar8 * 6 + 3) = uVar1;
      *(int *)(lVar4 + -0xc + uVar12 * 0xc) = iVar5;
      *(int *)(lVar4 + -8 + uVar12 * 0xc) = iVar13;
      *(undefined4 *)(lVar4 + -4 + uVar12 * 0xc) = uVar15;
LAB_14033df09:
      if (*(uint *)(param_1 + uVar8 * 6 + 5) == 0) {
        iVar7 = FUN_14033e330(param_1 + uVar8 * 6 + 5,local_48,&local_50);
        if (iVar7 != 0) goto LAB_14033dfa3;
      }
      else {
        local_50 = (uint *)(param_1[uVar8 * 6 + 6] +
                           ((ulonglong)*(uint *)(param_1 + uVar8 * 6 + 5) * 3 + -3) * 8);
      }
      puVar6 = local_50;
      iVar7 = 0;
      if (*local_50 <= uVar11) {
        iVar7 = FUN_14033e2b0(local_50,uVar11 + 1,local_48);
        if (iVar7 != 0) goto LAB_14033dfa3;
        *puVar6 = uVar11 + 1;
      }
      pbVar14 = (byte *)((ulonglong)(uVar11 >> 3) + *(longlong *)(puVar6 + 2));
      *pbVar14 = *pbVar14 | (byte)(0x80 >> ((byte)uVar11 & 7));
      if (iVar7 != 0) {
LAB_14033dfa3:
        *(int *)(param_1 + 1) = iVar7;
        return;
      }
      param_4 = param_4 + 2;
    }
  }
  return;
}

