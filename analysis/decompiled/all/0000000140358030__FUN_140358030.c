// Function: FUN_140358030
// Addr: 140358030
// Size: 326 bytes


int FUN_140358030(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  plVar1 = param_1 + 0x40f;
  do {
    uVar5 = (int)param_1[0x410] - (int)*plVar1;
    uVar3 = param_2;
    if (uVar5 < param_2) {
      uVar3 = uVar5;
    }
    *(int *)((longlong)param_1 + 0x2074) = *(int *)((longlong)param_1 + 0x2074) + uVar3;
    *plVar1 = *plVar1 + (ulonglong)uVar3;
    param_2 = param_2 - uVar3;
    if (param_2 == 0) {
      return 0;
    }
    *plVar1 = (longlong)param_1 + 0x1074;
    param_1[5] = (longlong)param_1 + 0x1074;
    *(undefined4 *)(param_1 + 6) = 0x1000;
    do {
      if ((int)param_1[4] == 0) {
        plVar2 = (longlong *)*param_1;
        uVar3 = *(uint *)((longlong)plVar2 + 0xc);
        if ((code *)plVar2[4] == (code *)0x0) {
          uVar5 = (int)plVar2[1] - uVar3;
          if (uVar5 < 0x1001) {
            if (uVar5 == 0) goto LAB_1403580d1;
          }
          else {
            uVar5 = 0x1000;
          }
          FUN_1404210f0((longlong)param_1 + 0x74,(ulonglong)uVar3 + *plVar2,uVar5);
        }
        else {
          uVar5 = (*(code *)plVar2[4])(plVar2,(ulonglong)uVar3,(longlong)param_1 + 0x74,0x1000);
          if (uVar5 == 0) {
LAB_1403580d1:
            param_1[0x410] = *plVar1;
            return 0x55;
          }
        }
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + uVar5;
        *(uint *)(param_1 + 4) = uVar5;
        param_1[3] = (longlong)param_1 + 0x74;
      }
      iVar6 = 0;
      iVar4 = FUN_140358210(param_1 + 3,0);
      if (iVar4 == 1) {
        param_1[0x410] = param_1[5];
        if (param_1[5] == *plVar1) {
          iVar6 = 0x55;
        }
        break;
      }
      if (iVar4 != 0) {
        param_1[0x410] = *plVar1;
        return 0x55;
      }
    } while ((int)param_1[6] != 0);
    if (iVar6 != 0) {
      return iVar6;
    }
  } while( true );
}

