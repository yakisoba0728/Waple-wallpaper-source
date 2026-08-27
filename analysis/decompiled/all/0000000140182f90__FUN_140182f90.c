// Function: FUN_140182f90
// Addr: 140182f90
// Size: 258 bytes


void FUN_140182f90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *local_res8;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x1720) + 0x118) & 0xc000000) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x17f0);
    bVar3 = false;
    plVar5 = (longlong *)*plVar1;
    if (plVar5 != plVar1) {
      do {
        lVar2 = plVar5[2];
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x44) == 2)) &&
           ((*(byte *)(lVar2 + 0x40) & 0x20) != 0)) {
          if (!bVar3) {
            local_res8 = *(longlong **)(param_1 + 0x1840);
            (**(code **)(*local_res8 + 0x20))(local_res8);
            bVar3 = true;
          }
          puVar4 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar4 = (undefined8 *)*param_2;
          }
          (**(code **)(**(longlong **)(param_1 + 0x1840) + 0x40))
                    (*(longlong **)(param_1 + 0x1840),*(undefined8 *)(lVar2 + 0x38),
                     *(undefined8 *)(lVar2 + 0x48),5,puVar4,0);
        }
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != plVar1);
      if (bVar3) {
        (**(code **)(*local_res8 + 0x28))(local_res8);
      }
    }
  }
  return;
}

