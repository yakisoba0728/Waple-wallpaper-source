// Function: FUN_1402f97b0
// Addr: 1402f97b0
// Size: 521 bytes


ulonglong FUN_1402f97b0(longlong param_1,undefined8 *param_2,byte *param_3,undefined4 param_4,
                       int param_5,longlong param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar2 + 0x38);
  if (iVar1 < 1) {
    lVar4 = 0;
    if (iVar1 < 0) {
      uVar8 = 6;
      goto LAB_1402f98c4;
    }
  }
  else {
    lVar4 = (**(code **)(lVar3 + 8))(lVar3,iVar1);
    uVar8 = 0x40;
    if (lVar4 == 0) {
LAB_1402f98c4:
      puVar5 = (undefined8 *)0x0;
      goto LAB_1402f985a;
    }
    FUN_1404217a0(lVar4,0,(longlong)iVar1);
  }
  uVar8 = 0;
  *(longlong *)(lVar4 + 0x90) = param_1;
  *(longlong *)(lVar4 + 0x98) = lVar3;
  *(undefined8 *)(lVar4 + 0xa0) = *param_2;
  if (*param_3 != 0) {
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x400;
  }
  puVar5 = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x68);
  if (puVar5 == (undefined8 *)0x0) {
    uVar8 = 0x40;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    *(undefined8 **)(lVar4 + 0xd0) = puVar5;
    puVar5[10] = 0;
    uVar7 = uVar8;
    if (0 < param_5) {
      do {
        if (*(longlong *)(*(longlong *)(lVar4 + 0xd0) + 0x50) != 0) break;
        if (*(int *)(param_6 + uVar7 * 0x10) == 0x696e6372) {
          *(undefined8 *)(*(longlong *)(lVar4 + 0xd0) + 0x50) =
               *(undefined8 *)(param_6 + 8 + uVar7 * 0x10);
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < param_5);
    }
    *(undefined4 *)(*(longlong *)(lVar4 + 0xd0) + 0x5c) = 0xffffffff;
    if (*(code **)(lVar2 + 0x48) != (code *)0x0) {
      uVar6 = (**(code **)(lVar2 + 0x48))(*param_2,lVar4,param_4,param_5,param_6);
      uVar8 = (ulonglong)uVar6;
    }
    *param_2 = *(undefined8 *)(lVar4 + 0xa0);
    *param_3 = (byte)(*(uint *)(lVar4 + 8) >> 10) & 1;
    if ((int)uVar8 == 0) {
      uVar6 = FUN_1402f6cf0(lVar4);
      if ((uVar6 == 0) || ((char)uVar6 == '&')) {
        *param_7 = lVar4;
        return uVar8;
      }
      uVar8 = (ulonglong)uVar6;
    }
  }
LAB_1402f985a:
  FUN_1402f69c0(lVar4,lVar3);
  if (*(code **)(lVar2 + 0x50) != (code *)0x0) {
    (**(code **)(lVar2 + 0x50))(lVar4);
  }
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)(lVar3 + 0x10))(lVar3,puVar5);
  }
  if (lVar4 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,lVar4);
  }
  *param_7 = 0;
  return uVar8;
}

