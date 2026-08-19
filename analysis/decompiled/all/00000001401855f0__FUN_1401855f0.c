// Function: FUN_1401855f0
// Addr: 1401855f0
// Size: 265 bytes


ulonglong FUN_1401855f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_e8 [224];
  
  plVar1 = (longlong *)param_2[0x5d];
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    if (*(float *)(plVar1 + 0x37) < *(float *)((longlong)plVar1 + 0x1c4)) {
      uVar2 = (**(code **)(*param_2 + 0x80))(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_14005f800(local_e8,uVar2);
    }
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}

