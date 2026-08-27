// Function: FUN_1400120c0
// Addr: 1400120c0
// Size: 165 bytes


undefined8 *
FUN_1400120c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,short param_4,
             longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  
  if (param_5 != 0) {
    plVar2 = (longlong *)param_3[1];
    do {
      if (plVar2 == (longlong *)0x0) {
LAB_14001213a:
        *(undefined1 *)param_3 = 1;
      }
      else {
        if (*(longlong *)plVar2[8] == 0) {
LAB_140012128:
          sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_4);
        }
        else {
          iVar1 = *(int *)plVar2[0xb];
          if (iVar1 < 1) goto LAB_140012128;
          *(int *)plVar2[0xb] = iVar1 + -1;
          psVar3 = *(short **)plVar2[8];
          *(short **)plVar2[8] = psVar3 + 1;
          *psVar3 = param_4;
          sVar5 = param_4;
        }
        if (sVar5 == -1) goto LAB_14001213a;
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  uVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar4;
  return param_2;
}

