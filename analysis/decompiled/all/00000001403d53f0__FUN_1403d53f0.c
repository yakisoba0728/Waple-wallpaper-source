// Function: FUN_1403d53f0
// Addr: 1403d53f0
// Size: 410 bytes


bool FUN_1403d53f0(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar1 = *param_2;
  uVar4 = FUN_140398c70(lVar1 + 0x138);
  cVar3 = func_0x0001403ce070(uVar4,param_1,param_3,param_4,1);
  if (cVar3 == '\0') {
    uVar4 = FUN_140397fa0(lVar1 + 0x130);
    cVar3 = FUN_1403c7f40(uVar4,param_1,param_3,param_4,1);
    if (cVar3 == '\0') {
      puVar5 = (undefined8 *)FUN_140398040(lVar1 + 0x120);
      puVar7 = &DAT_14045dde0;
      puVar6 = &DAT_14045dde0;
      if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar5;
      }
      if (*(uint *)(puVar6 + 3) < 0xe) {
        pbVar8 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar8 = (byte *)puVar6[2];
      }
      if (((uint)pbVar8[3] + (uint)pbVar8[2] * 0x100 != 0) ||
         ((ushort)((ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1]) != 0)) {
        lVar2 = puVar5[1];
        if (lVar2 == 0) {
LAB_1403d54d7:
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1402dd8b0(1,0x48);
        }
        LOCK();
        bVar9 = lVar2 == puVar5[1];
        if (bVar9) {
          puVar5[1] = 0;
        }
        UNLOCK();
        if (!bVar9) goto LAB_1403d54d7;
        puVar6 = &DAT_14045dde0;
        if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar5;
        }
        if (0xd < *(uint *)(puVar6 + 3)) {
          puVar7 = (undefined8 *)puVar6[2];
        }
        cVar3 = FUN_1403c7b40(puVar7,param_1,param_3,param_4,lVar2);
        func_0x0001403f7500(puVar5,lVar2);
        if (cVar3 != '\0') {
          return true;
        }
      }
      uVar4 = FUN_140398450(lVar1 + 0xb8);
      cVar3 = FUN_1403c8240(uVar4,param_1,param_3,param_4);
      if (cVar3 == '\0') {
        uVar4 = FUN_1403c52c0();
        if (*(char *)(param_1 + 0x78) == '\0') {
          uStack_38 = 0;
        }
        else {
          uStack_38 = *(undefined4 *)(param_1 + 0x7c);
        }
        uStack_40 = *(undefined8 *)(param_1 + 0x80);
        uStack_34 = 0;
        cVar3 = FUN_1403c87a0(uVar4,param_1,param_3,param_4,local_48);
        if (cVar3 == '\0') {
          uVar4 = func_0x0001403986d0(lVar1 + 0x88);
          uStack_40 = *(undefined8 *)(param_1 + 0x80);
          uStack_38 = *(undefined4 *)(param_1 + 0x7c);
          uStack_34 = 0;
          cVar3 = func_0x0001403c8520(uVar4,param_1,param_3,param_4,local_48);
          if (cVar3 == '\0') {
            uVar4 = FUN_1403985e0(lVar1 + 0x80);
            cVar3 = FUN_1403c83f0(uVar4,param_1,param_3,param_4);
            return cVar3 != '\0';
          }
        }
      }
    }
  }
  return true;
}

