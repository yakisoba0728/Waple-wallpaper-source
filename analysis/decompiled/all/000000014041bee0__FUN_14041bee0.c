// Function: FUN_14041bee0
// Addr: 14041bee0
// Size: 94 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14041bee0(void)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  
  if (DAT_1404dc008 < 2) {
    fVar3 = in_XMM0._0_4_;
    fVar5 = in_XMM0._4_4_;
    uVar1 = -(uint)(_DAT_140517010 < (float)(~_DAT_140517000 & (uint)fVar3));
    uVar2 = -(uint)(_UNK_140517014 < (float)(~_UNK_140517004 & (uint)fVar5));
    fVar6 = (float)((uint)(((float)(~_DAT_140517000 & (uint)fVar3) + _DAT_140517010) -
                          _DAT_140517010) | _DAT_140517000 & (uint)fVar3);
    fVar7 = (float)((uint)(((float)(~_UNK_140517004 & (uint)fVar5) + _UNK_140517014) -
                          _UNK_140517014) | _UNK_140517004 & (uint)fVar5);
    return CONCAT44((uint)fVar5 & uVar2,(uint)fVar3 & uVar1) |
           CONCAT44(~uVar2 & (uint)(fVar7 - (float)(-(uint)(fVar5 < fVar7) & _UNK_140517024)),
                    ~uVar1 & (uint)(fVar6 - (float)(-(uint)(fVar3 < fVar6) & _DAT_140517020)));
  }
  auVar4 = roundps(in_XMM0,in_XMM0,1);
  return auVar4._0_8_;
}

