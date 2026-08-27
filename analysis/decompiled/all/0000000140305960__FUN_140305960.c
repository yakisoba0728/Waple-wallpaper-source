// Function: FUN_140305960
// Addr: 140305960
// Size: 424 bytes


byte * FUN_140305960(byte *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint local_res8 [2];
  uint local_res10;
  
  lVar7 = ((longlong *)param_2[6])[3];
  uVar1 = *(undefined2 *)(*(longlong *)param_2[6] + 0x68);
  puVar2 = (&PTR_DAT_1404ded30)[*(int *)(*param_2 + 0x10)];
  FUN_140416420(lVar7,uVar1,uVar1);
  bVar4 = *param_1;
  if (bVar4 == 0x20) {
    do {
      param_1 = param_1 + 1;
    } while (*param_1 == 0x20);
    bVar4 = *param_1;
  }
  pbVar11 = param_1;
  if (bVar4 != 0x20) {
    bVar4 = *param_1;
    do {
      if (bVar4 == 0) break;
      pbVar11 = pbVar11 + 1;
      if (0x7f < bVar4) {
        if (bVar4 < 0xe0) {
          iVar5 = 1;
        }
        else {
          iVar5 = 3 - (uint)(bVar4 < 0xf0);
        }
        do {
          pbVar11 = pbVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      bVar4 = *pbVar11;
    } while (bVar4 != 0x20);
  }
  iVar5 = (int)pbVar11 - (int)param_1;
  FUN_140414480(param_3);
  thunk_FUN_14038a620(param_3,param_1,iVar5,0,iVar5);
  FUN_140414930(param_3);
  FUN_140419010(lVar7,param_3,puVar2,puVar2 != (undefined *)0x0);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_2[6] + 0x20);
    FUN_140414480(uVar3);
    thunk_FUN_14038a620(uVar3,param_1,iVar5,0,iVar5);
    FUN_140414930(uVar3);
    FUN_140419010(lVar7,uVar3,0,0);
    lVar7 = FUN_1404148a0(param_3,local_res8);
    lVar8 = FUN_1404148a0(uVar3);
    if (local_res8[0] == local_res10) {
      uVar10 = 0;
      if (local_res8[0] != 0) {
        do {
          if (*(int *)(lVar7 + uVar10 * 0x14) != *(int *)(lVar8 + uVar10 * 0x14)) break;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < local_res8[0]);
      }
      if ((uint)uVar10 == local_res8[0]) {
        FUN_140414480(param_3);
      }
    }
  }
  uVar6 = FUN_140414920(param_3);
  *param_4 = uVar6;
  return pbVar11;
}

