// Function: FUN_1402b6b20
// Addr: 1402b6b20
// Size: 1008 bytes


void FUN_1402b6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  longlong param_5,undefined1 param_6,char param_7,longlong *param_8,
                  undefined1 param_9)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  char *****pppppcVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_104 [4];
  uint local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  char ****local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  puVar15 = auStack_138;
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_138;
  local_d8 = param_5;
  local_108 = param_6;
  local_f8 = param_8;
  local_c8 = param_8;
  local_107 = param_9;
  uVar2 = *(undefined8 *)(*(longlong *)(param_5 + 0x40) + 8);
  local_d0 = param_2;
  local_98 = uVar2;
  if (param_4 == '\0') {
    (*(code *)PTR_FUN_140426bb8)(uVar2);
    lVar7 = FUN_1402b31b0(local_a0);
  }
  else {
    (*(code *)PTR_FUN_140426bb8)();
    lVar7 = FUN_1402b3090(local_a0);
  }
  local_f0 = lVar7;
  lVar8 = (*(code *)PTR_FUN_140426bb8)(uVar2);
  if (lVar8 != 0) {
    (*(code *)PTR_FUN_140426bb8)(lVar8,1);
  }
  (*(code *)PTR_FUN_140426bb8)(lVar7,local_60);
  uVar6 = (*(code *)PTR_FUN_140426bb8)(lVar7);
  local_100 = -uVar6;
  if ((int)-uVar6 < 0) {
    local_100 = uVar6;
  }
  uVar18 = (ulonglong)local_100;
  if (uVar18 < (ulonglong)param_8[2]) {
    pppppcVar9 = local_60;
    if (0xf < local_48) {
      pppppcVar9 = (char *****)local_60[0];
    }
    if (*(char *)pppppcVar9 != '\x7f') {
      pppppcVar9 = local_60;
      if (0xf < local_48) {
        pppppcVar9 = (char *****)local_60[0];
      }
      if ('\0' < *(char *)pppppcVar9) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)(lVar7);
        uVar4 = local_107;
        pppppcVar9 = local_60;
        if (0xf < local_48) {
          pppppcVar9 = (char *****)local_60[0];
        }
        uVar18 = local_f8[2] - uVar18;
        cVar1 = *(char *)pppppcVar9;
        while (((cVar1 != '\x7f' && (lVar7 = local_f0, '\0' < cVar1)) &&
               ((ulonglong)(longlong)*(char *)pppppcVar9 < uVar18))) {
          uVar18 = uVar18 - (longlong)*(char *)pppppcVar9;
          uVar17 = local_f8[2];
          if (uVar17 < uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_140012a10();
          }
          uVar12 = local_f8[3];
          if (uVar12 != uVar17) {
            uVar14 = uVar17 + 1;
            if (((uVar17 != uVar14) && (0xf < uVar12)) && (DAT_140472300 != '\0')) {
              lVar7 = *local_f8;
              uVar10 = lVar7 + 1 + uVar17;
              uVar16 = lVar7 + 1 + uVar14;
              uVar13 = uVar12 + 8 + lVar7 & 0xfffffffffffffff8;
              uVar12 = uVar13;
              if (uVar10 <= uVar13) {
                uVar12 = uVar10;
              }
              if (uVar13 < uVar16) {
                uVar16 = uVar13;
              }
              func_0x00014000ed00(lVar7,uVar13,uVar12,uVar16);
            }
            local_f8[2] = uVar14;
            plVar11 = local_f8;
            if (0xf < (ulonglong)local_f8[3]) {
              plVar11 = (longlong *)*local_f8;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0((longlong)plVar11 + uVar18 + 1,(longlong)plVar11 + uVar18,
                          (uVar17 - uVar18) + 1);
          }
          local_118 = 1;
          local_110 = uVar5;
          FUN_140038db0(local_f8,1,uVar4,uVar18);
          if ('\0' < *(char *)((longlong)pppppcVar9 + 1)) {
            pppppcVar9 = (char *****)((longlong)pppppcVar9 + 1);
          }
          cVar1 = *(char *)pppppcVar9;
          lVar7 = local_f0;
        }
      }
    }
  }
  else {
    func_0x000140038c40(param_8,0,((ulonglong)local_100 - param_8[2]) + 1,param_9);
  }
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  local_c0 = 0;
  if (param_7 == '\0') {
    (*(code *)PTR_FUN_140426bb8)(lVar7,local_104);
  }
  else {
    (*(code *)PTR_FUN_140426bb8)();
  }
  (*(code *)PTR_FUN_140426bb8)(lVar7,local_a0);
  if (0xf < local_a8) {
    if (DAT_140472300 != '\0') {
      uVar17 = local_a8 + 1 + local_c0;
      uVar14 = uVar17 + 7 & 0xfffffffffffffff8;
      uVar12 = local_b0 + 1 + local_c0;
      uVar18 = uVar14;
      if (uVar12 <= uVar14) {
        uVar18 = uVar12;
      }
      if (uVar14 < uVar17) {
        uVar17 = uVar14;
      }
      func_0x00014000ed00(local_c0,uVar14,uVar18,uVar17);
    }
    uVar17 = local_a8 + 1;
    uVar18 = local_c0;
    if (0xfff < uVar17) {
      uVar18 = *(ulonglong *)(local_c0 - 8);
      if (0x1f < (local_c0 - uVar18) - 8) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar15 = auStack_130;
        local_90 = lVar7;
        goto LAB_1402b6ee1;
      }
      uVar17 = local_a8 + 0x28;
    }
    func_0x00014028b040(uVar18,uVar17);
    return;
  }
  local_c0 = local_c0 & 0xffffffffffffff00;
  if (0xf < local_88) {
    local_a8 = local_88;
    local_b0 = local_90;
    local_90 = 0;
    local_88 = 0xf;
    local_a0[0] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_a0);
  }
LAB_1402b6ee1:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar15 + -8) = 0x1402b6ef3;
  FUN_1404211c0(puVar15 + 0x78,local_a0,local_90 + 1);
}

