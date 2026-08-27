// Function: FUN_1400e8240
// Addr: 1400e8240
// Size: 658 bytes


void FUN_1400e8240(longlong *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  lVar9 = param_1[1];
  if ((*(int *)(lVar9 + 8) == 6) && (*(int *)(lVar9 + 0x24) != 1)) {
    FUN_1400e84e0();
    *(int *)(lVar9 + 0x24) = *(int *)(lVar9 + 0x24) + -1;
    FUN_1400e77f0(param_1,*(undefined1 *)
                           (*(longlong *)(lVar9 + 0x28) + (ulonglong)*(uint *)(lVar9 + 0x24)));
  }
  lVar9 = param_1[1];
  if ((*(int *)(lVar9 + 8) == 9) || (*(int *)(lVar9 + 8) == 0xe)) {
    lVar9 = *(longlong *)(lVar9 + 0x20);
  }
  else if ((param_2 == 0) && (param_3 == 1)) {
    puVar4 = (undefined8 *)FUN_14028af20(0x20);
    puVar4[1] = 0x11;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_140486c30;
    puVar5 = (undefined8 *)FUN_14028af20(0x30);
    puVar5[1] = 0x10;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &PTR_FUN_140486c28;
    puVar5[4] = puVar4;
    puVar5[5] = 0;
    puVar6 = (undefined8 *)FUN_14028af20(0x30);
    puVar6[1] = 0x10;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_140486c28;
    puVar6[4] = puVar4;
    puVar6[5] = 0;
    puVar7 = (undefined8 *)FUN_14028af20(0x20);
    *puVar7 = &PTR_FUN_140486c30;
    puVar7[1] = 8;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar8 = (undefined8 *)FUN_14028af20(0x28);
    *puVar8 = &PTR_FUN_140486c20;
    puVar8[1] = 9;
    puVar8[4] = puVar7;
    puVar6[2] = puVar7;
    puVar7[3] = puVar6;
    puVar7[2] = puVar8;
    puVar8[3] = puVar7;
    puVar8[2] = puVar4;
    puVar5[5] = puVar6;
    FUN_1400e5e40(param_1,puVar4);
    *(undefined8 **)(*(longlong *)(lVar9 + 0x18) + 0x10) = puVar5;
    puVar5[3] = *(undefined8 *)(lVar9 + 0x18);
    *(undefined8 **)(lVar9 + 0x18) = puVar5;
    puVar5[2] = lVar9;
    if (param_4 != 0) {
      return;
    }
    lVar2 = puVar6[2];
    uVar3 = *(undefined8 *)(lVar9 + 0x18);
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    uVar3 = puVar5[2];
    puVar5[2] = puVar6[2];
    puVar6[2] = uVar3;
    return;
  }
  if (*(int *)(*param_1 + 0x24) != -1) {
    puVar4 = (undefined8 *)FUN_14028af20(0x28);
    puVar4[1] = 0x13;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_140486c20;
    puVar4[4] = 0;
    FUN_1400e5e40(param_1,puVar4);
    puVar5 = (undefined8 *)FUN_14028af20(0x38);
    iVar1 = *(int *)(*param_1 + 0x24);
    *(int *)(*param_1 + 0x24) = iVar1 + 1;
    *(undefined4 *)(puVar5 + 1) = 0x12;
    *(uint *)((longlong)puVar5 + 0xc) = (uint)param_4 * 2;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &PTR_FUN_140486c18;
    *(int *)(puVar5 + 4) = param_2;
    *(int *)((longlong)puVar5 + 0x24) = param_3;
    puVar5[5] = puVar4;
    *(int *)(puVar5 + 6) = iVar1;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0xffffffff;
    puVar4[4] = puVar5;
    *(undefined8 **)(*(longlong *)(lVar9 + 0x18) + 0x10) = puVar5;
    puVar5[3] = *(undefined8 *)(lVar9 + 0x18);
    *(undefined8 **)(lVar9 + 0x18) = puVar5;
    puVar5[2] = lVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c340(9);
}

