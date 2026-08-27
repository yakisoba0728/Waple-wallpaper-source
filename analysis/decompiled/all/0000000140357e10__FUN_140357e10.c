// Function: FUN_140357e10
// Addr: 140357e10
// Size: 292 bytes


ulonglong FUN_140357e10(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  param_1[0x40f] = (longlong)param_1 + 0x1074;
  param_1[5] = (longlong)param_1 + 0x1074;
  *(undefined4 *)(param_1 + 6) = 0x1000;
  do {
    if ((int)param_1[4] == 0) {
      plVar1 = (longlong *)*param_1;
      uVar4 = *(uint *)((longlong)plVar1 + 0xc);
      if ((code *)plVar1[4] == (code *)0x0) {
        uVar2 = (int)plVar1[1] - uVar4;
        if (uVar2 < 0x1001) {
          if (uVar2 == 0) goto LAB_140357e76;
        }
        else {
          uVar2 = 0x1000;
        }
        FUN_1404210f0((longlong)param_1 + 0x74,(ulonglong)uVar4 + *plVar1,uVar2);
      }
      else {
        uVar2 = (*(code *)plVar1[4])(plVar1,(ulonglong)uVar4,(longlong)param_1 + 0x74,0x1000);
        if (uVar2 == 0) {
LAB_140357e76:
          uVar4 = 0x55;
          param_1[0x410] = param_1[0x40f];
          goto LAB_140357f19;
        }
      }
      *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + uVar2;
      param_1[3] = (longlong)param_1 + 0x74;
      *(uint *)(param_1 + 4) = uVar2;
    }
    uVar3 = FUN_140358210(param_1 + 3,0);
    if ((int)uVar3 == 1) {
      param_1[0x410] = param_1[5];
      uVar4 = 0x55;
      if (param_1[5] != param_1[0x40f]) {
        uVar4 = 0;
      }
LAB_140357f19:
      return (ulonglong)uVar4;
    }
    if ((int)uVar3 != 0) {
      param_1[0x410] = param_1[0x40f];
      return 0x55;
    }
    if ((int)param_1[6] == 0) {
      return uVar3;
    }
  } while( true );
}

