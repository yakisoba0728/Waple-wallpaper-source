// Function: FUN_140121830
// Addr: 140121830
// Size: 192 bytes


ulonglong FUN_140121830(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
                       undefined4 *param_5)

{
  longlong *plVar1;
  ulonglong in_RAX;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    local_48 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_38 = 0x28;
    uStack_34 = 0;
    in_RAX = (**(code **)(*plVar1 + 0x60))(plVar1,&local_38,&local_48,local_res8,local_40);
    if (-1 < (int)in_RAX) {
      if (uStack_30._6_2_ == 0x20) {
        *param_2 = local_48;
        *param_3 = local_48;
        *param_4 = uStack_34;
        *param_5 = (undefined4)uStack_30;
        return (ulonglong)CONCAT31((int3)((ulonglong)uStack_30 >> 8),local_48 != 0);
      }
      in_RAX = (*DAT_140426b80)(local_48);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

