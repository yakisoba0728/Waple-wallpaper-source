// Function: FUN_140121830
// Addr: 140121830
// Size: 324 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140121830(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int local_res8 [2];
  ulonglong local_res10;
  undefined1 local_res18 [16];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  
  if ((((*(int *)(param_1 + 0xb0) == 3) &&
       (plVar1 = *(longlong **)(param_1 + 0x90), plVar1 != (longlong *)0x0)) &&
      (iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,0,local_res8), -1 < iVar2)) &&
     ((local_res8[0] == 1 &&
      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))
                         (*(longlong **)(param_1 + 0x90),0,&local_res10,local_res18), -1 < iVar2))))
  {
    if (0 < *(int *)(param_1 + 0xe8)) {
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
      return;
    }
    if (*(float *)(param_1 + 0xe4) != (float)((double)(longlong)local_res10 / _DAT_140492880)) {
      *(float *)(param_1 + 0xe4) = (float)((double)(longlong)local_res10 / _DAT_140492880);
      return;
    }
    FUN_140098760("Video stutter detected\n");
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x58))();
    local_18 = 0;
    local_28 = 0x14;
    uStack_20 = *(ulonglong *)(param_1 + 0x78);
    if (local_res10 < *(ulonglong *)(param_1 + 0x78)) {
      uStack_20 = local_res10;
    }
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
              (*(longlong **)(param_1 + 0x88),0,&local_28);
    *(undefined4 *)(param_1 + 0xb0) = 3;
    PropVariantClear((PROPVARIANT *)&local_28);
    *(undefined4 *)(param_1 + 0xe8) = 4;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
  return;
}

