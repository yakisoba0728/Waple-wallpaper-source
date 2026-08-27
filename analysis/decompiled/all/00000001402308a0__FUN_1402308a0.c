// Function: FUN_1402308a0
// Addr: 1402308a0
// Size: 23892 bytes


void FUN_1402308a0(longlong *param_1,float param_2,char param_3)

{
  int *piVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  ushort uVar19;
  undefined4 uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  longlong *local_res20;
  longlong local_e8;
  longlong *local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [72];
  
  *(float *)(param_1 + 0x7e) = param_2 + *(float *)(param_1 + 0x7e);
  if (0.0 < param_2) {
    FUN_140236cd0();
  }
  fVar37 = DAT_140492704;
  if (*(uint *)((longlong)param_1 + 0x344) == 0) goto LAB_140236380;
  lVar14 = param_1[0x41];
  uVar31 = *(uint *)(param_1 + 4);
  uVar21 = 1;
  if ((lVar14 != 0) && (1 < *(uint *)((longlong)param_1 + 0x344))) {
    cVar13 = FUN_140229750(param_1);
    iVar26 = *(int *)((longlong)param_1 + 0x344) * 4 + -4;
    if (cVar13 != '\0') {
      iVar26 = *(int *)((longlong)param_1 + 0x344) + -1;
    }
    cVar13 = FUN_140261480(lVar14,&local_res20,iVar26);
    if (cVar13 != '\0') {
      plVar33 = param_1 + 0x43;
      uVar35 = *(uint *)((longlong)param_1 + 0x344);
      lVar14 = FUN_1402298a0(param_1[1]);
      fVar36 = *(float *)((longlong)param_1 + 0x1bc) * *(float *)(lVar14 + 0xd8);
      fVar38 = *(float *)(param_1 + 0x38) * *(float *)(lVar14 + 0xd0);
      fVar39 = fVar38;
      if (((float)*(uint *)((longlong)param_1 + 0x344) < fVar38 * fVar36) &&
         (fVar39 = (float)*(uint *)(*param_1 + 0x148), fVar38 <= (float)*(uint *)(*param_1 + 0x148))
         ) {
        fVar39 = fVar38;
      }
      fVar39 = fVar39 * fVar36;
      fVar36 = 0.0;
      if ((*(uint *)(param_1 + 4) >> 0x11 & 1) == 0) {
        fVar38 = (float)uVar35;
        if (((0.0 < fVar39) && (fVar39 - fVar37 <= fVar38)) &&
           ((*(uint *)(param_1 + 4) >> 0x12 & 1) != 0)) {
          fVar36 = (float)FUN_1401d8df0();
          fVar36 = fVar36 - fVar37;
          goto LAB_140230a81;
        }
      }
      else {
        fVar36 = (float)*(uint *)(param_1 + 0x6a);
LAB_140230a81:
        fVar38 = fVar39 - fVar37;
      }
      fVar38 = fVar38 * *(float *)(param_1 + 6);
      cVar13 = FUN_140229750(param_1);
      if (cVar13 == '\0') {
        if (*(uint *)((longlong)param_1 + 0x344) < 3) {
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,0);
          uVar22 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,1);
          uVar25 = (ulonglong)*puVar15;
          uVar27 = (ulonglong)*puVar15;
          *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 4) = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc) = *(undefined4 *)(param_1[0x4e] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(float *)((longlong)local_res20 + 0x1c) = fVar38;
          *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x24) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x2c) = 0;
          *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x34) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x3c) =
               *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x44) =
               *(undefined4 *)(param_1[0x60] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x4c) =
               *(undefined4 *)(param_1[0x62] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 10) = 0;
          *(undefined4 *)((longlong)local_res20 + 0x54) = 0;
          *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x5c) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 100) = *(undefined4 *)(param_1[0x62] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 0xd) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x6c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xe) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x74) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xf) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x7c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x10) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x84) = fVar38;
          *(undefined4 *)(local_res20 + 0x11) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x8c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x12) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x94) = 0;
          *(undefined4 *)(local_res20 + 0x13) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x9c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x14) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xa4) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x15) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xac) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xb4) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x17) = 0;
          *(undefined4 *)((longlong)local_res20 + 0xbc) = 0x3f800000;
          *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc4) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x19) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xcc) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xd4) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1b) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xdc) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xe4) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x1d) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0xec) = fVar38;
          *(undefined4 *)(local_res20 + 0x1e) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xf4) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1f) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xfc) = 0;
          *(undefined4 *)(local_res20 + 0x20) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x104) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x21) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x10c) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x22) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x114) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x23) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x11c) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x24) = 0x3f800000;
          *(undefined4 *)((longlong)local_res20 + 0x124) = 0x3f800000;
          *(undefined4 *)(local_res20 + 0x25) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 300) = *(undefined4 *)(param_1[0x60] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 0x26) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x134) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x27) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x13c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x28) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x144) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x29) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x2a) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x154) = fVar38;
          *(undefined4 *)(local_res20 + 0x2b) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x15c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x2c) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x164) = 0;
          *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x16c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x2e) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x174) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x2f) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x17c) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x30) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          uVar20 = *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          local_res20 = local_res20 + 0x27;
        }
        else {
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,0);
          uVar22 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,1);
          uVar27 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,2);
          uVar25 = (ulonglong)*puVar15;
          uVar29 = (ulonglong)*puVar15;
          *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 4) = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc) = *(undefined4 *)(param_1[0x4e] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x1c) = fVar38;
          *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x24) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(float *)((longlong)local_res20 + 0x2c) = fVar36;
          *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x34) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x3c) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x44) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x4c) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 10) = 0;
          *(undefined4 *)((longlong)local_res20 + 0x54) = 0;
          *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x5c) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 100) = *(undefined4 *)(param_1[0x62] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 0xd) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x6c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xe) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x74) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xf) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x7c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x10) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x84) = fVar38;
          *(undefined4 *)(local_res20 + 0x11) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x8c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x12) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(float *)((longlong)local_res20 + 0x94) = fVar36;
          *(undefined4 *)(local_res20 + 0x13) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x9c) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x14) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xa4) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x15) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xac) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xb4) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x17) = 0;
          *(undefined4 *)((longlong)local_res20 + 0xbc) = 0x3f800000;
          *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc4) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x19) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xcc) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xd4) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1b) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xdc) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xe4) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x1d) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0xec) = fVar38;
          *(undefined4 *)(local_res20 + 0x1e) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xf4) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1f) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(float *)((longlong)local_res20 + 0xfc) = fVar36;
          *(undefined4 *)(local_res20 + 0x20) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x104) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x21) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x10c) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x22) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x114) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x23) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x11c) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x24) = 0x3f800000;
          *(undefined4 *)((longlong)local_res20 + 0x124) = 0x3f800000;
          *(undefined4 *)(local_res20 + 0x25) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 300) = *(undefined4 *)(param_1[0x60] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 0x26) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x134) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x27) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x13c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x28) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x144) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x29) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x2a) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x154) = fVar38;
          *(undefined4 *)(local_res20 + 0x2b) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x15c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x2c) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(float *)((longlong)local_res20 + 0x164) = fVar36;
          *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x16c) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x2e) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x174) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x2f) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x17c) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x30) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x184) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x31) = 0x3f800000;
          *(undefined4 *)((longlong)local_res20 + 0x18c) = 0;
          *(undefined4 *)(local_res20 + 0x32) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x194) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x33) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x19c) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          local_res20 = local_res20 + 0x34;
          if (*(int *)((longlong)param_1 + 0x344) != 2 && *(int *)((longlong)param_1 + 0x344) != 3)
          {
            uVar35 = 1;
            do {
              puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar35 - 1);
              uVar27 = (ulonglong)*puVar15;
              puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar35);
              uVar21 = uVar35 + 1;
              uVar11 = *puVar15;
              uVar22 = (ulonglong)uVar11;
              puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar21);
              uVar29 = (ulonglong)*puVar15;
              puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar35 + 2);
              uVar34 = (ulonglong)uVar11;
              uVar25 = (ulonglong)*puVar15;
              uVar30 = (ulonglong)*puVar15;
              *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 4) =
                   *(undefined4 *)(param_1[0x57] + uVar22 * 4);
              *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xc) =
                   *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
              *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x14) =
                   *(undefined4 *)(param_1[0x57] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
              *(float *)((longlong)local_res20 + 0x1c) = fVar38;
              *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x24) =
                   *(undefined4 *)(param_1[0x57] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
              fVar39 = (float)uVar35 + fVar36;
              *(float *)((longlong)local_res20 + 0x2c) = fVar39;
              *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x34) =
                   *(undefined4 *)(param_1[0x57] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x3c) =
                   *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x44) =
                   *(undefined4 *)(param_1[0x60] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x4c) =
                   *(undefined4 *)(param_1[0x62] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 10) = 0;
              *(undefined4 *)((longlong)local_res20 + 0x54) = 0;
              *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x5f] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x5c) =
                   *(undefined4 *)(param_1[0x60] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x61] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 100) =
                   *(undefined4 *)(param_1[0x62] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0xd) = *(undefined4 *)(param_1[0x56] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x6c) =
                   *(undefined4 *)(param_1[0x57] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0xe) = *(undefined4 *)(param_1[0x58] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x74) =
                   *(undefined4 *)(param_1[0x4e] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0xf) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x7c) =
                   *(undefined4 *)(param_1[0x57] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x10) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
              *(float *)((longlong)local_res20 + 0x84) = fVar38;
              *(undefined4 *)(local_res20 + 0x11) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x8c) =
                   *(undefined4 *)(param_1[0x57] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 0x12) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
              *(float *)((longlong)local_res20 + 0x94) = fVar39;
              *(undefined4 *)(local_res20 + 0x13) = *(undefined4 *)(param_1[0x56] + uVar30 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x9c) =
                   *(undefined4 *)(param_1[0x57] + uVar30 * 4);
              *(undefined4 *)(local_res20 + 0x14) = *(undefined4 *)(param_1[0x58] + uVar30 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xa4) =
                   *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x15) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xac) =
                   *(undefined4 *)(param_1[0x60] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xb4) =
                   *(undefined4 *)(param_1[0x62] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x17) = 0;
              *(undefined4 *)((longlong)local_res20 + 0xbc) = 0x3f800000;
              *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(param_1[0x5f] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xc4) =
                   *(undefined4 *)(param_1[0x60] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x19) = *(undefined4 *)(param_1[0x61] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xcc) =
                   *(undefined4 *)(param_1[0x62] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(param_1[0x56] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xd4) =
                   *(undefined4 *)(param_1[0x57] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x1b) = *(undefined4 *)(param_1[0x58] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xdc) =
                   *(undefined4 *)(param_1[0x4e] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xe4) =
                   *(undefined4 *)(param_1[0x57] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x1d) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
              *(float *)((longlong)local_res20 + 0xec) = fVar38;
              *(undefined4 *)(local_res20 + 0x1e) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xf4) =
                   *(undefined4 *)(param_1[0x57] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 0x1f) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
              *(float *)((longlong)local_res20 + 0xfc) = fVar39;
              *(undefined4 *)(local_res20 + 0x20) = *(undefined4 *)(param_1[0x56] + uVar30 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x104) =
                   *(undefined4 *)(param_1[0x57] + uVar30 * 4);
              *(undefined4 *)(local_res20 + 0x21) = *(undefined4 *)(param_1[0x58] + uVar30 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x10c) =
                   *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x22) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x114) =
                   *(undefined4 *)(param_1[0x60] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x23) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x11c) =
                   *(undefined4 *)(param_1[0x62] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x24) = 0x3f800000;
              *(undefined4 *)((longlong)local_res20 + 0x124) = 0x3f800000;
              *(undefined4 *)(local_res20 + 0x25) = *(undefined4 *)(param_1[0x5f] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 300) =
                   *(undefined4 *)(param_1[0x60] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x26) = *(undefined4 *)(param_1[0x61] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x134) =
                   *(undefined4 *)(param_1[0x62] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x27) = *(undefined4 *)(param_1[0x56] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x13c) =
                   *(undefined4 *)(param_1[0x57] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x28) = *(undefined4 *)(param_1[0x58] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x144) =
                   *(undefined4 *)(param_1[0x4e] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x29) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x14c) =
                   *(undefined4 *)(param_1[0x57] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x2a) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
              *(float *)((longlong)local_res20 + 0x154) = fVar38;
              *(undefined4 *)(local_res20 + 0x2b) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x15c) =
                   *(undefined4 *)(param_1[0x57] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 0x2c) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
              *(float *)((longlong)local_res20 + 0x164) = fVar39;
              *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(param_1[0x56] + uVar30 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x16c) =
                   *(undefined4 *)(param_1[0x57] + uVar30 * 4);
              *(undefined4 *)(local_res20 + 0x2e) = *(undefined4 *)(param_1[0x58] + uVar30 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x174) =
                   *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x2f) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x17c) =
                   *(undefined4 *)(param_1[0x60] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x30) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x184) =
                   *(undefined4 *)(param_1[0x62] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 0x31) = 0x3f800000;
              *(undefined4 *)((longlong)local_res20 + 0x18c) = 0;
              *(undefined4 *)(local_res20 + 0x32) = *(undefined4 *)(param_1[0x5f] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x194) =
                   *(undefined4 *)(param_1[0x60] + uVar34 * 4);
              *(undefined4 *)(local_res20 + 0x33) = *(undefined4 *)(param_1[0x61] + uVar34 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x19c) =
                   *(undefined4 *)(param_1[0x62] + uVar34 * 4);
              local_res20 = local_res20 + 0x34;
              uVar35 = uVar21;
            } while (uVar21 < *(int *)((longlong)param_1 + 0x344) - 2U);
          }
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar21 - 1);
          uVar27 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar21);
          uVar22 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,uVar21 + 1);
          uVar25 = (ulonglong)*puVar15;
          uVar29 = (ulonglong)*puVar15;
          *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 4) = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc) = *(undefined4 *)(param_1[0x4e] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(float *)((longlong)local_res20 + 0x1c) = fVar38;
          *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x24) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          fVar36 = (float)uVar21 + fVar36;
          *(float *)((longlong)local_res20 + 0x2c) = fVar36;
          *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x34) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x3c) =
               *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x44) =
               *(undefined4 *)(param_1[0x60] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x4c) =
               *(undefined4 *)(param_1[0x62] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 10) = 0;
          *(undefined4 *)((longlong)local_res20 + 0x54) = 0;
          *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x5c) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 100) = *(undefined4 *)(param_1[0x62] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 0xd) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x6c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xe) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x74) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xf) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x7c) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x10) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(float *)((longlong)local_res20 + 0x84) = fVar38;
          *(undefined4 *)(local_res20 + 0x11) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x8c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x12) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x94) = fVar36;
          *(undefined4 *)(local_res20 + 0x13) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x9c) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x14) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xa4) =
               *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x15) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xac) =
               *(undefined4 *)(param_1[0x60] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xb4) =
               *(undefined4 *)(param_1[0x62] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x17) = 0;
          *(undefined4 *)((longlong)local_res20 + 0xbc) = 0x3f800000;
          *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc4) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x19) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xcc) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xd4) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1b) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xdc) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xe4) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x1d) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(float *)((longlong)local_res20 + 0xec) = fVar38;
          *(undefined4 *)(local_res20 + 0x1e) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xf4) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x1f) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0xfc) = fVar36;
          *(undefined4 *)(local_res20 + 0x20) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x104) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x21) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x10c) =
               *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x22) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x114) =
               *(undefined4 *)(param_1[0x60] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x23) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x11c) =
               *(undefined4 *)(param_1[0x62] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x24) = 0x3f800000;
          *(undefined4 *)((longlong)local_res20 + 0x124) = 0x3f800000;
          *(undefined4 *)(local_res20 + 0x25) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 300) = *(undefined4 *)(param_1[0x60] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 0x26) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x134) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x27) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x13c) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x28) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x144) =
               *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0x29) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14c) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x2a) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(float *)((longlong)local_res20 + 0x154) = fVar38;
          *(undefined4 *)(local_res20 + 0x2b) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x15c) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 0x2c) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x164) = fVar36;
          *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x16c) =
               *(undefined4 *)(param_1[0x57] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x2e) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x174) =
               *(undefined4 *)(param_1[0x4e] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x2f) = *(undefined4 *)(param_1[0x5f] + uVar29 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x17c) =
               *(undefined4 *)(param_1[0x60] + uVar29 * 4);
          *(undefined4 *)(local_res20 + 0x30) = *(undefined4 *)(param_1[0x61] + uVar29 * 4);
          uVar20 = *(undefined4 *)(param_1[0x62] + uVar29 * 4);
          local_res20 = local_res20 + 0x27;
        }
        *(undefined4 *)((longlong)local_res20 + 0x4c) = uVar20;
        *(undefined4 *)(local_res20 + 10) = 0x3f800000;
        *(undefined4 *)((longlong)local_res20 + 0x54) = 0;
        *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x5c) = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
        *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
        *(undefined4 *)((longlong)local_res20 + 100) = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
        local_res20 = local_res20 + 0xd;
      }
      else {
        if (*(uint *)((longlong)param_1 + 0x344) < 3) {
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,0);
          uVar22 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,1);
          uVar25 = (ulonglong)*puVar15;
          *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 4) = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc) = *(undefined4 *)(param_1[0x4e] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(float *)((longlong)local_res20 + 0x1c) = (float)*(uint *)((longlong)param_1 + 0x344);
          *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x24) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x2c) = 0;
        }
        else {
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,0);
          uVar22 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,1);
          uVar27 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(plVar33,2);
          uVar25 = (ulonglong)*puVar15;
          *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 4) = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc) = *(undefined4 *)(param_1[0x4e] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x1c) = fVar38;
          *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x24) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(float *)((longlong)local_res20 + 0x2c) = fVar36;
          *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x34) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x3c) =
               *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x44) =
               *(undefined4 *)(param_1[0x60] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
          uVar21 = 1;
          *(undefined4 *)((longlong)local_res20 + 0x4c) =
               *(undefined4 *)(param_1[0x62] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 10) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x54) =
               *(undefined4 *)(param_1[0x60] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x5c) =
               *(undefined4 *)(param_1[0x62] + uVar22 * 4);
          local_res20 = local_res20 + 0xc;
          uVar35 = uVar21;
          if (*(int *)((longlong)param_1 + 0x344) != 2 && *(int *)((longlong)param_1 + 0x344) != 3)
          {
            do {
              puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar21 - 1);
              uVar22 = (ulonglong)*puVar15;
              puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar21);
              uVar35 = uVar21 + 1;
              uVar25 = (ulonglong)*puVar15;
              puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar35);
              uVar27 = (ulonglong)*puVar15;
              puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar21 + 2);
              uVar29 = (ulonglong)*puVar15;
              *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 4) =
                   *(undefined4 *)(param_1[0x57] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xc) =
                   *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x14) =
                   *(undefined4 *)(param_1[0x57] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
              *(float *)((longlong)local_res20 + 0x1c) = fVar38;
              *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x24) =
                   *(undefined4 *)(param_1[0x57] + uVar22 * 4);
              *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
              *(float *)((longlong)local_res20 + 0x2c) = (float)uVar21 + fVar36;
              *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x34) =
                   *(undefined4 *)(param_1[0x57] + uVar29 * 4);
              *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar29 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x3c) =
                   *(undefined4 *)(param_1[0x4e] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x44) =
                   *(undefined4 *)(param_1[0x60] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar27 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x4c) =
                   *(undefined4 *)(param_1[0x62] + uVar27 * 4);
              *(undefined4 *)(local_res20 + 10) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x54) =
                   *(undefined4 *)(param_1[0x60] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x5c) =
                   *(undefined4 *)(param_1[0x62] + uVar25 * 4);
              local_res20 = local_res20 + 0xc;
              uVar21 = uVar35;
            } while (uVar35 < *(int *)((longlong)param_1 + 0x344) - 2U);
          }
          puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar35 - 1);
          uVar27 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar35);
          uVar22 = (ulonglong)*puVar15;
          puVar15 = (uint *)FUN_1400e4aa0(param_1 + 0x43,uVar35 + 1);
          uVar25 = (ulonglong)*puVar15;
          *(undefined4 *)local_res20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 4) = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          *(undefined4 *)((longlong)local_res20 + 0xc) = *(undefined4 *)(param_1[0x4e] + uVar22 * 4)
          ;
          *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x14) =
               *(undefined4 *)(param_1[0x57] + uVar25 * 4);
          *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
          *(float *)((longlong)local_res20 + 0x1c) = fVar38;
          *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x56] + uVar27 * 4);
          *(undefined4 *)((longlong)local_res20 + 0x24) =
               *(undefined4 *)(param_1[0x57] + uVar27 * 4);
          *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x58] + uVar27 * 4);
          *(float *)((longlong)local_res20 + 0x2c) = (float)uVar35 + fVar36;
        }
        *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x34) = *(undefined4 *)(param_1[0x57] + uVar25 * 4);
        *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x3c) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
        *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x44) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
        *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x4c) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
        *(undefined4 *)(local_res20 + 10) = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x54) = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
        *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
        *(undefined4 *)((longlong)local_res20 + 0x5c) = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
        local_res20 = local_res20 + 0xc;
      }
      FUN_1402614b0(param_1[0x41]);
    }
  }
  uVar25 = 0;
  if (param_1[0x40] != 0) {
    param_2 = *(float *)((longlong)param_1 + 0x24c) - param_2;
    *(float *)((longlong)param_1 + 0x24c) = param_2;
    if ((param_2 <= 0.0) &&
       (*(int *)((longlong)param_1 + 0x24c) = (int)param_1[0x4a], uVar22 = uVar25,
       (int)param_1[0x68] != 0)) {
      do {
        if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
          iVar26 = (uint)*(ushort *)(param_1 + 0x49) * (int)uVar22 * 3;
          lVar14 = (longlong)iVar26;
          FUN_1404210f0(param_1[0x46] + (longlong)(iVar26 + 3) * 4,param_1[0x46] + lVar14 * 4,
                        (ulonglong)*(ushort *)(param_1 + 0x49) * 0xc + -0xc);
          *(undefined4 *)(param_1[0x46] + lVar14 * 4) = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
          *(undefined4 *)(param_1[0x46] + 4 + lVar14 * 4) =
               *(undefined4 *)(param_1[0x57] + uVar22 * 4);
          *(undefined4 *)(param_1[0x46] + 8 + lVar14 * 4) =
               *(undefined4 *)(param_1[0x58] + uVar22 * 4);
          uVar21 = *(ushort *)(param_1[0x47] + uVar22 * 2) + 1;
          uVar19 = (ushort)uVar21;
          if (*(ushort *)(param_1 + 0x49) <= uVar21) {
            uVar19 = *(ushort *)(param_1 + 0x49);
          }
          *(ushort *)(param_1[0x47] + uVar22 * 2) = uVar19;
          if (param_1[0x48] != 0) {
            psVar2 = (short *)(param_1[0x48] + uVar22 * 2);
            *psVar2 = *psVar2 + 1;
          }
        }
        uVar21 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar21;
      } while (uVar21 < *(uint *)(param_1 + 0x68));
    }
    lVar14 = param_1[0x40];
    uVar21 = (uint)*(ushort *)(param_1 + 0x49);
    if (*(ushort *)(param_1 + 0x49) < 2) {
      uVar21 = 1;
    }
    cVar13 = FUN_140229750(param_1);
    iVar26 = *(int *)((longlong)param_1 + 0x344) * 4;
    if (cVar13 != '\0') {
      iVar26 = *(int *)((longlong)param_1 + 0x344);
    }
    cVar13 = FUN_140261480(lVar14,&local_res20,iVar26 * uVar21);
    if (cVar13 != '\0') {
      cVar13 = FUN_140229750(param_1);
      uVar19 = *(ushort *)(param_1 + 0x49);
      iVar26 = (int)param_1[0x68];
      if (cVar13 == '\0') {
        if ((*(uint *)(param_1 + 4) & 0x80000) == 0) {
          if (uVar19 < 3) {
            plVar33 = local_res20;
            uVar22 = uVar25;
            if (iVar26 != 0) {
              do {
                iVar26 = (int)uVar22;
                if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
                  lVar14 = param_1[0x46];
                  uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
                  uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
                  uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
                  uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
                  uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
                  uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
                  uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
                  uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
                  uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                  fVar37 = (float)*(ushort *)(param_1[0x47] + uVar22 * 2) * *(float *)(param_1 + 6);
                  uVar22 = (ulonglong)uVar21;
                  *(undefined4 *)plVar33 = uVar20;
                  *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
                  *(undefined4 *)(plVar33 + 1) = uVar4;
                  *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                  plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                  *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4)
                  ;
                  *(float *)((longlong)plVar33 + 0x1c) = fVar37;
                  *(undefined4 *)(plVar33 + 4) = uVar20;
                  *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
                  *(undefined4 *)(plVar33 + 5) = uVar4;
                  *(undefined4 *)((longlong)plVar33 + 0x2c) = 0;
                  plVar33[6] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined8 *)((longlong)plVar33 + 0x3c) = 0;
                  *(undefined4 *)((longlong)plVar33 + 0x44) = uVar5;
                  *(undefined4 *)(plVar33 + 9) = uVar6;
                  *(undefined4 *)((longlong)plVar33 + 0x4c) = uVar7;
                  *(undefined4 *)(plVar33 + 10) = uVar8;
                  *(undefined4 *)((longlong)local_res20 + 0x54) = uVar20;
                  *(undefined4 *)(local_res20 + 0xb) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x5c) = uVar4;
                  *(undefined4 *)(local_res20 + 0xc) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 100) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x6c) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(float *)(local_res20 + 0xe) = fVar37;
                  *(undefined4 *)((longlong)local_res20 + 0x74) = uVar20;
                  *(undefined4 *)(local_res20 + 0xf) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x7c) = uVar4;
                  *(undefined4 *)(local_res20 + 0x10) = 0;
                  *(undefined8 *)((longlong)local_res20 + 0x84) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x8c) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x12) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x13) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                  *(undefined4 *)(local_res20 + 0x14) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                  *(undefined4 *)(local_res20 + 0x15) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0xac) = uVar3;
                  *(undefined4 *)(local_res20 + 0x16) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                  local_res20[0x17] = *(longlong *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(float *)((longlong)local_res20 + 0xc4) = fVar37;
                  *(undefined4 *)(local_res20 + 0x19) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0xcc) = uVar3;
                  *(undefined4 *)(local_res20 + 0x1a) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0xd4) = 0;
                  local_res20[0x1b] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                  *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                  *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                  *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                  *(undefined4 *)((longlong)local_res20 + 0xfc) = uVar20;
                  *(undefined4 *)(local_res20 + 0x20) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x104) = uVar4;
                  *(undefined4 *)(local_res20 + 0x21) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x10c) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x114) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(float *)(local_res20 + 0x23) = fVar37;
                  *(undefined4 *)((longlong)local_res20 + 0x11c) = uVar20;
                  *(undefined4 *)(local_res20 + 0x24) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x124) = uVar4;
                  *(undefined4 *)(local_res20 + 0x25) = 0;
                  *(undefined8 *)((longlong)local_res20 + 300) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x134) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  local_res20[0x27] = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x28) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                  *(undefined4 *)(local_res20 + 0x29) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                  lVar14 = param_1[0x46];
                  uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                  local_res20[0x2a] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                  uVar22 = (ulonglong)uVar21;
                  *(undefined4 *)(local_res20 + 0x2b) =
                       *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x15c) = uVar9;
                  local_res20[0x2c] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)((longlong)local_res20 + 0x16c) = fVar37;
                  *(undefined4 *)(local_res20 + 0x2e) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0x174) = uVar3;
                  *(undefined4 *)(local_res20 + 0x2f) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0x17c) = 0x3f800000;
                  local_res20[0x30] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x31) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined8 *)((longlong)local_res20 + 0x18c) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x194) = uVar5;
                  *(undefined4 *)(local_res20 + 0x33) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0x19c) = uVar7;
                  *(undefined4 *)(local_res20 + 0x34) = uVar8;
                  *(undefined8 *)((longlong)local_res20 + 0x1a4) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x1ac) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x36) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x1b4) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x1bc) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)(local_res20 + 0x38) = fVar37;
                  *(undefined4 *)((longlong)local_res20 + 0x1c4) = uVar20;
                  *(undefined4 *)(local_res20 + 0x39) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x1cc) = uVar4;
                  *(undefined4 *)(local_res20 + 0x3a) = 0x3f800000;
                  *(undefined8 *)((longlong)local_res20 + 0x1d4) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x1dc) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x3c) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x1e4) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x3d) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x1ec) = uVar6;
                  *(undefined4 *)(local_res20 + 0x3e) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 500) = uVar8;
                  local_res20[0x3f] = *(longlong *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x40) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x204) = uVar9;
                  local_res20[0x41] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x42) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)((longlong)local_res20 + 0x214) = fVar37;
                  *(undefined4 *)(local_res20 + 0x43) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0x21c) = uVar3;
                  *(undefined4 *)(local_res20 + 0x44) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0x224) = 0x3f800000;
                  local_res20[0x45] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x46) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x234) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x47) = 0x3f800000;
                  *(undefined4 *)((longlong)local_res20 + 0x23c) = uVar5;
                  *(undefined4 *)(local_res20 + 0x48) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0x244) = uVar7;
                  *(undefined4 *)(local_res20 + 0x49) = uVar8;
                  *(undefined8 *)((longlong)local_res20 + 0x24c) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x254) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x4b) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x25c) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x264) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)(local_res20 + 0x4d) = fVar37;
                  *(undefined4 *)((longlong)local_res20 + 0x26c) = uVar20;
                  *(undefined4 *)(local_res20 + 0x4e) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x274) = uVar4;
                  *(undefined4 *)(local_res20 + 0x4f) = 0x3f800000;
                  *(undefined8 *)((longlong)local_res20 + 0x27c) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x284) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  local_res20[0x51] = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x52) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x294) = uVar6;
                  *(undefined4 *)(local_res20 + 0x53) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0x29c) = uVar8;
                  plVar33 = local_res20 + 0x54;
                  local_res20 = plVar33;
                }
                uVar22 = (ulonglong)(iVar26 + 1U);
              } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
            }
          }
          else {
            uVar22 = uVar25;
            plVar33 = local_res20;
            if (iVar26 != 0) {
              do {
                iVar26 = (int)uVar22;
                if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
                  lVar14 = param_1[0x46];
                  uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
                  uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
                  uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
                  uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
                  uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
                  uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
                  uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
                  uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
                  uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                  fVar39 = (float)*(ushort *)(param_1[0x47] + uVar22 * 2) * *(float *)(param_1 + 6);
                  uVar22 = (ulonglong)uVar21;
                  *(undefined4 *)plVar33 = uVar20;
                  *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
                  *(undefined4 *)(plVar33 + 1) = uVar4;
                  *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                  plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                  *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4)
                  ;
                  *(float *)((longlong)plVar33 + 0x1c) = fVar39;
                  *(undefined4 *)(plVar33 + 4) = uVar20;
                  *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
                  *(undefined4 *)(plVar33 + 5) = uVar4;
                  *(undefined4 *)((longlong)plVar33 + 0x2c) = 0;
                  plVar33[6] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined8 *)((longlong)plVar33 + 0x3c) = 0;
                  *(undefined4 *)((longlong)plVar33 + 0x44) = uVar5;
                  *(undefined4 *)(plVar33 + 9) = uVar6;
                  *(undefined4 *)((longlong)plVar33 + 0x4c) = uVar7;
                  *(undefined4 *)(plVar33 + 10) = uVar8;
                  *(undefined4 *)((longlong)local_res20 + 0x54) = uVar20;
                  *(undefined4 *)(local_res20 + 0xb) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x5c) = uVar4;
                  *(undefined4 *)(local_res20 + 0xc) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 100) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x6c) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(float *)(local_res20 + 0xe) = fVar39;
                  *(undefined4 *)((longlong)local_res20 + 0x74) = uVar20;
                  *(undefined4 *)(local_res20 + 0xf) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x7c) = uVar4;
                  *(undefined4 *)(local_res20 + 0x10) = 0;
                  *(undefined8 *)((longlong)local_res20 + 0x84) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x8c) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x12) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x13) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                  *(undefined4 *)(local_res20 + 0x14) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                  *(undefined4 *)(local_res20 + 0x15) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0xac) = uVar3;
                  *(undefined4 *)(local_res20 + 0x16) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                  local_res20[0x17] = *(longlong *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(float *)((longlong)local_res20 + 0xc4) = fVar39;
                  *(undefined4 *)(local_res20 + 0x19) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0xcc) = uVar3;
                  *(undefined4 *)(local_res20 + 0x1a) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0xd4) = 0;
                  local_res20[0x1b] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                  *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                  *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                  *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                  *(undefined4 *)((longlong)local_res20 + 0xfc) = uVar20;
                  *(undefined4 *)(local_res20 + 0x20) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x104) = uVar4;
                  *(undefined4 *)(local_res20 + 0x21) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x10c) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x114) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(float *)(local_res20 + 0x23) = fVar39;
                  *(undefined4 *)((longlong)local_res20 + 0x11c) = uVar20;
                  *(undefined4 *)(local_res20 + 0x24) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x124) = uVar4;
                  *(undefined4 *)(local_res20 + 0x25) = 0;
                  *(undefined8 *)((longlong)local_res20 + 300) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x134) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  local_res20[0x27] = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x28) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                  *(undefined4 *)(local_res20 + 0x29) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                  lVar14 = param_1[0x46];
                  uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                  local_res20[0x2a] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                  uVar22 = (ulonglong)uVar21;
                  *(undefined4 *)(local_res20 + 0x2b) =
                       *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x15c) = uVar9;
                  local_res20[0x2c] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)((longlong)local_res20 + 0x16c) = fVar39;
                  *(undefined4 *)(local_res20 + 0x2e) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0x174) = uVar3;
                  *(undefined4 *)(local_res20 + 0x2f) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0x17c) = 0x3f800000;
                  local_res20[0x30] = *(longlong *)(lVar14 + 0x18 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x31) = *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                  *(undefined8 *)((longlong)local_res20 + 0x18c) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x194) = uVar5;
                  *(undefined4 *)(local_res20 + 0x33) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0x19c) = uVar7;
                  *(undefined4 *)(local_res20 + 0x34) = uVar8;
                  *(undefined8 *)((longlong)local_res20 + 0x1a4) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x1ac) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  iVar24 = 1;
                  *(undefined4 *)(local_res20 + 0x36) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x1b4) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x1bc) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)(local_res20 + 0x38) = fVar39;
                  *(undefined4 *)((longlong)local_res20 + 0x1c4) = uVar20;
                  *(undefined4 *)(local_res20 + 0x39) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x1cc) = uVar4;
                  *(undefined4 *)(local_res20 + 0x3a) = 0x3f800000;
                  *(undefined8 *)((longlong)local_res20 + 0x1d4) =
                       *(undefined8 *)(lVar14 + 0x18 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x1dc) =
                       *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x3c) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x1e4) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x3d) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x1ec) = uVar6;
                  *(undefined4 *)(local_res20 + 0x3e) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 500) = uVar8;
                  local_res20[0x3f] = *(longlong *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x40) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x204) = uVar9;
                  local_res20[0x41] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x42) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)((longlong)local_res20 + 0x214) = fVar39;
                  *(undefined4 *)(local_res20 + 0x43) = uVar20;
                  *(undefined4 *)((longlong)local_res20 + 0x21c) = uVar3;
                  *(undefined4 *)(local_res20 + 0x44) = uVar4;
                  *(undefined4 *)((longlong)local_res20 + 0x224) = 0x3f800000;
                  local_res20[0x45] = *(longlong *)(lVar14 + 0x18 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x46) = *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x234) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x47) = 0x3f800000;
                  *(undefined4 *)((longlong)local_res20 + 0x23c) = uVar5;
                  *(undefined4 *)(local_res20 + 0x48) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0x244) = uVar7;
                  *(undefined4 *)(local_res20 + 0x49) = uVar8;
                  *(undefined8 *)((longlong)local_res20 + 0x24c) =
                       *(undefined8 *)(lVar14 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x254) =
                       *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                  *(undefined4 *)(local_res20 + 0x4b) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x25c) =
                       *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x264) =
                       *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                  *(float *)(local_res20 + 0x4d) = fVar39;
                  *(undefined4 *)((longlong)local_res20 + 0x26c) = uVar20;
                  *(undefined4 *)(local_res20 + 0x4e) = uVar3;
                  *(undefined4 *)((longlong)local_res20 + 0x274) = uVar4;
                  *(undefined4 *)(local_res20 + 0x4f) = 0x3f800000;
                  *(undefined8 *)((longlong)local_res20 + 0x27c) =
                       *(undefined8 *)(lVar14 + 0x18 + uVar22 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x284) =
                       *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                  local_res20[0x51] = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x52) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x294) = uVar6;
                  *(undefined4 *)(local_res20 + 0x53) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0x29c) = uVar8;
                  uVar35 = (uint)*(ushort *)(param_1 + 0x49);
                  local_res20 = local_res20 + 0x54;
                  uVar21 = uVar35;
                  iVar28 = 1;
                  if (1 < (int)(*(ushort *)(param_1 + 0x49) - 2)) {
                    do {
                      lVar14 = param_1[0x46];
                      uVar22 = (ulonglong)(uVar35 * iVar26 * 3);
                      fVar36 = (float)iVar24 + fVar37;
                      lVar23 = (longlong)(iVar24 * 3) + uVar22;
                      lVar32 = (longlong)((iVar24 + 2) * 3) + uVar22;
                      *local_res20 = *(longlong *)(lVar14 + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0xc) = uVar9;
                      local_res20[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4)
                      ;
                      *(float *)((longlong)local_res20 + 0x1c) = fVar39;
                      local_res20[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                      *(float *)((longlong)local_res20 + 0x2c) = fVar36;
                      local_res20[6] = *(longlong *)(lVar14 + lVar32 * 4);
                      *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                      *(undefined8 *)((longlong)local_res20 + 0x3c) = 0;
                      *(undefined4 *)((longlong)local_res20 + 0x44) = uVar5;
                      *(undefined4 *)(local_res20 + 9) = uVar6;
                      *(undefined4 *)((longlong)local_res20 + 0x4c) = uVar7;
                      *(undefined4 *)(local_res20 + 10) = uVar8;
                      *(undefined8 *)((longlong)local_res20 + 0x54) =
                           *(undefined8 *)(lVar14 + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x5c) =
                           *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 0xc) = uVar9;
                      *(undefined8 *)((longlong)local_res20 + 100) =
                           *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x6c) =
                           *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                      *(float *)(local_res20 + 0xe) = fVar39;
                      *(undefined8 *)((longlong)local_res20 + 0x74) =
                           *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x7c) =
                           *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                      *(float *)(local_res20 + 0x10) = fVar36;
                      *(undefined8 *)((longlong)local_res20 + 0x84) =
                           *(undefined8 *)(lVar14 + lVar32 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x8c) =
                           *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                      *(undefined4 *)(local_res20 + 0x12) = 0;
                      *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                      *(undefined4 *)(local_res20 + 0x13) = uVar5;
                      *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                      *(undefined4 *)(local_res20 + 0x14) = uVar7;
                      *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                      local_res20[0x15] = *(longlong *)(lVar14 + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4)
                      ;
                      *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                      local_res20[0x17] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 0x18) =
                           *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                      *(float *)((longlong)local_res20 + 0xc4) = fVar39;
                      local_res20[0x19] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                      iVar24 = iVar24 + 1;
                      *(undefined4 *)(local_res20 + 0x1a) =
                           *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                      *(float *)((longlong)local_res20 + 0xd4) = fVar36;
                      local_res20[0x1b] = *(longlong *)(lVar14 + lVar32 * 4);
                      *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 8 + lVar32 * 4)
                      ;
                      *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                      *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                      *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                      *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                      *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                      *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                      *(undefined8 *)((longlong)local_res20 + 0xfc) =
                           *(undefined8 *)(lVar14 + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x104) =
                           *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                      *(undefined4 *)(local_res20 + 0x21) = uVar9;
                      *(undefined8 *)((longlong)local_res20 + 0x10c) =
                           *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x114) =
                           *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                      *(float *)(local_res20 + 0x23) = fVar39;
                      *(undefined8 *)((longlong)local_res20 + 0x11c) =
                           *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x124) =
                           *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                      *(float *)(local_res20 + 0x25) = fVar36;
                      *(undefined8 *)((longlong)local_res20 + 300) =
                           *(undefined8 *)(lVar14 + lVar32 * 4);
                      *(undefined4 *)((longlong)local_res20 + 0x134) =
                           *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                      local_res20[0x27] = 0x3f800000;
                      *(undefined4 *)(local_res20 + 0x28) = uVar5;
                      *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                      *(undefined4 *)(local_res20 + 0x29) = uVar7;
                      *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                      uVar19 = *(ushort *)(param_1 + 0x49);
                      uVar21 = (uint)uVar19;
                      uVar35 = (uint)uVar19;
                      local_res20 = local_res20 + 0x2a;
                      iVar28 = iVar24;
                    } while (iVar24 < (int)(uVar19 - 2));
                  }
                  lVar14 = param_1[0x46];
                  lVar23 = (longlong)(iVar28 * 3) + (ulonglong)(uVar21 * iVar26 * 3);
                  fVar36 = (float)iVar28 + fVar37;
                  *local_res20 = *(longlong *)(lVar14 + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0xc) = uVar9;
                  local_res20[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(float *)((longlong)local_res20 + 0x1c) = fVar39;
                  local_res20[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                  *(float *)((longlong)local_res20 + 0x2c) = fVar36;
                  local_res20[6] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(undefined8 *)((longlong)local_res20 + 0x3c) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x44) = uVar5;
                  *(undefined4 *)(local_res20 + 9) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0x4c) = uVar7;
                  *(undefined4 *)(local_res20 + 10) = uVar8;
                  *(undefined8 *)((longlong)local_res20 + 0x54) =
                       *(undefined8 *)(lVar14 + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x5c) =
                       *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0xc) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 100) =
                       *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x6c) =
                       *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(float *)(local_res20 + 0xe) = fVar39;
                  *(undefined8 *)((longlong)local_res20 + 0x74) =
                       *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x7c) =
                       *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                  *(float *)(local_res20 + 0x10) = fVar36;
                  *(undefined8 *)((longlong)local_res20 + 0x84) =
                       *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x8c) =
                       *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0x12) = 0;
                  *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x13) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                  *(undefined4 *)(local_res20 + 0x14) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                  local_res20[0x15] = *(longlong *)(lVar14 + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                  local_res20[0x17] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(float *)((longlong)local_res20 + 0xc4) = fVar39;
                  local_res20[0x19] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                  *(float *)((longlong)local_res20 + 0xd4) = fVar36;
                  local_res20[0x1b] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                  *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                  *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                  *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                  *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                  *(undefined8 *)((longlong)local_res20 + 0xfc) =
                       *(undefined8 *)(lVar14 + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x104) =
                       *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                  *(undefined4 *)(local_res20 + 0x21) = uVar9;
                  *(undefined8 *)((longlong)local_res20 + 0x10c) =
                       *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x114) =
                       *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(float *)(local_res20 + 0x23) = fVar39;
                  *(undefined8 *)((longlong)local_res20 + 0x11c) =
                       *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x124) =
                       *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                  *(float *)(local_res20 + 0x25) = fVar36;
                  *(undefined8 *)((longlong)local_res20 + 300) =
                       *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)((longlong)local_res20 + 0x134) =
                       *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  local_res20[0x27] = 0x3f800000;
                  *(undefined4 *)(local_res20 + 0x28) = uVar5;
                  *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                  *(undefined4 *)(local_res20 + 0x29) = uVar7;
                  *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                  plVar33 = local_res20 + 0x2a;
                  local_res20 = plVar33;
                }
                uVar22 = (ulonglong)(iVar26 + 1U);
              } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
            }
          }
        }
        else if (uVar19 < 3) {
          plVar33 = local_res20;
          uVar22 = uVar25;
          if (iVar26 != 0) {
            do {
              iVar26 = (int)uVar22;
              if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
                lVar14 = param_1[0x46];
                uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
                uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
                uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
                uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
                uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
                uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
                uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
                uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
                uVar19 = *(ushort *)(param_1[0x48] + uVar22 * 2);
                uVar10 = *(ushort *)(param_1 + 0x49);
                *(undefined4 *)plVar33 = uVar20;
                *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
                *(undefined4 *)(plVar33 + 1) = uVar4;
                *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                fVar39 = (float)(int)-(uint)uVar19;
                uVar21 = (uint)uVar10 * iVar26 * 3;
                plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                uVar22 = (ulonglong)uVar21;
                *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(undefined4 *)((longlong)plVar33 + 0x1c) = 0;
                *(undefined4 *)(plVar33 + 4) = uVar20;
                *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
                *(undefined4 *)(plVar33 + 5) = uVar4;
                *(float *)((longlong)plVar33 + 0x2c) = fVar39;
                plVar33[6] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined8 *)((longlong)plVar33 + 0x3c) = 0;
                *(undefined4 *)((longlong)plVar33 + 0x44) = uVar5;
                *(undefined4 *)(plVar33 + 9) = uVar6;
                *(undefined4 *)((longlong)plVar33 + 0x4c) = uVar7;
                *(undefined4 *)(plVar33 + 10) = uVar8;
                *(undefined4 *)((longlong)local_res20 + 0x54) = uVar20;
                *(undefined4 *)(local_res20 + 0xb) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x5c) = uVar4;
                *(undefined4 *)(local_res20 + 0xc) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 100) = *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x6c) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0xe) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x74) = uVar20;
                *(undefined4 *)(local_res20 + 0xf) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x7c) = uVar4;
                *(float *)(local_res20 + 0x10) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x84) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x8c) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x12) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x13) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                *(undefined4 *)(local_res20 + 0x14) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                *(undefined4 *)(local_res20 + 0x15) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0xac) = uVar3;
                *(undefined4 *)(local_res20 + 0x16) = uVar4;
                *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                local_res20[0x17] = *(longlong *)(lVar14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xc4) = 0;
                *(undefined4 *)(local_res20 + 0x19) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0xcc) = uVar3;
                *(undefined4 *)(local_res20 + 0x1a) = uVar4;
                *(float *)((longlong)local_res20 + 0xd4) = fVar39;
                local_res20[0x1b] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                *(undefined4 *)((longlong)local_res20 + 0xfc) = uVar20;
                *(undefined4 *)(local_res20 + 0x20) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x104) = uVar4;
                *(undefined4 *)(local_res20 + 0x21) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x10c) =
                     *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x114) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x23) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x11c) = uVar20;
                *(undefined4 *)(local_res20 + 0x24) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x124) = uVar4;
                *(float *)(local_res20 + 0x25) = fVar39;
                fVar39 = fVar39 + fVar37;
                *(undefined8 *)((longlong)local_res20 + 300) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x134) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                local_res20[0x27] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x28) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                *(undefined4 *)(local_res20 + 0x29) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                lVar14 = param_1[0x46];
                uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                local_res20[0x2a] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                uVar22 = (ulonglong)uVar21;
                *(undefined4 *)(local_res20 + 0x2b) =
                     *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x15c) = uVar9;
                local_res20[0x2c] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x16c) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x2e) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0x174) = uVar3;
                *(undefined4 *)(local_res20 + 0x2f) = uVar4;
                *(float *)((longlong)local_res20 + 0x17c) = fVar39;
                local_res20[0x30] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x31) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined8 *)((longlong)local_res20 + 0x18c) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x194) = uVar5;
                *(undefined4 *)(local_res20 + 0x33) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0x19c) = uVar7;
                *(undefined4 *)(local_res20 + 0x34) = uVar8;
                *(undefined8 *)((longlong)local_res20 + 0x1a4) =
                     *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1ac) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x36) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x1b4) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1bc) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x38) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0x1c4) = uVar20;
                *(undefined4 *)(local_res20 + 0x39) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x1cc) = uVar4;
                *(float *)(local_res20 + 0x3a) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x1d4) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1dc) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x3c) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x1e4) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x3d) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x1ec) = uVar6;
                *(undefined4 *)(local_res20 + 0x3e) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 500) = uVar8;
                local_res20[0x3f] = *(longlong *)(lVar14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x40) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x204) = uVar9;
                local_res20[0x41] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x42) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x214) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x43) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0x21c) = uVar3;
                *(undefined4 *)(local_res20 + 0x44) = uVar4;
                *(float *)((longlong)local_res20 + 0x224) = fVar39;
                local_res20[0x45] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x46) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x234) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x47) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0x23c) = uVar5;
                *(undefined4 *)(local_res20 + 0x48) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0x244) = uVar7;
                *(undefined4 *)(local_res20 + 0x49) = uVar8;
                *(undefined8 *)((longlong)local_res20 + 0x24c) =
                     *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x254) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x4b) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x25c) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x264) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x4d) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0x26c) = uVar20;
                *(undefined4 *)(local_res20 + 0x4e) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x274) = uVar4;
                *(float *)(local_res20 + 0x4f) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x27c) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x284) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                local_res20[0x51] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x52) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x294) = uVar6;
                *(undefined4 *)(local_res20 + 0x53) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x29c) = uVar8;
                plVar33 = local_res20 + 0x54;
                local_res20 = plVar33;
              }
              uVar22 = (ulonglong)(iVar26 + 1U);
            } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
          }
        }
        else {
          uVar22 = uVar25;
          plVar33 = local_res20;
          if (iVar26 != 0) {
            do {
              iVar26 = (int)uVar22;
              if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
                lVar14 = param_1[0x46];
                uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
                uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
                uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
                uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
                uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
                uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
                uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
                uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
                uVar19 = *(ushort *)(param_1[0x48] + uVar22 * 2);
                uVar10 = *(ushort *)(param_1 + 0x49);
                *(undefined4 *)plVar33 = uVar20;
                *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
                *(undefined4 *)(plVar33 + 1) = uVar4;
                *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                fVar36 = (float)(int)-(uint)uVar19;
                uVar21 = (uint)uVar10 * iVar26 * 3;
                plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                uVar22 = (ulonglong)uVar21;
                *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(undefined4 *)((longlong)plVar33 + 0x1c) = 0;
                *(undefined4 *)(plVar33 + 4) = uVar20;
                *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
                *(undefined4 *)(plVar33 + 5) = uVar4;
                *(float *)((longlong)plVar33 + 0x2c) = fVar36;
                plVar33[6] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined8 *)((longlong)plVar33 + 0x3c) = 0;
                *(undefined4 *)((longlong)plVar33 + 0x44) = uVar5;
                *(undefined4 *)(plVar33 + 9) = uVar6;
                *(undefined4 *)((longlong)plVar33 + 0x4c) = uVar7;
                *(undefined4 *)(plVar33 + 10) = uVar8;
                *(undefined4 *)((longlong)local_res20 + 0x54) = uVar20;
                *(undefined4 *)(local_res20 + 0xb) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x5c) = uVar4;
                *(undefined4 *)(local_res20 + 0xc) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 100) = *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x6c) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0xe) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x74) = uVar20;
                *(undefined4 *)(local_res20 + 0xf) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x7c) = uVar4;
                *(float *)(local_res20 + 0x10) = fVar36;
                *(undefined8 *)((longlong)local_res20 + 0x84) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x8c) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x12) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x13) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                *(undefined4 *)(local_res20 + 0x14) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                *(undefined4 *)(local_res20 + 0x15) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0xac) = uVar3;
                *(undefined4 *)(local_res20 + 0x16) = uVar4;
                *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                local_res20[0x17] = *(longlong *)(lVar14 + uVar22 * 4);
                fVar39 = fVar36 + fVar37;
                *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xc4) = 0;
                *(undefined4 *)(local_res20 + 0x19) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0xcc) = uVar3;
                *(undefined4 *)(local_res20 + 0x1a) = uVar4;
                *(float *)((longlong)local_res20 + 0xd4) = fVar36;
                local_res20[0x1b] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                *(undefined4 *)((longlong)local_res20 + 0xfc) = uVar20;
                *(undefined4 *)(local_res20 + 0x20) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x104) = uVar4;
                *(undefined4 *)(local_res20 + 0x21) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x10c) =
                     *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x114) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x23) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x11c) = uVar20;
                *(undefined4 *)(local_res20 + 0x24) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x124) = uVar4;
                *(float *)(local_res20 + 0x25) = fVar36;
                *(undefined8 *)((longlong)local_res20 + 300) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x134) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                local_res20[0x27] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x28) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                *(undefined4 *)(local_res20 + 0x29) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                lVar14 = param_1[0x46];
                uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                local_res20[0x2a] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                uVar22 = (ulonglong)uVar21;
                *(undefined4 *)(local_res20 + 0x2b) =
                     *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x15c) = uVar9;
                local_res20[0x2c] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x2d) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x16c) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x2e) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0x174) = uVar3;
                *(undefined4 *)(local_res20 + 0x2f) = uVar4;
                *(float *)((longlong)local_res20 + 0x17c) = fVar39;
                local_res20[0x30] = *(longlong *)(lVar14 + 0x18 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x31) = *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                *(undefined8 *)((longlong)local_res20 + 0x18c) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x194) = uVar5;
                *(undefined4 *)(local_res20 + 0x33) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0x19c) = uVar7;
                *(undefined4 *)(local_res20 + 0x34) = uVar8;
                *(undefined8 *)((longlong)local_res20 + 0x1a4) =
                     *(undefined8 *)(lVar14 + uVar22 * 4);
                iVar28 = 1;
                *(undefined4 *)((longlong)local_res20 + 0x1ac) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x36) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x1b4) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1bc) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x38) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0x1c4) = uVar20;
                *(undefined4 *)(local_res20 + 0x39) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x1cc) = uVar4;
                *(float *)(local_res20 + 0x3a) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x1d4) =
                     *(undefined8 *)(lVar14 + 0x18 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1dc) =
                     *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x3c) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x1e4) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x3d) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x1ec) = uVar6;
                *(undefined4 *)(local_res20 + 0x3e) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 500) = uVar8;
                local_res20[0x3f] = *(longlong *)(lVar14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x40) = *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x204) = uVar9;
                local_res20[0x41] = *(longlong *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x42) = *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x214) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x43) = uVar20;
                *(undefined4 *)((longlong)local_res20 + 0x21c) = uVar3;
                *(undefined4 *)(local_res20 + 0x44) = uVar4;
                *(float *)((longlong)local_res20 + 0x224) = fVar39;
                local_res20[0x45] = *(longlong *)(lVar14 + 0x18 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x46) = *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x234) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x47) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0x23c) = uVar5;
                *(undefined4 *)(local_res20 + 0x48) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0x244) = uVar7;
                *(undefined4 *)(local_res20 + 0x49) = uVar8;
                *(undefined8 *)((longlong)local_res20 + 0x24c) =
                     *(undefined8 *)(lVar14 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x254) =
                     *(undefined4 *)(lVar14 + 8 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x4b) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x25c) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x264) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x4d) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0x26c) = uVar20;
                *(undefined4 *)(local_res20 + 0x4e) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x274) = uVar4;
                *(float *)(local_res20 + 0x4f) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x27c) =
                     *(undefined8 *)(lVar14 + 0x18 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x284) =
                     *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                local_res20[0x51] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x52) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x294) = uVar6;
                *(undefined4 *)(local_res20 + 0x53) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x29c) = uVar8;
                uVar35 = (uint)*(ushort *)(param_1 + 0x49);
                local_res20 = local_res20 + 0x54;
                iVar24 = iVar28;
                uVar21 = uVar35;
                if (1 < (int)(*(ushort *)(param_1 + 0x49) - 2)) {
                  do {
                    lVar14 = param_1[0x46];
                    iVar24 = iVar28 + 1;
                    uVar22 = (ulonglong)(uVar35 * iVar26 * 3);
                    lVar23 = (longlong)(iVar28 * 3) + uVar22;
                    lVar32 = (longlong)((iVar28 + 2) * 3) + uVar22;
                    fVar39 = (float)iVar24;
                    fVar38 = (float)iVar28 + fVar36 + fVar37;
                    *local_res20 = *(longlong *)(lVar14 + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0xc) = uVar9;
                    local_res20[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                    *(float *)((longlong)local_res20 + 0x1c) = fVar39;
                    local_res20[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                    *(float *)((longlong)local_res20 + 0x2c) = fVar38;
                    local_res20[6] = *(longlong *)(lVar14 + lVar32 * 4);
                    *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                    *(undefined8 *)((longlong)local_res20 + 0x3c) = 0;
                    *(undefined4 *)((longlong)local_res20 + 0x44) = uVar5;
                    *(undefined4 *)(local_res20 + 9) = uVar6;
                    *(undefined4 *)((longlong)local_res20 + 0x4c) = uVar7;
                    *(undefined4 *)(local_res20 + 10) = uVar8;
                    *(undefined8 *)((longlong)local_res20 + 0x54) =
                         *(undefined8 *)(lVar14 + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x5c) =
                         *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 0xc) = uVar9;
                    *(undefined8 *)((longlong)local_res20 + 100) =
                         *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x6c) =
                         *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                    *(float *)(local_res20 + 0xe) = fVar39;
                    *(undefined8 *)((longlong)local_res20 + 0x74) =
                         *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x7c) =
                         *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                    *(float *)(local_res20 + 0x10) = fVar38;
                    *(undefined8 *)((longlong)local_res20 + 0x84) =
                         *(undefined8 *)(lVar14 + lVar32 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x8c) =
                         *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                    *(undefined4 *)(local_res20 + 0x12) = 0;
                    *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                    *(undefined4 *)(local_res20 + 0x13) = uVar5;
                    *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                    *(undefined4 *)(local_res20 + 0x14) = uVar7;
                    *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                    local_res20[0x15] = *(longlong *)(lVar14 + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                    local_res20[0x17] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 0x18) =
                         *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                    *(float *)((longlong)local_res20 + 0xc4) = fVar39;
                    local_res20[0x19] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                    *(float *)((longlong)local_res20 + 0xd4) = fVar38;
                    local_res20[0x1b] = *(longlong *)(lVar14 + lVar32 * 4);
                    *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                    *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                    *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                    *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                    *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                    *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                    *(undefined8 *)((longlong)local_res20 + 0xfc) =
                         *(undefined8 *)(lVar14 + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x104) =
                         *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                    *(undefined4 *)(local_res20 + 0x21) = uVar9;
                    *(undefined8 *)((longlong)local_res20 + 0x10c) =
                         *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x114) =
                         *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                    *(float *)(local_res20 + 0x23) = fVar39;
                    *(undefined8 *)((longlong)local_res20 + 0x11c) =
                         *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x124) =
                         *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                    *(float *)(local_res20 + 0x25) = fVar38;
                    *(undefined8 *)((longlong)local_res20 + 300) =
                         *(undefined8 *)(lVar14 + lVar32 * 4);
                    *(undefined4 *)((longlong)local_res20 + 0x134) =
                         *(undefined4 *)(lVar14 + 8 + lVar32 * 4);
                    local_res20[0x27] = 0x3f800000;
                    *(undefined4 *)(local_res20 + 0x28) = uVar5;
                    *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                    *(undefined4 *)(local_res20 + 0x29) = uVar7;
                    *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                    uVar19 = *(ushort *)(param_1 + 0x49);
                    uVar21 = (uint)uVar19;
                    uVar35 = (uint)uVar19;
                    local_res20 = local_res20 + 0x2a;
                    iVar28 = iVar24;
                  } while (iVar24 < (int)(uVar19 - 2));
                }
                lVar14 = param_1[0x46];
                fVar39 = (float)(iVar24 + 1);
                lVar23 = (longlong)(iVar24 * 3) + (ulonglong)(uVar21 * iVar26 * 3);
                *local_res20 = *(longlong *)(lVar14 + lVar23 * 4);
                *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xc) = uVar9;
                fVar36 = (float)iVar24 + fVar36 + fVar37;
                local_res20[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(float *)((longlong)local_res20 + 0x1c) = fVar39;
                local_res20[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                *(float *)((longlong)local_res20 + 0x2c) = fVar36;
                local_res20[6] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(undefined8 *)((longlong)local_res20 + 0x3c) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x44) = uVar5;
                *(undefined4 *)(local_res20 + 9) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0x4c) = uVar7;
                *(undefined4 *)(local_res20 + 10) = uVar8;
                *(undefined8 *)((longlong)local_res20 + 0x54) = *(undefined8 *)(lVar14 + lVar23 * 4)
                ;
                *(undefined4 *)((longlong)local_res20 + 0x5c) =
                     *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0xc) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 100) =
                     *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x6c) =
                     *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(float *)(local_res20 + 0xe) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x74) =
                     *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x7c) =
                     *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                *(float *)(local_res20 + 0x10) = fVar36;
                *(undefined8 *)((longlong)local_res20 + 0x84) =
                     *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x8c) =
                     *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0x12) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x94) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x13) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x9c) = uVar6;
                *(undefined4 *)(local_res20 + 0x14) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0xa4) = uVar8;
                local_res20[0x15] = *(longlong *)(lVar14 + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xb4) = uVar9;
                local_res20[0x17] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(float *)((longlong)local_res20 + 0xc4) = fVar39;
                local_res20[0x19] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                *(float *)((longlong)local_res20 + 0xd4) = fVar36;
                local_res20[0x1b] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xe4) = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x1d) = 0x3f800000;
                *(undefined4 *)((longlong)local_res20 + 0xec) = uVar5;
                *(undefined4 *)(local_res20 + 0x1e) = uVar6;
                *(undefined4 *)((longlong)local_res20 + 0xf4) = uVar7;
                *(undefined4 *)(local_res20 + 0x1f) = uVar8;
                *(undefined8 *)((longlong)local_res20 + 0xfc) = *(undefined8 *)(lVar14 + lVar23 * 4)
                ;
                *(undefined4 *)((longlong)local_res20 + 0x104) =
                     *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                *(undefined4 *)(local_res20 + 0x21) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x10c) =
                     *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x114) =
                     *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(float *)(local_res20 + 0x23) = fVar39;
                *(undefined8 *)((longlong)local_res20 + 0x11c) =
                     *(undefined8 *)(lVar14 + -0xc + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x124) =
                     *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                *(float *)(local_res20 + 0x25) = fVar36;
                *(undefined8 *)((longlong)local_res20 + 300) =
                     *(undefined8 *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x134) =
                     *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                local_res20[0x27] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x28) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x144) = uVar6;
                *(undefined4 *)(local_res20 + 0x29) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x14c) = uVar8;
                plVar33 = local_res20 + 0x2a;
                local_res20 = plVar33;
              }
              uVar22 = (ulonglong)(iVar26 + 1U);
            } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
          }
        }
      }
      else if ((*(uint *)(param_1 + 4) & 0x80000) == 0) {
        if (uVar19 < 3) {
          plVar33 = local_res20;
          uVar22 = uVar25;
          if (iVar26 != 0) {
            do {
              iVar26 = (int)uVar22;
              if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
                lVar14 = param_1[0x46];
                uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
                uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
                uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
                uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
                uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
                uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
                uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
                uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
                uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                fVar37 = (float)*(ushort *)(param_1[0x47] + uVar22 * 2) * *(float *)(param_1 + 6);
                *(undefined4 *)plVar33 = uVar20;
                *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
                *(undefined4 *)(plVar33 + 1) = uVar4;
                *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(float *)((longlong)plVar33 + 0x1c) = fVar37;
                *(undefined4 *)(plVar33 + 4) = uVar20;
                *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
                *(undefined4 *)(plVar33 + 5) = uVar4;
                *(undefined4 *)((longlong)plVar33 + 0x2c) = 0;
                plVar33[6] = *(longlong *)(lVar14 + 0xc + (ulonglong)uVar21 * 4);
                *(undefined4 *)(plVar33 + 7) =
                     *(undefined4 *)(lVar14 + 0x14 + (ulonglong)uVar21 * 4);
                *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
                *(undefined4 *)(plVar33 + 8) = uVar6;
                *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
                *(undefined4 *)(plVar33 + 9) = uVar8;
                lVar14 = param_1[0x46];
                uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                *(undefined8 *)((longlong)local_res20 + 0x4c) =
                     *(undefined8 *)(lVar14 + (ulonglong)uVar21 * 4);
                uVar22 = (ulonglong)uVar21;
                *(undefined4 *)((longlong)local_res20 + 0x54) =
                     *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(undefined4 *)(local_res20 + 0xb) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x5c) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 100) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(float *)(local_res20 + 0xd) = fVar37;
                *(undefined4 *)((longlong)local_res20 + 0x6c) = uVar20;
                *(undefined4 *)(local_res20 + 0xe) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x74) = uVar4;
                *(undefined4 *)(local_res20 + 0xf) = 0x3f800000;
                *(undefined8 *)((longlong)local_res20 + 0x7c) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x84) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x11) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x8c) = uVar6;
                *(undefined4 *)(local_res20 + 0x12) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x94) = uVar8;
                plVar33 = local_res20 + 0x13;
                local_res20 = plVar33;
              }
              uVar22 = (ulonglong)(iVar26 + 1U);
            } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
          }
        }
        else {
          plVar33 = local_res20;
          uVar22 = uVar25;
          if (iVar26 != 0) {
            do {
              iVar26 = (int)uVar22;
              if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
                lVar14 = param_1[0x46];
                iVar24 = 1;
                uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
                uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
                uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
                uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
                uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
                uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
                uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
                uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
                uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                fVar39 = (float)*(ushort *)(param_1[0x47] + uVar22 * 2) * *(float *)(param_1 + 6);
                *(undefined4 *)plVar33 = uVar20;
                *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
                *(undefined4 *)(plVar33 + 1) = uVar4;
                *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
                *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(float *)((longlong)plVar33 + 0x1c) = fVar39;
                *(undefined4 *)(plVar33 + 4) = uVar20;
                *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
                *(undefined4 *)(plVar33 + 5) = uVar4;
                *(undefined4 *)((longlong)plVar33 + 0x2c) = 0;
                plVar33[6] = *(longlong *)(lVar14 + 0xc + (ulonglong)uVar21 * 4);
                *(undefined4 *)(plVar33 + 7) =
                     *(undefined4 *)(lVar14 + 0x14 + (ulonglong)uVar21 * 4);
                *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
                *(undefined4 *)(plVar33 + 8) = uVar6;
                *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
                *(undefined4 *)(plVar33 + 9) = uVar8;
                lVar14 = param_1[0x46];
                uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
                *(undefined8 *)((longlong)local_res20 + 0x4c) =
                     *(undefined8 *)(lVar14 + (ulonglong)uVar21 * 4);
                uVar22 = (ulonglong)uVar21;
                *(undefined4 *)((longlong)local_res20 + 0x54) =
                     *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
                *(undefined4 *)(local_res20 + 0xb) = uVar9;
                *(undefined8 *)((longlong)local_res20 + 0x5c) =
                     *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 100) =
                     *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
                *(float *)(local_res20 + 0xd) = fVar39;
                *(undefined4 *)((longlong)local_res20 + 0x6c) = uVar20;
                *(undefined4 *)(local_res20 + 0xe) = uVar3;
                *(undefined4 *)((longlong)local_res20 + 0x74) = uVar4;
                *(undefined4 *)(local_res20 + 0xf) = 0x3f800000;
                *(undefined8 *)((longlong)local_res20 + 0x7c) =
                     *(undefined8 *)(lVar14 + 0x18 + uVar22 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x84) =
                     *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
                *(undefined4 *)(local_res20 + 0x11) = uVar5;
                *(undefined4 *)((longlong)local_res20 + 0x8c) = uVar6;
                *(undefined4 *)(local_res20 + 0x12) = uVar7;
                *(undefined4 *)((longlong)local_res20 + 0x94) = uVar8;
                plVar33 = local_res20 + 0x13;
                uVar35 = (uint)*(ushort *)(param_1 + 0x49);
                uVar21 = uVar35;
                iVar28 = 1;
                if (1 < (int)(*(ushort *)(param_1 + 0x49) - 2)) {
                  do {
                    lVar14 = param_1[0x46];
                    uVar22 = (ulonglong)(uVar35 * iVar26 * 3);
                    lVar23 = (longlong)(iVar28 * 3) + uVar22;
                    *plVar33 = *(longlong *)(lVar14 + lVar23 * 4);
                    *(undefined4 *)(plVar33 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                    *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                    plVar33[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                    *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                    *(float *)((longlong)plVar33 + 0x1c) = fVar39;
                    plVar33[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                    *(undefined4 *)(plVar33 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                    iVar24 = iVar28 + 1;
                    lVar23 = (longlong)((iVar28 + 2) * 3) + uVar22;
                    *(float *)((longlong)plVar33 + 0x2c) = (float)iVar28 + fVar37;
                    plVar33[6] = *(longlong *)(lVar14 + lVar23 * 4);
                    *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                    *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
                    *(undefined4 *)(plVar33 + 8) = uVar6;
                    *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
                    *(undefined4 *)(plVar33 + 9) = uVar8;
                    uVar19 = *(ushort *)(param_1 + 0x49);
                    uVar21 = (uint)uVar19;
                    uVar35 = (uint)uVar19;
                    plVar33 = (longlong *)((longlong)plVar33 + 0x4c);
                    iVar28 = iVar24;
                  } while (iVar24 < (int)(uVar19 - 2));
                }
                lVar14 = param_1[0x46];
                lVar23 = (longlong)(iVar24 * 3) + (ulonglong)(uVar21 * iVar26 * 3);
                *plVar33 = *(longlong *)(lVar14 + lVar23 * 4);
                *(undefined4 *)(plVar33 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                plVar33[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(float *)((longlong)plVar33 + 0x1c) = fVar39;
                plVar33[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                *(undefined4 *)(plVar33 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                *(float *)((longlong)plVar33 + 0x2c) = (float)iVar24 + fVar37;
                plVar33[6] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                uVar20 = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
                *(undefined4 *)(plVar33 + 8) = uVar6;
                *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
                *(undefined4 *)(plVar33 + 9) = uVar8;
                *(undefined4 *)(plVar33 + 7) = uVar20;
                plVar33 = (longlong *)((longlong)plVar33 + 0x4c);
                local_res20 = plVar33;
              }
              uVar22 = (ulonglong)(iVar26 + 1U);
            } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
          }
        }
      }
      else if (uVar19 < 3) {
        plVar33 = local_res20;
        uVar22 = uVar25;
        if (iVar26 != 0) {
          do {
            iVar26 = (int)uVar22;
            if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
              lVar14 = param_1[0x46];
              uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
              uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
              uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
              uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
              uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
              uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
              uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
              uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
              uVar19 = *(ushort *)(param_1[0x48] + uVar22 * 2);
              uVar10 = *(ushort *)(param_1 + 0x49);
              *(undefined4 *)plVar33 = uVar20;
              *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
              *(undefined4 *)(plVar33 + 1) = uVar4;
              *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
              fVar39 = (float)(int)-(uint)uVar19;
              uVar21 = (uint)uVar10 * iVar26 * 3;
              plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
              *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
              *(undefined4 *)((longlong)plVar33 + 0x1c) = 0;
              *(undefined4 *)(plVar33 + 4) = uVar20;
              *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
              *(undefined4 *)(plVar33 + 5) = uVar4;
              *(float *)((longlong)plVar33 + 0x2c) = fVar39;
              plVar33[6] = *(longlong *)(lVar14 + 0xc + (ulonglong)uVar21 * 4);
              *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 0x14 + (ulonglong)uVar21 * 4);
              *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
              *(undefined4 *)(plVar33 + 8) = uVar6;
              *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
              *(undefined4 *)(plVar33 + 9) = uVar8;
              lVar14 = param_1[0x46];
              uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
              *(undefined8 *)((longlong)local_res20 + 0x4c) =
                   *(undefined8 *)(lVar14 + (ulonglong)uVar21 * 4);
              uVar22 = (ulonglong)uVar21;
              *(undefined4 *)((longlong)local_res20 + 0x54) =
                   *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
              *(undefined4 *)(local_res20 + 0xb) = uVar9;
              *(undefined8 *)((longlong)local_res20 + 0x5c) =
                   *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 100) =
                   *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
              *(undefined4 *)(local_res20 + 0xd) = 0x3f800000;
              *(undefined4 *)((longlong)local_res20 + 0x6c) = uVar20;
              *(undefined4 *)(local_res20 + 0xe) = uVar3;
              *(undefined4 *)((longlong)local_res20 + 0x74) = uVar4;
              *(float *)(local_res20 + 0xf) = fVar39 + fVar37;
              *(undefined8 *)((longlong)local_res20 + 0x7c) =
                   *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x84) =
                   *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
              *(undefined4 *)(local_res20 + 0x11) = uVar5;
              *(undefined4 *)((longlong)local_res20 + 0x8c) = uVar6;
              *(undefined4 *)(local_res20 + 0x12) = uVar7;
              *(undefined4 *)((longlong)local_res20 + 0x94) = uVar8;
              plVar33 = local_res20 + 0x13;
              local_res20 = plVar33;
            }
            uVar22 = (ulonglong)(iVar26 + 1U);
          } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
        }
      }
      else {
        uVar22 = uVar25;
        plVar33 = local_res20;
        if (iVar26 != 0) {
          do {
            iVar26 = (int)uVar22;
            if (*(float *)(param_1[0x4c] + uVar22 * 4) != 0.0) {
              lVar14 = param_1[0x46];
              uVar20 = *(undefined4 *)(param_1[0x56] + uVar22 * 4);
              uVar3 = *(undefined4 *)(param_1[0x57] + uVar22 * 4);
              uVar4 = *(undefined4 *)(param_1[0x58] + uVar22 * 4);
              uVar5 = *(undefined4 *)(param_1[0x5f] + uVar22 * 4);
              uVar6 = *(undefined4 *)(param_1[0x60] + uVar22 * 4);
              uVar7 = *(undefined4 *)(param_1[0x61] + uVar22 * 4);
              uVar8 = *(undefined4 *)(param_1[0x62] + uVar22 * 4);
              uVar9 = *(undefined4 *)(param_1[0x4e] + uVar22 * 4);
              uVar19 = *(ushort *)(param_1[0x48] + uVar22 * 2);
              uVar10 = *(ushort *)(param_1 + 0x49);
              *(undefined4 *)plVar33 = uVar20;
              *(undefined4 *)((longlong)plVar33 + 4) = uVar3;
              *(undefined4 *)(plVar33 + 1) = uVar4;
              *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
              fVar39 = (float)(int)-(uint)uVar19;
              uVar21 = (uint)uVar10 * iVar26 * 3;
              plVar33[2] = *(longlong *)(lVar14 + (ulonglong)uVar21 * 4);
              *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
              *(undefined4 *)((longlong)plVar33 + 0x1c) = 0;
              *(undefined4 *)(plVar33 + 4) = uVar20;
              *(undefined4 *)((longlong)plVar33 + 0x24) = uVar3;
              *(undefined4 *)(plVar33 + 5) = uVar4;
              *(float *)((longlong)plVar33 + 0x2c) = fVar39;
              plVar33[6] = *(longlong *)(lVar14 + 0xc + (ulonglong)uVar21 * 4);
              *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 0x14 + (ulonglong)uVar21 * 4);
              *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
              *(undefined4 *)(plVar33 + 8) = uVar6;
              *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
              *(undefined4 *)(plVar33 + 9) = uVar8;
              lVar14 = param_1[0x46];
              uVar21 = (uint)*(ushort *)(param_1 + 0x49) * iVar26 * 3;
              *(undefined8 *)((longlong)local_res20 + 0x4c) =
                   *(undefined8 *)(lVar14 + (ulonglong)uVar21 * 4);
              uVar22 = (ulonglong)uVar21;
              *(undefined4 *)((longlong)local_res20 + 0x54) =
                   *(undefined4 *)(lVar14 + 8 + (ulonglong)uVar21 * 4);
              *(undefined4 *)(local_res20 + 0xb) = uVar9;
              *(undefined8 *)((longlong)local_res20 + 0x5c) =
                   *(undefined8 *)(lVar14 + 0xc + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 100) =
                   *(undefined4 *)(lVar14 + 0x14 + uVar22 * 4);
              *(undefined4 *)(local_res20 + 0xd) = 0x3f800000;
              *(undefined4 *)((longlong)local_res20 + 0x6c) = uVar20;
              *(undefined4 *)(local_res20 + 0xe) = uVar3;
              *(undefined4 *)((longlong)local_res20 + 0x74) = uVar4;
              *(float *)(local_res20 + 0xf) = fVar39 + fVar37;
              *(undefined8 *)((longlong)local_res20 + 0x7c) =
                   *(undefined8 *)(lVar14 + 0x18 + uVar22 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x84) =
                   *(undefined4 *)(lVar14 + 0x20 + uVar22 * 4);
              *(undefined4 *)(local_res20 + 0x11) = uVar5;
              *(undefined4 *)((longlong)local_res20 + 0x8c) = uVar6;
              *(undefined4 *)(local_res20 + 0x12) = uVar7;
              *(undefined4 *)((longlong)local_res20 + 0x94) = uVar8;
              plVar33 = local_res20 + 0x13;
              uVar35 = (uint)*(ushort *)(param_1 + 0x49);
              iVar24 = 1;
              uVar21 = uVar35;
              iVar28 = 1;
              if (1 < (int)(*(ushort *)(param_1 + 0x49) - 2)) {
                do {
                  lVar14 = param_1[0x46];
                  iVar24 = iVar28 + 1;
                  uVar22 = (ulonglong)(uVar35 * iVar26 * 3);
                  lVar23 = (longlong)(iVar28 * 3) + uVar22;
                  *plVar33 = *(longlong *)(lVar14 + lVar23 * 4);
                  *(undefined4 *)(plVar33 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                  *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
                  plVar33[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
                  *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
                  *(float *)((longlong)plVar33 + 0x1c) = (float)iVar24;
                  plVar33[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
                  *(undefined4 *)(plVar33 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
                  lVar23 = (longlong)((iVar28 + 2) * 3) + uVar22;
                  *(float *)((longlong)plVar33 + 0x2c) = (float)iVar28 + fVar39 + fVar37;
                  plVar33[6] = *(longlong *)(lVar14 + lVar23 * 4);
                  *(undefined4 *)(plVar33 + 7) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
                  *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
                  *(undefined4 *)(plVar33 + 8) = uVar6;
                  *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
                  *(undefined4 *)(plVar33 + 9) = uVar8;
                  uVar19 = *(ushort *)(param_1 + 0x49);
                  uVar21 = (uint)uVar19;
                  uVar35 = (uint)uVar19;
                  plVar33 = (longlong *)((longlong)plVar33 + 0x4c);
                  iVar28 = iVar24;
                } while (iVar24 < (int)(uVar19 - 2));
              }
              lVar14 = param_1[0x46];
              lVar23 = (longlong)(iVar24 * 3) + (ulonglong)(uVar21 * iVar26 * 3);
              *plVar33 = *(longlong *)(lVar14 + lVar23 * 4);
              *(undefined4 *)(plVar33 + 1) = *(undefined4 *)(lVar14 + 8 + lVar23 * 4);
              *(undefined4 *)((longlong)plVar33 + 0xc) = uVar9;
              plVar33[2] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
              *(undefined4 *)(plVar33 + 3) = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
              *(float *)((longlong)plVar33 + 0x1c) = (float)(iVar24 + 1);
              plVar33[4] = *(longlong *)(lVar14 + -0xc + lVar23 * 4);
              *(undefined4 *)(plVar33 + 5) = *(undefined4 *)(lVar14 + -4 + lVar23 * 4);
              *(float *)((longlong)plVar33 + 0x2c) = (float)iVar24 + fVar39 + fVar37;
              plVar33[6] = *(longlong *)(lVar14 + 0xc + lVar23 * 4);
              uVar20 = *(undefined4 *)(lVar14 + 0x14 + lVar23 * 4);
              *(undefined4 *)((longlong)plVar33 + 0x3c) = uVar5;
              *(undefined4 *)(plVar33 + 8) = uVar6;
              *(undefined4 *)((longlong)plVar33 + 0x44) = uVar7;
              *(undefined4 *)(plVar33 + 9) = uVar8;
              *(undefined4 *)(plVar33 + 7) = uVar20;
              plVar33 = (longlong *)((longlong)plVar33 + 0x4c);
              local_res20 = plVar33;
            }
            uVar22 = (ulonglong)(iVar26 + 1U);
          } while (iVar26 + 1U < *(uint *)(param_1 + 0x68));
        }
      }
      FUN_1402614b0(param_1[0x40]);
    }
  }
  lVar14 = param_1[0x3f];
  if (lVar14 != 0) {
    cVar13 = FUN_140229750(param_1);
    iVar26 = *(int *)((longlong)param_1 + 0x344) * 4;
    if (cVar13 != '\0') {
      iVar26 = *(int *)((longlong)param_1 + 0x344);
    }
    cVar13 = FUN_140261480(lVar14,&local_res20,iVar26);
    if (cVar13 != '\0') {
      cVar13 = FUN_140229750(param_1);
      iVar26 = (int)param_1[0x68];
      if (cVar13 == '\0') {
        if ((uVar31 & 0x3000000) == 0) {
          plVar33 = local_res20;
          if (iVar26 != 0) {
            do {
              if (*(float *)(param_1[0x4c] + uVar25 * 4) != 0.0) {
                *(undefined4 *)plVar33 = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 4) =
                     *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                *(undefined8 *)((longlong)local_res20 + 0xc) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x14) =
                     *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1c) =
                     *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x24) =
                     *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x2c) =
                     *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x34) =
                     *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x3c) =
                     *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                local_res20[8] = 0x3f80000000000000;
                *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x4c) =
                     *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 10) = *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x54) =
                     *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x5c) =
                     *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 100) =
                     *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xd) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x6c) =
                     *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xe) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                *(undefined8 *)((longlong)local_res20 + 0x74) = 0x3f8000003f800000;
                *(undefined4 *)((longlong)local_res20 + 0x7c) =
                     *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x10) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x84) =
                     *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x11) = *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x8c) =
                     *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x12) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x94) =
                     *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x13) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x9c) =
                     *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x14) = *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xa4) =
                     *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                local_res20[0x15] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xb4) =
                     *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x17) = *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xbc) =
                     *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xc4) =
                     *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x19) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xcc) =
                     *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                plVar33 = local_res20 + 0x1a;
                local_res20 = plVar33;
              }
              uVar31 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar31;
            } while (uVar31 < *(uint *)(param_1 + 0x68));
          }
        }
        else {
          plVar33 = local_res20;
          if (iVar26 != 0) {
            do {
              if (*(float *)(param_1[0x4c] + uVar25 * 4) != 0.0) {
                *(undefined4 *)plVar33 = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 4) =
                     *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                *(undefined8 *)((longlong)local_res20 + 0xc) = 0;
                *(undefined4 *)((longlong)local_res20 + 0x14) =
                     *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x1c) =
                     *(undefined4 *)(param_1[0x59] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x5a] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x24) =
                     *(undefined4 *)(param_1[0x5b] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x4d] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x2c) =
                     *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x34) =
                     *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x3c) =
                     *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 8) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x44) =
                     *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 9) = *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x4c) =
                     *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                local_res20[10] = 0x3f80000000000000;
                *(undefined4 *)(local_res20 + 0xb) = *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x5c) =
                     *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xc) = *(undefined4 *)(param_1[0x59] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 100) =
                     *(undefined4 *)(param_1[0x5a] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xd) = *(undefined4 *)(param_1[0x5b] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x6c) =
                     *(undefined4 *)(param_1[0x4d] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xe) = *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x74) =
                     *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0xf) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x7c) =
                     *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x10) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x84) =
                     *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x11) = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x8c) =
                     *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x12) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                *(undefined8 *)((longlong)local_res20 + 0x94) = 0x3f8000003f800000;
                *(undefined4 *)((longlong)local_res20 + 0x9c) =
                     *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x14) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xa4) =
                     *(undefined4 *)(param_1[0x59] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x15) = *(undefined4 *)(param_1[0x5a] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xac) =
                     *(undefined4 *)(param_1[0x5b] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x16) = *(undefined4 *)(param_1[0x4d] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xb4) =
                     *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x17) = *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xbc) =
                     *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x18) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xc4) =
                     *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x19) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xcc) =
                     *(undefined4 *)(param_1[0x56] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x1a) = *(undefined4 *)(param_1[0x57] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xd4) =
                     *(undefined4 *)(param_1[0x58] + uVar25 * 4);
                local_res20[0x1b] = 0x3f800000;
                *(undefined4 *)(local_res20 + 0x1c) = *(undefined4 *)(param_1[0x52] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xe4) =
                     *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x1d) = *(undefined4 *)(param_1[0x59] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xec) =
                     *(undefined4 *)(param_1[0x5a] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x1e) = *(undefined4 *)(param_1[0x5b] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xf4) =
                     *(undefined4 *)(param_1[0x4d] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x1f) = *(undefined4 *)(param_1[0x50] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0xfc) =
                     *(undefined4 *)(param_1[0x51] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x20) = *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x104) =
                     *(undefined4 *)(param_1[0x60] + uVar25 * 4);
                *(undefined4 *)(local_res20 + 0x21) = *(undefined4 *)(param_1[0x61] + uVar25 * 4);
                *(undefined4 *)((longlong)local_res20 + 0x10c) =
                     *(undefined4 *)(param_1[0x62] + uVar25 * 4);
                plVar33 = local_res20 + 0x22;
                local_res20 = plVar33;
              }
              uVar31 = (int)uVar25 + 1;
              uVar25 = (ulonglong)uVar31;
            } while (uVar31 < *(uint *)(param_1 + 0x68));
          }
        }
      }
      else if ((uVar31 & 0x3000000) == 0) {
        plVar33 = local_res20;
        if (iVar26 != 0) {
          do {
            if (*(float *)(param_1[0x4c] + uVar25 * 4) != 0.0) {
              *(undefined4 *)plVar33 = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 4) =
                   *(undefined4 *)(param_1[0x57] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xc) =
                   *(undefined4 *)(param_1[0x50] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x51] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x14) =
                   *(undefined4 *)(param_1[0x52] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x1c) =
                   *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x24) =
                   *(undefined4 *)(param_1[0x61] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
              plVar33 = (longlong *)((longlong)local_res20 + 0x2c);
              local_res20 = plVar33;
            }
            uVar31 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar31;
          } while (uVar31 < *(uint *)(param_1 + 0x68));
        }
      }
      else {
        plVar33 = local_res20;
        if (iVar26 != 0) {
          do {
            if (*(float *)(param_1[0x4c] + uVar25 * 4) != 0.0) {
              *(undefined4 *)plVar33 = *(undefined4 *)(param_1[0x56] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 4) =
                   *(undefined4 *)(param_1[0x57] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 1) = *(undefined4 *)(param_1[0x58] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0xc) =
                   *(undefined4 *)(param_1[0x50] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 2) = *(undefined4 *)(param_1[0x51] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x14) =
                   *(undefined4 *)(param_1[0x52] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 3) = *(undefined4 *)(param_1[0x4e] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x1c) =
                   *(undefined4 *)(param_1[0x59] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 4) = *(undefined4 *)(param_1[0x5a] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x24) =
                   *(undefined4 *)(param_1[0x5b] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 5) = *(undefined4 *)(param_1[0x4d] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x2c) =
                   *(undefined4 *)(param_1[0x5f] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 6) = *(undefined4 *)(param_1[0x60] + uVar25 * 4);
              *(undefined4 *)((longlong)local_res20 + 0x34) =
                   *(undefined4 *)(param_1[0x61] + uVar25 * 4);
              *(undefined4 *)(local_res20 + 7) = *(undefined4 *)(param_1[0x62] + uVar25 * 4);
              plVar33 = (longlong *)((longlong)local_res20 + 0x3c);
              local_res20 = plVar33;
            }
            uVar31 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar31;
          } while (uVar31 < *(uint *)(param_1 + 0x68));
        }
      }
      FUN_1402614b0(param_1[0x3f]);
    }
  }
