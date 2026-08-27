// Function: FUN_1403c8170
// Addr: 1403c8170
// Size: 427 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1403c8170(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  puVar6 = &DAT_14045dd10;
  puVar5 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
  }
  pbVar3 = (byte *)&DAT_14045dd10;
  if (0x17 < *(uint *)(puVar5 + 3)) {
    pbVar3 = (byte *)puVar5[2];
  }
  if ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] == 0) {
    return '\0';
  }
  lVar4 = param_1[1];
  local_78 = _DAT_140471b20;
  uStack_70 = _UNK_140471b28;
  if (lVar4 != 0) {
    LOCK();
    bVar7 = lVar4 == param_1[1];
    if (bVar7) {
      param_1[1] = 0;
    }
    UNLOCK();
    if (bVar7) goto LAB_1403c8214;
  }
  lVar4 = _calloc_base(1,0xb8);
  if (lVar4 == 0) {
    return '\x01';
  }
LAB_1403c8214:
  puVar5 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
  }
  if (0x17 < *(uint *)(puVar5 + 3)) {
    puVar6 = (undefined8 *)puVar5[2];
  }
  local_58 = &local_78;
  uStack_48 = 0;
  uStack_40 = 0;
  local_98 = _DAT_140471ae0;
  uStack_90 = _UNK_140471ae8;
  local_50 = 0;
  local_88 = 0;
  local_b8 = _DAT_140471ae0;
  local_b0 = *(undefined8 *)(param_2 + 0x80);
  local_a8 = *(undefined4 *)(param_2 + 0x7c);
  local_68[1] = 0;
  local_38 = 0x800;
  local_34 = 0x40;
  local_a4 = 0;
  local_68[0] = param_2;
  local_30 = lVar4;
  cVar2 = FUN_1403cc020(puVar6,local_68,param_3,&local_b8,&local_98,0xffffffff,0);
  FUN_1403f7490(param_1,lVar4);
  if (cVar2 != '\0') {
    puVar6 = (undefined8 *)
             FUN_14040caa0(&local_78,&local_b8,*(uint *)(param_2 + 0x28) >> 0x1f,
                           *(uint *)(param_2 + 0x2c) >> 0x1f);
    uVar1 = puVar6[1];
    *param_4 = *puVar6;
    param_4[1] = uVar1;
  }
  return cVar2;
}

