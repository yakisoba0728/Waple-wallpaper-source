// Function: FUN_14001e0b0
// Addr: 14001e0b0
// Size: 233 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001e0b0(char param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  
  iVar3 = (*DAT_140426aa8)(0x31);
  if (0x10 < iVar3) {
    iVar3 = 0x20;
  }
  uVar4 = (*DAT_140426aa0)(DAT_1404e8c50,0x95,1,iVar3,iVar3,0x8000);
  uVar6 = uVar4;
  if (param_1 != '\0') {
    local_78 = 0;
    local_14 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_4c = 0;
    local_44 = 0;
    uStack_3c = 0;
    local_34 = 0;
    uStack_2c = 0;
    local_24 = 0;
    uStack_1c = 0;
    (*DAT_140426ac8)(uVar4,&local_98);
    uVar5 = (*DAT_140426ac0)(lStack_80,0,0,0,0x2000);
    (*_UNK_1404261a8)(uVar5,0x68,&local_78);
    fVar2 = DAT_1404929dc;
    if (uStack_6c._6_2_ == 0x20) {
      iVar3 = 0;
      if (0 < local_74._4_4_ * (int)local_74) {
        do {
          lVar7 = (longlong)iVar3;
          iVar3 = iVar3 + 1;
          uVar1 = *(uint *)(CONCAT44(uStack_5c,uStack_60) + lVar7 * 4);
          *(int *)(CONCAT44(uStack_5c,uStack_60) + lVar7 * 4) =
               (int)(((float)(uVar1 >> 0x18) / fVar2) * (float)(uVar1 & 0xff)) << 0x18;
        } while (iVar3 < local_74._4_4_ * (int)local_74);
      }
    }
    if (lStack_80 != 0) {
      (*DAT_1404261a0)();
    }
    lStack_80 = uVar5;
    uVar6 = (*_UNK_140426ab8)(&local_98);
    if (local_88 != 0) {
      (*DAT_1404261a0)();
    }
    (*DAT_1404261a0)(uVar5);
    (*DAT_140426ab0)(uVar4);
  }
  return uVar6;
}

