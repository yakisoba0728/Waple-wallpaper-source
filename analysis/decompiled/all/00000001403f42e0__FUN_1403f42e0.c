// Function: FUN_1403f42e0
// Addr: 1403f42e0
// Size: 496 bytes


void FUN_1403f42e0(int param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  switch(param_1) {
  case 0x1c:
    uVar2 = *(uint *)(param_2 + 0x10);
    pbVar7 = (byte *)&DAT_14045dd10;
    uVar4 = *(uint *)(param_2 + 0x14);
    uVar3 = uVar2 + 1;
    if (uVar4 < uVar2) {
      pbVar8 = (byte *)((ulonglong)uVar4 + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar3;
      pbVar8 = (byte *)&DAT_14045dd10;
      uVar4 = uVar3;
    }
    if (uVar4 + 1 < uVar2) {
      pbVar7 = (byte *)((ulonglong)(uVar4 + 1) + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = uVar3;
    }
    FUN_1403f58b0(param_2 + 0x18,(int)(short)((ushort)*pbVar8 << 8) | (uint)*pbVar7);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 2;
    return;
  default:
    if (param_1 - 0x20U < 0xd7) {
      uVar3 = *(uint *)(param_2 + 0x1c);
      if (uVar3 < 0x201) {
        pdVar5 = (double *)(param_2 + 0x20 + (ulonglong)uVar3 * 8);
        *(uint *)(param_2 + 0x1c) = uVar3 + 1;
      }
      else {
        *(undefined1 *)(param_2 + 0x18) = 1;
        pdVar5 = &DAT_1404e4f20;
      }
      *pdVar5 = (double)(param_1 + -0x8b);
      return;
    }
    *(undefined4 *)(param_2 + 0x1c) = 0;
    return;
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x10)) {
      pbVar7 = (byte *)((ulonglong)*(uint *)(param_2 + 0x14) + *(longlong *)(param_2 + 8));
    }
    else {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x10) + 1;
      pbVar7 = (byte *)&DAT_14045dd10;
    }
    uVar3 = *(uint *)(param_2 + 0x1c);
    bVar1 = *pbVar7;
    if (uVar3 < 0x201) {
      pdVar5 = (double *)(param_2 + 0x20 + (ulonglong)uVar3 * 8);
      *(uint *)(param_2 + 0x1c) = uVar3 + 1;
    }
    else {
      *(undefined1 *)(param_2 + 0x18) = 1;
      pdVar5 = &DAT_1404e4f20;
    }
    *pdVar5 = (double)(int)(short)((short)param_1 * 0x100 + (ushort)bVar1 + 0x96c);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    return;
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
    break;
  }
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x10)) {
    pbVar7 = (byte *)((ulonglong)*(uint *)(param_2 + 0x14) + *(longlong *)(param_2 + 8));
  }
  else {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x10) + 1;
    pbVar7 = (byte *)&DAT_14045dd10;
  }
  uVar3 = *(uint *)(param_2 + 0x1c);
  iVar6 = ((short)((short)param_1 + -0xfb) * -0x100 + -0x6c) - (uint)*pbVar7;
  if (uVar3 < 0x201) {
    *(uint *)(param_2 + 0x1c) = uVar3 + 1;
    *(double *)(param_2 + 0x20 + (ulonglong)uVar3 * 8) = (double)iVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x18) = 1;
  DAT_1404e4f20 = (double)iVar6;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  return;
}

