// Function: FUN_14004ad80
// Addr: 14004ad80
// Size: 292 bytes


void FUN_14004ad80(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
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
  byte *pbVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  pbVar20 = (byte *)*param_2;
  if ((*pbVar20 < 0x21) && ((0x100002600U >> ((longlong)(char)*pbVar20 & 0x3fU) & 1) != 0)) {
    pbVar1 = pbVar20 + 0x10;
    do {
      pbVar20 = pbVar20 + 1;
      if (pbVar20 == (byte *)((ulonglong)pbVar1 & 0xfffffffffffffff0)) {
        bVar4 = *pbVar20;
        bVar5 = pbVar20[1];
        bVar6 = pbVar20[2];
        bVar7 = pbVar20[3];
        bVar8 = pbVar20[4];
        bVar9 = pbVar20[5];
        bVar10 = pbVar20[6];
        bVar11 = pbVar20[7];
        bVar12 = pbVar20[8];
        bVar13 = pbVar20[9];
        bVar14 = pbVar20[10];
        bVar15 = pbVar20[0xb];
        bVar16 = pbVar20[0xc];
        bVar17 = pbVar20[0xd];
        bVar18 = pbVar20[0xe];
        bVar19 = pbVar20[0xf];
        auVar25[0] = -(bVar4 == DAT_140475ec0);
        auVar25[1] = -(bVar5 == UNK_140475ec1);
        auVar25[2] = -(bVar6 == UNK_140475ec2);
        auVar25[3] = -(bVar7 == UNK_140475ec3);
        auVar25[4] = -(bVar8 == UNK_140475ec4);
        auVar25[5] = -(bVar9 == UNK_140475ec5);
        auVar25[6] = -(bVar10 == UNK_140475ec6);
        auVar25[7] = -(bVar11 == UNK_140475ec7);
        auVar25[8] = -(bVar12 == UNK_140475ec8);
        auVar25[9] = -(bVar13 == UNK_140475ec9);
        auVar25[10] = -(bVar14 == UNK_140475eca);
        auVar25[0xb] = -(bVar15 == UNK_140475ecb);
        auVar25[0xc] = -(bVar16 == UNK_140475ecc);
        auVar25[0xd] = -(bVar17 == UNK_140475ecd);
        auVar25[0xe] = -(bVar18 == UNK_140475ece);
        auVar25[0xf] = -(bVar19 == UNK_140475ecf);
        auVar21[0] = -(bVar4 == DAT_140475eb0);
        auVar21[1] = -(bVar5 == UNK_140475eb1);
        auVar21[2] = -(bVar6 == UNK_140475eb2);
        auVar21[3] = -(bVar7 == UNK_140475eb3);
        auVar21[4] = -(bVar8 == UNK_140475eb4);
        auVar21[5] = -(bVar9 == UNK_140475eb5);
        auVar21[6] = -(bVar10 == UNK_140475eb6);
        auVar21[7] = -(bVar11 == UNK_140475eb7);
        auVar21[8] = -(bVar12 == UNK_140475eb8);
        auVar21[9] = -(bVar13 == UNK_140475eb9);
        auVar21[10] = -(bVar14 == UNK_140475eba);
        auVar21[0xb] = -(bVar15 == UNK_140475ebb);
        auVar21[0xc] = -(bVar16 == UNK_140475ebc);
        auVar21[0xd] = -(bVar17 == UNK_140475ebd);
        auVar21[0xe] = -(bVar18 == UNK_140475ebe);
        auVar21[0xf] = -(bVar19 == UNK_140475ebf);
        auVar23[0] = -(bVar4 == DAT_140475ed0);
        auVar23[1] = -(bVar5 == UNK_140475ed1);
        auVar23[2] = -(bVar6 == UNK_140475ed2);
        auVar23[3] = -(bVar7 == UNK_140475ed3);
        auVar23[4] = -(bVar8 == UNK_140475ed4);
        auVar23[5] = -(bVar9 == UNK_140475ed5);
        auVar23[6] = -(bVar10 == UNK_140475ed6);
        auVar23[7] = -(bVar11 == UNK_140475ed7);
        auVar23[8] = -(bVar12 == UNK_140475ed8);
        auVar23[9] = -(bVar13 == UNK_140475ed9);
        auVar23[10] = -(bVar14 == UNK_140475eda);
        auVar23[0xb] = -(bVar15 == UNK_140475edb);
        auVar23[0xc] = -(bVar16 == UNK_140475edc);
        auVar23[0xd] = -(bVar17 == UNK_140475edd);
        auVar23[0xe] = -(bVar18 == UNK_140475ede);
        auVar23[0xf] = -(bVar19 == UNK_140475edf);
        auVar26[0] = -(bVar4 == DAT_140475ee0);
        auVar26[1] = -(bVar5 == UNK_140475ee1);
        auVar26[2] = -(bVar6 == UNK_140475ee2);
        auVar26[3] = -(bVar7 == UNK_140475ee3);
        auVar26[4] = -(bVar8 == UNK_140475ee4);
        auVar26[5] = -(bVar9 == UNK_140475ee5);
        auVar26[6] = -(bVar10 == UNK_140475ee6);
        auVar26[7] = -(bVar11 == UNK_140475ee7);
        auVar26[8] = -(bVar12 == UNK_140475ee8);
        auVar26[9] = -(bVar13 == UNK_140475ee9);
        auVar26[10] = -(bVar14 == UNK_140475eea);
        auVar26[0xb] = -(bVar15 == UNK_140475eeb);
        auVar26[0xc] = -(bVar16 == UNK_140475eec);
        auVar26[0xd] = -(bVar17 == UNK_140475eed);
        auVar26[0xe] = -(bVar18 == UNK_140475eee);
        auVar26[0xf] = -(bVar19 == UNK_140475eef);
        auVar26 = auVar25 | auVar21 | auVar23 | auVar26;
        uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
        while (uVar3 = ~uVar3, uVar3 == 0) {
          bVar4 = pbVar20[0x10];
          bVar5 = pbVar20[0x11];
          bVar6 = pbVar20[0x12];
          bVar7 = pbVar20[0x13];
          bVar8 = pbVar20[0x14];
          bVar9 = pbVar20[0x15];
          bVar10 = pbVar20[0x16];
          bVar11 = pbVar20[0x17];
          bVar12 = pbVar20[0x18];
          bVar13 = pbVar20[0x19];
          bVar14 = pbVar20[0x1a];
          bVar15 = pbVar20[0x1b];
          bVar16 = pbVar20[0x1c];
          bVar17 = pbVar20[0x1d];
          bVar18 = pbVar20[0x1e];
          bVar19 = pbVar20[0x1f];
          pbVar20 = pbVar20 + 0x10;
          auVar27[0] = -(bVar4 == DAT_140475ec0);
          auVar27[1] = -(bVar5 == UNK_140475ec1);
          auVar27[2] = -(bVar6 == UNK_140475ec2);
          auVar27[3] = -(bVar7 == UNK_140475ec3);
          auVar27[4] = -(bVar8 == UNK_140475ec4);
          auVar27[5] = -(bVar9 == UNK_140475ec5);
          auVar27[6] = -(bVar10 == UNK_140475ec6);
          auVar27[7] = -(bVar11 == UNK_140475ec7);
          auVar27[8] = -(bVar12 == UNK_140475ec8);
          auVar27[9] = -(bVar13 == UNK_140475ec9);
          auVar27[10] = -(bVar14 == UNK_140475eca);
          auVar27[0xb] = -(bVar15 == UNK_140475ecb);
          auVar27[0xc] = -(bVar16 == UNK_140475ecc);
          auVar27[0xd] = -(bVar17 == UNK_140475ecd);
          auVar27[0xe] = -(bVar18 == UNK_140475ece);
          auVar27[0xf] = -(bVar19 == UNK_140475ecf);
          auVar22[0] = -(bVar4 == DAT_140475eb0);
          auVar22[1] = -(bVar5 == UNK_140475eb1);
          auVar22[2] = -(bVar6 == UNK_140475eb2);
          auVar22[3] = -(bVar7 == UNK_140475eb3);
          auVar22[4] = -(bVar8 == UNK_140475eb4);
          auVar22[5] = -(bVar9 == UNK_140475eb5);
          auVar22[6] = -(bVar10 == UNK_140475eb6);
          auVar22[7] = -(bVar11 == UNK_140475eb7);
          auVar22[8] = -(bVar12 == UNK_140475eb8);
          auVar22[9] = -(bVar13 == UNK_140475eb9);
          auVar22[10] = -(bVar14 == UNK_140475eba);
          auVar22[0xb] = -(bVar15 == UNK_140475ebb);
          auVar22[0xc] = -(bVar16 == UNK_140475ebc);
          auVar22[0xd] = -(bVar17 == UNK_140475ebd);
          auVar22[0xe] = -(bVar18 == UNK_140475ebe);
          auVar22[0xf] = -(bVar19 == UNK_140475ebf);
          auVar24[0] = -(bVar4 == DAT_140475ed0);
          auVar24[1] = -(bVar5 == UNK_140475ed1);
          auVar24[2] = -(bVar6 == UNK_140475ed2);
          auVar24[3] = -(bVar7 == UNK_140475ed3);
          auVar24[4] = -(bVar8 == UNK_140475ed4);
          auVar24[5] = -(bVar9 == UNK_140475ed5);
          auVar24[6] = -(bVar10 == UNK_140475ed6);
          auVar24[7] = -(bVar11 == UNK_140475ed7);
          auVar24[8] = -(bVar12 == UNK_140475ed8);
          auVar24[9] = -(bVar13 == UNK_140475ed9);
          auVar24[10] = -(bVar14 == UNK_140475eda);
          auVar24[0xb] = -(bVar15 == UNK_140475edb);
          auVar24[0xc] = -(bVar16 == UNK_140475edc);
          auVar24[0xd] = -(bVar17 == UNK_140475edd);
          auVar24[0xe] = -(bVar18 == UNK_140475ede);
          auVar24[0xf] = -(bVar19 == UNK_140475edf);
          auVar28[0] = -(bVar4 == DAT_140475ee0);
          auVar28[1] = -(bVar5 == UNK_140475ee1);
          auVar28[2] = -(bVar6 == UNK_140475ee2);
          auVar28[3] = -(bVar7 == UNK_140475ee3);
          auVar28[4] = -(bVar8 == UNK_140475ee4);
          auVar28[5] = -(bVar9 == UNK_140475ee5);
          auVar28[6] = -(bVar10 == UNK_140475ee6);
          auVar28[7] = -(bVar11 == UNK_140475ee7);
          auVar28[8] = -(bVar12 == UNK_140475ee8);
          auVar28[9] = -(bVar13 == UNK_140475ee9);
          auVar28[10] = -(bVar14 == UNK_140475eea);
          auVar28[0xb] = -(bVar15 == UNK_140475eeb);
          auVar28[0xc] = -(bVar16 == UNK_140475eec);
          auVar28[0xd] = -(bVar17 == UNK_140475eed);
          auVar28[0xe] = -(bVar18 == UNK_140475eee);
          auVar28[0xf] = -(bVar19 == UNK_140475eef);
          auVar28 = auVar27 | auVar22 | auVar24 | auVar28;
          uVar3 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
        }
        uVar2 = 0;
        if (uVar3 != 0) {
          for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        *param_2 = pbVar20 + uVar2;
        return;
      }
    } while ((*pbVar20 < 0x21) && ((0x100002600U >> ((longlong)(char)*pbVar20 & 0x3fU) & 1) != 0));
    *param_2 = pbVar20;
    return;
  }
  *param_2 = pbVar20;
  return;
}

