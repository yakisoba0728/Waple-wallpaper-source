// Function: FUN_14003b5f0
// Addr: 14003b5f0
// Size: 204 bytes


undefined8 FUN_14003b5f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_258 [44];
  short local_22c;
  short local_22a;
  short local_228;
  
  lVar4 = *param_1;
  while( true ) {
    uVar6 = FUN_14028fdd0(*(undefined8 *)(lVar4 + 0x40),local_258);
    if ((int)uVar6 == 0x12) {
      plVar5 = (longlong *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      return 0;
    }
    if ((int)uVar6 != 0) break;
    if ((local_22c != 0x2e) || ((local_22a != 0 && ((local_22a != 0x2e || (local_228 != 0)))))) {
      FUN_14003b480(lVar4,local_258);
      return 0;
    }
  }
  return uVar6;
}

