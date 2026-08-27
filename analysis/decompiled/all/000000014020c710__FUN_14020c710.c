// Function: FUN_14020c710
// Addr: 14020c710
// Size: 314 bytes


void FUN_14020c710(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  longlong local_res8;
  
  puVar6 = (uint *)*param_3;
  iVar7 = 0;
  if (puVar6 != (uint *)param_3[1]) {
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + *(int *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(*param_1 + 0x4b8) + 0x298) +
                                (ulonglong)uVar2 * 8) + 0x10);
    } while (puVar6 != (uint *)param_3[1]);
  }
  (**(code **)(**(longlong **)(*param_1 + 0x490) + 0x38))(*(longlong **)(*param_1 + 0x490),param_2);
  (**(code **)(**(longlong **)(*param_1 + 0x490) + 0x30))
            (*(longlong **)(*param_1 + 0x490),param_2,0,iVar7,2);
  cVar5 = (**(code **)(**(longlong **)(*param_1 + 0x490) + 0x50))
                    (*(longlong **)(*param_1 + 0x490),param_2,&local_res8,iVar7);
  if (cVar5 != '\0') {
    puVar6 = (uint *)param_3[1];
    lVar3 = *(longlong *)(param_1[1] + 0x58);
    lVar1 = local_res8;
    for (puVar8 = (uint *)*param_3; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(*param_1 + 0x4b8) + 0x298) + (ulonglong)*puVar8 * 8);
      FUN_1404210f0(lVar1,lVar3 + (ulonglong)*(uint *)(lVar4 + 0xc) * 2,*(int *)(lVar4 + 0x10) * 2);
      lVar1 = lVar1 + (ulonglong)*(uint *)(lVar4 + 0x10) * 2;
    }
    (**(code **)(**(longlong **)(*param_1 + 0x490) + 0x58))
              (*(longlong **)(*param_1 + 0x490),param_2);
  }
  return;
}

