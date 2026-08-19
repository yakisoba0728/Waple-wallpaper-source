// Function: FUN_14039c3d0
// Addr: 14039c3d0
// Size: 400 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14039c3d0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 *local_188;
  undefined *puStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [64];
  int local_f8;
  undefined4 uStack_f4;
  int local_e0;
  undefined4 uStack_dc;
  int local_cc;
  
  iVar7 = *(int *)(param_1 + 0x14) * 0x10 + 0xc;
  puVar3 = (undefined4 *)FUN_1403e6d10(param_1,&local_178);
  local_1b8 = *puVar3;
  uStack_1b4 = puVar3[1];
  uStack_1b0 = puVar3[2];
  uStack_1ac = puVar3[3];
  local_1a8 = puVar3[4];
  uStack_1a4 = puVar3[5];
  iStack_1a0 = puVar3[6];
  uStack_19c = puVar3[7];
  local_198 = *(undefined8 *)(puVar3 + 8);
  uStack_190 = *(undefined8 *)(puVar3 + 10);
  local_188 = &LAB_1403cfdf0;
  puStack_180 = &DAT_14047061d;
  local_148 = 0x403cfdf0;
  uStack_144 = 1;
  uStack_140 = 0x4047061d;
  uStack_13c = 1;
  local_178 = local_1b8;
  uStack_174 = uStack_1b4;
  uStack_170 = uStack_1b0;
  uStack_16c = uStack_1ac;
  local_168 = local_1a8;
  uStack_164 = uStack_1a4;
  iStack_160 = iStack_1a0;
  uStack_15c = uStack_19c;
  local_158 = local_198;
  uStack_150 = uStack_190;
  lVar4 = func_0x00014039aa90(&local_1b8,local_138);
  puVar2 = *(undefined8 **)(lVar4 + 0x10);
  iVar1 = *(int *)(lVar4 + 0x18);
  while ((puVar6 = (undefined8 *)CONCAT44(uStack_164,local_168), puVar6 != puVar2 ||
         (iStack_160 != iVar1))) {
    if (iStack_160 == 0) {
      DAT_1404e4ff0._0_4_ = (undefined4)DAT_14045dde0;
      DAT_1404e4ff0._4_4_ = DAT_14045dde0._4_4_;
      DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
      DAT_1404e4ff8._4_4_ = _DAT_14045ddec;
      _DAT_1404e5000 = DAT_14045ddf0;
      puVar6 = &DAT_1404e4ff0;
    }
    plVar5 = (longlong *)(*(code *)CONCAT44(uStack_144,local_148))(puVar6);
    iVar7 = iVar7 + (*(int *)(*plVar5 + 0x18) - 1U | 3) + 1;
    func_0x000140398e50(&local_178);
  }
  lVar4 = thunk_FUN_1402da070(iVar7);
  if (lVar4 == 0) {
    return;
  }
  FUN_140395b40(&local_f8,lVar4,iVar7);
  if ((local_cc == 0) && (*(char *)(param_1 + 0x10) == '\0')) {
    local_cc = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("SERIALIZE",CONCAT44(uStack_f4,local_f8),0,1,0,1,"start [%p..%p] (%lu bytes)",
                CONCAT44(uStack_f4,local_f8),CONCAT44(uStack_dc,local_e0),local_e0 - local_f8);
}

