// Function: FUN_140177ad0
// Addr: 140177ad0
// Size: 273 bytes


void FUN_140177ad0(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *local_res8;
  
  if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x118) & 0xc000000) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xd8);
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != plVar1) {
      bVar3 = false;
      do {
        lVar2 = plVar4[2];
        if (((lVar2 != 0) &&
            (((param_2 == 0 || (*(longlong *)(lVar2 + 0x48) == param_2)) ||
             (*(longlong *)(lVar2 + 8) == param_3)))) &&
           (((*(uint *)(lVar2 + 0x40) >> (param_4 & 0x1f) & 1) != 0 && (*(int *)(lVar2 + 0x44) == 2)
            ))) {
          if (!bVar3) {
            local_res8 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*local_res8 + 0x20))(local_res8);
            bVar3 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar2 + 0x38),
                     *(undefined8 *)(lVar2 + 0x48),param_4,param_5,0);
        }
        plVar4 = (longlong *)*plVar4;
      } while (plVar4 != plVar1);
      if (bVar3) {
        (**(code **)(*local_res8 + 0x28))(local_res8);
      }
    }
  }
  return;
}

