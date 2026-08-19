// Function: FUN_1401176d0
// Addr: 1401176d0
// Size: 1080 bytes


void FUN_1401176d0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
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
  char cVar65;
  uint uVar66;
  byte *pbVar67;
  char *pcVar68;
  int iVar69;
  ulonglong uVar70;
  byte *pbVar71;
  byte *pbVar72;
  byte bVar73;
  ulonglong uVar74;
  longlong lVar75;
  int iVar76;
  uint uVar77;
  longlong lVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  longlong local_b8;
  uint local_b0;
  byte *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  
  local_a0 = param_2[1];
  local_98 = param_2;
  if (*(char *)*param_2 != '\"') {
    func_0x0001402cba34(L"s.Peek() == \'\\\"\'",
                        L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x3c3);
    return;
  }
  pbVar71 = (byte *)((char *)*param_2 + 1);
  local_b0 = 0;
  lVar78 = param_1;
  local_b8 = param_1;
LAB_140117750:
  do {
    pbVar72 = pbVar71 + 0xf;
    bVar73 = DAT_1404897d8;
    bVar18 = UNK_1404897d9;
    bVar19 = UNK_1404897da;
    bVar20 = UNK_1404897db;
    bVar21 = UNK_1404897dc;
    bVar22 = UNK_1404897dd;
    bVar23 = UNK_1404897de;
    bVar24 = UNK_1404897df;
    bVar25 = UNK_1404897e0;
    bVar26 = UNK_1404897e1;
    bVar27 = UNK_1404897e2;
    bVar28 = UNK_1404897e3;
    bVar29 = UNK_1404897e4;
    bVar30 = UNK_1404897e5;
    bVar31 = UNK_1404897e6;
    bVar32 = UNK_1404897e7;
    bVar33 = DAT_1404897e8;
    bVar34 = UNK_1404897e9;
    bVar35 = UNK_1404897ea;
    bVar36 = UNK_1404897eb;
    bVar37 = UNK_1404897ec;
    bVar38 = UNK_1404897ed;
    bVar39 = UNK_1404897ee;
    bVar40 = UNK_1404897ef;
    bVar41 = UNK_1404897f0;
    bVar42 = UNK_1404897f1;
    bVar43 = UNK_1404897f2;
    bVar44 = UNK_1404897f3;
    bVar45 = UNK_1404897f4;
    bVar46 = UNK_1404897f5;
    bVar47 = UNK_1404897f6;
    bVar48 = UNK_1404897f7;
    bVar49 = DAT_1404897f8;
    bVar50 = UNK_1404897f9;
    bVar51 = UNK_1404897fa;
    bVar52 = UNK_1404897fb;
    bVar53 = UNK_1404897fc;
    bVar54 = UNK_1404897fd;
    bVar55 = UNK_1404897fe;
    bVar56 = UNK_1404897ff;
    bVar57 = UNK_140489800;
    bVar58 = UNK_140489801;
    bVar59 = UNK_140489802;
    bVar60 = UNK_140489803;
    bVar61 = UNK_140489804;
    bVar62 = UNK_140489805;
    bVar63 = UNK_140489806;
    bVar64 = UNK_140489807;
    uVar77 = local_b0;
    for (; DAT_1404897d8 = bVar73, UNK_1404897d9 = bVar18, UNK_1404897da = bVar19,
        UNK_1404897db = bVar20, UNK_1404897dc = bVar21, UNK_1404897dd = bVar22,
        UNK_1404897de = bVar23, UNK_1404897df = bVar24, UNK_1404897e0 = bVar25,
        UNK_1404897e1 = bVar26, UNK_1404897e2 = bVar27, UNK_1404897e3 = bVar28,
        UNK_1404897e4 = bVar29, UNK_1404897e5 = bVar30, UNK_1404897e6 = bVar31,
        UNK_1404897e7 = bVar32, DAT_1404897e8 = bVar33, UNK_1404897e9 = bVar34,
        UNK_1404897ea = bVar35, UNK_1404897eb = bVar36, UNK_1404897ec = bVar37,
        UNK_1404897ed = bVar38, UNK_1404897ee = bVar39, UNK_1404897ef = bVar40,
        UNK_1404897f0 = bVar41, UNK_1404897f1 = bVar42, UNK_1404897f2 = bVar43,
        UNK_1404897f3 = bVar44, UNK_1404897f4 = bVar45, UNK_1404897f5 = bVar46,
        UNK_1404897f6 = bVar47, UNK_1404897f7 = bVar48, DAT_1404897f8 = bVar49,
        UNK_1404897f9 = bVar50, UNK_1404897fa = bVar51, UNK_1404897fb = bVar52,
        UNK_1404897fc = bVar53, UNK_1404897fd = bVar54, UNK_1404897fe = bVar55,
        UNK_1404897ff = bVar56, UNK_140489800 = bVar57, UNK_140489801 = bVar58,
        UNK_140489802 = bVar59, UNK_140489803 = bVar60, UNK_140489804 = bVar61,
        UNK_140489805 = bVar62, UNK_140489806 = bVar63, UNK_140489807 = bVar64, local_b0 = uVar77,
        pbVar71 != (byte *)((ulonglong)pbVar72 & 0xfffffffffffffff0); pbVar71 = pbVar71 + 1) {
      bVar73 = *pbVar71;
      if (((bVar73 == 0x22) || (bVar73 == 0x5c)) || (bVar73 < 0x20)) goto LAB_1401178b6;
      pbVar67 = (byte *)func_0x000140049300(lVar78,1);
      uVar77 = uVar77 + 1;
      *pbVar67 = bVar73;
      bVar73 = DAT_1404897d8;
      bVar18 = UNK_1404897d9;
      bVar19 = UNK_1404897da;
      bVar20 = UNK_1404897db;
      bVar21 = UNK_1404897dc;
      bVar22 = UNK_1404897dd;
      bVar23 = UNK_1404897de;
      bVar24 = UNK_1404897df;
      bVar25 = UNK_1404897e0;
      bVar26 = UNK_1404897e1;
      bVar27 = UNK_1404897e2;
      bVar28 = UNK_1404897e3;
      bVar29 = UNK_1404897e4;
      bVar30 = UNK_1404897e5;
      bVar31 = UNK_1404897e6;
      bVar32 = UNK_1404897e7;
      bVar33 = DAT_1404897e8;
      bVar34 = UNK_1404897e9;
      bVar35 = UNK_1404897ea;
      bVar36 = UNK_1404897eb;
      bVar37 = UNK_1404897ec;
      bVar38 = UNK_1404897ed;
      bVar39 = UNK_1404897ee;
      bVar40 = UNK_1404897ef;
      bVar41 = UNK_1404897f0;
      bVar42 = UNK_1404897f1;
      bVar43 = UNK_1404897f2;
      bVar44 = UNK_1404897f3;
      bVar45 = UNK_1404897f4;
      bVar46 = UNK_1404897f5;
      bVar47 = UNK_1404897f6;
      bVar48 = UNK_1404897f7;
      bVar49 = DAT_1404897f8;
      bVar50 = UNK_1404897f9;
      bVar51 = UNK_1404897fa;
      bVar52 = UNK_1404897fb;
      bVar53 = UNK_1404897fc;
      bVar54 = UNK_1404897fd;
      bVar55 = UNK_1404897fe;
      bVar56 = UNK_1404897ff;
      bVar57 = UNK_140489800;
      bVar58 = UNK_140489801;
      bVar59 = UNK_140489802;
      bVar60 = UNK_140489803;
      bVar61 = UNK_140489804;
      bVar62 = UNK_140489805;
      bVar63 = UNK_140489806;
      bVar64 = UNK_140489807;
    }
    bVar2 = *pbVar71;
    bVar3 = pbVar71[1];
    bVar4 = pbVar71[2];
    bVar5 = pbVar71[3];
    bVar6 = pbVar71[4];
    bVar7 = pbVar71[5];
    bVar8 = pbVar71[6];
    bVar9 = pbVar71[7];
    bVar10 = pbVar71[8];
    bVar11 = pbVar71[9];
    bVar12 = pbVar71[10];
    bVar13 = pbVar71[0xb];
    bVar14 = pbVar71[0xc];
    bVar15 = pbVar71[0xd];
    bVar16 = pbVar71[0xe];
    bVar17 = pbVar71[0xf];
    auVar81[0] = -(bVar2 == bVar33);
    auVar81[1] = -(bVar3 == bVar34);
    auVar81[2] = -(bVar4 == bVar35);
    auVar81[3] = -(bVar5 == bVar36);
    auVar81[4] = -(bVar6 == bVar37);
    auVar81[5] = -(bVar7 == bVar38);
    auVar81[6] = -(bVar8 == bVar39);
    auVar81[7] = -(bVar9 == bVar40);
    auVar81[8] = -(bVar10 == bVar41);
    auVar81[9] = -(bVar11 == bVar42);
    auVar81[10] = -(bVar12 == bVar43);
    auVar81[0xb] = -(bVar13 == bVar44);
    auVar81[0xc] = -(bVar14 == bVar45);
    auVar81[0xd] = -(bVar15 == bVar46);
    auVar81[0xe] = -(bVar16 == bVar47);
    auVar81[0xf] = -(bVar17 == bVar48);
    auVar79[0] = -(bVar2 == bVar49);
    auVar79[1] = -(bVar3 == bVar50);
    auVar79[2] = -(bVar4 == bVar51);
    auVar79[3] = -(bVar5 == bVar52);
    auVar79[4] = -(bVar6 == bVar53);
    auVar79[5] = -(bVar7 == bVar54);
    auVar79[6] = -(bVar8 == bVar55);
    auVar79[7] = -(bVar9 == bVar56);
    auVar79[8] = -(bVar10 == bVar57);
    auVar79[9] = -(bVar11 == bVar58);
    auVar79[10] = -(bVar12 == bVar59);
    auVar79[0xb] = -(bVar13 == bVar60);
    auVar79[0xc] = -(bVar14 == bVar61);
    auVar79[0xd] = -(bVar15 == bVar62);
    auVar79[0xe] = -(bVar16 == bVar63);
    auVar79[0xf] = -(bVar17 == bVar64);
    auVar82[0] = -((byte)((bVar2 < bVar73) * bVar73 | (bVar2 >= bVar73) * bVar2) == bVar73);
    auVar82[1] = -((byte)((bVar3 < bVar18) * bVar18 | (bVar3 >= bVar18) * bVar3) == bVar18);
    auVar82[2] = -((byte)((bVar4 < bVar19) * bVar19 | (bVar4 >= bVar19) * bVar4) == bVar19);
    auVar82[3] = -((byte)((bVar5 < bVar20) * bVar20 | (bVar5 >= bVar20) * bVar5) == bVar20);
    auVar82[4] = -((byte)((bVar6 < bVar21) * bVar21 | (bVar6 >= bVar21) * bVar6) == bVar21);
    auVar82[5] = -((byte)((bVar7 < bVar22) * bVar22 | (bVar7 >= bVar22) * bVar7) == bVar22);
    auVar82[6] = -((byte)((bVar8 < bVar23) * bVar23 | (bVar8 >= bVar23) * bVar8) == bVar23);
    auVar82[7] = -((byte)((bVar9 < bVar24) * bVar24 | (bVar9 >= bVar24) * bVar9) == bVar24);
    auVar82[8] = -((byte)((bVar10 < bVar25) * bVar25 | (bVar10 >= bVar25) * bVar10) == bVar25);
    auVar82[9] = -((byte)((bVar11 < bVar26) * bVar26 | (bVar11 >= bVar26) * bVar11) == bVar26);
    auVar82[10] = -((byte)((bVar12 < bVar27) * bVar27 | (bVar12 >= bVar27) * bVar12) == bVar27);
    auVar82[0xb] = -((byte)((bVar13 < bVar28) * bVar28 | (bVar13 >= bVar28) * bVar13) == bVar28);
    auVar82[0xc] = -((byte)((bVar14 < bVar29) * bVar29 | (bVar14 >= bVar29) * bVar14) == bVar29);
    auVar82[0xd] = -((byte)((bVar15 < bVar30) * bVar30 | (bVar15 >= bVar30) * bVar15) == bVar30);
    auVar82[0xe] = -((byte)((bVar16 < bVar31) * bVar31 | (bVar16 >= bVar31) * bVar16) == bVar31);
    auVar82[0xf] = -((byte)((bVar17 < bVar32) * bVar32 | (bVar17 >= bVar32) * bVar17) == bVar32);
    auVar82 = auVar81 | auVar79 | auVar82;
    uVar1 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
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
    while (uVar1 == 0) {
      uVar77 = uVar77 + 0x10;
      pbVar72 = (byte *)func_0x000140049300(lVar78,0x10);
      *pbVar72 = bVar2;
      pbVar72[1] = bVar3;
      pbVar72[2] = bVar4;
      pbVar72[3] = bVar5;
      pbVar72[4] = bVar6;
      pbVar72[5] = bVar7;
      pbVar72[6] = bVar8;
      pbVar72[7] = bVar9;
      pbVar72[8] = bVar10;
      pbVar72[9] = bVar11;
      pbVar72[10] = bVar12;
      pbVar72[0xb] = bVar13;
      pbVar72[0xc] = bVar14;
      pbVar72[0xd] = bVar15;
      pbVar72[0xe] = bVar16;
      pbVar72[0xf] = bVar17;
      bVar2 = pbVar71[0x10];
      bVar3 = pbVar71[0x11];
      bVar4 = pbVar71[0x12];
      bVar5 = pbVar71[0x13];
      bVar6 = pbVar71[0x14];
      bVar7 = pbVar71[0x15];
      bVar8 = pbVar71[0x16];
      bVar9 = pbVar71[0x17];
      bVar10 = pbVar71[0x18];
      bVar11 = pbVar71[0x19];
      bVar12 = pbVar71[0x1a];
      bVar13 = pbVar71[0x1b];
      bVar14 = pbVar71[0x1c];
      bVar15 = pbVar71[0x1d];
      bVar16 = pbVar71[0x1e];
      bVar17 = pbVar71[0x1f];
      auVar83[0] = -(bVar2 == bVar33);
      auVar83[1] = -(bVar3 == bVar34);
      auVar83[2] = -(bVar4 == bVar35);
      auVar83[3] = -(bVar5 == bVar36);
      auVar83[4] = -(bVar6 == bVar37);
      auVar83[5] = -(bVar7 == bVar38);
      auVar83[6] = -(bVar8 == bVar39);
      auVar83[7] = -(bVar9 == bVar40);
      auVar83[8] = -(bVar10 == bVar41);
      auVar83[9] = -(bVar11 == bVar42);
      auVar83[10] = -(bVar12 == bVar43);
      auVar83[0xb] = -(bVar13 == bVar44);
      auVar83[0xc] = -(bVar14 == bVar45);
      auVar83[0xd] = -(bVar15 == bVar46);
      auVar83[0xe] = -(bVar16 == bVar47);
      auVar83[0xf] = -(bVar17 == bVar48);
      auVar80[0] = -(bVar2 == bVar49);
      auVar80[1] = -(bVar3 == bVar50);
      auVar80[2] = -(bVar4 == bVar51);
      auVar80[3] = -(bVar5 == bVar52);
      auVar80[4] = -(bVar6 == bVar53);
      auVar80[5] = -(bVar7 == bVar54);
      auVar80[6] = -(bVar8 == bVar55);
      auVar80[7] = -(bVar9 == bVar56);
      auVar80[8] = -(bVar10 == bVar57);
      auVar80[9] = -(bVar11 == bVar58);
      auVar80[10] = -(bVar12 == bVar59);
      auVar80[0xb] = -(bVar13 == bVar60);
      auVar80[0xc] = -(bVar14 == bVar61);
      auVar80[0xd] = -(bVar15 == bVar62);
      auVar80[0xe] = -(bVar16 == bVar63);
      auVar80[0xf] = -(bVar17 == bVar64);
      auVar84[0] = -((byte)((bVar2 < bVar73) * bVar73 | (bVar2 >= bVar73) * bVar2) == bVar73);
      auVar84[1] = -((byte)((bVar3 < bVar18) * bVar18 | (bVar3 >= bVar18) * bVar3) == bVar18);
      auVar84[2] = -((byte)((bVar4 < bVar19) * bVar19 | (bVar4 >= bVar19) * bVar4) == bVar19);
      auVar84[3] = -((byte)((bVar5 < bVar20) * bVar20 | (bVar5 >= bVar20) * bVar5) == bVar20);
      auVar84[4] = -((byte)((bVar6 < bVar21) * bVar21 | (bVar6 >= bVar21) * bVar6) == bVar21);
      auVar84[5] = -((byte)((bVar7 < bVar22) * bVar22 | (bVar7 >= bVar22) * bVar7) == bVar22);
      auVar84[6] = -((byte)((bVar8 < bVar23) * bVar23 | (bVar8 >= bVar23) * bVar8) == bVar23);
      auVar84[7] = -((byte)((bVar9 < bVar24) * bVar24 | (bVar9 >= bVar24) * bVar9) == bVar24);
      auVar84[8] = -((byte)((bVar10 < bVar25) * bVar25 | (bVar10 >= bVar25) * bVar10) == bVar25);
      auVar84[9] = -((byte)((bVar11 < bVar26) * bVar26 | (bVar11 >= bVar26) * bVar11) == bVar26);
      auVar84[10] = -((byte)((bVar12 < bVar27) * bVar27 | (bVar12 >= bVar27) * bVar12) == bVar27);
      auVar84[0xb] = -((byte)((bVar13 < bVar28) * bVar28 | (bVar13 >= bVar28) * bVar13) == bVar28);
      auVar84[0xc] = -((byte)((bVar14 < bVar29) * bVar29 | (bVar14 >= bVar29) * bVar14) == bVar29);
      auVar84[0xd] = -((byte)((bVar15 < bVar30) * bVar30 | (bVar15 >= bVar30) * bVar15) == bVar30);
      auVar84[0xe] = -((byte)((bVar16 < bVar31) * bVar31 | (bVar16 >= bVar31) * bVar16) == bVar31);
      auVar84[0xf] = -((byte)((bVar17 < bVar32) * bVar32 | (bVar17 >= bVar32) * bVar17) == bVar32);
      auVar84 = auVar83 | auVar80 | auVar84;
      pbVar71 = pbVar71 + 0x10;
      uVar1 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
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
    uVar66 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar66 & 1) == 0; uVar66 = uVar66 + 1) {
      }
    }
    local_b0 = uVar77;
    if (uVar66 != 0) {
      uVar77 = uVar77 + uVar66;
      uVar74 = (ulonglong)uVar66;
      local_b0 = uVar77;
      pbVar72 = (byte *)func_0x000140049300(lVar78,uVar66);
      if (uVar66 != 0) {
        if ((0xf < uVar66) &&
           ((pbVar71 + ((ulonglong)uVar66 - 1) < pbVar72 || (pbVar72 + (uVar74 - 1) < pbVar71)))) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(pbVar72,pbVar71,uVar74);
        }
        uVar70 = 0;
        do {
          pbVar72[uVar70] = pbVar71[uVar70];
          uVar70 = uVar70 + 1;
        } while (uVar70 < uVar74);
      }
      pbVar71 = pbVar71 + uVar74;
    }
    bVar73 = *pbVar71;
