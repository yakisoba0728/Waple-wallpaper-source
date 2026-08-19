// Function: FUN_14004c8b0
// Addr: 14004c8b0
// Size: 1472 bytes


void FUN_14004c8b0(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  ushort uVar2;
  uint3 uVar3;
  byte bVar4;
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
  char cVar67;
  uint uVar68;
  int iVar69;
  byte *pbVar70;
  byte bVar71;
  byte *pbVar72;
  byte *pbVar73;
  int iVar74;
  longlong lVar75;
  undefined1 auVar76 [16];
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
  byte *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 *local_40;
  
  local_48 = param_2[2];
  local_40 = param_2;
  if (*(char *)*param_2 != '\"') {
    func_0x0001402cba34(L"s.Peek() == \'\\\"\'",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x3c3);
    return;
  }
  pbVar1 = (byte *)((char *)*param_2 + 1);
  local_50 = pbVar1;
  pbVar73 = pbVar1;
LAB_14004c920:
  do {
    pbVar70 = pbVar73 + 0xf;
    bVar71 = DAT_140475d88;
    bVar4 = UNK_140475d89;
    bVar5 = UNK_140475d8a;
    bVar6 = UNK_140475d8b;
    bVar7 = UNK_140475d8c;
    bVar8 = UNK_140475d8d;
    bVar9 = UNK_140475d8e;
    bVar10 = UNK_140475d8f;
    bVar11 = UNK_140475d90;
    bVar12 = UNK_140475d91;
    bVar13 = UNK_140475d92;
    bVar14 = UNK_140475d93;
    bVar15 = UNK_140475d94;
    bVar16 = UNK_140475d95;
    bVar17 = UNK_140475d96;
    bVar18 = UNK_140475d97;
    bVar35 = DAT_140475d98;
    bVar36 = UNK_140475d99;
    bVar37 = UNK_140475d9a;
    bVar38 = UNK_140475d9b;
    bVar39 = UNK_140475d9c;
    bVar40 = UNK_140475d9d;
    bVar41 = UNK_140475d9e;
    bVar42 = UNK_140475d9f;
    bVar43 = UNK_140475da0;
    bVar44 = UNK_140475da1;
    bVar45 = UNK_140475da2;
    bVar46 = UNK_140475da3;
    bVar47 = UNK_140475da4;
    bVar48 = UNK_140475da5;
    bVar49 = UNK_140475da6;
    bVar50 = UNK_140475da7;
    bVar51 = s__________________140475da8[0];
    bVar52 = s__________________140475da8[1];
    bVar53 = s__________________140475da8[2];
    bVar54 = s__________________140475da8[3];
    bVar55 = s__________________140475da8[4];
    bVar56 = s__________________140475da8[5];
    bVar57 = s__________________140475da8[6];
    bVar58 = s__________________140475da8[7];
    bVar59 = s__________________140475da8[8];
    bVar60 = s__________________140475da8[9];
    bVar61 = s__________________140475da8[10];
    bVar62 = s__________________140475da8[0xb];
    bVar63 = s__________________140475da8[0xc];
    bVar64 = s__________________140475da8[0xd];
    bVar65 = s__________________140475da8[0xe];
    bVar66 = s__________________140475da8[0xf];
    if (pbVar73 == local_50) {
      for (; pbVar73 != (byte *)((ulonglong)pbVar70 & 0xfffffffffffffff0); pbVar73 = pbVar73 + 1) {
        bVar71 = *pbVar73;
        uVar68 = (uint)bVar71;
        local_50 = pbVar73;
        if (((bVar71 == 0x22) || (bVar71 == 0x5c)) || (bVar71 < 0x20)) goto LAB_14004cafe;
      }
      bVar71 = *pbVar73;
      bVar4 = pbVar73[1];
      bVar5 = pbVar73[2];
      bVar6 = pbVar73[3];
      bVar7 = pbVar73[4];
      bVar8 = pbVar73[5];
      bVar9 = pbVar73[6];
      bVar10 = pbVar73[7];
      bVar11 = pbVar73[8];
      bVar12 = pbVar73[9];
      bVar13 = pbVar73[10];
      bVar14 = pbVar73[0xb];
      bVar15 = pbVar73[0xc];
      bVar16 = pbVar73[0xd];
      bVar17 = pbVar73[0xe];
      bVar18 = pbVar73[0xf];
      auVar80[0] = -(bVar71 == DAT_140475d68);
      auVar80[1] = -(bVar4 == UNK_140475d69);
      auVar80[2] = -(bVar5 == UNK_140475d6a);
      auVar80[3] = -(bVar6 == UNK_140475d6b);
      auVar80[4] = -(bVar7 == UNK_140475d6c);
      auVar80[5] = -(bVar8 == UNK_140475d6d);
      auVar80[6] = -(bVar9 == UNK_140475d6e);
      auVar80[7] = -(bVar10 == UNK_140475d6f);
      auVar80[8] = -(bVar11 == UNK_140475d70);
      auVar80[9] = -(bVar12 == UNK_140475d71);
      auVar80[10] = -(bVar13 == UNK_140475d72);
      auVar80[0xb] = -(bVar14 == UNK_140475d73);
      auVar80[0xc] = -(bVar15 == UNK_140475d74);
      auVar80[0xd] = -(bVar16 == UNK_140475d75);
      auVar80[0xe] = -(bVar17 == UNK_140475d76);
      auVar80[0xf] = -(bVar18 == UNK_140475d77);
      auVar76[0] = -(bVar71 == DAT_140475d78);
      auVar76[1] = -(bVar4 == UNK_140475d79);
      auVar76[2] = -(bVar5 == UNK_140475d7a);
      auVar76[3] = -(bVar6 == UNK_140475d7b);
      auVar76[4] = -(bVar7 == UNK_140475d7c);
      auVar76[5] = -(bVar8 == UNK_140475d7d);
      auVar76[6] = -(bVar9 == UNK_140475d7e);
      auVar76[7] = -(bVar10 == UNK_140475d7f);
      auVar76[8] = -(bVar11 == UNK_140475d80);
      auVar76[9] = -(bVar12 == UNK_140475d81);
      auVar76[10] = -(bVar13 == UNK_140475d82);
      auVar76[0xb] = -(bVar14 == UNK_140475d83);
      auVar76[0xc] = -(bVar15 == UNK_140475d84);
      auVar76[0xd] = -(bVar16 == UNK_140475d85);
      auVar76[0xe] = -(bVar17 == UNK_140475d86);
      auVar76[0xf] = -(bVar18 == UNK_140475d87);
      auVar81[0] = -((byte)((bVar71 < DAT_140475d58) * DAT_140475d58 |
                           (bVar71 >= DAT_140475d58) * bVar71) == DAT_140475d58);
      auVar81[1] = -((byte)((bVar4 < UNK_140475d59) * UNK_140475d59 |
                           (bVar4 >= UNK_140475d59) * bVar4) == UNK_140475d59);
      auVar81[2] = -((byte)((bVar5 < UNK_140475d5a) * UNK_140475d5a |
                           (bVar5 >= UNK_140475d5a) * bVar5) == UNK_140475d5a);
      auVar81[3] = -((byte)((bVar6 < UNK_140475d5b) * UNK_140475d5b |
                           (bVar6 >= UNK_140475d5b) * bVar6) == UNK_140475d5b);
      auVar81[4] = -((byte)((bVar7 < UNK_140475d5c) * UNK_140475d5c |
                           (bVar7 >= UNK_140475d5c) * bVar7) == UNK_140475d5c);
      auVar81[5] = -((byte)((bVar8 < UNK_140475d5d) * UNK_140475d5d |
                           (bVar8 >= UNK_140475d5d) * bVar8) == UNK_140475d5d);
      auVar81[6] = -((byte)((bVar9 < UNK_140475d5e) * UNK_140475d5e |
                           (bVar9 >= UNK_140475d5e) * bVar9) == UNK_140475d5e);
      auVar81[7] = -((byte)((bVar10 < UNK_140475d5f) * UNK_140475d5f |
                           (bVar10 >= UNK_140475d5f) * bVar10) == UNK_140475d5f);
      auVar81[8] = -((byte)((bVar11 < UNK_140475d60) * UNK_140475d60 |
                           (bVar11 >= UNK_140475d60) * bVar11) == UNK_140475d60);
      auVar81[9] = -((byte)((bVar12 < UNK_140475d61) * UNK_140475d61 |
                           (bVar12 >= UNK_140475d61) * bVar12) == UNK_140475d61);
      auVar81[10] = -((byte)((bVar13 < UNK_140475d62) * UNK_140475d62 |
                            (bVar13 >= UNK_140475d62) * bVar13) == UNK_140475d62);
      auVar81[0xb] = -((byte)((bVar14 < UNK_140475d63) * UNK_140475d63 |
                             (bVar14 >= UNK_140475d63) * bVar14) == UNK_140475d63);
      auVar81[0xc] = -((byte)((bVar15 < UNK_140475d64) * UNK_140475d64 |
                             (bVar15 >= UNK_140475d64) * bVar15) == UNK_140475d64);
      auVar81[0xd] = -((byte)((bVar16 < UNK_140475d65) * UNK_140475d65 |
                             (bVar16 >= UNK_140475d65) * bVar16) == UNK_140475d65);
      auVar81[0xe] = -((byte)((bVar17 < UNK_140475d66) * UNK_140475d66 |
                             (bVar17 >= UNK_140475d66) * bVar17) == UNK_140475d66);
      auVar81[0xf] = -((byte)((bVar18 < UNK_140475d67) * UNK_140475d67 |
                             (bVar18 >= UNK_140475d67) * bVar18) == UNK_140475d67);
      auVar81 = auVar80 | auVar76 | auVar81;
      uVar2 = (ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar81[0xf] >> 7) << 0xf;
      while (uVar2 == 0) {
        bVar71 = pbVar73[0x10];
        bVar4 = pbVar73[0x11];
        bVar5 = pbVar73[0x12];
        bVar6 = pbVar73[0x13];
        bVar7 = pbVar73[0x14];
        bVar8 = pbVar73[0x15];
        bVar9 = pbVar73[0x16];
        bVar10 = pbVar73[0x17];
        bVar11 = pbVar73[0x18];
        bVar12 = pbVar73[0x19];
        bVar13 = pbVar73[0x1a];
        bVar14 = pbVar73[0x1b];
        bVar15 = pbVar73[0x1c];
        bVar16 = pbVar73[0x1d];
        bVar17 = pbVar73[0x1e];
        bVar18 = pbVar73[0x1f];
        pbVar73 = pbVar73 + 0x10;
        auVar82[0] = -(bVar71 == DAT_140475d68);
        auVar82[1] = -(bVar4 == UNK_140475d69);
        auVar82[2] = -(bVar5 == UNK_140475d6a);
        auVar82[3] = -(bVar6 == UNK_140475d6b);
        auVar82[4] = -(bVar7 == UNK_140475d6c);
        auVar82[5] = -(bVar8 == UNK_140475d6d);
        auVar82[6] = -(bVar9 == UNK_140475d6e);
        auVar82[7] = -(bVar10 == UNK_140475d6f);
        auVar82[8] = -(bVar11 == UNK_140475d70);
        auVar82[9] = -(bVar12 == UNK_140475d71);
        auVar82[10] = -(bVar13 == UNK_140475d72);
        auVar82[0xb] = -(bVar14 == UNK_140475d73);
        auVar82[0xc] = -(bVar15 == UNK_140475d74);
        auVar82[0xd] = -(bVar16 == UNK_140475d75);
        auVar82[0xe] = -(bVar17 == UNK_140475d76);
        auVar82[0xf] = -(bVar18 == UNK_140475d77);
        auVar77[0] = -(bVar71 == DAT_140475d78);
        auVar77[1] = -(bVar4 == UNK_140475d79);
        auVar77[2] = -(bVar5 == UNK_140475d7a);
        auVar77[3] = -(bVar6 == UNK_140475d7b);
        auVar77[4] = -(bVar7 == UNK_140475d7c);
        auVar77[5] = -(bVar8 == UNK_140475d7d);
        auVar77[6] = -(bVar9 == UNK_140475d7e);
        auVar77[7] = -(bVar10 == UNK_140475d7f);
        auVar77[8] = -(bVar11 == UNK_140475d80);
        auVar77[9] = -(bVar12 == UNK_140475d81);
        auVar77[10] = -(bVar13 == UNK_140475d82);
        auVar77[0xb] = -(bVar14 == UNK_140475d83);
        auVar77[0xc] = -(bVar15 == UNK_140475d84);
        auVar77[0xd] = -(bVar16 == UNK_140475d85);
        auVar77[0xe] = -(bVar17 == UNK_140475d86);
        auVar77[0xf] = -(bVar18 == UNK_140475d87);
        auVar83[0] = -((byte)((bVar71 < DAT_140475d58) * DAT_140475d58 |
                             (bVar71 >= DAT_140475d58) * bVar71) == DAT_140475d58);
        auVar83[1] = -((byte)((bVar4 < UNK_140475d59) * UNK_140475d59 |
                             (bVar4 >= UNK_140475d59) * bVar4) == UNK_140475d59);
        auVar83[2] = -((byte)((bVar5 < UNK_140475d5a) * UNK_140475d5a |
                             (bVar5 >= UNK_140475d5a) * bVar5) == UNK_140475d5a);
        auVar83[3] = -((byte)((bVar6 < UNK_140475d5b) * UNK_140475d5b |
                             (bVar6 >= UNK_140475d5b) * bVar6) == UNK_140475d5b);
        auVar83[4] = -((byte)((bVar7 < UNK_140475d5c) * UNK_140475d5c |
                             (bVar7 >= UNK_140475d5c) * bVar7) == UNK_140475d5c);
        auVar83[5] = -((byte)((bVar8 < UNK_140475d5d) * UNK_140475d5d |
                             (bVar8 >= UNK_140475d5d) * bVar8) == UNK_140475d5d);
        auVar83[6] = -((byte)((bVar9 < UNK_140475d5e) * UNK_140475d5e |
                             (bVar9 >= UNK_140475d5e) * bVar9) == UNK_140475d5e);
        auVar83[7] = -((byte)((bVar10 < UNK_140475d5f) * UNK_140475d5f |
                             (bVar10 >= UNK_140475d5f) * bVar10) == UNK_140475d5f);
        auVar83[8] = -((byte)((bVar11 < UNK_140475d60) * UNK_140475d60 |
                             (bVar11 >= UNK_140475d60) * bVar11) == UNK_140475d60);
        auVar83[9] = -((byte)((bVar12 < UNK_140475d61) * UNK_140475d61 |
                             (bVar12 >= UNK_140475d61) * bVar12) == UNK_140475d61);
        auVar83[10] = -((byte)((bVar13 < UNK_140475d62) * UNK_140475d62 |
                              (bVar13 >= UNK_140475d62) * bVar13) == UNK_140475d62);
        auVar83[0xb] = -((byte)((bVar14 < UNK_140475d63) * UNK_140475d63 |
                               (bVar14 >= UNK_140475d63) * bVar14) == UNK_140475d63);
        auVar83[0xc] = -((byte)((bVar15 < UNK_140475d64) * UNK_140475d64 |
                               (bVar15 >= UNK_140475d64) * bVar15) == UNK_140475d64);
        auVar83[0xd] = -((byte)((bVar16 < UNK_140475d65) * UNK_140475d65 |
                               (bVar16 >= UNK_140475d65) * bVar16) == UNK_140475d65);
        auVar83[0xe] = -((byte)((bVar17 < UNK_140475d66) * UNK_140475d66 |
                               (bVar17 >= UNK_140475d66) * bVar17) == UNK_140475d66);
        auVar83[0xf] = -((byte)((bVar18 < UNK_140475d67) * UNK_140475d67 |
                               (bVar18 >= UNK_140475d67) * bVar18) == UNK_140475d67);
        auVar83 = auVar82 | auVar77 | auVar83;
        uVar2 = (ushort)(SUB161(auVar83 >> 7,0) & 1) | (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar83[0xf] >> 7) << 0xf;
      }
      uVar68 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar68 & 1) == 0; uVar68 = uVar68 + 1) {
        }
      }
      local_50 = pbVar73 + uVar68;
      pbVar73 = local_50;
    }
    else {
      for (; DAT_140475d88 = bVar71, UNK_140475d89 = bVar4, UNK_140475d8a = bVar5,
          UNK_140475d8b = bVar6, UNK_140475d8c = bVar7, UNK_140475d8d = bVar8, UNK_140475d8e = bVar9
          , UNK_140475d8f = bVar10, UNK_140475d90 = bVar11, UNK_140475d91 = bVar12,
          UNK_140475d92 = bVar13, UNK_140475d93 = bVar14, UNK_140475d94 = bVar15,
          UNK_140475d95 = bVar16, UNK_140475d96 = bVar17, UNK_140475d97 = bVar18,
          DAT_140475d98 = bVar35, UNK_140475d99 = bVar36, UNK_140475d9a = bVar37,
          UNK_140475d9b = bVar38, UNK_140475d9c = bVar39, UNK_140475d9d = bVar40,
          UNK_140475d9e = bVar41, UNK_140475d9f = bVar42, UNK_140475da0 = bVar43,
          UNK_140475da1 = bVar44, UNK_140475da2 = bVar45, UNK_140475da3 = bVar46,
          UNK_140475da4 = bVar47, UNK_140475da5 = bVar48, UNK_140475da6 = bVar49,
          UNK_140475da7 = bVar50, s__________________140475da8[0] = bVar51,
          s__________________140475da8[1] = bVar52, s__________________140475da8[2] = bVar53,
          s__________________140475da8[3] = bVar54, s__________________140475da8[4] = bVar55,
          s__________________140475da8[5] = bVar56, s__________________140475da8[6] = bVar57,
          s__________________140475da8[7] = bVar58, s__________________140475da8[8] = bVar59,
          s__________________140475da8[9] = bVar60, s__________________140475da8[10] = bVar61,
          s__________________140475da8[0xb] = bVar62, s__________________140475da8[0xc] = bVar63,
          s__________________140475da8[0xd] = bVar64, s__________________140475da8[0xe] = bVar65,
          s__________________140475da8[0xf] = bVar66,
          pbVar73 != (byte *)((ulonglong)pbVar70 & 0xfffffffffffffff0); pbVar73 = pbVar73 + 1) {
        bVar71 = *pbVar73;
        uVar68 = (uint)bVar71;
        if (((bVar71 == 0x22) || (bVar71 == 0x5c)) || (bVar71 < 0x20)) goto LAB_14004cafe;
        *local_50 = bVar71;
        local_50 = local_50 + 1;
        bVar71 = DAT_140475d88;
        bVar4 = UNK_140475d89;
        bVar5 = UNK_140475d8a;
        bVar6 = UNK_140475d8b;
        bVar7 = UNK_140475d8c;
        bVar8 = UNK_140475d8d;
        bVar9 = UNK_140475d8e;
        bVar10 = UNK_140475d8f;
        bVar11 = UNK_140475d90;
        bVar12 = UNK_140475d91;
        bVar13 = UNK_140475d92;
        bVar14 = UNK_140475d93;
        bVar15 = UNK_140475d94;
        bVar16 = UNK_140475d95;
        bVar17 = UNK_140475d96;
        bVar18 = UNK_140475d97;
        bVar35 = DAT_140475d98;
        bVar36 = UNK_140475d99;
        bVar37 = UNK_140475d9a;
        bVar38 = UNK_140475d9b;
        bVar39 = UNK_140475d9c;
        bVar40 = UNK_140475d9d;
        bVar41 = UNK_140475d9e;
        bVar42 = UNK_140475d9f;
        bVar43 = UNK_140475da0;
        bVar44 = UNK_140475da1;
        bVar45 = UNK_140475da2;
        bVar46 = UNK_140475da3;
        bVar47 = UNK_140475da4;
        bVar48 = UNK_140475da5;
        bVar49 = UNK_140475da6;
        bVar50 = UNK_140475da7;
        bVar51 = s__________________140475da8[0];
        bVar52 = s__________________140475da8[1];
        bVar53 = s__________________140475da8[2];
        bVar54 = s__________________140475da8[3];
        bVar55 = s__________________140475da8[4];
        bVar56 = s__________________140475da8[5];
        bVar57 = s__________________140475da8[6];
        bVar58 = s__________________140475da8[7];
        bVar59 = s__________________140475da8[8];
        bVar60 = s__________________140475da8[9];
        bVar61 = s__________________140475da8[10];
        bVar62 = s__________________140475da8[0xb];
        bVar63 = s__________________140475da8[0xc];
        bVar64 = s__________________140475da8[0xd];
        bVar65 = s__________________140475da8[0xe];
        bVar66 = s__________________140475da8[0xf];
      }
      bVar19 = *pbVar73;
      bVar20 = pbVar73[1];
      bVar21 = pbVar73[2];
      bVar22 = pbVar73[3];
      bVar23 = pbVar73[4];
      bVar24 = pbVar73[5];
      bVar25 = pbVar73[6];
      bVar26 = pbVar73[7];
      bVar27 = pbVar73[8];
      bVar28 = pbVar73[9];
      bVar29 = pbVar73[10];
      bVar30 = pbVar73[0xb];
      bVar31 = pbVar73[0xc];
      bVar32 = pbVar73[0xd];
      bVar33 = pbVar73[0xe];
      bVar34 = pbVar73[0xf];
      auVar84[0] = -(bVar19 == bVar35);
      auVar84[1] = -(bVar20 == bVar36);
      auVar84[2] = -(bVar21 == bVar37);
      auVar84[3] = -(bVar22 == bVar38);
      auVar84[4] = -(bVar23 == bVar39);
      auVar84[5] = -(bVar24 == bVar40);
      auVar84[6] = -(bVar25 == bVar41);
      auVar84[7] = -(bVar26 == bVar42);
      auVar84[8] = -(bVar27 == bVar43);
      auVar84[9] = -(bVar28 == bVar44);
      auVar84[10] = -(bVar29 == bVar45);
      auVar84[0xb] = -(bVar30 == bVar46);
      auVar84[0xc] = -(bVar31 == bVar47);
      auVar84[0xd] = -(bVar32 == bVar48);
      auVar84[0xe] = -(bVar33 == bVar49);
      auVar84[0xf] = -(bVar34 == bVar50);
      auVar78[0] = -(bVar19 == bVar51);
      auVar78[1] = -(bVar20 == bVar52);
      auVar78[2] = -(bVar21 == bVar53);
      auVar78[3] = -(bVar22 == bVar54);
      auVar78[4] = -(bVar23 == bVar55);
      auVar78[5] = -(bVar24 == bVar56);
      auVar78[6] = -(bVar25 == bVar57);
      auVar78[7] = -(bVar26 == bVar58);
      auVar78[8] = -(bVar27 == bVar59);
      auVar78[9] = -(bVar28 == bVar60);
      auVar78[10] = -(bVar29 == bVar61);
      auVar78[0xb] = -(bVar30 == bVar62);
      auVar78[0xc] = -(bVar31 == bVar63);
      auVar78[0xd] = -(bVar32 == bVar64);
      auVar78[0xe] = -(bVar33 == bVar65);
      auVar78[0xf] = -(bVar34 == bVar66);
      auVar85[0] = -((byte)((bVar19 < bVar71) * bVar71 | (bVar19 >= bVar71) * bVar19) == bVar71);
      auVar85[1] = -((byte)((bVar20 < bVar4) * bVar4 | (bVar20 >= bVar4) * bVar20) == bVar4);
      auVar85[2] = -((byte)((bVar21 < bVar5) * bVar5 | (bVar21 >= bVar5) * bVar21) == bVar5);
      auVar85[3] = -((byte)((bVar22 < bVar6) * bVar6 | (bVar22 >= bVar6) * bVar22) == bVar6);
      auVar85[4] = -((byte)((bVar23 < bVar7) * bVar7 | (bVar23 >= bVar7) * bVar23) == bVar7);
      auVar85[5] = -((byte)((bVar24 < bVar8) * bVar8 | (bVar24 >= bVar8) * bVar24) == bVar8);
      auVar85[6] = -((byte)((bVar25 < bVar9) * bVar9 | (bVar25 >= bVar9) * bVar25) == bVar9);
      auVar85[7] = -((byte)((bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26) == bVar10);
      auVar85[8] = -((byte)((bVar27 < bVar11) * bVar11 | (bVar27 >= bVar11) * bVar27) == bVar11);
      auVar85[9] = -((byte)((bVar28 < bVar12) * bVar12 | (bVar28 >= bVar12) * bVar28) == bVar12);
      auVar85[10] = -((byte)((bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29) == bVar13);
      auVar85[0xb] = -((byte)((bVar30 < bVar14) * bVar14 | (bVar30 >= bVar14) * bVar30) == bVar14);
      auVar85[0xc] = -((byte)((bVar31 < bVar15) * bVar15 | (bVar31 >= bVar15) * bVar31) == bVar15);
      auVar85[0xd] = -((byte)((bVar32 < bVar16) * bVar16 | (bVar32 >= bVar16) * bVar32) == bVar16);
      auVar85[0xe] = -((byte)((bVar33 < bVar17) * bVar17 | (bVar33 >= bVar17) * bVar33) == bVar17);
      auVar85[0xf] = -((byte)((bVar34 < bVar18) * bVar18 | (bVar34 >= bVar18) * bVar34) == bVar18);
      auVar85 = auVar84 | auVar78 | auVar85;
      uVar2 = (ushort)(SUB161(auVar85 >> 7,0) & 1) | (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar85[0xf] >> 7) << 0xf;
      while (uVar2 == 0) {
        *local_50 = bVar19;
        local_50[1] = bVar20;
        local_50[2] = bVar21;
        local_50[3] = bVar22;
        local_50[4] = bVar23;
        local_50[5] = bVar24;
        local_50[6] = bVar25;
        local_50[7] = bVar26;
        local_50[8] = bVar27;
        local_50[9] = bVar28;
        local_50[10] = bVar29;
        local_50[0xb] = bVar30;
        local_50[0xc] = bVar31;
        local_50[0xd] = bVar32;
        local_50[0xe] = bVar33;
        local_50[0xf] = bVar34;
        local_50 = local_50 + 0x10;
        bVar19 = pbVar73[0x10];
        bVar20 = pbVar73[0x11];
        bVar21 = pbVar73[0x12];
        bVar22 = pbVar73[0x13];
        bVar23 = pbVar73[0x14];
        bVar24 = pbVar73[0x15];
        bVar25 = pbVar73[0x16];
        bVar26 = pbVar73[0x17];
        bVar27 = pbVar73[0x18];
        bVar28 = pbVar73[0x19];
        bVar29 = pbVar73[0x1a];
        bVar30 = pbVar73[0x1b];
        bVar31 = pbVar73[0x1c];
        bVar32 = pbVar73[0x1d];
        bVar33 = pbVar73[0x1e];
        bVar34 = pbVar73[0x1f];
        auVar86[0] = -(bVar19 == bVar35);
        auVar86[1] = -(bVar20 == bVar36);
        auVar86[2] = -(bVar21 == bVar37);
        auVar86[3] = -(bVar22 == bVar38);
        auVar86[4] = -(bVar23 == bVar39);
        auVar86[5] = -(bVar24 == bVar40);
        auVar86[6] = -(bVar25 == bVar41);
        auVar86[7] = -(bVar26 == bVar42);
        auVar86[8] = -(bVar27 == bVar43);
        auVar86[9] = -(bVar28 == bVar44);
        auVar86[10] = -(bVar29 == bVar45);
        auVar86[0xb] = -(bVar30 == bVar46);
        auVar86[0xc] = -(bVar31 == bVar47);
        auVar86[0xd] = -(bVar32 == bVar48);
        auVar86[0xe] = -(bVar33 == bVar49);
        auVar86[0xf] = -(bVar34 == bVar50);
        auVar79[0] = -(bVar19 == bVar51);
        auVar79[1] = -(bVar20 == bVar52);
        auVar79[2] = -(bVar21 == bVar53);
        auVar79[3] = -(bVar22 == bVar54);
        auVar79[4] = -(bVar23 == bVar55);
        auVar79[5] = -(bVar24 == bVar56);
        auVar79[6] = -(bVar25 == bVar57);
        auVar79[7] = -(bVar26 == bVar58);
        auVar79[8] = -(bVar27 == bVar59);
        auVar79[9] = -(bVar28 == bVar60);
        auVar79[10] = -(bVar29 == bVar61);
        auVar79[0xb] = -(bVar30 == bVar62);
        auVar79[0xc] = -(bVar31 == bVar63);
        auVar79[0xd] = -(bVar32 == bVar64);
        auVar79[0xe] = -(bVar33 == bVar65);
        auVar79[0xf] = -(bVar34 == bVar66);
        auVar87[0] = -((byte)((bVar19 < bVar71) * bVar71 | (bVar19 >= bVar71) * bVar19) == bVar71);
        auVar87[1] = -((byte)((bVar20 < bVar4) * bVar4 | (bVar20 >= bVar4) * bVar20) == bVar4);
        auVar87[2] = -((byte)((bVar21 < bVar5) * bVar5 | (bVar21 >= bVar5) * bVar21) == bVar5);
        auVar87[3] = -((byte)((bVar22 < bVar6) * bVar6 | (bVar22 >= bVar6) * bVar22) == bVar6);
        auVar87[4] = -((byte)((bVar23 < bVar7) * bVar7 | (bVar23 >= bVar7) * bVar23) == bVar7);
        auVar87[5] = -((byte)((bVar24 < bVar8) * bVar8 | (bVar24 >= bVar8) * bVar24) == bVar8);
        auVar87[6] = -((byte)((bVar25 < bVar9) * bVar9 | (bVar25 >= bVar9) * bVar25) == bVar9);
        auVar87[7] = -((byte)((bVar26 < bVar10) * bVar10 | (bVar26 >= bVar10) * bVar26) == bVar10);
        auVar87[8] = -((byte)((bVar27 < bVar11) * bVar11 | (bVar27 >= bVar11) * bVar27) == bVar11);
        auVar87[9] = -((byte)((bVar28 < bVar12) * bVar12 | (bVar28 >= bVar12) * bVar28) == bVar12);
        auVar87[10] = -((byte)((bVar29 < bVar13) * bVar13 | (bVar29 >= bVar13) * bVar29) == bVar13);
        auVar87[0xb] = -((byte)((bVar30 < bVar14) * bVar14 | (bVar30 >= bVar14) * bVar30) == bVar14)
        ;
        auVar87[0xc] = -((byte)((bVar31 < bVar15) * bVar15 | (bVar31 >= bVar15) * bVar31) == bVar15)
        ;
        auVar87[0xd] = -((byte)((bVar32 < bVar16) * bVar16 | (bVar32 >= bVar16) * bVar32) == bVar16)
        ;
        auVar87[0xe] = -((byte)((bVar33 < bVar17) * bVar17 | (bVar33 >= bVar17) * bVar33) == bVar17)
        ;
        auVar87[0xf] = -((byte)((bVar34 < bVar18) * bVar18 | (bVar34 >= bVar18) * bVar34) == bVar18)
        ;
        auVar87 = auVar86 | auVar79 | auVar87;
        pbVar73 = pbVar73 + 0x10;
        uVar2 = (ushort)(SUB161(auVar87 >> 7,0) & 1) | (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar87[0xf] >> 7) << 0xf;
      }
      uVar68 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar68 & 1) == 0; uVar68 = uVar68 + 1) {
        }
      }
      pbVar70 = pbVar73 + uVar68;
      for (; pbVar73 != pbVar70; pbVar73 = pbVar73 + 1) {
        *local_50 = *pbVar73;
        local_50 = local_50 + 1;
      }
    }
    uVar68 = (uint)*pbVar73;
