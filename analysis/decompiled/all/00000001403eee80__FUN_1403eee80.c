// Function: FUN_1403eee80
// Addr: 1403eee80
// Size: 748 bytes


void FUN_1403eee80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined4 uVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  longlong *local_60;
  char *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_68 = (char *)(param_2 + 0x50);
  local_60 = (longlong *)0x0;
  cVar3 = *local_68;
  *local_68 = cVar3 == '\0';
  if (*(undefined8 **)(param_2 + 0x58) == (undefined8 *)0x0) {
    *(char ***)(param_2 + 0x58) = &local_68;
  }
  else {
    if (cVar3 == '\0') {
      *(undefined8 *)(param_2 + 0x58) = **(undefined8 **)(param_2 + 0x58);
    }
    local_60 = *(longlong **)(param_2 + 0x60);
    *local_60 = (longlong)&local_68;
  }
  *(char ***)(param_2 + 0x60) = &local_68;
  local_58 = (char *)(ulonglong)CONCAT11(*(undefined1 *)(param_1 + 1),*(undefined1 *)(param_1 + 2));
  if ((*(char ***)(param_2 + 0x58) == &local_68) || ((*(char ***)(param_2 + 0x58))[2] != local_58))
  {
    FUN_1403f58e0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                  *(undefined8 *)(param_2 + 0x20));
    lVar5 = *(longlong *)(param_2 + 0x10);
    uVar7 = 0;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + 0x18);
    }
    iVar4 = (**(code **)(lVar5 + 0x20))
                      (lVar5,*(undefined8 *)(param_2 + 0x18),
                       (uint)*(byte *)(param_1 + 1) * 0x100 + (uint)*(byte *)(param_1 + 2),
                       *(undefined8 *)(param_2 + 0x20),uVar7);
    uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x18);
    lVar5 = *(longlong *)(param_2 + 0x10);
    lVar1 = *(longlong *)(lVar5 + 0x98);
    if (iVar4 == 0) {
      if (lVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(lVar1 + 8);
      }
      (**(code **)(lVar5 + 0x18))(lVar5,uVar7,uVar9);
      pbVar6 = *(byte **)(param_2 + 8);
      lVar5 = FUN_1403c65c0(pbVar6,(uint)*(byte *)(param_1 + 1) * 0x100 +
                                   (uint)*(byte *)(param_1 + 2));
      local_78 = 0;
      uStack_70 = 0;
      puVar2 = *(undefined8 **)(param_2 + 0x48);
      local_48 = *puVar2;
      uStack_40 = puVar2[1];
      local_38 = puVar2[2];
      uStack_30 = puVar2[3];
      local_28 = puVar2[4];
      uStack_20 = puVar2[5];
      if (((uint)pbVar6[1] + (uint)*pbVar6 * 0x100 == 0) ||
         (uVar8 = (uint)pbVar6[0x17] * 0x10000 + (uint)pbVar6[0x18] * 0x100 +
                  (uint)pbVar6[0x16] * 0x1000000 + (uint)pbVar6[0x19], uVar8 == 0)) {
        pbVar6 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar6 = pbVar6 + uVar8;
      }
      cVar3 = FUN_1403c7cf0(pbVar6,(uint)*(byte *)(param_1 + 1) * 0x100 +
                                   (uint)*(byte *)(param_1 + 2),&local_78,&local_48);
      if (cVar3 != '\0') {
        lVar1 = *(longlong *)(param_2 + 0x10);
        uVar7 = 0;
        if (*(longlong *)(lVar1 + 0x98) != 0) {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x20);
        }
        (**(code **)(lVar1 + 0x30))
                  (lVar1,*(undefined8 *)(param_2 + 0x18),local_78._4_4_,local_78 & 0xffffffff,
                   CONCAT44(uVar10,(float)((int)uStack_70 + (int)local_78)),(float)local_78._4_4_,
                   uVar7);
      }
      if (((lVar5 != 0) && (0 < *(int *)(param_2 + 0x80))) && (0 < *(int *)(param_2 + 0x84))) {
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
        FUN_1403786f0(lVar5,local_res8,param_2);
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
      }
      if (cVar3 != '\0') {
        lVar5 = *(longlong *)(param_2 + 0x10);
        uVar7 = 0;
        if (*(longlong *)(lVar5 + 0x98) != 0) {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + 0x38);
        }
        (**(code **)(lVar5 + 0x48))(lVar5,*(undefined8 *)(param_2 + 0x18),uVar7);
      }
    }
    else if (lVar1 == 0) {
      (**(code **)(lVar5 + 0x18))(lVar5,uVar7,0);
    }
    else {
      (**(code **)(lVar5 + 0x18))(lVar5,uVar7,*(undefined8 *)(lVar1 + 8));
    }
  }
  *(longlong **)(local_68 + 0x10) = local_60;
  if (local_60 != (longlong *)0x0) {
    *local_60 = (longlong)local_68;
  }
  if (*local_68 != '\0') {
    *(undefined8 *)(local_68 + 8) = *(undefined8 *)(*(longlong *)(local_68 + 8) + 8);
  }
  *local_68 = *local_68 == '\0';
  return;
}

