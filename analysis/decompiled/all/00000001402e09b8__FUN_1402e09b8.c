// Function: FUN_1402e09b8
// Addr: 1402e09b8
// Size: 332 bytes


int FUN_1402e09b8(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  short *psVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  short local_res8 [4];
  short asStackX_10 [4];
  int local_res18 [2];
  
  lVar11 = 0;
  uVar7 = (ulonglong)(param_1 & 0x3f);
  lVar12 = (longlong)(int)param_1 >> 6;
  lVar3 = *(longlong *)(&DAT_1404e4960 + lVar12 * 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28 + uVar7 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar7 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar7 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar10 = param_2;
  psVar5 = param_2;
  do {
    if (param_2 + param_3 <= psVar5) goto LAB_1402e0b92;
    sVar9 = *psVar5;
    if (sVar9 == 0x1a) {
      bVar2 = *(byte *)(*(longlong *)(&DAT_1404e4960 + lVar12 * 8) + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar10 = 0x1a;
        goto LAB_1402e0b8f;
      }
      *(byte *)(*(longlong *)(&DAT_1404e4960 + lVar12 * 8) + 0x38 +
               (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_1402e0b92;
    }
    psVar8 = psVar5 + 1;
    if (sVar9 == 0xd) {
      if (param_2 + param_3 <= psVar8) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        iVar6 = (*DAT_1404261b8)(uVar4,local_res8,2,local_res18,0);
        if ((iVar6 == 0) || (local_res18[0] == 0)) {
UNWIND_INFO_1402e0ae3_UnwindCodes_55__UnwindOpCode:
          *psVar10 = 0xd;
          goto LAB_1402e0b8f;
        }
        if ((*(byte *)(*(longlong *)(&DAT_1404e4960 + lVar12 * 8) + 0x38 + uVar7 * 0x48) & 0x48) ==
            0) {
          if ((local_res8[0] != 10) || (psVar10 != param_2)) {
            func_0x0001402dff64(param_1,0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto UNWIND_INFO_1402e0ae3_UnwindCodes_55__UnwindOpCode;
            goto LAB_1402e0b92;
          }
        }
        else if (local_res8[0] != 10) {
          asStackX_10[0] = local_res8[0];
          *psVar10 = 0xd;
          do {
            *(undefined1 *)
             (*(longlong *)(&DAT_1404e4960 + lVar12 * 8) + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a
             + lVar11) = *(undefined1 *)((longlong)asStackX_10 + lVar11);
            lVar11 = lVar11 + 1;
          } while (lVar11 < 2);
          *(undefined1 *)
           (*(longlong *)(&DAT_1404e4960 + lVar12 * 8) + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48)
               = 10;
LAB_1402e0b8f:
          psVar10 = psVar10 + 1;
LAB_1402e0b92:
          return (int)((longlong)psVar10 - (longlong)param_2 >> 1) * 2;
        }
        *psVar10 = 10;
        goto LAB_1402e0b8f;
      }
      if (*psVar8 == 10) {
        psVar8 = psVar5 + 2;
        sVar9 = 10;
      }
    }
    *psVar10 = sVar9;
    psVar10 = psVar10 + 1;
    psVar5 = psVar8;
  } while( true );
}

