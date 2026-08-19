// Function: FUN_140012190
// Addr: 140012190
// Size: 165 bytes


undefined8 *
FUN_140012190(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,short param_4,
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
LAB_14001220a:
        *(undefined1 *)param_3 = 1;
      }
      else {
        if (*(longlong *)plVar2[8] == 0) {
LAB_1400121f8:
          sVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_4);
        }
        else {
          iVar1 = *(int *)plVar2[0xb];
          if (iVar1 < 1) goto LAB_1400121f8;
          *(int *)plVar2[0xb] = iVar1 + -1;
          psVar3 = *(short **)plVar2[8];
          *(short **)plVar2[8] = psVar3 + 1;
          *psVar3 = param_4;
          sVar5 = param_4;
        }
        if (sVar5 == -1) goto LAB_14001220a;
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  uVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar4;
  return param_2;
}

