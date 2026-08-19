// Function: FUN_140036d30
// Addr: 140036d30
// Size: 140 bytes


/* WARNING: Removing unreachable block (ram,0x000140036db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036d30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_30 [8];
  uint local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    local_28 = local_28 & 0xfffffe00;
    FUN_1400451c0(&PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670,local_30);
                    /* WARNING: Could not recover jumptable at 0x000140036d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_140000080.field_0x50 + _DAT_140036f34))
              (&DAT_140000080.field_0x50 + _DAT_140036f34);
    return;
  }
  local_28 = local_28 & 0xfffffe00;
  plVar1 = (longlong *)**(longlong **)(param_2 + 8);
  if (plVar1 == *(longlong **)(param_2 + 8)) {
    FUN_1400451c0(&PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670,local_30);
    func_0x000140085510(local_30);
    if ((DAT_1404df610 & 0x1000) != 0) {
      return;
    }
    (*DAT_140426838)(DAT_1404e5350,0x7a);
    (*DAT_140426818)(DAT_1404e5350,0x7a,1000,0);
    return;
  }
  puVar2 = plVar1 + 2;
  if (0xf < (ulonglong)plVar1[5]) {
    puVar2 = (undefined8 *)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(local_30,puVar2,plVar1[4] + (longlong)puVar2);
}

