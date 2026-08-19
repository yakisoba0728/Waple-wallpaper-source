// Function: FUN_1403f0930
// Addr: 1403f0930
// Size: 45 bytes


void FUN_1403f0930(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_58 [32];
  ulonglong *puStack_38;
  ulonglong auStack_30 [5];
  
  auStack_30[4] = DAT_1404dc110 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar12 = 0;
  if (*(uint *)(param_1 + 0x14) <= uVar2) {
    uVar8 = 0;
    uVar11 = 0;
    bVar10 = 0;
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    auStack_30[2] = 0;
    auStack_30[3] = 0;
    do {
      uVar7 = (uint)uVar8;
      if ((bool)(bVar10 & 1)) {
        uVar6 = (ulonglong)(uVar11 & 0xf);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x14);
        if (uVar2 < uVar4 + 1) break;
        if (uVar4 < uVar2) {
          pbVar3 = (byte *)((ulonglong)uVar4 + *(longlong *)(param_1 + 8));
        }
        else {
          uVar4 = uVar2 + 1;
          pbVar3 = (byte *)&DAT_14045dde0;
          *(uint *)(param_1 + 0x14) = uVar4;
        }
        bVar1 = *pbVar3;
        uVar11 = (uint)bVar1;
        *(uint *)(param_1 + 0x14) = uVar4 + 1;
        uVar6 = (ulonglong)(bVar1 >> 4);
      }
      iVar5 = (int)uVar6;
      if (iVar5 == 0xd) break;
      puVar9 = (ulonglong *)((longlong)auStack_30 + uVar8);
      if (iVar5 == 0xf) {
        puStack_38 = puVar9;
        uVar12 = func_0x00014040c620(auStack_30,&puStack_38);
        if ((auStack_30 != puStack_38) && (puVar9 == puStack_38)) goto LAB_1403f0a30;
        break;
      }
      *(undefined *)puVar9 = (&UNK_140470750)[uVar6];
      if (iVar5 == 0xc) {
        uVar7 = uVar7 + 1;
        if (uVar7 == 0x20) break;
        *(undefined1 *)((longlong)auStack_30 + (ulonglong)uVar7) = 0x2d;
      }
      bVar10 = bVar10 + 1;
      uVar8 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < 0x20);
    uVar12 = 0;
    *(uint *)(param_1 + 0x14) = uVar2 + 1;
  }
LAB_1403f0a30:
  func_0x0001402ed2f0(uVar12);
  return;
}

