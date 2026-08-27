// Function: FUN_1403d5320
// Addr: 1403d5320
// Size: 602 bytes


bool FUN_1403d5320(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = *param_2;
  uVar3 = FUN_140398ba0(lVar1 + 0x138);
  cVar2 = FUN_1403cdfa0(uVar3,param_1,param_3,param_4,1);
  if (cVar2 != '\0') {
    return true;
  }
  uVar3 = FUN_140397ed0(lVar1 + 0x130);
  cVar2 = FUN_1403c7e70(uVar3,param_1,param_3,param_4,1);
  if (cVar2 != '\0') {
    return true;
  }
  puVar4 = (undefined8 *)FUN_140397f70(lVar1 + 0x120);
  puVar7 = &DAT_14045dd10;
  puVar6 = &DAT_14045dd10;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar4;
  }
  if (*(uint *)(puVar6 + 3) < 0xe) {
    pbVar8 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar8 = (byte *)puVar6[2];
  }
  if (((uint)pbVar8[3] + (uint)pbVar8[2] * 0x100 == 0) &&
     ((ushort)((ushort)*pbVar8 * 0x100 + (ushort)pbVar8[1]) == 0)) goto LAB_1403d5465;
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
LAB_1403d5407:
    lVar5 = _calloc_base(1,0x48);
    if (lVar5 == 0) {
      return true;
    }
  }
  else {
    LOCK();
    bVar9 = lVar5 == puVar4[1];
    if (bVar9) {
      puVar4[1] = 0;
    }
    UNLOCK();
    if (!bVar9) goto LAB_1403d5407;
  }
  puVar6 = &DAT_14045dd10;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar4;
  }
  if (0xd < *(uint *)(puVar6 + 3)) {
    puVar7 = (undefined8 *)puVar6[2];
  }
  cVar2 = FUN_1403c7a70(puVar7,param_1,param_3,param_4,lVar5);
  FUN_1403f7430(puVar4,lVar5);
  if (cVar2 != '\0') {
    return true;
  }
LAB_1403d5465:
  uVar3 = FUN_140398380(lVar1 + 0xb8);
  cVar2 = FUN_1403c8170(uVar3,param_1,param_3,param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_1403c51f0();
    if (*(char *)(param_1 + 0x78) == '\0') {
      local_38 = 0;
    }
    else {
      local_38 = *(undefined4 *)(param_1 + 0x7c);
    }
    local_40 = *(undefined8 *)(param_1 + 0x80);
    local_34 = 0;
    cVar2 = FUN_1403c86d0(uVar3,param_1,param_3,param_4,local_48);
    if (cVar2 == '\0') {
      uVar3 = FUN_140398600(lVar1 + 0x88);
      local_40 = *(undefined8 *)(param_1 + 0x80);
      local_38 = *(undefined4 *)(param_1 + 0x7c);
      local_34 = 0;
      cVar2 = FUN_1403c8450(uVar3,param_1,param_3,param_4,local_48);
      if (cVar2 == '\0') {
        uVar3 = FUN_140398510(lVar1 + 0x80);
        cVar2 = FUN_1403c8320(uVar3,param_1,param_3,param_4);
        return cVar2 != '\0';
      }
    }
  }
  return true;
}