LAB_1401178b6:
    if (bVar73 != 0x5c) {
      if (bVar73 == 0x22) {
        pbVar71 = pbVar71 + 1;
        func_0x00014004f9c0(&local_b8,0);
        lVar78 = local_b8;
        uVar77 = local_b0;
        goto UNWIND_INFO_140117ace_UnwindCodes_10__UnwindOpCode;
      }
      if (bVar73 < 0x20) {
        if (bVar73 == 0) {
          if (*(int *)(param_1 + 0x30) != 0) {
            func_0x0001402cba34(L"!HasParseError()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                                0x420);
            return;
          }
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar71 - local_a0;
          *(undefined4 *)(param_1 + 0x30) = 0xb;
        }
        else {
          if (*(int *)(param_1 + 0x30) != 0) {
            func_0x0001402cba34(L"!HasParseError()",
                                L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",
                                0x422);
            return;
          }
          *(longlong *)(param_1 + 0x38) = (longlong)pbVar71 - local_a0;
          *(undefined4 *)(param_1 + 0x30) = 0xc;
        }
        goto UNWIND_INFO_140117ace_UnwindCodes_10__UnwindOpCode;
      }
      pbVar71 = pbVar71 + 1;
      func_0x00014004f9c0(&local_b8,bVar73);
      lVar78 = local_b8;
      goto LAB_140117750;
    }
    cVar65 = (&DAT_140475dc0)[pbVar71[1]];
    if (cVar65 == '\0') {
      lVar75 = (longlong)pbVar71 - local_a0;
      if (pbVar71[1] != 0x75) {
        if (*(int *)(param_1 + 0x30) != 0) {
          func_0x0001402cba34(L"!HasParseError()",
                              L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h",0x417
                             );
          return;
        }
        *(undefined4 *)(param_1 + 0x30) = 10;
        *(longlong *)(param_1 + 0x38) = lVar75;
        pbVar71 = pbVar71 + 1;
        goto UNWIND_INFO_140117ace_UnwindCodes_10__UnwindOpCode;
      }
      local_a8 = pbVar71 + 2;
      uVar66 = func_0x00014004fae0(param_1,&local_a8);
      pbVar71 = local_a8;
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_140117b62;
      if (uVar66 - 0xd800 < 0x800) {
        if (((0xdbff < uVar66) || (*local_a8 != 0x5c)) || (pbVar71 = local_a8 + 1, *pbVar71 != 0x75)
           ) {
LAB_140117a2a:
          *(undefined4 *)(param_1 + 0x30) = 9;
          *(longlong *)(param_1 + 0x38) = lVar75;
UNWIND_INFO_140117ace_UnwindCodes_10__UnwindOpCode:
          if (*(int *)(param_1 + 0x30) == 0) {
            if ((ulonglong)(*(longlong *)(lVar78 + 0x18) - *(longlong *)(lVar78 + 0x10)) <
                (ulonglong)uVar77) {
              func_0x0001402cba34(L"GetSize() >= count * sizeof(T)",
                                  L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h"
                                  ,0x8b);
            }
            *(longlong *)(lVar78 + 0x18) = *(longlong *)(lVar78 + 0x18) - (ulonglong)uVar77;
            cVar65 = FUN_140118560(param_3,*(undefined8 *)(lVar78 + 0x18),uVar77 - 1);
            if (cVar65 == '\0') {
              if (*(int *)(param_1 + 0x30) != 0) {
                func_0x0001402cba34(L"!HasParseError()",
                                    L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\reader.h"
                                    ,0x3d9);
              }
              *(undefined4 *)(param_1 + 0x30) = 0x10;
              *(longlong *)(param_1 + 0x38) = (longlong)pbVar71 - local_a0;
            }
          }
LAB_140117b62:
          *local_98 = pbVar71;
          local_98[1] = local_a0;
          return;
        }
        pbVar71 = local_a8 + 2;
        iVar69 = 0;
        iVar76 = 0;
        do {
          bVar73 = *pbVar71;
          iVar69 = iVar69 * 0x10 + (int)(char)bVar73;
          if ((byte)(bVar73 - 0x30) < 10) {
            iVar69 = iVar69 + -0x30;
          }
          else if ((byte)(bVar73 + 0xbf) < 6) {
            iVar69 = iVar69 + -0x37;
          }
          else {
            if (5 < (byte)(bVar73 + 0x9f)) {
              *(undefined4 *)(param_1 + 0x30) = 8;
              iVar69 = 0;
              *(longlong *)(param_1 + 0x38) = lVar75;
              break;
            }
            iVar69 = iVar69 + -0x57;
          }
          pbVar71 = pbVar71 + 1;
          iVar76 = iVar76 + 1;
        } while (iVar76 < 4);
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_140117b62;
        if (0x3ff < iVar69 - 0xdc00U) goto LAB_140117a2a;
      }
      func_0x00014004fb90(&local_b8);
      lVar78 = local_b8;
    }
    else {
      pbVar71 = pbVar71 + 2;
      pcVar68 = (char *)func_0x000140049300(lVar78);
      local_b0 = uVar77 + 1;
      *pcVar68 = cVar65;
    }
  } while( true );
}

