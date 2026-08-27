// Function: FUN_1402f6cf0
// Addr: 1402f6cf0
// Size: 264 bytes


undefined8 FUN_1402f6cf0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res8 [4];
  int local_resc;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    for (plVar8 = plVar1 + (longlong)*(int *)(param_1 + 0x38) + -1; plVar1 <= plVar8;
        plVar8 = plVar8 + -1) {
      plVar2 = (longlong *)*plVar8;
      if ((int)plVar2[1] == 0x756e6963) {
        if (*(short *)((longlong)plVar2 + 0xc) == 3) {
          bVar9 = *(short *)((longlong)plVar2 + 0xe) == 10;
LAB_1402f6d98:
          if (bVar9) {
LAB_1402f6de3:
            lVar7 = *plVar8;
            goto LAB_1402f6de6;
          }
        }
        else if (*(short *)((longlong)plVar2 + 0xc) == 0) {
          if (*(short *)((longlong)plVar2 + 0xe) == 4) goto LAB_1402f6de3;
          if (((*(short *)((longlong)plVar2 + 0xe) == 6) && (plVar2 != (longlong *)0x0)) &&
             (*plVar2 != 0)) {
            plVar3 = *(longlong **)(*plVar2 + 0x90);
            pcVar4 = *(code **)(*plVar3 + 0x30);
            if (((pcVar4 != (code *)0x0) &&
                (puVar6 = (undefined8 *)(*pcVar4)(plVar3,"tt-cmaps"), puVar6 != (undefined8 *)0x0))
               && (iVar5 = (*(code *)*puVar6)(plVar2,local_res8), iVar5 == 0)) {
              bVar9 = local_resc == 0xd;
              goto LAB_1402f6d98;
            }
          }
        }
      }
    }
    for (plVar8 = plVar1 + (longlong)*(int *)(param_1 + 0x38) + -1; plVar1 <= plVar8;
        plVar8 = plVar8 + -1) {
      lVar7 = *plVar8;
      if (*(int *)(lVar7 + 8) == 0x756e6963) {
LAB_1402f6de6:
        *(longlong *)(param_1 + 0x88) = lVar7;
        return 0;
      }
    }
  }
  return 0x26;
}