LAB_14004cafe:
    pbVar70 = local_50;
    bVar71 = (byte)uVar68;
    if (bVar71 == 0x5c) {
      lVar75 = (longlong)pbVar73 - local_48;
      if ((&DAT_140475dc0)[pbVar73[1]] != 0) {
        if (local_50 == (byte *)0x0) {
          func_0x0001402cba34(L"dst_ != 0",
                              L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199);
          return;
        }
        *local_50 = (&DAT_140475dc0)[pbVar73[1]];
        local_50 = local_50 + 1;
        pbVar73 = pbVar73 + 2;
        goto LAB_14004c920;
      }
      if (pbVar73[1] != 0x75) {
        if (*(int *)(param_1 + 0x30) != 0) {
          func_0x0001402cba34(L"!HasParseError()",
                              L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x417
                             );
        }
        *(undefined4 *)(param_1 + 0x30) = 10;
        *(longlong *)(param_1 + 0x38) = lVar75;
        pbVar73 = pbVar73 + 1;
        goto UNWIND_INFO_14004ce91_CountOfUnwindCodes;
      }
      local_58 = pbVar73 + 2;
      uVar68 = func_0x00014004fae0(param_1,&local_58);
      pbVar70 = local_50;
      pbVar73 = local_58;
      if (*(int *)(param_1 + 0x30) != 0) goto UNWIND_INFO_14004ce91_CountOfUnwindCodes;
      if (uVar68 - 0xd800 < 0x800) {
        if (((uVar68 < 0xdc00) && (*local_58 == 0x5c)) &&
           (pbVar73 = local_58 + 1, local_58[1] == 0x75)) {
          local_58 = local_58 + 2;
          iVar69 = 0;
          iVar74 = 0;
          do {
            bVar71 = *local_58;
            iVar69 = iVar69 * 0x10 + (int)(char)bVar71;
            if ((byte)(bVar71 - 0x30) < 10) {
              iVar69 = iVar69 + -0x30;
            }
            else if ((byte)(bVar71 + 0xbf) < 6) {
              iVar69 = iVar69 + -0x37;
            }
            else {
              if (5 < (byte)(bVar71 + 0x9f)) {
                *(undefined4 *)(param_1 + 0x30) = 8;
                iVar69 = 0;
                *(longlong *)(param_1 + 0x38) = lVar75;
                break;
              }
              iVar69 = iVar69 + -0x57;
            }
            local_58 = local_58 + 1;
            iVar74 = iVar74 + 1;
          } while (iVar74 < 4);
          pbVar73 = local_58;
          if (*(int *)(param_1 + 0x30) != 0) goto UNWIND_INFO_14004ce91_CountOfUnwindCodes;
          if (iVar69 - 0xdc00U < 0x400) {
            uVar68 = ((uVar68 - 0xd800) * 0x400 | iVar69 - 0xdc00U) + 0x10000;
            goto LAB_14004cc47;
          }
        }
        *(undefined4 *)(param_1 + 0x30) = 9;
        *(longlong *)(param_1 + 0x38) = lVar75;
UNWIND_INFO_14004ce91_CountOfUnwindCodes:
        if (*(int *)(param_1 + 0x30) == 0) {
          pbVar72 = pbVar70 + (-1 - (longlong)pbVar1);
          if ((byte *)0xffffffff < pbVar72) {
            func_0x0001402cba34(L"length <= 0xFFFFFFFF",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                                0x3cc);
          }
          if (param_4 == '\0') {
            cVar67 = func_0x00014003eef0(param_3,pbVar1,(ulonglong)pbVar72 & 0xffffffff);
            if (cVar67 == '\0') {
              if (*(int *)(param_1 + 0x30) != 0) {
                func_0x0001402cba34(L"!HasParseError()",
                                    L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h"
                                    ,0x3d9);
              }
              *(undefined4 *)(param_1 + 0x30) = 0x10;
              *(longlong *)(param_1 + 0x38) = (longlong)pbVar73 - local_48;
            }
          }
          else {
            lVar75 = *(longlong *)(param_3 + 0x20);
            *(byte **)(lVar75 + -0x10) = pbVar1;
            *(int *)(lVar75 + -8) = (int)pbVar72;
            *(undefined4 *)(lVar75 + -4) = local_50._4_4_;
          }
        }
        *local_40 = pbVar73;
        local_40[1] = pbVar70;
        local_40[2] = local_48;
        return;
      }
LAB_14004cc47:
      pbVar73 = local_58;
      if (0x7f < uVar68) {
        bVar71 = (byte)uVar68;
        if (uVar68 < 0x800) {
          if (local_50 == (byte *)0x0) {
            func_0x0001402cba34(L"dst_ != 0",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199
                               );
            return;
          }
          *local_50 = (byte)(uVar68 >> 6) | 0xc0;
          if (local_50 + 1 == (byte *)0x0) {
            func_0x0001402cba34(L"dst_ != 0",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199
                               );
            return;
          }
          local_50[1] = bVar71 & 0x3f | 0x80;
          local_50 = local_50 + 2;
        }
        else {
          uVar3 = (uint3)(uVar68 >> 8);
          if (uVar68 < 0x10000) {
            FUN_140050680(&local_58,CONCAT31(uVar3 >> 0xc,(char)(uVar68 >> 0xc)) | 0xe0);
            FUN_140050680(&local_58,CONCAT31(uVar3 >> 6,(char)(uVar68 >> 6)) & 0xffffff3f | 0x80);
            FUN_140050680(&local_58,bVar71 & 0x3f | 0x80);
            pbVar73 = local_58;
          }
          else {
            if (0x10ffff < uVar68) {
              func_0x0001402cba34(L"codepoint <= 0x10FFFF",
                                  L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\encodings.h"
                                  ,0x73);
              return;
            }
            FUN_140050680(&local_58,CONCAT31(uVar3 >> 0x12,(char)(uVar68 >> 0x12)) | 0xf0);
            FUN_140050680(&local_58,CONCAT31(uVar3 >> 0xc,(char)(uVar68 >> 0xc)) & 0xffffff3f | 0x80
                         );
            FUN_140050680(&local_58,CONCAT31(uVar3 >> 6,(char)(uVar68 >> 6)) & 0xffffff3f | 0x80);
            FUN_140050680(&local_58,bVar71 & 0x3f | 0x80);
            pbVar73 = local_58;
          }
        }
        goto LAB_14004c920;
      }
    }
    else {
      if (bVar71 == 0x22) {
        if (local_50 == (byte *)0x0) {
          func_0x0001402cba34(L"dst_ != 0",
                              L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199);
          return;
        }
        *local_50 = 0;
        pbVar70 = local_50 + 1;
        pbVar73 = pbVar73 + 1;
        goto UNWIND_INFO_14004ce91_CountOfUnwindCodes;
      }
      if (bVar71 < 0x20) {
        if (bVar71 == 0) {
          if (*(int *)(param_1 + 0x30) != 0) {
            func_0x0001402cba34(L"!HasParseError()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                                0x420);
            return;
          }
          *(undefined4 *)(param_1 + 0x30) = 0xb;
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar73 - local_48;
        }
        else {
          if (*(int *)(param_1 + 0x30) != 0) {
            func_0x0001402cba34(L"!HasParseError()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                                0x422);
            return;
          }
          *(undefined4 *)(param_1 + 0x30) = 0xc;
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar73 - local_48;
        }
        goto UNWIND_INFO_14004ce91_CountOfUnwindCodes;
      }
      pbVar73 = pbVar73 + 1;
    }
    if (local_50 == (byte *)0x0) {
      func_0x0001402cba34(L"dst_ != 0",
                          L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\stream.h",199);
      return;
    }
    *local_50 = (byte)uVar68;
    local_50 = local_50 + 1;
  } while( true );
}

