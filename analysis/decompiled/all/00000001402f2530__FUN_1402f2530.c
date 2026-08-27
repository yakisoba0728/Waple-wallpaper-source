// Function: FUN_1402f2530
// Addr: 1402f2530
// Size: 391 bytes


int FUN_1402f2530(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (longlong *)0x0) {
    return 6;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0x22;
  }
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  plVar5 = (longlong *)FUN_1402f7e90(lVar1,*(undefined4 *)(lVar2 + 0x3c),local_res8);
  iVar4 = local_res8[0];
  if (local_res8[0] == 0) {
    plVar6 = (longlong *)(**(code **)(lVar1 + 8))(lVar1,0x18);
    if (plVar6 == (longlong *)0x0) {
      iVar4 = 0x40;
    }
    else {
      *plVar5 = param_1;
      puVar7 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x28);
      if (puVar7 == (undefined8 *)0x0) {
        iVar4 = 0x40;
      }
      else {
        iVar4 = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        plVar5[7] = (longlong)puVar7;
        pcVar3 = *(code **)(lVar2 + 0x58);
        if ((pcVar3 == (code *)0x0) || (iVar4 = (*pcVar3)(plVar5), iVar4 == 0)) {
          *param_2 = (longlong)plVar5;
          plVar6[2] = (longlong)plVar5;
          if ((undefined8 *)(param_1 + 0xa8) == (undefined8 *)0x0) {
            return iVar4;
          }
          lVar2 = *(longlong *)(param_1 + 0xb0);
          plVar6[1] = 0;
          *plVar6 = lVar2;
          if (lVar2 == 0) {
            *(undefined8 *)(param_1 + 0xa8) = plVar6;
          }
          else {
            *(longlong **)(lVar2 + 8) = plVar6;
          }
          *(longlong **)(param_1 + 0xb0) = plVar6;
        }
        if (iVar4 == 0) {
          return 0;
        }
      }
      (**(code **)(lVar1 + 0x10))(lVar1,plVar6);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5[7] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    plVar5[7] = 0;
    (**(code **)(lVar1 + 0x10))(lVar1,plVar5);
  }
  return iVar4;
}

