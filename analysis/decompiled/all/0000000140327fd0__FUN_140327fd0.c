// Function: FUN_140327fd0
// Addr: 140327fd0
// Size: 560 bytes


void FUN_140327fd0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int local_res10 [2];
  int local_res18;
  undefined8 *local_res20;
  
  local_res20 = *(undefined8 **)(param_1 + 0x2a0);
  pbVar2 = (byte *)param_2[2];
  (*(code *)param_2[7])(param_2);
  pbVar11 = (byte *)*param_2;
  if (pbVar11 < pbVar2) {
    bVar1 = *pbVar11;
    if ((9 < bVar1 - 0x30) && (bVar1 != 0x5b)) {
      if ((pbVar11 + 0x11 < pbVar2) &&
         (iVar5 = func_0x000140421dc0(pbVar11,"StandardEncoding",0x10), iVar5 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 2;
        return;
      }
      if ((pbVar11 + 0xf < pbVar2) &&
         (iVar5 = func_0x000140421dc0(pbVar11,"ExpertEncoding",0xe), iVar5 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 4;
        return;
      }
      if ((pbVar11 + 0x12 < pbVar2) &&
         (iVar5 = func_0x000140421dc0(pbVar11,"ISOLatin1Encoding",0x11), iVar5 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 3;
        return;
      }
      *(undefined4 *)(param_2 + 3) = 0xa2;
      return;
    }
    uVar3 = param_2[4];
    if (bVar1 == 0x5b) {
      local_res18 = 0x100;
      bVar4 = true;
      *param_2 = (ulonglong)(pbVar11 + 1);
    }
    else {
      bVar4 = false;
      local_res18 = (*(code *)param_2[9])(param_2);
      if (0x100 < local_res18) goto LAB_140328403;
    }
    iVar5 = local_res18;
    (*(code *)param_2[7])(param_2);
    if ((byte *)*param_2 < pbVar2) {
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402f8060(uVar3);
      }
      *(int *)(param_1 + 0x1e8) = iVar5;
      *(int *)(param_2 + 0x15) = iVar5;
      uVar7 = FUN_1402f80c0(uVar3,2,0,iVar5,0,local_res10);
      *(undefined8 *)(param_1 + 0x1f8) = uVar7;
      if (local_res10[0] == 0) {
        uVar7 = FUN_1402f80c0(uVar3,8,0,iVar5,0,local_res10);
        *(undefined8 *)(param_1 + 0x200) = uVar7;
        if ((local_res10[0] == 0) &&
           (local_res10[0] = (**(code **)*local_res20)(param_2 + 0x16,iVar5,uVar3),
           local_res10[0] == 0)) {
          iVar8 = 0;
          local_res10[0] = 0;
          if (0 < iVar5) {
            do {
              (*(code *)param_2[0x1f])(param_2 + 0x16,iVar8,".notdef",8);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar5);
          }
          (*(code *)param_2[7])(param_2);
          pbVar10 = (byte *)*param_2;
          if (pbVar10 < pbVar2) {
            iVar5 = 0;
            do {
              bVar1 = *pbVar10;
              if (bVar1 == 100) {
                pbVar11 = pbVar10 + 3;
                if (((pbVar11 < pbVar2) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) {
                  if ((0x20 < *pbVar11) || ((0x100003601U >> ((ulonglong)*pbVar11 & 0x3f) & 1) == 0)
                     ) goto code_r0x0001403282e3;
                  break;
                }
              }
              else {
code_r0x0001403282e3:
                if (bVar1 == 0x5d) {
                  pbVar11 = pbVar10 + 1;
                  break;
                }
              }
              pbVar11 = pbVar10;
              iVar8 = iVar5;
              if (bVar1 - 0x30 < 10) {
                if (!bVar4) {
                  iVar8 = (*(code *)param_2[9])(param_2);
                  (*(code *)param_2[7])(param_2);
                  pbVar11 = (byte *)*param_2;
                  if (pbVar10 == (byte *)*param_2) goto code_r0x0001403283d1;
                }
code_r0x000140328342:
                if (((pbVar11 + 2 < pbVar2) && (*pbVar11 == 0x2f)) && (iVar5 < local_res18)) {
                  pbVar11 = pbVar11 + 1;
                  *param_2 = (ulonglong)pbVar11;
                  (*(code *)param_2[8])(param_2);
                  if (pbVar2 <= (byte *)*param_2) {
                    return;
                  }
                  if ((int)param_2[3] != 0) {
                    return;
                  }
                  uVar9 = (int)(byte *)*param_2 - (int)pbVar11;
                  iVar6 = (*(code *)param_2[0x1f])(param_2 + 0x16,iVar8,pbVar11,uVar9 + 1);
                  *(int *)(param_2 + 3) = iVar6;
                  if (iVar6 != 0) {
                    return;
                  }
                  iVar5 = iVar5 + 1;
                  *(undefined1 *)
                   ((ulonglong)uVar9 + *(longlong *)(param_2[0x1a] + (longlong)iVar8 * 8)) = 0;
                }
                else if (bVar4) {
code_r0x0001403283d1:
                  *(undefined4 *)(param_2 + 3) = 2;
                  return;
                }
              }
              else {
                if (bVar4) goto code_r0x000140328342;
                (*(code *)param_2[8])(param_2);
                if ((int)param_2[3] != 0) {
                  return;
                }
              }
              (*(code *)param_2[7])(param_2);
              pbVar10 = (byte *)*param_2;
            } while (pbVar10 < pbVar2);
          }
          *(undefined4 *)(param_1 + 0x1e0) = 1;
          *param_2 = (ulonglong)pbVar11;
          return;
        }
      }
      *(int *)(param_2 + 3) = local_res10[0];
    }
    return;
  }
LAB_140328403:
  *(undefined4 *)(param_2 + 3) = 3;
  return;
}