LAB_140236380:
  if ((param_1[0x90] != param_1[0x91]) || (param_1[0x93] != param_1[0x94])) {
    bVar12 = *(byte *)((longlong)param_1 + 0x3f7) | 1;
    if (param_3 != '\0') {
      bVar12 = *(byte *)((longlong)param_1 + 0x3f7);
    }
    puVar16 = (undefined8 *)FUN_1400190b0(param_1 + 0x90);
    puVar17 = (undefined8 *)FUN_140031a50(param_1 + 0x90);
    for (; puVar16 != puVar17; puVar16 = puVar16 + 2) {
      FUN_14022a580(param_1,*puVar16,puVar16[1],param_1 + 0x4b);
      FUN_140229810(puVar16[1]);
      *(byte *)(puVar16[1] + 0x3f7) = bVar12;
      FUN_1402308a0(puVar16[1]);
      lVar14 = *(longlong *)puVar16[1];
      plVar33 = (longlong *)(lVar14 + 0x30);
      *plVar33 = *plVar33 + -0x40;
      *(undefined1 *)(lVar14 + 0x1ca) = 1;
    }
    plVar18 = (longlong *)FUN_1400190b0(param_1 + 0x93);
    plVar33 = (longlong *)FUN_140031a50(param_1 + 0x93);
    local_e0 = plVar33;
    if (plVar18 != plVar33) {
      do {
        puVar17 = (undefined8 *)plVar18[1];
        puVar16 = (undefined8 *)plVar18[2];
        if (puVar17 != puVar16) {
          do {
            local_res20 = (longlong *)*puVar17;
            FUN_14022a580(param_1,*plVar18,local_res20,param_1 + 0x4b);
            *(byte *)((longlong)local_res20 + 0x3f7) = bVar12;
            if ((*(int *)(*plVar18 + 0x60) == 2) && ((int)local_res20[0x8f] != -1)) {
              FUN_14022a360(param_1,(int)local_res20[0x8f],local_res20);
            }
            FUN_140229760(local_res20);
            FUN_1402308a0(local_res20);
            lVar14 = *local_res20;
            *(undefined1 *)(lVar14 + 0x1ca) = 1;
            plVar33 = (longlong *)(lVar14 + 0x30);
            *plVar33 = *plVar33 + -0x40;
            cVar13 = FUN_14022c310(local_res20);
            if (cVar13 == '\0') {
              if (((*(int *)(*plVar18 + 0x60) == 2) && ((int)local_res20[0x8f] != -1)) &&
                 (FUN_1401607e0(param_1 + 0x87,&local_e8), local_e8 != param_1[0x88])) {
                piVar1 = (int *)(local_e8 + 0x14);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14024f340(param_1 + 0x87,local_d8,local_e8);
                }
              }
              FUN_140251f00(plVar18 + 4,&local_res20);
              puVar17 = (undefined8 *)
                        std::vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>::erase
                                  ((vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> *)
                                   (plVar18 + 1),local_d0,puVar17);
              puVar16 = (undefined8 *)plVar18[2];
              puVar17 = (undefined8 *)*puVar17;
            }
            else {
              puVar17 = puVar17 + 1;
            }
            plVar33 = local_e0;
          } while (puVar17 != puVar16);
        }
        plVar18 = plVar18 + 7;
      } while (plVar18 != plVar33);
    }
  }
  return;
}

