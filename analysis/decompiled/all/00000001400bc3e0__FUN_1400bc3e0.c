// Function: FUN_1400bc3e0
// Addr: 1400bc3e0
// Size: 354 bytes


/* WARNING: Removing unreachable block (ram,0x0001400bcec7) */

void FUN_1400bc3e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte local_49;
  
  lVar4 = 0;
  uVar3 = (ulonglong)local_49;
  lVar6 = lVar4;
  if (((param_2 != (longlong *)0x0) && (lVar5 = *param_2, lVar6 = 0, lVar5 != 0)) &&
     (lVar6 = param_2[2] + lVar5, (char)param_2[5] == '\0')) {
    uVar3 = param_2[1] + lVar5;
  }
  lVar5 = lVar4;
  if ((param_4 != (longlong *)0x0) && (lVar2 = *param_4, lVar2 != 0)) {
    lVar4 = param_4[3] + lVar2;
    lVar5 = lVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x194);
  if ((uVar1 != 0) && (0x10 < uVar1)) {
    *(undefined8 *)(param_1 + 0xae48) = *(undefined8 *)(param_1 + 0xae48);
    *(undefined4 *)(param_1 + 0x194) = 0;
    if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
      param_2[2] = lVar6 - *param_2;
    }
    if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
      param_4[3] = lVar4 - *param_4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400bc4e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_1400bcf10 + (ulonglong)uVar1 * 4)))
            (uVar3,IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)(&DAT_1400bcf10 + (ulonglong)uVar1 * 4),(ulonglong)uVar1,lVar5,1);
  return;
}

