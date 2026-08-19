// Function: FUN_1403c8240
// Addr: 1403c8240
// Size: 199 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1403c8240(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong alStack_68 [2];
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  
  puVar6 = &DAT_14045dde0;
  puVar5 = &DAT_14045dde0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
  }
  pbVar4 = (byte *)&DAT_14045dde0;
  if (0x17 < *(uint *)(puVar5 + 3)) {
    pbVar4 = (byte *)puVar5[2];
  }
  if ((uint)*pbVar4 * 0x100 + (uint)pbVar4[1] == 0) {
    return '\0';
  }
  lVar1 = param_1[1];
  local_78 = _DAT_140471bf0;
  uStack_70 = _UNK_140471bf8;
  if (lVar1 != 0) {
    LOCK();
    bVar7 = lVar1 == param_1[1];
    if (bVar7) {
      param_1[1] = 0;
    }
    UNLOCK();
    if (bVar7) {
      puVar5 = &DAT_14045dde0;
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*param_1;
      }
      if (0x17 < *(uint *)(puVar5 + 3)) {
        puVar6 = (undefined8 *)puVar5[2];
      }
      puStack_58 = &local_78;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_98 = _UNK_140471bb0;
      uStack_90 = _UNK_140471bb8;
      uStack_50 = 0;
      uStack_88 = 0;
      uStack_b8 = _UNK_140471bb0;
      uStack_b0 = *(undefined8 *)(param_2 + 0x80);
      uStack_a8 = *(undefined4 *)(param_2 + 0x7c);
      alStack_68[1] = 0;
      uStack_38 = 0x800;
      uStack_34 = 0x40;
      uStack_a4 = 0;
      alStack_68[0] = param_2;
      lStack_30 = lVar1;
      cVar3 = func_0x0001403cc0f0(puVar6,alStack_68,param_3,&uStack_b8,&uStack_98,0xffffffff,0);
      FUN_1403f7560(param_1,lVar1);
      if (cVar3 == '\0') {
        return '\0';
      }
      puVar6 = (undefined8 *)
               func_0x00014040cb70(&local_78,&uStack_b8,*(uint *)(param_2 + 0x28) >> 0x1f,
                                   *(uint *)(param_2 + 0x2c) >> 0x1f);
      uVar2 = puVar6[1];
      *param_4 = *puVar6;
      param_4[1] = uVar2;
      return cVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1402dd8b0(1,0xb8);
}

