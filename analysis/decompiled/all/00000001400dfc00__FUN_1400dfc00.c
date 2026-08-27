// Function: FUN_1400dfc00
// Addr: 1400dfc00
// Size: 540 bytes


longlong FUN_1400dfc00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  puVar4 = (undefined8 *)FUN_14028af20(0x28);
  lVar7 = 0;
  *puVar4 = &PTR_FUN_140486c20;
  puVar4[1] = 0xd;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  uVar5 = FUN_1400e5e40(param_1 + 0x38,puVar4);
  FUN_1400e1650(param_1);
  FUN_1400e1a50(param_1 + 0x38,uVar5);
  puVar4 = (undefined8 *)FUN_14028af20(0x20);
  *puVar4 = &PTR_FUN_140486c30;
  puVar4[1] = 0x15;
  puVar4[2] = 0;
  puVar4[3] = 0;
  FUN_1400e5e40(param_1 + 0x38,puVar4);
  lVar1 = *(longlong *)(param_1 + 0x38);
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(lVar1 + 0x28) = *(int *)(param_1 + 0x10) + 1;
  lVar9 = lVar1;
  lVar3 = lVar7;
  do {
    if (lVar9 == 0) {
      return lVar1;
    }
    lVar6 = lVar3;
    switch(*(undefined4 *)(lVar9 + 8)) {
    case 7:
      if ((lVar3 != 0) &&
         ((((*(longlong *)(lVar9 + 0x20) != 0 &&
            ((((*(longlong *)(lVar9 + 0x28) != 0 || (*(longlong *)(lVar9 + 0x30) != 0)) ||
              (*(longlong *)(lVar9 + 0x38) != 0)) ||
             ((*(short *)(lVar9 + 0x40) != 0 ||
              (*(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x18) != 0)))))) ||
           (*(longlong *)(lVar9 + 0x48) != 0)) ||
          (((*(uint *)(param_1 + 0x68) & 0x800) != 0 &&
           ((*(longlong *)(lVar9 + 0x38) != 0 || ((*(byte *)(lVar9 + 0xc) & 1) != 0)))))))) {
        *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) & 0xffffefff;
        *(undefined4 *)(lVar3 + 0x34) = 0;
      }
      break;
    case 10:
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) & 0xffffefff;
        *(undefined4 *)(lVar3 + 0x34) = 0;
      }
    case 0xb:
      FUN_1400e1830(param_1,*(undefined8 *)(lVar9 + 0x20),0,0,1);
      break;
    case 0x10:
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) & 0xffffefff;
        *(undefined4 *)(lVar3 + 0x34) = 0;
      }
      for (lVar8 = *(longlong *)(lVar9 + 0x28); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x28)) {
        FUN_1400e1830(param_1,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x20),lVar3,1);
      }
      break;
    case 0x12:
      if (lVar3 == 0) {
        *(uint *)(lVar9 + 0xc) = *(uint *)(lVar9 + 0xc) | 0x1000;
        lVar6 = lVar9;
      }
      else {
        *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) & 0xffffefff;
        *(undefined4 *)(lVar3 + 0x34) = 0;
        *(uint *)(lVar9 + 0xc) = *(uint *)(lVar9 + 0xc) | 0x1000;
        bVar2 = 1 < *(uint *)(lVar3 + 0x24);
        if (bVar2) {
          *(undefined4 *)(lVar9 + 0x34) = 0;
        }
        FUN_1400e1830(param_1,*(undefined8 *)(lVar9 + 0x10),
                      *(undefined8 *)(*(longlong *)(lVar9 + 0x28) + 0x10),lVar9,!bVar2);
        lVar9 = *(longlong *)(lVar9 + 0x28);
      }
      break;
    case 0x13:
      if ((lVar3 == *(longlong *)(lVar9 + 0x20)) && (lVar6 = lVar7, *(int *)(lVar3 + 0x34) == -1)) {
        *(undefined4 *)(lVar3 + 0x34) = 1;
      }
    }
    lVar9 = *(longlong *)(lVar9 + 0x10);
    lVar3 = lVar6;
  } while( true );
}

