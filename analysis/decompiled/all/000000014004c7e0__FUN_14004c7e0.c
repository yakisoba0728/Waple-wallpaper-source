// Function: FUN_14004c7e0
// Addr: 14004c7e0
// Size: 1713 bytes


void FUN_14004c7e0(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  char *pcVar2;
  ushort uVar3;
  uint3 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  char cVar68;
  uint uVar69;
  int iVar70;
  byte *pbVar71;
  byte bVar72;
  byte *pbVar73;
  byte *pbVar74;
  int iVar75;
  longlong lVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  byte *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  
  pcVar2 = (char *)*param_2;
  local_48 = param_2[2];
  local_40 = param_2;
  if (*pcVar2 != '\"') {
    FID_conflict__assert
              (L"s.Peek() == \'\\\"\'",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x3c3);
  }
  pbVar1 = (byte *)(pcVar2 + 1);
  local_50 = pbVar1;
  pbVar74 = pbVar1;
LAB_14004c850:
  do {
    pbVar71 = pbVar74 + 0xf;
    bVar72 = DAT_140475cb8;
    bVar5 = UNK_140475cb9;
    bVar6 = UNK_140475cba;
    bVar7 = UNK_140475cbb;
    bVar8 = UNK_140475cbc;
    bVar9 = UNK_140475cbd;
    bVar10 = UNK_140475cbe;
    bVar11 = UNK_140475cbf;
    bVar12 = UNK_140475cc0;
    bVar13 = UNK_140475cc1;
    bVar14 = UNK_140475cc2;
    bVar15 = UNK_140475cc3;
    bVar16 = UNK_140475cc4;
    bVar17 = UNK_140475cc5;
    bVar18 = UNK_140475cc6;
    bVar19 = UNK_140475cc7;
    bVar36 = DAT_140475cc8;
    bVar37 = UNK_140475cc9;
    bVar38 = UNK_140475cca;
    bVar39 = UNK_140475ccb;
    bVar40 = UNK_140475ccc;
    bVar41 = UNK_140475ccd;
    bVar42 = UNK_140475cce;
    bVar43 = UNK_140475ccf;
    bVar44 = UNK_140475cd0;
    bVar45 = UNK_140475cd1;
    bVar46 = UNK_140475cd2;
    bVar47 = UNK_140475cd3;
    bVar48 = UNK_140475cd4;
    bVar49 = UNK_140475cd5;
    bVar50 = UNK_140475cd6;
    bVar51 = UNK_140475cd7;
    bVar52 = s__________________140475cd8[0];
    bVar53 = s__________________140475cd8[1];
    bVar54 = s__________________140475cd8[2];
    bVar55 = s__________________140475cd8[3];
    bVar56 = s__________________140475cd8[4];
    bVar57 = s__________________140475cd8[5];
    bVar58 = s__________________140475cd8[6];
    bVar59 = s__________________140475cd8[7];
    bVar60 = s__________________140475cd8[8];
    bVar61 = s__________________140475cd8[9];
    bVar62 = s__________________140475cd8[10];
    bVar63 = s__________________140475cd8[0xb];
    bVar64 = s__________________140475cd8[0xc];
    bVar65 = s__________________140475cd8[0xd];
    bVar66 = s__________________140475cd8[0xe];
    bVar67 = s__________________140475cd8[0xf];
    if (pbVar74 == local_50) {
      for (; pbVar74 != (byte *)((ulonglong)pbVar71 & 0xfffffffffffffff0); pbVar74 = pbVar74 + 1) {
        bVar72 = *pbVar74;
        uVar69 = (uint)bVar72;
        local_50 = pbVar74;
        if (((bVar72 == 0x22) || (bVar72 == 0x5c)) || (bVar72 < 0x20)) goto LAB_14004ca2e;
      }
      bVar72 = *pbVar74;
      bVar5 = pbVar74[1];
      bVar6 = pbVar74[2];
      bVar7 = pbVar74[3];
      bVar8 = pbVar74[4];
      bVar9 = pbVar74[5];
      bVar10 = pbVar74[6];
      bVar11 = pbVar74[7];
      bVar12 = pbVar74[8];
      bVar13 = pbVar74[9];
      bVar14 = pbVar74[10];
      bVar15 = pbVar74[0xb];
      bVar16 = pbVar74[0xc];
      bVar17 = pbVar74[0xd];
      bVar18 = pbVar74[0xe];
      bVar19 = pbVar74[0xf];
      auVar81[0] = -(bVar72 == DAT_140475c98);
      auVar81[1] = -(bVar5 == UNK_140475c99);
      auVar81[2] = -(bVar6 == UNK_140475c9a);
      auVar81[3] = -(bVar7 == UNK_140475c9b);
      auVar81[4] = -(bVar8 == UNK_140475c9c);
      auVar81[5] = -(bVar9 == UNK_140475c9d);
      auVar81[6] = -(bVar10 == UNK_140475c9e);
      auVar81[7] = -(bVar11 == UNK_140475c9f);
      auVar81[8] = -(bVar12 == UNK_140475ca0);
      auVar81[9] = -(bVar13 == UNK_140475ca1);
      auVar81[10] = -(bVar14 == UNK_140475ca2);
      auVar81[0xb] = -(bVar15 == UNK_140475ca3);
      auVar81[0xc] = -(bVar16 == UNK_140475ca4);
      auVar81[0xd] = -(bVar17 == UNK_140475ca5);
      auVar81[0xe] = -(bVar18 == UNK_140475ca6);
      auVar81[0xf] = -(bVar19 == UNK_140475ca7);
      auVar77[0] = -(bVar72 == DAT_140475ca8);
      auVar77[1] = -(bVar5 == UNK_140475ca9);
      auVar77[2] = -(bVar6 == UNK_140475caa);
      auVar77[3] = -(bVar7 == UNK_140475cab);
      auVar77[4] = -(bVar8 == UNK_140475cac);
      auVar77[5] = -(bVar9 == UNK_140475cad);
      auVar77[6] = -(bVar10 == UNK_140475cae);
      auVar77[7] = -(bVar11 == UNK_140475caf);
      auVar77[8] = -(bVar12 == UNK_140475cb0);
      auVar77[9] = -(bVar13 == UNK_140475cb1);
      auVar77[10] = -(bVar14 == UNK_140475cb2);
      auVar77[0xb] = -(bVar15 == UNK_140475cb3);
      auVar77[0xc] = -(bVar16 == UNK_140475cb4);
      auVar77[0xd] = -(bVar17 == UNK_140475cb5);
      auVar77[0xe] = -(bVar18 == UNK_140475cb6);
      auVar77[0xf] = -(bVar19 == UNK_140475cb7);
      auVar82[0] = -((byte)((bVar72 < DAT_140475c88) * DAT_140475c88 |
                           (bVar72 >= DAT_140475c88) * bVar72) == DAT_140475c88);
      auVar82[1] = -((byte)((bVar5 < UNK_140475c89) * UNK_140475c89 |
                           (bVar5 >= UNK_140475c89) * bVar5) == UNK_140475c89);
      auVar82[2] = -((byte)((bVar6 < UNK_140475c8a) * UNK_140475c8a |
                           (bVar6 >= UNK_140475c8a) * bVar6) == UNK_140475c8a);
      auVar82[3] = -((byte)((bVar7 < UNK_140475c8b) * UNK_140475c8b |
                           (bVar7 >= UNK_140475c8b) * bVar7) == UNK_140475c8b);
      auVar82[4] = -((byte)((bVar8 < UNK_140475c8c) * UNK_140475c8c |
                           (bVar8 >= UNK_140475c8c) * bVar8) == UNK_140475c8c);
      auVar82[5] = -((byte)((bVar9 < UNK_140475c8d) * UNK_140475c8d |
                           (bVar9 >= UNK_140475c8d) * bVar9) == UNK_140475c8d);
      auVar82[6] = -((byte)((bVar10 < UNK_140475c8e) * UNK_140475c8e |
                           (bVar10 >= UNK_140475c8e) * bVar10) == UNK_140475c8e);
      auVar82[7] = -((byte)((bVar11 < UNK_140475c8f) * UNK_140475c8f |
                           (bVar11 >= UNK_140475c8f) * bVar11) == UNK_140475c8f);
      auVar82[8] = -((byte)((bVar12 < UNK_140475c90) * UNK_140475c90 |
                           (bVar12 >= UNK_140475c90) * bVar12) == UNK_140475c90);
      auVar82[9] = -((byte)((bVar13 < UNK_140475c91) * UNK_140475c91 |
                           (bVar13 >= UNK_140475c91) * bVar13) == UNK_140475c91);
      auVar82[10] = -((byte)((bVar14 < UNK_140475c92) * UNK_140475c92 |
                            (bVar14 >= UNK_140475c92) * bVar14) == UNK_140475c92);
      auVar82[0xb] = -((byte)((bVar15 < UNK_140475c93) * UNK_140475c93 |
                             (bVar15 >= UNK_140475c93) * bVar15) == UNK_140475c93);
      auVar82[0xc] = -((byte)((bVar16 < UNK_140475c94) * UNK_140475c94 |
                             (bVar16 >= UNK_140475c94) * bVar16) == UNK_140475c94);
      auVar82[0xd] = -((byte)((bVar17 < UNK_140475c95) * UNK_140475c95 |
                             (bVar17 >= UNK_140475c95) * bVar17) == UNK_140475c95);
      auVar82[0xe] = -((byte)((bVar18 < UNK_140475c96) * UNK_140475c96 |
                             (bVar18 >= UNK_140475c96) * bVar18) == UNK_140475c96);
      auVar82[0xf] = -((byte)((bVar19 < UNK_140475c97) * UNK_140475c97 |
                             (bVar19 >= UNK_140475c97) * bVar19) == UNK_140475c97);
      auVar82 = auVar81 | auVar77 | auVar82;
      uVar3 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar82[0xf] >> 7) << 0xf;
      while (uVar3 == 0) {
        bVar72 = pbVar74[0x10];
        bVar5 = pbVar74[0x11];
        bVar6 = pbVar74[0x12];
        bVar7 = pbVar74[0x13];
        bVar8 = pbVar74[0x14];
        bVar9 = pbVar74[0x15];
        bVar10 = pbVar74[0x16];
        bVar11 = pbVar74[0x17];
        bVar12 = pbVar74[0x18];
        bVar13 = pbVar74[0x19];
        bVar14 = pbVar74[0x1a];
        bVar15 = pbVar74[0x1b];
        bVar16 = pbVar74[0x1c];
        bVar17 = pbVar74[0x1d];
        bVar18 = pbVar74[0x1e];
        bVar19 = pbVar74[0x1f];
        pbVar74 = pbVar74 + 0x10;
        auVar83[0] = -(bVar72 == DAT_140475c98);
        auVar83[1] = -(bVar5 == UNK_140475c99);
        auVar83[2] = -(bVar6 == UNK_140475c9a);
        auVar83[3] = -(bVar7 == UNK_140475c9b);
        auVar83[4] = -(bVar8 == UNK_140475c9c);
        auVar83[5] = -(bVar9 == UNK_140475c9d);
        auVar83[6] = -(bVar10 == UNK_140475c9e);
        auVar83[7] = -(bVar11 == UNK_140475c9f);
        auVar83[8] = -(bVar12 == UNK_140475ca0);
        auVar83[9] = -(bVar13 == UNK_140475ca1);
        auVar83[10] = -(bVar14 == UNK_140475ca2);
        auVar83[0xb] = -(bVar15 == UNK_140475ca3);
        auVar83[0xc] = -(bVar16 == UNK_140475ca4);
        auVar83[0xd] = -(bVar17 == UNK_140475ca5);
        auVar83[0xe] = -(bVar18 == UNK_140475ca6);
        auVar83[0xf] = -(bVar19 == UNK_140475ca7);
        auVar78[0] = -(bVar72 == DAT_140475ca8);
        auVar78[1] = -(bVar5 == UNK_140475ca9);
        auVar78[2] = -(bVar6 == UNK_140475caa);
        auVar78[3] = -(bVar7 == UNK_140475cab);
        auVar78[4] = -(bVar8 == UNK_140475cac);
        auVar78[5] = -(bVar9 == UNK_140475cad);
        auVar78[6] = -(bVar10 == UNK_140475cae);
        auVar78[7] = -(bVar11 == UNK_140475caf);
        auVar78[8] = -(bVar12 == UNK_140475cb0);
        auVar78[9] = -(bVar13 == UNK_140475cb1);
        auVar78[10] = -(bVar14 == UNK_140475cb2);
        auVar78[0xb] = -(bVar15 == UNK_140475cb3);
        auVar78[0xc] = -(bVar16 == UNK_140475cb4);
        auVar78[0xd] = -(bVar17 == UNK_140475cb5);
        auVar78[0xe] = -(bVar18 == UNK_140475cb6);
        auVar78[0xf] = -(bVar19 == UNK_140475cb7);
        auVar84[0] = -((byte)((bVar72 < DAT_140475c88) * DAT_140475c88 |
                             (bVar72 >= DAT_140475c88) * bVar72) == DAT_140475c88);
        auVar84[1] = -((byte)((bVar5 < UNK_140475c89) * UNK_140475c89 |
                             (bVar5 >= UNK_140475c89) * bVar5) == UNK_140475c89);
        auVar84[2] = -((byte)((bVar6 < UNK_140475c8a) * UNK_140475c8a |
                             (bVar6 >= UNK_140475c8a) * bVar6) == UNK_140475c8a);
        auVar84[3] = -((byte)((bVar7 < UNK_140475c8b) * UNK_140475c8b |
                             (bVar7 >= UNK_140475c8b) * bVar7) == UNK_140475c8b);
        auVar84[4] = -((byte)((bVar8 < UNK_140475c8c) * UNK_140475c8c |
                             (bVar8 >= UNK_140475c8c) * bVar8) == UNK_140475c8c);
        auVar84[5] = -((byte)((bVar9 < UNK_140475c8d) * UNK_140475c8d |
                             (bVar9 >= UNK_140475c8d) * bVar9) == UNK_140475c8d);
        auVar84[6] = -((byte)((bVar10 < UNK_140475c8e) * UNK_140475c8e |
                             (bVar10 >= UNK_140475c8e) * bVar10) == UNK_140475c8e);
        auVar84[7] = -((byte)((bVar11 < UNK_140475c8f) * UNK_140475c8f |
                             (bVar11 >= UNK_140475c8f) * bVar11) == UNK_140475c8f);
        auVar84[8] = -((byte)((bVar12 < UNK_140475c90) * UNK_140475c90 |
                             (bVar12 >= UNK_140475c90) * bVar12) == UNK_140475c90);
        auVar84[9] = -((byte)((bVar13 < UNK_140475c91) * UNK_140475c91 |
                             (bVar13 >= UNK_140475c91) * bVar13) == UNK_140475c91);
        auVar84[10] = -((byte)((bVar14 < UNK_140475c92) * UNK_140475c92 |
                              (bVar14 >= UNK_140475c92) * bVar14) == UNK_140475c92);
        auVar84[0xb] = -((byte)((bVar15 < UNK_140475c93) * UNK_140475c93 |
                               (bVar15 >= UNK_140475c93) * bVar15) == UNK_140475c93);
        auVar84[0xc] = -((byte)((bVar16 < UNK_140475c94) * UNK_140475c94 |
                               (bVar16 >= UNK_140475c94) * bVar16) == UNK_140475c94);
        auVar84[0xd] = -((byte)((bVar17 < UNK_140475c95) * UNK_140475c95 |
                               (bVar17 >= UNK_140475c95) * bVar17) == UNK_140475c95);
        auVar84[0xe] = -((byte)((bVar18 < UNK_140475c96) * UNK_140475c96 |
                               (bVar18 >= UNK_140475c96) * bVar18) == UNK_140475c96);
        auVar84[0xf] = -((byte)((bVar19 < UNK_140475c97) * UNK_140475c97 |
                               (bVar19 >= UNK_140475c97) * bVar19) == UNK_140475c97);
        auVar84 = auVar83 | auVar78 | auVar84;
        uVar3 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar84[0xf] >> 7) << 0xf;
      }
      uVar69 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar69 & 1) == 0; uVar69 = uVar69 + 1) {
        }
      }
      local_50 = pbVar74 + uVar69;
      pbVar74 = local_50;
    }
    else {
      for (; DAT_140475cb8 = bVar72, UNK_140475cb9 = bVar5, UNK_140475cba = bVar6,
          UNK_140475cbb = bVar7, UNK_140475cbc = bVar8, UNK_140475cbd = bVar9,
          UNK_140475cbe = bVar10, UNK_140475cbf = bVar11, UNK_140475cc0 = bVar12,
          UNK_140475cc1 = bVar13, UNK_140475cc2 = bVar14, UNK_140475cc3 = bVar15,
          UNK_140475cc4 = bVar16, UNK_140475cc5 = bVar17, UNK_140475cc6 = bVar18,
          UNK_140475cc7 = bVar19, DAT_140475cc8 = bVar36, UNK_140475cc9 = bVar37,
          UNK_140475cca = bVar38, UNK_140475ccb = bVar39, UNK_140475ccc = bVar40,
          UNK_140475ccd = bVar41, UNK_140475cce = bVar42, UNK_140475ccf = bVar43,
          UNK_140475cd0 = bVar44, UNK_140475cd1 = bVar45, UNK_140475cd2 = bVar46,
          UNK_140475cd3 = bVar47, UNK_140475cd4 = bVar48, UNK_140475cd5 = bVar49,
          UNK_140475cd6 = bVar50, UNK_140475cd7 = bVar51, s__________________140475cd8[0] = bVar52,
          s__________________140475cd8[1] = bVar53, s__________________140475cd8[2] = bVar54,
          s__________________140475cd8[3] = bVar55, s__________________140475cd8[4] = bVar56,
          s__________________140475cd8[5] = bVar57, s__________________140475cd8[6] = bVar58,
          s__________________140475cd8[7] = bVar59, s__________________140475cd8[8] = bVar60,
          s__________________140475cd8[9] = bVar61, s__________________140475cd8[10] = bVar62,
          s__________________140475cd8[0xb] = bVar63, s__________________140475cd8[0xc] = bVar64,
          s__________________140475cd8[0xd] = bVar65, s__________________140475cd8[0xe] = bVar66,
          s__________________140475cd8[0xf] = bVar67,
          pbVar74 != (byte *)((ulonglong)pbVar71 & 0xfffffffffffffff0); pbVar74 = pbVar74 + 1) {
        bVar72 = *pbVar74;
        uVar69 = (uint)bVar72;
        if (((bVar72 == 0x22) || (bVar72 == 0x5c)) || (bVar72 < 0x20)) goto LAB_14004ca2e;
        *local_50 = bVar72;
        local_50 = local_50 + 1;
        bVar72 = DAT_140475cb8;
        bVar5 = UNK_140475cb9;
        bVar6 = UNK_140475cba;
        bVar7 = UNK_140475cbb;
        bVar8 = UNK_140475cbc;
        bVar9 = UNK_140475cbd;
        bVar10 = UNK_140475cbe;
        bVar11 = UNK_140475cbf;
        bVar12 = UNK_140475cc0;
        bVar13 = UNK_140475cc1;
        bVar14 = UNK_140475cc2;
        bVar15 = UNK_140475cc3;
        bVar16 = UNK_140475cc4;
        bVar17 = UNK_140475cc5;
        bVar18 = UNK_140475cc6;
        bVar19 = UNK_140475cc7;
        bVar36 = DAT_140475cc8;
        bVar37 = UNK_140475cc9;
        bVar38 = UNK_140475cca;
        bVar39 = UNK_140475ccb;
        bVar40 = UNK_140475ccc;
        bVar41 = UNK_140475ccd;
        bVar42 = UNK_140475cce;
        bVar43 = UNK_140475ccf;
        bVar44 = UNK_140475cd0;
        bVar45 = UNK_140475cd1;
        bVar46 = UNK_140475cd2;
        bVar47 = UNK_140475cd3;
        bVar48 = UNK_140475cd4;
        bVar49 = UNK_140475cd5;
        bVar50 = UNK_140475cd6;
        bVar51 = UNK_140475cd7;
        bVar52 = s__________________140475cd8[0];
        bVar53 = s__________________140475cd8[1];
        bVar54 = s__________________140475cd8[2];
        bVar55 = s__________________140475cd8[3];
        bVar56 = s__________________140475cd8[4];
        bVar57 = s__________________140475cd8[5];
        bVar58 = s__________________140475cd8[6];
        bVar59 = s__________________140475cd8[7];
        bVar60 = s__________________140475cd8[8];
        bVar61 = s__________________140475cd8[9];
        bVar62 = s__________________140475cd8[10];
        bVar63 = s__________________140475cd8[0xb];
        bVar64 = s__________________140475cd8[0xc];
        bVar65 = s__________________140475cd8[0xd];
        bVar66 = s__________________140475cd8[0xe];
        bVar67 = s__________________140475cd8[0xf];
      }
      bVar20 = *pbVar74;
      bVar21 = pbVar74[1];
      bVar22 = pbVar74[2];
      bVar23 = pbVar74[3];
      bVar24 = pbVar74[4];
      bVar25 = pbVar74[5];
      bVar26 = pbVar74[6];
      bVar27 = pbVar74[7];
      bVar28 = pbVar74[8];
      bVar29 = pbVar74[9];
      bVar30 = pbVar74[10];
      bVar31 = pbVar74[0xb];
      bVar32 = pbVar74[0xc];
      bVar33 = pbVar74[0xd];
      bVar34 = pbVar74[0xe];
      bVar35 = pbVar74[0xf];
      auVar85[0] = -(bVar20 == bVar36);
      auVar85[1] = -(bVar21 == bVar37);
      auVar85[2] = -(bVar22 == bVar38);
      auVar85[3] = -(bVar23 == bVar39);
      auVar85[4] = -(bVar24 == bVar40);
      auVar85[5] = -(bVar25 == bVar41);
      auVar85[6] = -(bVar26 == bVar42);
      auVar85[7] = -(bVar27 == bVar43);
      auVar85[8] = -(bVar28 == bVar44);
      auVar85[9] = -(bVar29 == bVar45);
      auVar85[10] = -(bVar30 == bVar46);
      auVar85[0xb] = -(bVar31 == bVar47);
      auVar85[0xc] = -(bVar32 == bVar48);
      auVar85[0xd] = -(bVar33 == bVar49);
      auVar85[0xe] = -(bVar34 == bVar50);
      auVar85[0xf] = -(bVar35 == bVar51);
      auVar79[0] = -(bVar20 == bVar52);
      auVar79[1] = -(bVar21 == bVar53);
      auVar79[2] = -(bVar22 == bVar54);
      auVar79[3] = -(bVar23 == bVar55);
      auVar79[4] = -(bVar24 == bVar56);
      auVar79[5] = -(bVar25 == bVar57);
      auVar79[6] = -(bVar26 == bVar58);
      auVar79[7] = -(bVar27 == bVar59);
      auVar79[8] = -(bVar28 == bVar60);
      auVar79[9] = -(bVar29 == bVar61);
      auVar79[10] = -(bVar30 == bVar62);
      auVar79[0xb] = -(bVar31 == bVar63);
      auVar79[0xc] = -(bVar32 == bVar64);
      auVar79[0xd] = -(bVar33 == bVar65);
      auVar79[0xe] = -(bVar34 == bVar66);
      auVar79[0xf] = -(bVar35 == bVar67);
      auVar86[0] = -((byte)((bVar20 < bVar72) * bVar72 | (bVar20 >= bVar72) * bVar20) == bVar72);
      auVar86[1] = -((byte)((bVar21 < bVar5) * bVar5 | (bVar21 >= bVar5) * bVar21) == bVar5);
      auVar86[2] = -((byte)((bVar22 < bVar6) * bVar6 | (bVar22 >= bVar6) * bVar22) == bVar6);
      auVar86[3] = -((byte)((bVar23 < bVar7) * bVar7 | (bVar23 >= bVar7) * bVar23) == bVar7);
      auVar86[4] = -((byte)((bVar24 < bVar8) * bVar8 | (bVar24 >= bVar8) * bVar24) == bVar8);
      auVar86[5] = -((byte)((bVar25 < bVar9) * bVar9 | (bVar25 >= bVar9) * bVar25) == bVar9);
      auVar86[6] = -((byte)((bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26) == bVar10);
      auVar86[7] = -((byte)((bVar27 < bVar11) * bVar11 | (bVar27 >= bVar11) * bVar27) == bVar11);
      auVar86[8] = -((byte)((bVar28 < bVar12) * bVar12 | (bVar28 >= bVar12) * bVar28) == bVar12);
      auVar86[9] = -((byte)((bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29) == bVar13);
      auVar86[10] = -((byte)((bVar30 < bVar14) * bVar14 | (bVar30 >= bVar14) * bVar30) == bVar14);
      auVar86[0xb] = -((byte)((bVar31 < bVar15) * bVar15 | (bVar31 >= bVar15) * bVar31) == bVar15);
      auVar86[0xc] = -((byte)((bVar32 < bVar16) * bVar16 | (bVar32 >= bVar16) * bVar32) == bVar16);
      auVar86[0xd] = -((byte)((bVar33 < bVar17) * bVar17 | (bVar33 >= bVar17) * bVar33) == bVar17);
      auVar86[0xe] = -((byte)((bVar34 < bVar18) * bVar18 | (bVar34 >= bVar18) * bVar34) == bVar18);
      auVar86[0xf] = -((byte)((bVar35 < bVar19) * bVar19 | (bVar35 >= bVar19) * bVar35) == bVar19);
      auVar86 = auVar85 | auVar79 | auVar86;
      uVar3 = (ushort)(SUB161(auVar86 >> 7,0) & 1) | (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar86[0xf] >> 7) << 0xf;
      while (uVar3 == 0) {
        *local_50 = bVar20;
        local_50[1] = bVar21;
        local_50[2] = bVar22;
        local_50[3] = bVar23;
        local_50[4] = bVar24;
        local_50[5] = bVar25;
        local_50[6] = bVar26;
        local_50[7] = bVar27;
        local_50[8] = bVar28;
        local_50[9] = bVar29;
        local_50[10] = bVar30;
        local_50[0xb] = bVar31;
        local_50[0xc] = bVar32;
        local_50[0xd] = bVar33;
        local_50[0xe] = bVar34;
        local_50[0xf] = bVar35;
        local_50 = local_50 + 0x10;
        bVar20 = pbVar74[0x10];
        bVar21 = pbVar74[0x11];
        bVar22 = pbVar74[0x12];
        bVar23 = pbVar74[0x13];
        bVar24 = pbVar74[0x14];
        bVar25 = pbVar74[0x15];
        bVar26 = pbVar74[0x16];
        bVar27 = pbVar74[0x17];
        bVar28 = pbVar74[0x18];
        bVar29 = pbVar74[0x19];
        bVar30 = pbVar74[0x1a];
        bVar31 = pbVar74[0x1b];
        bVar32 = pbVar74[0x1c];
        bVar33 = pbVar74[0x1d];
        bVar34 = pbVar74[0x1e];
        bVar35 = pbVar74[0x1f];
        auVar87[0] = -(bVar20 == bVar36);
        auVar87[1] = -(bVar21 == bVar37);
        auVar87[2] = -(bVar22 == bVar38);
        auVar87[3] = -(bVar23 == bVar39);
        auVar87[4] = -(bVar24 == bVar40);
        auVar87[5] = -(bVar25 == bVar41);
        auVar87[6] = -(bVar26 == bVar42);
        auVar87[7] = -(bVar27 == bVar43);
        auVar87[8] = -(bVar28 == bVar44);
        auVar87[9] = -(bVar29 == bVar45);
        auVar87[10] = -(bVar30 == bVar46);
        auVar87[0xb] = -(bVar31 == bVar47);
        auVar87[0xc] = -(bVar32 == bVar48);
        auVar87[0xd] = -(bVar33 == bVar49);
        auVar87[0xe] = -(bVar34 == bVar50);
        auVar87[0xf] = -(bVar35 == bVar51);
        auVar80[0] = -(bVar20 == bVar52);
        auVar80[1] = -(bVar21 == bVar53);
        auVar80[2] = -(bVar22 == bVar54);
        auVar80[3] = -(bVar23 == bVar55);
        auVar80[4] = -(bVar24 == bVar56);
        auVar80[5] = -(bVar25 == bVar57);
        auVar80[6] = -(bVar26 == bVar58);
        auVar80[7] = -(bVar27 == bVar59);
        auVar80[8] = -(bVar28 == bVar60);
        auVar80[9] = -(bVar29 == bVar61);
        auVar80[10] = -(bVar30 == bVar62);
        auVar80[0xb] = -(bVar31 == bVar63);
        auVar80[0xc] = -(bVar32 == bVar64);
        auVar80[0xd] = -(bVar33 == bVar65);
        auVar80[0xe] = -(bVar34 == bVar66);
        auVar80[0xf] = -(bVar35 == bVar67);
        auVar88[0] = -((byte)((bVar20 < bVar72) * bVar72 | (bVar20 >= bVar72) * bVar20) == bVar72);
        auVar88[1] = -((byte)((bVar21 < bVar5) * bVar5 | (bVar21 >= bVar5) * bVar21) == bVar5);
        auVar88[2] = -((byte)((bVar22 < bVar6) * bVar6 | (bVar22 >= bVar6) * bVar22) == bVar6);
        auVar88[3] = -((byte)((bVar23 < bVar7) * bVar7 | (bVar23 >= bVar7) * bVar23) == bVar7);
        auVar88[4] = -((byte)((bVar24 < bVar8) * bVar8 | (bVar24 >= bVar8) * bVar24) == bVar8);
        auVar88[5] = -((byte)((bVar25 < bVar9) * bVar9 | (bVar25 >= bVar9) * bVar25) == bVar9);
        auVar88[6] = -((byte)((bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26) == bVar10);
        auVar88[7] = -((byte)((bVar27 < bVar11) * bVar11 | (bVar27 >= bVar11) * bVar27) == bVar11);
        auVar88[8] = -((byte)((bVar28 < bVar12) * bVar12 | (bVar28 >= bVar12) * bVar28) == bVar12);
        auVar88[9] = -((byte)((bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29) == bVar13);
        auVar88[10] = -((byte)((bVar30 < bVar14) * bVar14 | (bVar30 >= bVar14) * bVar30) == bVar14);
        auVar88[0xb] = -((byte)((bVar31 < bVar15) * bVar15 | (bVar31 >= bVar15) * bVar31) == bVar15)
        ;
        auVar88[0xc] = -((byte)((bVar32 < bVar16) * bVar16 | (bVar32 >= bVar16) * bVar32) == bVar16)
        ;
        auVar88[0xd] = -((byte)((bVar33 < bVar17) * bVar17 | (bVar33 >= bVar17) * bVar33) == bVar17)
        ;
        auVar88[0xe] = -((byte)((bVar34 < bVar18) * bVar18 | (bVar34 >= bVar18) * bVar34) == bVar18)
        ;
        auVar88[0xf] = -((byte)((bVar35 < bVar19) * bVar19 | (bVar35 >= bVar19) * bVar35) == bVar19)
        ;
        auVar88 = auVar87 | auVar80 | auVar88;
        pbVar74 = pbVar74 + 0x10;
        uVar3 = (ushort)(SUB161(auVar88 >> 7,0) & 1) | (ushort)(SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar88 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar88 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar88 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar88[0xf] >> 7) << 0xf;
      }
      uVar69 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar69 & 1) == 0; uVar69 = uVar69 + 1) {
        }
      }
      pbVar71 = pbVar74 + uVar69;
      for (; pbVar74 != pbVar71; pbVar74 = pbVar74 + 1) {
        *local_50 = *pbVar74;
        local_50 = local_50 + 1;
      }
    }
    uVar69 = (uint)*pbVar74;
LAB_14004ca2e:
    pbVar71 = local_50;
    bVar72 = (byte)uVar69;
    if (bVar72 == 0x5c) {
      lVar76 = (longlong)pbVar74 - local_48;
      bVar72 = (&DAT_140475cf0)[pbVar74[1]];
      if (bVar72 != 0) {
        if (local_50 == (byte *)0x0) {
          FID_conflict__assert
                    (L"dst_ != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",
                     199);
        }
        *pbVar71 = bVar72;
        local_50 = pbVar71 + 1;
        pbVar74 = pbVar74 + 2;
        goto LAB_14004c850;
      }
      if (pbVar74[1] != 0x75) {
        if (*(int *)(param_1 + 0x30) != 0) {
          FID_conflict__assert
                    (L"!HasParseError()",
                     L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x417);
        }
        *(undefined4 *)(param_1 + 0x30) = 10;
        *(longlong *)(param_1 + 0x38) = lVar76;
        pbVar74 = pbVar74 + 1;
        goto LAB_14004cdc3;
      }
      local_58 = pbVar74 + 2;
      uVar69 = FUN_14004fa10(param_1,&local_58);
      pbVar71 = local_50;
      pbVar74 = local_58;
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_14004cdc3;
      if (uVar69 - 0xd800 < 0x800) {
        if (((uVar69 < 0xdc00) && (*local_58 == 0x5c)) &&
           (pbVar74 = local_58 + 1, local_58[1] == 0x75)) {
          local_58 = local_58 + 2;
          iVar70 = 0;
          iVar75 = 0;
          do {
            bVar72 = *local_58;
            iVar70 = iVar70 * 0x10 + (int)(char)bVar72;
            if ((byte)(bVar72 - 0x30) < 10) {
              iVar70 = iVar70 + -0x30;
            }
            else if ((byte)(bVar72 + 0xbf) < 6) {
              iVar70 = iVar70 + -0x37;
            }
            else {
              if (5 < (byte)(bVar72 + 0x9f)) {
                *(undefined4 *)(param_1 + 0x30) = 8;
                iVar70 = 0;
                *(longlong *)(param_1 + 0x38) = lVar76;
                break;
              }
              iVar70 = iVar70 + -0x57;
            }
            local_58 = local_58 + 1;
            iVar75 = iVar75 + 1;
          } while (iVar75 < 4);
          pbVar74 = local_58;
          if (*(int *)(param_1 + 0x30) != 0) goto LAB_14004cdc3;
          if (iVar70 - 0xdc00U < 0x400) {
            uVar69 = ((uVar69 - 0xd800) * 0x400 | iVar70 - 0xdc00U) + 0x10000;
            goto LAB_14004cb77;
          }
        }
        *(undefined4 *)(param_1 + 0x30) = 9;
        *(longlong *)(param_1 + 0x38) = lVar76;
        goto LAB_14004cdc3;
      }
LAB_14004cb77:
      pbVar74 = local_58;
      if (0x7f < uVar69) {
        bVar72 = (byte)uVar69;
        if (uVar69 < 0x800) {
          if (local_50 == (byte *)0x0) {
            FID_conflict__assert
                      (L"dst_ != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h"
                       ,199);
          }
          *pbVar71 = (byte)(uVar69 >> 6) | 0xc0;
          if (pbVar71 + 1 == (byte *)0x0) {
            FID_conflict__assert
                      (L"dst_ != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h"
                       ,199);
          }
          pbVar71[1] = bVar72 & 0x3f | 0x80;
          local_50 = pbVar71 + 2;
        }
        else {
          uVar4 = (uint3)(uVar69 >> 8);
          if (uVar69 < 0x10000) {
            FUN_1400505b0(&local_58,CONCAT31(uVar4 >> 0xc,(char)(uVar69 >> 0xc)) | 0xe0);
            FUN_1400505b0(&local_58,CONCAT31(uVar4 >> 6,(char)(uVar69 >> 6)) & 0xffffff3f | 0x80);
            FUN_1400505b0(&local_58,bVar72 & 0x3f | 0x80);
            pbVar74 = local_58;
          }
          else {
            if (0x10ffff < uVar69) {
              FID_conflict__assert
                        (L"codepoint <= 0x10FFFF",
                         L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\encodings.h",0x73);
            }
            FUN_1400505b0(&local_58,CONCAT31(uVar4 >> 0x12,(char)(uVar69 >> 0x12)) | 0xf0);
            FUN_1400505b0(&local_58,CONCAT31(uVar4 >> 0xc,(char)(uVar69 >> 0xc)) & 0xffffff3f | 0x80
                         );
            FUN_1400505b0(&local_58,CONCAT31(uVar4 >> 6,(char)(uVar69 >> 6)) & 0xffffff3f | 0x80);
            FUN_1400505b0(&local_58,bVar72 & 0x3f | 0x80);
            pbVar74 = local_58;
          }
        }
        goto LAB_14004c850;
      }
    }
    else {
      if (bVar72 == 0x22) {
        if (local_50 == (byte *)0x0) {
          FID_conflict__assert
                    (L"dst_ != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",
                     199);
        }
        *pbVar71 = 0;
        pbVar71 = pbVar71 + 1;
        pbVar74 = pbVar74 + 1;
        goto LAB_14004cdc3;
      }
      if (bVar72 < 0x20) {
        if (bVar72 == 0) {
          if (*(int *)(param_1 + 0x30) != 0) {
            FID_conflict__assert
                      (L"!HasParseError()",
                       L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x420);
          }
          *(undefined4 *)(param_1 + 0x30) = 0xb;
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar74 - local_48;
        }
        else {
          if (*(int *)(param_1 + 0x30) != 0) {
            FID_conflict__assert
                      (L"!HasParseError()",
                       L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x422);
          }
          *(undefined4 *)(param_1 + 0x30) = 0xc;
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar74 - local_48;
        }
LAB_14004cdc3:
        if (*(int *)(param_1 + 0x30) == 0) {
          pbVar73 = pbVar71 + (-1 - (longlong)pbVar1);
          if ((byte *)0xffffffff < pbVar73) {
            FID_conflict__assert
                      (L"length <= 0xFFFFFFFF",
                       L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x3cc);
          }
          if (param_4 == '\0') {
            cVar68 = FUN_14003ee20(param_3,pbVar1,(ulonglong)pbVar73 & 0xffffffff);
            if (cVar68 == '\0') {
              if (*(int *)(param_1 + 0x30) != 0) {
                FID_conflict__assert
                          (L"!HasParseError()",
                           L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x3d9);
              }
              *(undefined4 *)(param_1 + 0x30) = 0x10;
              *(longlong *)(param_1 + 0x38) = (longlong)pbVar74 - local_48;
            }
          }
          else {
            lVar76 = *(longlong *)(param_3 + 0x20);
            *(byte **)(lVar76 + -0x10) = pbVar1;
            *(int *)(lVar76 + -8) = (int)pbVar73;
            *(undefined4 *)(lVar76 + -4) = local_50._4_4_;
          }
        }
        *local_40 = pbVar74;
        local_40[1] = pbVar71;
        local_40[2] = local_48;
        return;
      }
      pbVar74 = pbVar74 + 1;
    }
    pbVar71 = local_50;
    if (local_50 == (byte *)0x0) {
      FID_conflict__assert
                (L"dst_ != 0",L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199);
    }
    *pbVar71 = (byte)uVar69;
    local_50 = pbVar71 + 1;
  } while( true );
}

