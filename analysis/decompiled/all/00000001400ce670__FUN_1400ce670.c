// Function: FUN_1400ce670
// Addr: 1400ce670
// Size: 126 bytes


void FUN_1400ce670(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_e8 [224];
  
  puVar5 = (undefined8 *)func_0x0001400ce440(local_e8,param_1 + 8);
  piVar1 = (int *)*puVar5;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (func_0x00014028b040(*(undefined8 *)(piVar1 + 2)), piVar1 != (int *)0x0)) {
    func_0x00014028b040(piVar1,0x18);
  }
  lVar2 = *(longlong *)ThreadLocalStoragePointer;
  lVar3 = *(longlong *)(lVar2 + 0x2a0);
  plVar6 = *(longlong **)(lVar3 + 8);
  plVar4 = *(longlong **)(lVar3 + 0x10);
  if (plVar6 != plVar4) {
    do {
      lVar3 = *plVar6;
      if (*(int *)(lVar3 + 0x10) == *(int *)(puVar5 + 0x18)) {
        if (lVar3 != 0) {
          func_0x0001400c2ab0(lVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(plVar6,plVar6 + 1,
                      *(longlong *)(*(longlong *)(lVar2 + 0x2a0) + 0x10) - (longlong)(plVar6 + 1));
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4);
  }
  plVar6 = (longlong *)puVar5[0x17];
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != puVar5 + 0x10);
    puVar5[0x17] = 0;
  }
  FUN_1400cb060(puVar5 + 0xd);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(puVar5 + 3);
}

