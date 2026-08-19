// Function: FUN_1401413f0
// Addr: 1401413f0
// Size: 147 bytes


longlong FUN_1401413f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  do {
    if (param_1 == param_2) {
      return param_3;
    }
    *(undefined8 *)(param_3 + 0x38) = 0;
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      if (plVar1 == param_1) {
        uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_3);
        *(undefined8 *)(param_3 + 0x38) = uVar2;
        plVar1 = (longlong *)param_1[7];
        if (plVar1 == (longlong *)0x0) goto LAB_14014145e;
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      }
      else {
        *(longlong **)(param_3 + 0x38) = plVar1;
      }
      param_1[7] = 0;
    }
LAB_14014145e:
    param_3 = param_3 + 0x40;
    param_1 = param_1 + 8;
  } while( true );
}

