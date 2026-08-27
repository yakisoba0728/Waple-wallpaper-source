// Function: FUN_14003ebf0
// Addr: 14003ebf0
// Size: 281 bytes


byte * FUN_14003ebf0(byte *param_1)

{
  uint uVar1;
  ushort uVar2;
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
  byte *pbVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  if ((*param_1 < 0x21) && ((0x100002600U >> ((longlong)(char)*param_1 & 0x3fU) & 1) != 0)) {
    pbVar19 = param_1 + 0x10;
    do {
      param_1 = param_1 + 1;
      if (param_1 == (byte *)((ulonglong)pbVar19 & 0xfffffffffffffff0)) {
        bVar3 = *param_1;
        bVar4 = param_1[1];
        bVar5 = param_1[2];
        bVar6 = param_1[3];
        bVar7 = param_1[4];
        bVar8 = param_1[5];
        bVar9 = param_1[6];
        bVar10 = param_1[7];
        bVar11 = param_1[8];
        bVar12 = param_1[9];
        bVar13 = param_1[10];
        bVar14 = param_1[0xb];
        bVar15 = param_1[0xc];
        bVar16 = param_1[0xd];
        bVar17 = param_1[0xe];
        bVar18 = param_1[0xf];
        auVar24[0] = -(bVar3 == DAT_140475ec0);
        auVar24[1] = -(bVar4 == UNK_140475ec1);
        auVar24[2] = -(bVar5 == UNK_140475ec2);
        auVar24[3] = -(bVar6 == UNK_140475ec3);
        auVar24[4] = -(bVar7 == UNK_140475ec4);
        auVar24[5] = -(bVar8 == UNK_140475ec5);
        auVar24[6] = -(bVar9 == UNK_140475ec6);
        auVar24[7] = -(bVar10 == UNK_140475ec7);
        auVar24[8] = -(bVar11 == UNK_140475ec8);
        auVar24[9] = -(bVar12 == UNK_140475ec9);
        auVar24[10] = -(bVar13 == UNK_140475eca);
        auVar24[0xb] = -(bVar14 == UNK_140475ecb);
        auVar24[0xc] = -(bVar15 == UNK_140475ecc);
        auVar24[0xd] = -(bVar16 == UNK_140475ecd);
        auVar24[0xe] = -(bVar17 == UNK_140475ece);
        auVar24[0xf] = -(bVar18 == UNK_140475ecf);
        auVar20[0] = -(bVar3 == DAT_140475eb0);
        auVar20[1] = -(bVar4 == UNK_140475eb1);
        auVar20[2] = -(bVar5 == UNK_140475eb2);
        auVar20[3] = -(bVar6 == UNK_140475eb3);
        auVar20[4] = -(bVar7 == UNK_140475eb4);
        auVar20[5] = -(bVar8 == UNK_140475eb5);
        auVar20[6] = -(bVar9 == UNK_140475eb6);
        auVar20[7] = -(bVar10 == UNK_140475eb7);
        auVar20[8] = -(bVar11 == UNK_140475eb8);
        auVar20[9] = -(bVar12 == UNK_140475eb9);
        auVar20[10] = -(bVar13 == UNK_140475eba);
        auVar20[0xb] = -(bVar14 == UNK_140475ebb);
        auVar20[0xc] = -(bVar15 == UNK_140475ebc);
        auVar20[0xd] = -(bVar16 == UNK_140475ebd);
        auVar20[0xe] = -(bVar17 == UNK_140475ebe);
        auVar20[0xf] = -(bVar18 == UNK_140475ebf);
        auVar22[0] = -(bVar3 == DAT_140475ed0);
        auVar22[1] = -(bVar4 == UNK_140475ed1);
        auVar22[2] = -(bVar5 == UNK_140475ed2);
        auVar22[3] = -(bVar6 == UNK_140475ed3);
        auVar22[4] = -(bVar7 == UNK_140475ed4);
        auVar22[5] = -(bVar8 == UNK_140475ed5);
        auVar22[6] = -(bVar9 == UNK_140475ed6);
        auVar22[7] = -(bVar10 == UNK_140475ed7);
        auVar22[8] = -(bVar11 == UNK_140475ed8);
        auVar22[9] = -(bVar12 == UNK_140475ed9);
        auVar22[10] = -(bVar13 == UNK_140475eda);
        auVar22[0xb] = -(bVar14 == UNK_140475edb);
        auVar22[0xc] = -(bVar15 == UNK_140475edc);
        auVar22[0xd] = -(bVar16 == UNK_140475edd);
        auVar22[0xe] = -(bVar17 == UNK_140475ede);
        auVar22[0xf] = -(bVar18 == UNK_140475edf);
        auVar25[0] = -(bVar3 == DAT_140475ee0);
        auVar25[1] = -(bVar4 == UNK_140475ee1);
        auVar25[2] = -(bVar5 == UNK_140475ee2);
        auVar25[3] = -(bVar6 == UNK_140475ee3);
        auVar25[4] = -(bVar7 == UNK_140475ee4);
        auVar25[5] = -(bVar8 == UNK_140475ee5);
        auVar25[6] = -(bVar9 == UNK_140475ee6);
        auVar25[7] = -(bVar10 == UNK_140475ee7);
        auVar25[8] = -(bVar11 == UNK_140475ee8);
        auVar25[9] = -(bVar12 == UNK_140475ee9);
        auVar25[10] = -(bVar13 == UNK_140475eea);
        auVar25[0xb] = -(bVar14 == UNK_140475eeb);
        auVar25[0xc] = -(bVar15 == UNK_140475eec);
        auVar25[0xd] = -(bVar16 == UNK_140475eed);
        auVar25[0xe] = -(bVar17 == UNK_140475eee);
        auVar25[0xf] = -(bVar18 == UNK_140475eef);
        auVar25 = auVar24 | auVar20 | auVar22 | auVar25;
        uVar2 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
        while (uVar2 = ~uVar2, uVar2 == 0) {
          bVar3 = param_1[0x10];
          bVar4 = param_1[0x11];
          bVar5 = param_1[0x12];
          bVar6 = param_1[0x13];
          bVar7 = param_1[0x14];
          bVar8 = param_1[0x15];
          bVar9 = param_1[0x16];
          bVar10 = param_1[0x17];
          bVar11 = param_1[0x18];
          bVar12 = param_1[0x19];
          bVar13 = param_1[0x1a];
          bVar14 = param_1[0x1b];
          bVar15 = param_1[0x1c];
          bVar16 = param_1[0x1d];
          bVar17 = param_1[0x1e];
          bVar18 = param_1[0x1f];
          param_1 = param_1 + 0x10;
          auVar26[0] = -(bVar3 == DAT_140475ec0);
          auVar26[1] = -(bVar4 == UNK_140475ec1);
          auVar26[2] = -(bVar5 == UNK_140475ec2);
          auVar26[3] = -(bVar6 == UNK_140475ec3);
          auVar26[4] = -(bVar7 == UNK_140475ec4);
          auVar26[5] = -(bVar8 == UNK_140475ec5);
          auVar26[6] = -(bVar9 == UNK_140475ec6);
          auVar26[7] = -(bVar10 == UNK_140475ec7);
          auVar26[8] = -(bVar11 == UNK_140475ec8);
          auVar26[9] = -(bVar12 == UNK_140475ec9);
          auVar26[10] = -(bVar13 == UNK_140475eca);
          auVar26[0xb] = -(bVar14 == UNK_140475ecb);
          auVar26[0xc] = -(bVar15 == UNK_140475ecc);
          auVar26[0xd] = -(bVar16 == UNK_140475ecd);
          auVar26[0xe] = -(bVar17 == UNK_140475ece);
          auVar26[0xf] = -(bVar18 == UNK_140475ecf);
          auVar21[0] = -(bVar3 == DAT_140475eb0);
          auVar21[1] = -(bVar4 == UNK_140475eb1);
          auVar21[2] = -(bVar5 == UNK_140475eb2);
          auVar21[3] = -(bVar6 == UNK_140475eb3);
          auVar21[4] = -(bVar7 == UNK_140475eb4);
          auVar21[5] = -(bVar8 == UNK_140475eb5);
          auVar21[6] = -(bVar9 == UNK_140475eb6);
          auVar21[7] = -(bVar10 == UNK_140475eb7);
          auVar21[8] = -(bVar11 == UNK_140475eb8);
          auVar21[9] = -(bVar12 == UNK_140475eb9);
          auVar21[10] = -(bVar13 == UNK_140475eba);
          auVar21[0xb] = -(bVar14 == UNK_140475ebb);
          auVar21[0xc] = -(bVar15 == UNK_140475ebc);
          auVar21[0xd] = -(bVar16 == UNK_140475ebd);
          auVar21[0xe] = -(bVar17 == UNK_140475ebe);
          auVar21[0xf] = -(bVar18 == UNK_140475ebf);
          auVar23[0] = -(bVar3 == DAT_140475ed0);
          auVar23[1] = -(bVar4 == UNK_140475ed1);
          auVar23[2] = -(bVar5 == UNK_140475ed2);
          auVar23[3] = -(bVar6 == UNK_140475ed3);
          auVar23[4] = -(bVar7 == UNK_140475ed4);
          auVar23[5] = -(bVar8 == UNK_140475ed5);
          auVar23[6] = -(bVar9 == UNK_140475ed6);
          auVar23[7] = -(bVar10 == UNK_140475ed7);
          auVar23[8] = -(bVar11 == UNK_140475ed8);
          auVar23[9] = -(bVar12 == UNK_140475ed9);
          auVar23[10] = -(bVar13 == UNK_140475eda);
          auVar23[0xb] = -(bVar14 == UNK_140475edb);
          auVar23[0xc] = -(bVar15 == UNK_140475edc);
          auVar23[0xd] = -(bVar16 == UNK_140475edd);
          auVar23[0xe] = -(bVar17 == UNK_140475ede);
          auVar23[0xf] = -(bVar18 == UNK_140475edf);
          auVar27[0] = -(bVar3 == DAT_140475ee0);
          auVar27[1] = -(bVar4 == UNK_140475ee1);
          auVar27[2] = -(bVar5 == UNK_140475ee2);
          auVar27[3] = -(bVar6 == UNK_140475ee3);
          auVar27[4] = -(bVar7 == UNK_140475ee4);
          auVar27[5] = -(bVar8 == UNK_140475ee5);
          auVar27[6] = -(bVar9 == UNK_140475ee6);
          auVar27[7] = -(bVar10 == UNK_140475ee7);
          auVar27[8] = -(bVar11 == UNK_140475ee8);
          auVar27[9] = -(bVar12 == UNK_140475ee9);
          auVar27[10] = -(bVar13 == UNK_140475eea);
          auVar27[0xb] = -(bVar14 == UNK_140475eeb);
          auVar27[0xc] = -(bVar15 == UNK_140475eec);
          auVar27[0xd] = -(bVar16 == UNK_140475eed);
          auVar27[0xe] = -(bVar17 == UNK_140475eee);
          auVar27[0xf] = -(bVar18 == UNK_140475eef);
          auVar27 = auVar26 | auVar21 | auVar23 | auVar27;
          uVar2 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
        }
        uVar1 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        return param_1 + uVar1;
      }
    } while ((*param_1 < 0x21) && ((0x100002600U >> ((longlong)(char)*param_1 & 0x3fU) & 1) != 0));
  }
  return param_1;
}

