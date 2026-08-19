// Function: FUN_140293780
// Addr: 140293780
// Size: 242 bytes


void FUN_140293780(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined *puStack_100;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined1 *puStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  puVar8 = auStack_f8;
  local_18 = DAT_1404dc110 ^ (ulonglong)local_d8;
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    puStack_100 = (undefined *)0x1402937b7;
    func_0x000140292e30(local_d8);
    puStack_100 = &UNK_1402937c7;
    func_0x0001402bbb30(local_d8,&DAT_1404d86a0);
    return;
  }
  local_b8 = *piVar2;
  iStack_b4 = piVar2[1];
  iStack_b0 = piVar2[2];
  iStack_ac = piVar2[3];
  local_a8 = piVar2[4];
  iStack_a4 = piVar2[5];
  iStack_a0 = piVar2[6];
  iStack_9c = piVar2[7];
  local_98 = *(undefined8 *)(piVar2 + 8);
  puStack_90 = *(undefined1 **)(piVar2 + 10);
  local_88 = *(longlong *)(piVar2 + 0xc);
  lStack_80 = *(longlong *)(piVar2 + 0xe);
  local_78 = *(undefined8 *)(piVar2 + 0x10);
  uStack_70 = *(undefined8 *)(piVar2 + 0x12);
  local_68 = *(undefined8 *)(piVar2 + 0x14);
  uStack_60 = *(undefined8 *)(piVar2 + 0x16);
  local_58 = *(undefined8 *)(piVar2 + 0x18);
  uStack_50 = *(undefined8 *)(piVar2 + 0x1a);
  local_48 = *(undefined8 *)(piVar2 + 0x1c);
  uStack_40 = *(undefined8 *)(piVar2 + 0x1e);
  local_38 = piVar2[0x20];
  iStack_34 = piVar2[0x21];
  iStack_30 = piVar2[0x22];
  iStack_2c = piVar2[0x23];
  local_28 = *(undefined8 *)(piVar2 + 0x24);
  if (((local_b8 == -0x1f928c9d) && (puVar8 = auStack_f8, iStack_a0 == 4)) &&
     (((int)local_98 + 0xe66cfae0U < 3 || (puVar8 = auStack_f8, (int)local_98 == 0x1994000)))) {
    if ((((puStack_90 == (undefined1 *)0x0) || (local_88 == 0)) ||
        (iVar1 = *(int *)(local_88 + 0xc), iVar1 == 0)) || (*(int *)(iVar1 + lStack_80) < 1)) {
                    /* WARNING: Subroutine does not return */
      puStack_100 = &UNK_140293925;
      FUN_1402c98b4();
    }
    uVar6 = (ulonglong)*(int *)(*(int *)((longlong)iVar1 + 4 + lStack_80) + lStack_80 + 0x14);
    uVar7 = uVar6 + 0xf;
    if (uVar7 <= uVar6) {
      uVar7 = 0xffffffffffffff0;
    }
    uVar7 = uVar7 & 0xfffffffffffffff0;
    puStack_100 = &UNK_1402938d5;
    func_0x0001402ed390();
    lVar3 = -uVar7;
    puVar8 = auStack_f8 + lVar3;
    *(undefined **)(auStack_f8 + lVar3 + -8) = &UNK_1402938e5;
    FUN_140293490(local_d8 + lVar3);
    puStack_90 = local_d8 + lVar3;
  }
  iVar5 = iStack_a0;
  iVar4 = iStack_b4;
  iVar1 = local_b8;
  *(undefined8 *)(puVar8 + -8) = 0x140293901;
  (*DAT_140426588)(iVar1,iVar4,iVar5,&local_98);
  uVar7 = local_18 ^ (ulonglong)local_d8;
  *(undefined8 *)(puVar8 + -8) = 0x140293910;
  func_0x0001402ed2f0(uVar7);
  return;
}

