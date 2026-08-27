// Function: FUN_1400b7510
// Addr: 1400b7510
// Size: 280 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b7c60) */

undefined8 FUN_1400b7510(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = 0;
  lVar5 = 0;
  if ((param_3 != (longlong *)0x0) && (lVar2 = *param_3, lVar4 = 0, lVar5 = 0, lVar2 != 0)) {
    lVar5 = param_3[3] + lVar2;
    lVar4 = param_3[2] + lVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x14c);
  if ((uVar1 != 0) && (0xb < uVar1)) {
    *(undefined4 *)(param_1 + 0xadb8) = *(undefined4 *)(param_1 + 0xadb8);
    *(undefined4 *)(param_1 + 0x14c) = 0;
    if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
      param_3[3] = lVar5 - *param_3;
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400b75d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                    *(uint *)(&DAT_1400b7dd8 + (ulonglong)uVar1 * 4)))
                    (IMAGE_DOS_HEADER_140000000.e_magic +
                     *(uint *)(&DAT_1400b7dd8 + (ulonglong)uVar1 * 4),&IMAGE_DOS_HEADER_140000000,
                     &PTR_FUN_14047aab0,lVar4);
  return uVar3;
}

