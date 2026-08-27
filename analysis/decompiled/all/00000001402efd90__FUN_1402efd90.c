// Function: FUN_1402efd90
// Addr: 1402efd90
// Size: 287 bytes


undefined8 FUN_1402efd90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x90);
    if (lVar3 == 0) {
      return 0x22;
    }
    plVar1 = (longlong *)(lVar2 + 0xa8);
    if (plVar1 != (longlong *)0x0) {
      for (plVar4 = (longlong *)*plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1])
      {
        if ((longlong *)plVar4[2] == param_1) {
          lVar5 = *plVar4;
          plVar4 = (longlong *)plVar4[1];
          lVar6 = *(longlong *)(lVar3 + 0x10);
          if (lVar5 == 0) {
            *plVar1 = (longlong)plVar4;
          }
          else {
            *(longlong **)(lVar5 + 8) = plVar4;
          }
          if (plVar4 == (longlong *)0x0) {
            *(longlong *)(lVar2 + 0xb0) = lVar5;
          }
          else {
            *plVar4 = lVar5;
          }
          (**(code **)(lVar6 + 0x10))(lVar6);
          if (*(longlong **)(lVar2 + 0x80) == param_1) {
            *(undefined8 *)(lVar2 + 0x80) = 0;
            if (*plVar1 != 0) {
              *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(*plVar1 + 0x10);
            }
          }
          FUN_1402f6c90(lVar6,param_1,lVar3);
          return 0;
        }
      }
    }
    return 0x24;
  }
  return 0x23;
}

