// Function: FUN_1402ee9d0
// Addr: 1402ee9d0
// Size: 363 bytes


int FUN_1402ee9d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 *local_res8;
  
  if (param_1 == (longlong *)0x0) {
    return 0x25;
  }
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      iVar3 = 6;
    }
    else {
      iVar3 = (int)param_1[0xc];
      if (iVar3 == 0x62697473) {
        puVar5 = &DAT_1404365f0;
      }
      else if (iVar3 == 0x6f75746c) {
        puVar5 = &DAT_140436628;
      }
      else if (iVar3 == 0x53564720) {
        puVar5 = &DAT_140436660;
      }
      else {
        lVar4 = FUN_1402f1b50(lVar1,iVar3,0);
        if ((lVar4 == 0) || (puVar5 = (undefined *)(lVar4 + 0x28), puVar5 == (undefined *)0x0)) {
          return 0x12;
        }
      }
      iVar3 = FUN_1402eebd0(lVar1,puVar5,&local_res8);
      if (iVar3 == 0) {
        if (((int)param_1[0xb] + 0x1fffffU < 0x3fffff) &&
           (*(int *)((longlong)param_1 + 0x5c) + 0x1fffffU < 0x3fffff)) {
          *(int *)((longlong)local_res8 + 0x14) = (int)param_1[0xb] << 10;
          *(int *)(local_res8 + 3) = *(int *)((longlong)param_1 + 0x5c) << 10;
          iVar3 = (**(code **)(local_res8[1] + 8))(local_res8,param_1);
          if (iVar3 == 0) {
            *param_2 = local_res8;
            return 0;
          }
        }
        else {
          iVar3 = 6;
        }
        if (local_res8 != (undefined8 *)0x0) {
          uVar2 = *(undefined8 *)*local_res8;
          if (*(code **)(local_res8[1] + 0x10) != (code *)0x0) {
            (**(code **)(local_res8[1] + 0x10))(local_res8);
          }
          FUN_1402f7f90(uVar2,local_res8);
        }
        *param_2 = 0;
      }
    }
    return iVar3;
  }
  return 6;
}

