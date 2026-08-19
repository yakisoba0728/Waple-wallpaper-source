// Function: FUN_14003bb30
// Addr: 14003bb30
// Size: 95 bytes


undefined8 * FUN_14003bb30(undefined8 *param_1)

{
  short *psVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short *psVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  short *psVar7;
  undefined8 *puVar8;
  
  uVar2 = param_1[3];
  puVar8 = param_1;
  if (7 < uVar2) {
    puVar8 = (undefined8 *)*param_1;
  }
  uVar3 = param_1[2];
  psVar7 = (short *)((longlong)puVar8 + uVar3 * 2);
  for (psVar4 = (short *)FUN_140015f60(); psVar4 != psVar7; psVar4 = psVar4 + 1) {
    if ((*psVar4 != 0x5c) && (*psVar4 != 0x2f)) goto LAB_14003bb90;
  }
UNWIND_INFO_14003bb98_UnwindCodes_9__UnwindOpCode:
  uVar5 = (longlong)psVar7 - (longlong)puVar8 >> 1;
  if (uVar5 <= uVar3) {
    param_1[2] = uVar5;
    puVar6 = param_1;
    if (7 < uVar2) {
      puVar6 = (undefined8 *)*param_1;
    }
    *(undefined2 *)(((longlong)psVar7 - (longlong)puVar8 & 0xfffffffffffffffeU) + (longlong)puVar6)
         = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140012a10();
LAB_14003bb90:
  psVar1 = psVar7 + -1;
  if (psVar7[-1] == 0x5c) goto UNWIND_INFO_14003bb98_UnwindCodes_9__UnwindOpCode;
  if ((psVar7[-1] == 0x2f) || (psVar7 = psVar1, psVar4 == psVar1))
  goto UNWIND_INFO_14003bb98_UnwindCodes_9__UnwindOpCode;
  goto LAB_14003bb90;
}

